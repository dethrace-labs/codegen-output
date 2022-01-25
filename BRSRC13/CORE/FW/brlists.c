#include "brlists.h"


// Offset: 10
// Size: 0x3c
//IDA: void __cdecl BrNewList(br_list *list)
void BrNewList(br_list *list) {
    LOG_TRACE("(%p)", list);
    NOT_IMPLEMENTED();
}

// Offset: 80
// Size: 0x44
//IDA: void __cdecl BrAddHead(br_list *list, br_node *node)
void BrAddHead(br_list *list, br_node *node) {
    LOG_TRACE("(%p, %p)", list, node);
    NOT_IMPLEMENTED();
}

// Offset: 158
// Size: 0x49
//IDA: void __cdecl BrAddTail(br_list *list, br_node *node)
void BrAddTail(br_list *list, br_node *node) {
    LOG_TRACE("(%p, %p)", list, node);
    NOT_IMPLEMENTED();
}

// Offset: 241
// Size: 0x4d
//IDA: br_node* __cdecl BrRemHead(br_list *list)
br_node* BrRemHead(br_list *list) {
    br_node *n;
    LOG_TRACE("(%p)", list);
    NOT_IMPLEMENTED();
}

// Offset: 328
// Size: 0x4d
//IDA: br_node* __cdecl BrRemTail(br_list *list)
br_node* BrRemTail(br_list *list) {
    br_node *n;
    LOG_TRACE("(%p)", list);
    NOT_IMPLEMENTED();
}

// Offset: 414
// Size: 0x44
//IDA: void __cdecl BrInsert(br_list *list, br_node *here, br_node *node)
void BrInsert(br_list *list, br_node *here, br_node *node) {
    LOG_TRACE("(%p, %p, %p)", list, here, node);
    NOT_IMPLEMENTED();
}

// Offset: 491
// Size: 0x42
//IDA: br_node* __cdecl BrRemove(br_node *node)
br_node* BrRemove(br_node *node) {
    LOG_TRACE("(%p)", node);
    NOT_IMPLEMENTED();
}

// Offset: 573
// Size: 0x27
//IDA: void __cdecl BrSimpleNewList(br_simple_list *list)
void BrSimpleNewList(br_simple_list *list) {
    LOG_TRACE("(%p)", list);
    NOT_IMPLEMENTED();
}

// Offset: 628
// Size: 0x4c
//IDA: void __cdecl BrSimpleAddHead(br_simple_list *list, br_simple_node *node)
void BrSimpleAddHead(br_simple_list *list, br_simple_node *node) {
    LOG_TRACE("(%p, %p)", list, node);
    NOT_IMPLEMENTED();
}

// Offset: 720
// Size: 0x41
//IDA: br_simple_node* __cdecl BrSimpleRemHead(br_simple_list *list)
br_simple_node* BrSimpleRemHead(br_simple_list *list) {
    br_simple_node *node;
    LOG_TRACE("(%p)", list);
    NOT_IMPLEMENTED();
}

// Offset: 800
// Size: 0x4c
//IDA: void __cdecl BrSimpleInsert(br_simple_list *list, br_simple_node *here, br_simple_node *node)
void BrSimpleInsert(br_simple_list *list, br_simple_node *here, br_simple_node *node) {
    LOG_TRACE("(%p, %p, %p)", list, here, node);
    NOT_IMPLEMENTED();
}

// Offset: 891
// Size: 0x5d
//IDA: br_simple_node* __cdecl BrSimpleRemove(br_simple_node *node)
br_simple_node* BrSimpleRemove(br_simple_node *node) {
    LOG_TRACE("(%p)", node);
    NOT_IMPLEMENTED();
}

