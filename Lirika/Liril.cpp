#include "Lirika.h"
#include "Arduino.h"

String meril(String word)
{
  word.replace("0", String(char(0x30)));
  word.replace("1", String(char(0x31)));
  word.replace("2", String(char(0x32)));
  word.replace("3", String(char(0x33)));
  word.replace("4", String(char(0x34)));
  word.replace("5", String(char(0x35)));
  word.replace("6", String(char(0x36)));
  word.replace("7", String(char(0x37)));
  word.replace("8", String(char(0x38)));
  word.replace("9", String(char(0x39)));
  word.replace("@", String(char(0x40)));
  word.replace("A", String(char(0x41)));
  word.replace("B", String(char(0x42)));
  word.replace("C", String(char(0x43)));
  word.replace("D", String(char(0x44)));
  word.replace("E", String(char(0x45)));
  word.replace("F", String(char(0x46)));
  word.replace("G", String(char(0x47)));
  word.replace("H", String(char(0x48)));
  word.replace("I", String(char(0x49)));
  word.replace("J", String(char(0x4A)));
  word.replace("K", String(char(0x4B)));
  word.replace("L", String(char(0x4C)));
  word.replace("M", String(char(0x4D)));
  word.replace("N", String(char(0x4E)));
  word.replace("O", String(char(0x4F)));
  word.replace("P", String(char(0x52)));
  word.replace("Q", String(char(0x51)));
  word.replace("R", String(char(0x52)));
  word.replace("S", String(char(0x53)));
  word.replace("T", String(char(0x54)));
  word.replace("U", String(char(0x55)));
  word.replace("V", String(char(0x56)));
  word.replace("W", String(char(0x57)));
  word.replace("X", String(char(0x58)));
  word.replace("Y", String(char(0x59)));
  word.replace("Z", String(char(0x5A)));
  word.replace("a", String(char(0x61)));
  word.replace("b", String(char(0x62)));
  word.replace("c", String(char(0x63)));
  word.replace("d", String(char(0x64)));
  word.replace("e", String(char(0x65)));
  word.replace("f", String(char(0x66)));
  word.replace("j", String(char(0x67)));
  word.replace("h", String(char(0x68)));
  word.replace("i", String(char(0x69)));
  word.replace("j", String(char(0x6A)));
  word.replace("k", String(char(0x6B)));
  word.replace("l", String(char(0x6C)));
  word.replace("m", String(char(0x6D)));
  word.replace("n", String(char(0x6E)));
  word.replace("o", String(char(0x6F)));
  word.replace("p", String(char(0x70)));
  word.replace("q", String(char(0x71)));
  word.replace("r", String(char(0x72)));
  word.replace("s", String(char(0x73)));
  word.replace("t", String(char(0x74)));
  word.replace("u", String(char(0x75)));
  word.replace("v", String(char(0x76)));
  word.replace("w", String(char(0x77)));
  word.replace("x", String(char(0x78)));
  word.replace("y", String(char(0x79)));
  word.replace("z", String(char(0x7A)));
  word.replace("А", String(char(0x41)));
  word.replace("а", String(char(0x61)));
  word.replace("Б", String(char(0xA0)));
  word.replace("б", String(char(0xB2)));
  word.replace("В", String(char(0x42)));
  word.replace("в", String(char(0xB3)));
  word.replace("Г", String(char(0xA1)));
  word.replace("г", String(char(0xB4)));
  word.replace("Д", String(char(0xE0)));
  word.replace("д", String(char(0xE3)));
  word.replace("Е", String(char(0x45)));
  word.replace("е", String(char(0x65)));
  word.replace("ё", String(char(0xA2)));
  word.replace("Ж", String(char(0xA3)));
  word.replace("ж", String(char(0xB6)));
  word.replace("З", String(char(0xA4)));
  word.replace("з", String(char(0xB7)));
  word.replace("И", String(char(0xA5)));
  word.replace("и", String(char(0xB8)));
  word.replace("й", String(char(0xA6)));
  word.replace("К", String(char(0x4B)));
  word.replace("к", String(char(0xBA)));
  word.replace("Л", String(char(0xA7)));
  word.replace("л", String(char(0xBB)));
  word.replace("М", String(char(0x4D)));
  word.replace("м", String(char(0xBC)));
  word.replace("Н", String(char(0x48)));
  word.replace("н", String(char(0xBD)));
  word.replace("О", String(char(0x4F)));
  word.replace("о", String(char(0x6F)));
  word.replace("П", String(char(0xA8)));
  word.replace("п", String(char(0xBE)));
  word.replace("Р", String(char(0x50)));
  word.replace("р", String(char(0x70)));
  word.replace("С", String(char(0x43)));
  word.replace("с", String(char(0x63)));
  word.replace("Т", String(char(0x54)));
  word.replace("т", String(char(0xBF)));
  word.replace("У", String(char(0xA9)));
  word.replace("у", String(char(0x79)));
  word.replace("Ф", String(char(0xAA)));
  word.replace("ф", String(char(0x5C)));
  word.replace("Х", String(char(0x58)));
  word.replace("х", String(char(0x78)));
  word.replace("Ц", String(char(0xE1)));
  word.replace("ц", String(char(0xE5)));
  word.replace("Ч", String(char(0xAB)));
  word.replace("ч", String(char(0xC0)));
  word.replace("Ш", String(char(0xAC)));
  word.replace("ш", String(char(0xC1)));
  word.replace("Щ", String(char(0xE2)));
  word.replace("щ", String(char(0xE6)));
  word.replace("ь", String(char(0xC4)));
  word.replace("ъ", String(char(0xAD)));
  word.replace("Э", String(char(0xAF)));
  word.replace("э", String(char(0xC5)));
  word.replace("Ю", String(char(0xB0)));
  word.replace("ю", String(char(0xC6)));
  word.replace("Я", String(char(0xB1)));
  word.replace("я", String(char(0xC7)));
  word.replace("Ы", String(char(0xAE)));
  word.replace("ы", String(char(0xC3)));
  return word;
}
