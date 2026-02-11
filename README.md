# Procedurinis

Branch panaudojimo pavyzdys

## Čia nuorodos į įvairias mano projekto dalys

* [1 dalis](https://github.com/KamGytis/Procedurinis/tree/1-dalis)
* [2 dalis](https://github.com/KamGytis/Procedurinis/tree/2-dalis)
* [3 dalis](https://github.com/KamGytis/Procedurinis/tree/3-dalis)
* [4 dalis](https://github.com/KamGytis/Procedurinis/tree/4-dalis)
* [5 dalis](https://github.com/KamGytis/Procedurinis/tree/5-dalis)

Formulių įdejimo seka:

1. Atverkite [puslapį](https://codecogs.com/latex/eqneditor.php).
2. Surinkite reikiamą formulę.
3. Iškveskite ant paveiksliuko kontekstinį meniu ir pasirinkite kopijuoti paveiksliuko nuorodą.
4. MD faile naudojame paveiksliukų įdėjimo sintaksę `![1p](2p)`
   * 1p - paveiksliuko užvadinimas.
   * 2p - nukopijuota nuoroda.

Pvz.:
![Formula 1](https://latex.codecogs.com/gif.latex?Y%3D%5Csum_%7B1%7D%5E%7B100%7D%28x%5E%7B2%7D-1%29-%5Csqrt%5B3%5D%7Bx+1%7D)

Pvz. 2:
![Formula 2](https://latex.codecogs.com/png.image?%5Cinline&space;%5Clarge&space;%5Cdpi%7B200%7Da=%5Csqrt%7Bb%5E%7B2%7D+c%5E%7B2%7D%7D)

![Formula 3](https://latex.codecogs.com/png.image?%5Clarge&space;%5Cdpi%7B100%7Dx=128%5Csum_%7B0%7D%5E%7Bn%7D125%5Ctfrac%7Ba+b%7D%7Bi%7D)

Komentaras md failuose

```
[//]: <(  )>
```
Pvz.:
```
[//]: <(Y=\sum_{1}^{100}(x^{2}-1)-\sqrt[3]{x+1})>
```

Matlab kodo pvz.:

```matlab
function f = fact(n)
    f = prod(1:n);
end
```

C# kodo pvz.:

```csharp
using System;

namespace HelloWorldApplication {
   class HelloWorld {
      static void Main(string[] args) {
         /* my first program in C# */
         Console.WriteLine("Hello World");
         Console.ReadKey();
      }
   }
}
```