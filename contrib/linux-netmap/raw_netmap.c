#include<stdio.h>
#include<stdlib.h>
#define NETMAP_WITH_LIBS
#include<net/netmap_user>

#include"raw.h"

struct raw_netmap_priv {
	struct nm_desc *nm_desc;
};

static int 
raw_netmap_open (struct rawdev *dev) {
	struct raw_netmap_priv *priv;


	priv = malloc(sizeof(struct raw_netmap_priv));
	if (!priv) {
		fprintf(stderr, "malloc: failure\n");
	}
	priv->nm_desc
}
