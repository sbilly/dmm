/*
*
* Copyright (c) 2018 Huawei Technologies Co.,Ltd.
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at:
*
*     http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*/

#ifndef __NSTACK_RD_MNG_H
#define __NSTACK_RD_MNG_H
#include <stdlib.h>
#include "nstack_rd_data.h"

int nstack_rd_mng_int (int flag);
int nstack_rd_ip_node_insert (char *name, rd_ip_data * data);
int nstack_rd_ip_node_delete (rd_ip_data * data);
int nstack_rd_ip_get (rd_route_data ** data, int *num);

#endif
