/*
 * CTU/PillScope project
 * Author: Jakub Parez <parez.jakub@gmail.com>
 */

#ifndef INC_CNTR_H_
#define INC_CNTR_H_

typedef struct
{
    uint16_t data[PS_CNTR_BUFF_SZ];
    uint8_t enabled;
    float freq;
    uint32_t ovf;
}cntr_data_t;

void cntr_init(cntr_data_t* self);
void cntr_enable(cntr_data_t* self, uint8_t enable);
float cntr_read(cntr_data_t* self);

#endif /* INC_CNTR_H_ */