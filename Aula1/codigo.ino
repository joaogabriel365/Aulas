const int botao = 5;
const int ledL = 3;
const int ledV = 4;

void setup()
{
  pinMode(ledL, OUTPUT);
  pinMode(ledV, OUTPUT);
  pinMode(botao, INPUT);
}

int var;

void loop()
{
  var = digitalRead(botao);
  if(var)
    digitalWrite(ledL, HIGH);
}
