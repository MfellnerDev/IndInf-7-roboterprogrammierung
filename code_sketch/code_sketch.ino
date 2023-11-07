
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
    // Read the NFC chip and print the first character
    char firstCharacter = readCard();
    Serial.print("Cube Number: ");
    Serial.println(firstCharacter);
   
    // Write a number to the card, comment this out after init!
    writeCard("1");
  }
}


/**
 * Read from the NFC chip and return the first character as a char
 */
char readCard() {
  byte data[16];
  byte dataSize = sizeof(data);
  if (mfrc522.MIFARE_Read(4, data, &dataSize)) {
    if (dataSize > 0) {
      return (char)data[0];
    } else {
      return ' ';
    }
  } else {
    return 'R';
  }
}


/**
 * Write a string to the NFC card (convert it to bytes first)
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
