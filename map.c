#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


#include "map.h"

typedef struct node node;//------------------------------------------------------------------------------------------------
typedef struct node* Node;//------------------------------------------------------------------------------------------------



struct node
{
    MapDataElement data;
    MapKeyElement key;
    Node next;
};


struct Map_t
{
    Node Head;
    copyMapDataElements copyDataElement;
    copyMapKeyElements copyKeyElement;
    freeMapDataElements freeDataElement;
    freeMapKeyElements freeKeyElement;
    compareMapKeyElements compareKeyElements;
    Node iterator;
};


Map mapCreate(copyMapDataElements copyDataElement,
              copyMapKeyElements copyKeyElement,
              freeMapDataElements freeDataElement,
              freeMapKeyElements freeKeyElement,
              compareMapKeyElements compareKeyElements)
{
 if( copyDataElement==NULL || copyKeyElement==NULL || freeDataElement==NULL || freeKeyElement==NULL || compareKeyElements==NULL)
 {
     return NULL;
 }
 Map NewMap = malloc(sizeof(*NewMap));
 if (NewMap==NULL)
 {
     free(NewMap);
     return NULL;
 }

 NewMap->Head=NULL;
 NewMap->copyDataElement=copyDataElement;
 NewMap->copyKeyElement=copyKeyElement;
 NewMap->freeDataElement=freeDataElement;
 NewMap->freeKeyElement=freeKeyElement;
 NewMap->compareKeyElements=compareKeyElements;
 NewMap->iterator=NewMap->Head;//-----------------------------------------------------------------------------------------------------------

 return NewMap;
}

//static function for clean all the nodes
static void destroyNode(node element)
{
    element->data=NULL;
    element->key=NULL;
}


void mapDestroy(Map map)
{
if(map==NULL)
{
    return NULL //--------------------------------------------------------------------------------------------------------
}
    map->copyDataElement=
}



void mapDestroy(Map map);//d
Map mapCopy(Map map);//a
int mapGetSize(Map map);//d
bool mapContains(Map map, MapKeyElement element);//a
MapResult mapPut(Map map, MapKeyElement keyElement, MapDataElement dataElement);//d
MapDataElement mapGet(Map map, MapKeyElement keyElement);//a
MapResult mapRemove(Map map, MapKeyElement keyElement);//d
MapKeyElement mapGetFirst(Map map);//a
MapKeyElement mapGetNext(Map map);//d
MapResult mapClear(Map map);//a

