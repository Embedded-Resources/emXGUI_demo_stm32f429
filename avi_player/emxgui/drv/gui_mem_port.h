#ifndef  __GUI_MEM_PORT_H__
#define  __GUI_MEM_PORT_H__

#ifdef __cplusplus
extern "C" {
#endif  
 
#include	"gui_drv_cfg.h"
  

void GUI_VMEM_Init(void);
void* GUI_VMEM_Alloc(u32 size);
void GUI_VMEM_Free(void *p);

void	GUI_MEM_Init(void);
void*	GUI_MEM_Alloc(U32 size);
void	GUI_MEM_Free(void *p);

void*	GUI_GRAM_Alloc(U32 size);
void	GUI_GRAM_Free(void *p);
  
   
void GUI_JPGMEM_Init(void);   
void GUI_JPGMEM_Free(void *p);
void* GUI_JPGMEM_Alloc(u32 size);
#ifdef __cplusplus
}
#endif  
#endif /* end of __GUI_MEM_PORT_H__ */
