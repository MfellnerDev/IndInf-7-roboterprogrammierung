#include <SPI.h>
#include <MFRC522.h>

#define SS_PIN 10
#define RST_PIN 9

MFRC522 mfrc522(SS_PIN, RST_PIN);

void setup() {
  Serial.begin(9600);
  SPI.begin();
  mfrc522.PCD_Init();
}

void loop() {
  if (mfrc522.PICC_IsNewCardPresent() && mfrc522.PICC_ReadCardSerial()) {
    // read the nfc chip and print the cube number
    String cubeNumber = readCard();
    Serial.println("Cube number: " + cubeNumber);
    
    // Write a number to the card
    writeCard("1");
  }
}

/**
 * Read from the NFC chip and return the value as a string
 */
String readCard() {
  byte buffer[18];
  byte size = sizeof(buffer);

  if (mfrc522.MIFARE_Read(4, buffer, &size)) {
    String cardContent = "";
    for (int i = 0; i < 16; i++) {
      cardContent += (char)buffer[i];
    }
    return cardContent;
  } else {
    return "Read failed";
  }
}

/**
 * Write a string to the nfc card (convert it to byte first)
 */
void writeCard(String cubeNumber) {
  byte data[16];
  cubeNumber.getBytes(data, 16);
  if (mfrc522.MIFARE_Write(4, data, 16)) {
    Serial.println("Write success");
  } else {
    Serial.println("Write failed");
  }
  mfrc522.PICC_HaltA();
  mfrc522.PCD_StopCrypto1();
}

