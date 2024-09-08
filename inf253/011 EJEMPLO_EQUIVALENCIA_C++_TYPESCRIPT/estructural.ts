  interface Persona {
    edad: number;
    nombre: string;
  }
  
  interface Humano {
    edad: number;
    nombre: string;
  }
  
  let p: Persona = { edad: 18, nombre: "pepito" };
  let h: Humano = { edad: 18, nombre: "pepito" };
  
  if (p = h)
  {
      console.log(p);
  }