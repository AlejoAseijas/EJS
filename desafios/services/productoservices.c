#include "../models/producto.h"
#define MAX_PRODUCTOS 100

int cantidad_productos = 0;

Producto productosDB[MAX_PRODUCTOS];

void agregarNuevoProducto()
{

    Producto nuevoProducto;
    nuevoProducto.id = cantidad_productos++;
    printf("Nombre: ");
    scanf("%s", nuevoProducto.nombre);
    printf("Descripcion: ");
    scanf("%s", nuevoProducto.descripcion);
    printf("Precio: ");
    scanf("%f", &nuevoProducto.precio);
    printf("Stock: ");
    scanf("%d", &nuevoProducto.stock);
}

void modificarProducto(int id)
{
}

void eliminarProducto() {}

void mostrarProductos() {}

void realizarVenta() {}

void generarInformeVentas() {}
