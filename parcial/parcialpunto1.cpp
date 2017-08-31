/*
NOMBRE:Proovedores
AUTOR:Luis Sebastian Urbano Luna-
FECHA:30/08/2017
RESUMEN:
*/

//Librerias
#include <stdio.h>
#include <stdlib.h>

//estructuras
struct producto{
	int cantidadVenta;
	int precioUnitario;
	int importe;
}int *p_producto = &producto;

struct proveedores{
	char nombre[30];
	int telefono;
	int direccion;
}productos,proveedores[100]; int *p_proveedor = proveedor;


int main(){

	int Mayor;
	int valorProducto;
	int l;
	
	printf("Ingrese el total de proveedores: ");
	scanf("%d",&l);
	fflush(stdin);
	
	for(int i=0; i<=l; i++){
		printf("-----Ingrese Datos del Proveedor-----\n");
		printf("Ingrese Nombre del proveedor: ");
		fgets((p_proveedor+i)->nombre,30,stdin);
		printf("\nIngrese Telefono del proveedor: ");
		scanf("%d",& (p_proveedor+i)->.telefono);
		printf("\nIngrese direccion del proveedor: ");
		scanf("carrera %d",& (p_proveedor+i)->direccion);
		printf("\nIngrese la cantidad vendida del proveedor: ");
		scanf("%d",& *(p_producto+i)->cantidadVenta);
		printf("\nIngrese el valor unitario del producto: ");
		scanf("%d",&(p_producto+i)->precioUnitario);
		fflush(stdin);
		
		p_producto+i->importe = (((p_producto+i)->cantidadVenta)*((p_producto+i)->precioUnitario));
		
		if(((p_producto+i)->importe)>Mayor){
			Mayor = (p_producto+i)->importe;
			(p_producto+i)->importe = valorProducto; 
			
			
			printf("---DATOS DEL PROVEEDOR MAS CARO---\n");
			printf("Nombre del proveedor: %s",(proveedor+valorProducto)->nombre);
			printf("\nTelefono del proveedor: %d",(proveedor+valorProducto)->telefono);
			printf("\nDireccion del proveedor: %d ",(proveedor+valorProducto)->direccion);
			printf("El importe Total de la Compra es: %d",(producto+valorProducto)->importe);
			
			}else{
				
			printf("---DATOS DEL PROVEEDOR MAS BARATO---\n");
			printf("Nombre del proveedor: %s",(proveedor+valorProducto)->nombre);
			printf("\nTelefono del proveedor: %d",(proveedor+valorProducto)->telefono);
			printf("\nDireccion del proveedor: %d ",(proveedor+valorProducto)->direccion);
			printf("El importe Total de la Compra es: %d",(producto+valorProducto)->importe);		
		} 	
	}
	
	return 0;
}
