/*
document.write("<h1>hola sapa hp</h1>");
 Tipos de datos 

Formas de escribir un string:
'Sapa hp' string 
"perro hp" string

boolean
true
false

array = arreglo

["joe","marta","sara"]
[1,2,3,4]
[true, false, true, false]
Forma de crear listas




console.log("Hola andrey");
var numero=17;
console.log(numero);
var miVariable ="ortiz";//podemos escribir la palabra dentro del parentesis o sin el, siempre añadiendo las comillas.
console.log(miVariable);
console.log("mi edad "+numero +" mi apellido  " + miVariable);
let nombre = "ortiz"
console.log(nombre)

//condicionales 
var numero = 6;
let Nombre = "andrey"
if(numero == 5 || Nombre =="andrey"){
    console.log("el valor es 5 y mi nombre es andrey")
}else {
    console.log("el valor no corresponde y el nombre tampoco")
} 

//Practica 
var opcion = -1
if(opcion > 0){
console.log("El numero es positivo")
}else if (opcion == 0){
    console.log("El numero es cero")
}else{console.log("El numero es negativo")}

//Bucles
var Numero = 1
while(Numero <=  6){
    console.log("Hola "+Numero)
    Numero = Numero + 1
}
console.log("Dias")
for(var dato = 0; dato <= 10; dato = dato +1){
    console.log("dia numero "+dato)
}

function hola(Nombre,Numero){
    console.log("nombre "+Nombre)
    console.log("turno "+Numero)
}

hola("andrey",3)

function suma(num1,num2){
    let resultado = num1 + num2
    return resultado
}
console.log(suma(2,5))

let lista = ["gonzalo", "andrey", "portela", "ortiz"]
for(i=0; i < 4; i++){
    console.log(`el dato es:${i}`)
    let ver = lista[i]
    console.log(ver)
}
*/
var nombre = "andrey";
var edad = 16
var apellido = "ortiz"
var estatura = 1.67;

console.log("nombre "+ nombre, "edad "+ edad);
console.log("apellido "+ apellido, "estatura "+ estatura +" "+ typeof apellido + " " + typeof estatura)
console.log("nombre "+ nombre + " " + typeof nombre)
console.log(edad +" "+ typeof edad)

//alert("Aviso de inicio " + nombre)
