#include <stdio.h>
#include <pthread.h>

int contador;
//Estructura necesaria para acceso excluyente
pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER;
void* AtenderCliente(void* socket)
{
	int sock_conn;
	@@ - 43, 7 + 48, 7 @@ void* AtenderCliente(void* socket)
		// Ya tenemos el c?digo de la petici?n
		char nombre[20];

	if (codigo != 0)
		if ((codigo != 0) && (codigo != 4))
		{
			p = strtok(NULL, "/");

			@@ - 54, 6 + 59, 8 @@ void* AtenderCliente(void* socket)

				if (codigo == 0) //petici?n de desconexi?n
					terminar = 1;
				else if (codigo == 4)
					sprintf(respuesta, "%d", contador);
				else if (codigo == 1) //piden la longitd del nombre
					sprintf(respuesta, "%d", strlen(nombre));
				else if (codigo == 2)
					@@ - 79, 10 + 86, 17 @@ void* AtenderCliente(void* socket)
					// Enviamos respuesta
					write(sock_conn, respuesta, strlen(respuesta));
		}
	if ((codigo == 1) || (codigo == 2) || (codigo == 3))
	{
		pthread_mutex_lock(&mutex); //No me interrumpas ahora
		contador = contador + 1;
		pthread_mutex_unlock(&mutex); //ya puedes interrumpirme
	}

}
// Se acabo el servicio para este cliente
close(sock_conn);

}


@@ - 113, 6 + 127, 7 @@ int main(int argc, char* argv[])
if (listen(sock_listen, 3) < 0)
	printf("Error en el Listen");

contador = 0;
int i;
int sockets[100];
pthread_t thread;
@@ - 133, 7 + 148, 6 @@ int main(int argc, char* argv[])
i = i + 1;

	}



}