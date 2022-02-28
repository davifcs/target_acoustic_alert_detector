/**
  ******************************************************************************
  * @file    network.c
  * @author  AST Embedded Analytics Research Platform
  * @date    Sat Feb 26 21:32:03 2022
  * @brief   AI Tool Automatic Code Generator for Embedded NN computing
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2017 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  ******************************************************************************
  */


#include "network.h"
#include "network_data.h"

#include "ai_platform.h"
#include "ai_platform_interface.h"
#include "ai_math_helpers.h"

#include "core_common.h"
#include "core_convert.h"

#include "layers.h"




#undef AI_NET_OBJ_INSTANCE
#define AI_NET_OBJ_INSTANCE g_network
 
#undef AI_NETWORK_MODEL_SIGNATURE
#define AI_NETWORK_MODEL_SIGNATURE     "f139ff52a30a5ffda5cd3dd7117262e1"

#ifndef AI_TOOLS_REVISION_ID
#define AI_TOOLS_REVISION_ID     ""
#endif

#undef AI_TOOLS_DATE_TIME
#define AI_TOOLS_DATE_TIME   "Sat Feb 26 21:32:03 2022"

#undef AI_TOOLS_COMPILE_TIME
#define AI_TOOLS_COMPILE_TIME    __DATE__ " " __TIME__

#undef AI_NETWORK_N_BATCHES
#define AI_NETWORK_N_BATCHES         (1)




/**  Array declarations section  **********************************************/
/* Array#0 */
AI_ARRAY_OBJ_DECLARE(
  input_output_array, AI_ARRAY_FORMAT_FLOAT|AI_FMT_FLAG_IS_IO,
  NULL, NULL, 810, AI_STATIC)

/* Array#1 */
AI_ARRAY_OBJ_DECLARE(
  node_17_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 11200, AI_STATIC)

/* Array#2 */
AI_ARRAY_OBJ_DECLARE(
  node_18_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 9568, AI_STATIC)

/* Array#3 */
AI_ARRAY_OBJ_DECLARE(
  node_20_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 16128, AI_STATIC)

/* Array#4 */
AI_ARRAY_OBJ_DECLARE(
  node_21_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 3168, AI_STATIC)

/* Array#5 */
AI_ARRAY_OBJ_DECLARE(
  node_24_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 4032, AI_STATIC)

/* Array#6 */
AI_ARRAY_OBJ_DECLARE(
  node_25_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 384, AI_STATIC)

/* Array#7 */
AI_ARRAY_OBJ_DECLARE(
  node_28_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 4, AI_STATIC)

/* Array#8 */
AI_ARRAY_OBJ_DECLARE(
  output_output_array, AI_ARRAY_FORMAT_FLOAT|AI_FMT_FLAG_IS_IO,
  NULL, NULL, 1, AI_STATIC)

/* Array#9 */
AI_ARRAY_OBJ_DECLARE(
  node_33_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 1, AI_STATIC)

/* Array#10 */
AI_ARRAY_OBJ_DECLARE(
  node_35_output_array, AI_ARRAY_FORMAT_BOOL|AI_FMT_FLAG_IS_IO,
  NULL, NULL, 1, AI_STATIC)

/* Array#11 */
AI_ARRAY_OBJ_DECLARE(
  node_17_weights_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 144, AI_STATIC)

/* Array#12 */
AI_ARRAY_OBJ_DECLARE(
  node_17_bias_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 16, AI_STATIC)

/* Array#13 */
AI_ARRAY_OBJ_DECLARE(
  node_18_weights_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 2304, AI_STATIC)

/* Array#14 */
AI_ARRAY_OBJ_DECLARE(
  node_18_bias_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 16, AI_STATIC)

/* Array#15 */
AI_ARRAY_OBJ_DECLARE(
  node_20_weights_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 4608, AI_STATIC)

/* Array#16 */
AI_ARRAY_OBJ_DECLARE(
  node_20_bias_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 32, AI_STATIC)

/* Array#17 */
AI_ARRAY_OBJ_DECLARE(
  node_21_weights_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 9216, AI_STATIC)

/* Array#18 */
AI_ARRAY_OBJ_DECLARE(
  node_21_bias_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 32, AI_STATIC)

/* Array#19 */
AI_ARRAY_OBJ_DECLARE(
  node_24_weights_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 18432, AI_STATIC)

/* Array#20 */
AI_ARRAY_OBJ_DECLARE(
  node_24_bias_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 64, AI_STATIC)

/* Array#21 */
AI_ARRAY_OBJ_DECLARE(
  node_25_weights_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 36864, AI_STATIC)

/* Array#22 */
AI_ARRAY_OBJ_DECLARE(
  node_25_bias_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 64, AI_STATIC)

/* Array#23 */
AI_ARRAY_OBJ_DECLARE(
  node_28_weights_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 128, AI_STATIC)

/* Array#24 */
AI_ARRAY_OBJ_DECLARE(
  node_28_bias_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 2, AI_STATIC)

/* Array#25 */
AI_ARRAY_OBJ_DECLARE(
  node_34_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 1, AI_STATIC)

/* Array#26 */
AI_ARRAY_OBJ_DECLARE(
  linear_1_bias_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 1, AI_STATIC)

/* Array#27 */
AI_ARRAY_OBJ_DECLARE(
  linear_1_weight_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 4, AI_STATIC)

/* Array#28 */
AI_ARRAY_OBJ_DECLARE(
  node_21_scratch0_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 1216, AI_STATIC)

/* Array#29 */
AI_ARRAY_OBJ_DECLARE(
  node_25_scratch0_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 640, AI_STATIC)

/* Array#30 */
AI_ARRAY_OBJ_DECLARE(
  node_28_scratch0_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 8, AI_STATIC)

/**  Tensor declarations section  *********************************************/
/* Tensor #0 */
AI_TENSOR_OBJ_DECLARE(
  input_output, AI_STATIC,
  0, 0x0,
  AI_SHAPE_INIT(4, 1, 1, 27, 30), AI_STRIDE_INIT(4, 4, 4, 4, 108),
  1, &input_output_array, NULL)

/* Tensor #1 */
AI_TENSOR_OBJ_DECLARE(
  node_17_output, AI_STATIC,
  1, 0x0,
  AI_SHAPE_INIT(4, 1, 16, 25, 28), AI_STRIDE_INIT(4, 4, 4, 64, 1600),
  1, &node_17_output_array, NULL)

/* Tensor #2 */
AI_TENSOR_OBJ_DECLARE(
  node_18_output, AI_STATIC,
  2, 0x0,
  AI_SHAPE_INIT(4, 1, 16, 23, 26), AI_STRIDE_INIT(4, 4, 4, 64, 1472),
  1, &node_18_output_array, NULL)

/* Tensor #3 */
AI_TENSOR_OBJ_DECLARE(
  node_20_output, AI_STATIC,
  3, 0x0,
  AI_SHAPE_INIT(4, 1, 32, 21, 24), AI_STRIDE_INIT(4, 4, 4, 128, 2688),
  1, &node_20_output_array, NULL)

/* Tensor #4 */
AI_TENSOR_OBJ_DECLARE(
  node_21_output, AI_STATIC,
  4, 0x0,
  AI_SHAPE_INIT(4, 1, 32, 9, 11), AI_STRIDE_INIT(4, 4, 4, 128, 1152),
  1, &node_21_output_array, NULL)

/* Tensor #5 */
AI_TENSOR_OBJ_DECLARE(
  node_24_output, AI_STATIC,
  5, 0x0,
  AI_SHAPE_INIT(4, 1, 64, 7, 9), AI_STRIDE_INIT(4, 4, 4, 256, 1792),
  1, &node_24_output_array, NULL)

/* Tensor #6 */
AI_TENSOR_OBJ_DECLARE(
  node_25_output, AI_STATIC,
  6, 0x0,
  AI_SHAPE_INIT(4, 1, 64, 2, 3), AI_STRIDE_INIT(4, 4, 4, 256, 512),
  1, &node_25_output_array, NULL)

/* Tensor #7 */
AI_TENSOR_OBJ_DECLARE(
  node_28_output, AI_STATIC,
  7, 0x0,
  AI_SHAPE_INIT(4, 1, 2, 2, 1), AI_STRIDE_INIT(4, 4, 4, 8, 16),
  1, &node_28_output_array, NULL)

/* Tensor #8 */
AI_TENSOR_OBJ_DECLARE(
  node_28_output0, AI_STATIC,
  8, 0x0,
  AI_SHAPE_INIT(4, 1, 4, 1, 1), AI_STRIDE_INIT(4, 4, 4, 16, 16),
  1, &node_28_output_array, NULL)

/* Tensor #9 */
AI_TENSOR_OBJ_DECLARE(
  output_output, AI_STATIC,
  9, 0x0,
  AI_SHAPE_INIT(4, 1, 1, 1, 1), AI_STRIDE_INIT(4, 4, 4, 4, 4),
  1, &output_output_array, NULL)

/* Tensor #10 */
AI_TENSOR_OBJ_DECLARE(
  node_33_output, AI_STATIC,
  10, 0x0,
  AI_SHAPE_INIT(4, 1, 1, 1, 1), AI_STRIDE_INIT(4, 4, 4, 4, 4),
  1, &node_33_output_array, NULL)

/* Tensor #11 */
AI_TENSOR_OBJ_DECLARE(
  node_35_output, AI_STATIC,
  11, 0x0,
  AI_SHAPE_INIT(4, 1, 1, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1, 1),
  1, &node_35_output_array, NULL)

/* Tensor #12 */
AI_TENSOR_OBJ_DECLARE(
  node_17_weights, AI_STATIC,
  12, 0x0,
  AI_SHAPE_INIT(4, 1, 3, 3, 16), AI_STRIDE_INIT(4, 4, 4, 12, 36),
  1, &node_17_weights_array, NULL)

/* Tensor #13 */
AI_TENSOR_OBJ_DECLARE(
  node_17_bias, AI_STATIC,
  13, 0x0,
  AI_SHAPE_INIT(4, 1, 16, 1, 1), AI_STRIDE_INIT(4, 4, 4, 64, 64),
  1, &node_17_bias_array, NULL)

/* Tensor #14 */
AI_TENSOR_OBJ_DECLARE(
  node_18_weights, AI_STATIC,
  14, 0x0,
  AI_SHAPE_INIT(4, 16, 3, 3, 16), AI_STRIDE_INIT(4, 4, 64, 192, 576),
  1, &node_18_weights_array, NULL)

/* Tensor #15 */
AI_TENSOR_OBJ_DECLARE(
  node_18_bias, AI_STATIC,
  15, 0x0,
  AI_SHAPE_INIT(4, 1, 16, 1, 1), AI_STRIDE_INIT(4, 4, 4, 64, 64),
  1, &node_18_bias_array, NULL)

/* Tensor #16 */
AI_TENSOR_OBJ_DECLARE(
  node_20_weights, AI_STATIC,
  16, 0x0,
  AI_SHAPE_INIT(4, 16, 3, 3, 32), AI_STRIDE_INIT(4, 4, 64, 192, 576),
  1, &node_20_weights_array, NULL)

/* Tensor #17 */
AI_TENSOR_OBJ_DECLARE(
  node_20_bias, AI_STATIC,
  17, 0x0,
  AI_SHAPE_INIT(4, 1, 32, 1, 1), AI_STRIDE_INIT(4, 4, 4, 128, 128),
  1, &node_20_bias_array, NULL)

/* Tensor #18 */
AI_TENSOR_OBJ_DECLARE(
  node_21_weights, AI_STATIC,
  18, 0x0,
  AI_SHAPE_INIT(4, 32, 3, 3, 32), AI_STRIDE_INIT(4, 4, 128, 384, 1152),
  1, &node_21_weights_array, NULL)

/* Tensor #19 */
AI_TENSOR_OBJ_DECLARE(
  node_21_bias, AI_STATIC,
  19, 0x0,
  AI_SHAPE_INIT(4, 1, 32, 1, 1), AI_STRIDE_INIT(4, 4, 4, 128, 128),
  1, &node_21_bias_array, NULL)

/* Tensor #20 */
AI_TENSOR_OBJ_DECLARE(
  node_24_weights, AI_STATIC,
  20, 0x0,
  AI_SHAPE_INIT(4, 32, 3, 3, 64), AI_STRIDE_INIT(4, 4, 128, 384, 1152),
  1, &node_24_weights_array, NULL)

/* Tensor #21 */
AI_TENSOR_OBJ_DECLARE(
  node_24_bias, AI_STATIC,
  21, 0x0,
  AI_SHAPE_INIT(4, 1, 64, 1, 1), AI_STRIDE_INIT(4, 4, 4, 256, 256),
  1, &node_24_bias_array, NULL)

/* Tensor #22 */
AI_TENSOR_OBJ_DECLARE(
  node_25_weights, AI_STATIC,
  22, 0x0,
  AI_SHAPE_INIT(4, 64, 3, 3, 64), AI_STRIDE_INIT(4, 4, 256, 768, 2304),
  1, &node_25_weights_array, NULL)

/* Tensor #23 */
AI_TENSOR_OBJ_DECLARE(
  node_25_bias, AI_STATIC,
  23, 0x0,
  AI_SHAPE_INIT(4, 1, 64, 1, 1), AI_STRIDE_INIT(4, 4, 4, 256, 256),
  1, &node_25_bias_array, NULL)

/* Tensor #24 */
AI_TENSOR_OBJ_DECLARE(
  node_28_weights, AI_STATIC,
  24, 0x0,
  AI_SHAPE_INIT(4, 64, 1, 1, 2), AI_STRIDE_INIT(4, 4, 256, 256, 256),
  1, &node_28_weights_array, NULL)

/* Tensor #25 */
AI_TENSOR_OBJ_DECLARE(
  node_28_bias, AI_STATIC,
  25, 0x0,
  AI_SHAPE_INIT(4, 1, 2, 1, 1), AI_STRIDE_INIT(4, 4, 4, 8, 8),
  1, &node_28_bias_array, NULL)

/* Tensor #26 */
AI_TENSOR_OBJ_DECLARE(
  node_34, AI_STATIC,
  26, 0x0,
  AI_SHAPE_INIT(4, 1, 1, 1, 1), AI_STRIDE_INIT(4, 4, 4, 4, 4),
  1, &node_34_array, NULL)

/* Tensor #27 */
AI_TENSOR_OBJ_DECLARE(
  linear_1_bias, AI_STATIC,
  27, 0x0,
  AI_SHAPE_INIT(4, 1, 1, 1, 1), AI_STRIDE_INIT(4, 4, 4, 4, 4),
  1, &linear_1_bias_array, NULL)

/* Tensor #28 */
AI_TENSOR_OBJ_DECLARE(
  linear_1_weight, AI_STATIC,
  28, 0x0,
  AI_SHAPE_INIT(4, 1, 4, 1, 1), AI_STRIDE_INIT(4, 4, 16, 16, 16),
  1, &linear_1_weight_array, NULL)

/* Tensor #29 */
AI_TENSOR_OBJ_DECLARE(
  node_21_scratch0, AI_STATIC,
  29, 0x0,
  AI_SHAPE_INIT(4, 1, 32, 19, 2), AI_STRIDE_INIT(4, 4, 4, 128, 2432),
  1, &node_21_scratch0_array, NULL)

/* Tensor #30 */
AI_TENSOR_OBJ_DECLARE(
  node_25_scratch0, AI_STATIC,
  30, 0x0,
  AI_SHAPE_INIT(4, 1, 64, 5, 2), AI_STRIDE_INIT(4, 4, 4, 256, 1280),
  1, &node_25_scratch0_array, NULL)

/* Tensor #31 */
AI_TENSOR_OBJ_DECLARE(
  node_28_scratch0, AI_STATIC,
  31, 0x0,
  AI_SHAPE_INIT(4, 1, 2, 2, 2), AI_STRIDE_INIT(4, 4, 4, 8, 16),
  1, &node_28_scratch0_array, NULL)



/**  Layer declarations section  **********************************************/


AI_TENSOR_CHAIN_OBJ_DECLARE(
  node_35_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &node_33_output, &node_34),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &node_35_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  node_35_layer, 16,
  ELTWISE_TYPE, 0x0, NULL,
  eltwise, forward_eltwise,
  &node_35_chain,
  NULL, &node_35_layer, AI_STATIC, 
  .operation = ai_greater, 
  .buffer_operation = ai_greater_buffer, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  node_33_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &output_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &node_33_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  node_33_layer, 15,
  NL_TYPE, 0x0, NULL,
  nl, forward_sigmoid,
  &node_33_chain,
  NULL, &node_35_layer, AI_STATIC, 
  .nl_params = NULL, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  output_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &node_28_output0, &linear_1_weight, &linear_1_bias),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &output_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  output_layer, 14,
  GEMM_TYPE, 0x0, NULL,
  gemm, forward_gemm,
  &output_chain,
  NULL, &node_33_layer, AI_STATIC, 
  .alpha = 1.0, 
  .beta = 1.0, 
  .tA = 0, 
  .tB = 1, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  node_28_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &node_25_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &node_28_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &node_28_weights, &node_28_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &node_28_scratch0)
)

AI_LAYER_OBJ_DECLARE(
  node_28_layer, 12,
  OPTIMIZED_CONV2D_TYPE, 0x0, NULL,
  conv2d_nl_pool, forward_conv2d_nl_pool,
  &node_28_chain,
  NULL, &output_layer, AI_STATIC, 
  .groups = 1, 
  .nl_func = NULL, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .pool_size = AI_SHAPE_2D_INIT(1, 2), 
  .pool_stride = AI_SHAPE_2D_INIT(1, 2), 
  .pool_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .pool_func = pool_func_ap_array_f32, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  node_25_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &node_24_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &node_25_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &node_25_weights, &node_25_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &node_25_scratch0)
)

AI_LAYER_OBJ_DECLARE(
  node_25_layer, 10,
  OPTIMIZED_CONV2D_TYPE, 0x0, NULL,
  conv2d_nl_pool, forward_conv2d_nl_pool,
  &node_25_chain,
  NULL, &node_28_layer, AI_STATIC, 
  .groups = 1, 
  .nl_params = NULL, 
  .nl_func = nl_func_relu_array_f32, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .pool_size = AI_SHAPE_2D_INIT(2, 2), 
  .pool_stride = AI_SHAPE_2D_INIT(2, 2), 
  .pool_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .pool_func = pool_func_mp_array_f32, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  node_24_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &node_21_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &node_24_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &node_24_weights, &node_24_bias, NULL),
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  node_24_layer, 7,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_conv2d,
  &node_24_chain,
  NULL, &node_25_layer, AI_STATIC, 
  .groups = 1, 
  .nl_func = NULL, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  node_21_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &node_20_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &node_21_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &node_21_weights, &node_21_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &node_21_scratch0)
)

AI_LAYER_OBJ_DECLARE(
  node_21_layer, 6,
  OPTIMIZED_CONV2D_TYPE, 0x0, NULL,
  conv2d_nl_pool, forward_conv2d_nl_pool,
  &node_21_chain,
  NULL, &node_24_layer, AI_STATIC, 
  .groups = 1, 
  .nl_params = NULL, 
  .nl_func = nl_func_relu_array_f32, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .pool_size = AI_SHAPE_2D_INIT(2, 2), 
  .pool_stride = AI_SHAPE_2D_INIT(2, 2), 
  .pool_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .pool_func = pool_func_mp_array_f32, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  node_20_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &node_18_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &node_20_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &node_20_weights, &node_20_bias, NULL),
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  node_20_layer, 3,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_conv2d,
  &node_20_chain,
  NULL, &node_21_layer, AI_STATIC, 
  .groups = 1, 
  .nl_func = NULL, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  node_18_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &node_17_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &node_18_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &node_18_weights, &node_18_bias, NULL),
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  node_18_layer, 2,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_conv2d,
  &node_18_chain,
  NULL, &node_20_layer, AI_STATIC, 
  .groups = 1, 
  .nl_params = NULL, 
  .nl_func = nl_func_relu_array_f32, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  node_17_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &input_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &node_17_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &node_17_weights, &node_17_bias, NULL),
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  node_17_layer, 0,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_conv2d,
  &node_17_chain,
  NULL, &node_18_layer, AI_STATIC, 
  .groups = 1, 
  .nl_func = NULL, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
)


#if (AI_TOOLS_API_VERSION < AI_TOOLS_API_VERSION_1_5)

AI_NETWORK_OBJ_DECLARE(
  AI_NET_OBJ_INSTANCE, AI_STATIC,
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 287712, 1, 1),
    287712, NULL, NULL),
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 77888, 1, 1),
    77888, NULL, NULL),
  AI_TENSOR_LIST_IO_OBJ_INIT(AI_FLAG_NONE, AI_NETWORK_IN_NUM, &input_output),
  AI_TENSOR_LIST_IO_OBJ_INIT(AI_FLAG_NONE, AI_NETWORK_OUT_NUM, &output_output, &node_35_output),
  &node_17_layer, 0, NULL)

#else

AI_NETWORK_OBJ_DECLARE(
  AI_NET_OBJ_INSTANCE, AI_STATIC,
  AI_BUFFER_ARRAY_OBJ_INIT_STATIC(
  	AI_FLAG_NONE, 1,
    AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
      AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 287712, 1, 1),
      287712, NULL, NULL)
  ),
  AI_BUFFER_ARRAY_OBJ_INIT_STATIC(
  	AI_FLAG_NONE, 1,
    AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
      AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 77888, 1, 1),
      77888, NULL, NULL)
  ),
  AI_TENSOR_LIST_IO_OBJ_INIT(AI_FLAG_NONE, AI_NETWORK_IN_NUM, &input_output),
  AI_TENSOR_LIST_IO_OBJ_INIT(AI_FLAG_NONE, AI_NETWORK_OUT_NUM, &output_output, &node_35_output),
  &node_17_layer, 0, NULL)

#endif	/*(AI_TOOLS_API_VERSION < AI_TOOLS_API_VERSION_1_5)*/


/******************************************************************************/
AI_DECLARE_STATIC
ai_bool network_configure_activations(
  ai_network* net_ctx, const ai_network_params* params)
{
  AI_ASSERT(net_ctx)

  ai_ptr activations_map[1] = AI_C_ARRAY_INIT;

  if (ai_platform_get_activations_map(activations_map, 1, params)) {
    /* Updating activations (byte) offsets */
    node_17_output_array.data = AI_PTR(activations_map[0] + 33088);
    node_17_output_array.data_start = AI_PTR(activations_map[0] + 33088);
    node_18_output_array.data = AI_PTR(activations_map[0] + 31552);
    node_18_output_array.data_start = AI_PTR(activations_map[0] + 31552);
    node_20_output_array.data = AI_PTR(activations_map[0] + 1280);
    node_20_output_array.data_start = AI_PTR(activations_map[0] + 1280);
    node_21_scratch0_array.data = AI_PTR(activations_map[0] + 65792);
    node_21_scratch0_array.data_start = AI_PTR(activations_map[0] + 65792);
    node_21_output_array.data = AI_PTR(activations_map[0] + 0);
    node_21_output_array.data_start = AI_PTR(activations_map[0] + 0);
    node_24_output_array.data = AI_PTR(activations_map[0] + 12672);
    node_24_output_array.data_start = AI_PTR(activations_map[0] + 12672);
    node_25_scratch0_array.data = AI_PTR(activations_map[0] + 0);
    node_25_scratch0_array.data_start = AI_PTR(activations_map[0] + 0);
    node_25_output_array.data = AI_PTR(activations_map[0] + 2560);
    node_25_output_array.data_start = AI_PTR(activations_map[0] + 2560);
    node_28_scratch0_array.data = AI_PTR(activations_map[0] + 0);
    node_28_scratch0_array.data_start = AI_PTR(activations_map[0] + 0);
    node_28_output_array.data = AI_PTR(activations_map[0] + 32);
    node_28_output_array.data_start = AI_PTR(activations_map[0] + 32);
    node_33_output_array.data = AI_PTR(activations_map[0] + 0);
    node_33_output_array.data_start = AI_PTR(activations_map[0] + 0);
    
    return true;
  }
  AI_ERROR_TRAP(net_ctx, INIT_FAILED, NETWORK_ACTIVATIONS);
  return false;
}



/******************************************************************************/
AI_DECLARE_STATIC
ai_bool network_configure_weights(
  ai_network* net_ctx, const ai_network_params* params)
{
  AI_ASSERT(net_ctx)

  ai_ptr weights_map[1] = AI_C_ARRAY_INIT;

  if (ai_platform_get_weights_map(weights_map, 1, params)) {
    /* Updating weights (byte) offsets */
    
    node_17_weights_array.format |= AI_FMT_FLAG_CONST;
    node_17_weights_array.data = AI_PTR(weights_map[0] + 0);
    node_17_weights_array.data_start = AI_PTR(weights_map[0] + 0);
    node_17_bias_array.format |= AI_FMT_FLAG_CONST;
    node_17_bias_array.data = AI_PTR(weights_map[0] + 576);
    node_17_bias_array.data_start = AI_PTR(weights_map[0] + 576);
    node_18_weights_array.format |= AI_FMT_FLAG_CONST;
    node_18_weights_array.data = AI_PTR(weights_map[0] + 640);
    node_18_weights_array.data_start = AI_PTR(weights_map[0] + 640);
    node_18_bias_array.format |= AI_FMT_FLAG_CONST;
    node_18_bias_array.data = AI_PTR(weights_map[0] + 9856);
    node_18_bias_array.data_start = AI_PTR(weights_map[0] + 9856);
    node_20_weights_array.format |= AI_FMT_FLAG_CONST;
    node_20_weights_array.data = AI_PTR(weights_map[0] + 9920);
    node_20_weights_array.data_start = AI_PTR(weights_map[0] + 9920);
    node_20_bias_array.format |= AI_FMT_FLAG_CONST;
    node_20_bias_array.data = AI_PTR(weights_map[0] + 28352);
    node_20_bias_array.data_start = AI_PTR(weights_map[0] + 28352);
    node_21_weights_array.format |= AI_FMT_FLAG_CONST;
    node_21_weights_array.data = AI_PTR(weights_map[0] + 28480);
    node_21_weights_array.data_start = AI_PTR(weights_map[0] + 28480);
    node_21_bias_array.format |= AI_FMT_FLAG_CONST;
    node_21_bias_array.data = AI_PTR(weights_map[0] + 65344);
    node_21_bias_array.data_start = AI_PTR(weights_map[0] + 65344);
    node_24_weights_array.format |= AI_FMT_FLAG_CONST;
    node_24_weights_array.data = AI_PTR(weights_map[0] + 65472);
    node_24_weights_array.data_start = AI_PTR(weights_map[0] + 65472);
    node_24_bias_array.format |= AI_FMT_FLAG_CONST;
    node_24_bias_array.data = AI_PTR(weights_map[0] + 139200);
    node_24_bias_array.data_start = AI_PTR(weights_map[0] + 139200);
    node_25_weights_array.format |= AI_FMT_FLAG_CONST;
    node_25_weights_array.data = AI_PTR(weights_map[0] + 139456);
    node_25_weights_array.data_start = AI_PTR(weights_map[0] + 139456);
    node_25_bias_array.format |= AI_FMT_FLAG_CONST;
    node_25_bias_array.data = AI_PTR(weights_map[0] + 286912);
    node_25_bias_array.data_start = AI_PTR(weights_map[0] + 286912);
    node_28_weights_array.format |= AI_FMT_FLAG_CONST;
    node_28_weights_array.data = AI_PTR(weights_map[0] + 287168);
    node_28_weights_array.data_start = AI_PTR(weights_map[0] + 287168);
    node_28_bias_array.format |= AI_FMT_FLAG_CONST;
    node_28_bias_array.data = AI_PTR(weights_map[0] + 287680);
    node_28_bias_array.data_start = AI_PTR(weights_map[0] + 287680);
    node_34_array.format |= AI_FMT_FLAG_CONST;
    node_34_array.data = AI_PTR(weights_map[0] + 287688);
    node_34_array.data_start = AI_PTR(weights_map[0] + 287688);
    linear_1_bias_array.format |= AI_FMT_FLAG_CONST;
    linear_1_bias_array.data = AI_PTR(weights_map[0] + 287692);
    linear_1_bias_array.data_start = AI_PTR(weights_map[0] + 287692);
    linear_1_weight_array.format |= AI_FMT_FLAG_CONST;
    linear_1_weight_array.data = AI_PTR(weights_map[0] + 287696);
    linear_1_weight_array.data_start = AI_PTR(weights_map[0] + 287696);
    return true;
  }
  AI_ERROR_TRAP(net_ctx, INIT_FAILED, NETWORK_WEIGHTS);
  return false;
}


/**  PUBLIC APIs SECTION  *****************************************************/

AI_DEPRECATED
AI_API_ENTRY
ai_bool ai_network_get_info(
  ai_handle network, ai_network_report* report)
{
  ai_network* net_ctx = AI_NETWORK_ACQUIRE_CTX(network);

  if (report && net_ctx)
  {
    ai_network_report r = {
      .model_name        = AI_NETWORK_MODEL_NAME,
      .model_signature   = AI_NETWORK_MODEL_SIGNATURE,
      .model_datetime    = AI_TOOLS_DATE_TIME,
      
      .compile_datetime  = AI_TOOLS_COMPILE_TIME,
      
      .runtime_revision  = ai_platform_runtime_get_revision(),
      .runtime_version   = ai_platform_runtime_get_version(),

      .tool_revision     = AI_TOOLS_REVISION_ID,
      .tool_version      = {AI_TOOLS_VERSION_MAJOR, AI_TOOLS_VERSION_MINOR,
                            AI_TOOLS_VERSION_MICRO, 0x0},
      .tool_api_version  = AI_STRUCT_INIT,

      .api_version            = ai_platform_api_get_version(),
      .interface_api_version  = ai_platform_interface_api_get_version(),
      
      .n_macc            = 10145178,
      .n_inputs          = 0,
      .inputs            = NULL,
      .n_outputs         = 0,
      .outputs           = NULL,
      .params            = AI_STRUCT_INIT,
      .activations       = AI_STRUCT_INIT,
      .n_nodes           = 0,
      .signature         = 0x0,
    };

    if (!ai_platform_api_get_network_report(network, &r)) return false;

    *report = r;
    return true;
  }
  return false;
}


AI_API_ENTRY
ai_bool ai_network_get_report(
  ai_handle network, ai_network_report* report)
{
  ai_network* net_ctx = AI_NETWORK_ACQUIRE_CTX(network);

  if (report && net_ctx)
  {
    ai_network_report r = {
      .model_name        = AI_NETWORK_MODEL_NAME,
      .model_signature   = AI_NETWORK_MODEL_SIGNATURE,
      .model_datetime    = AI_TOOLS_DATE_TIME,
      
      .compile_datetime  = AI_TOOLS_COMPILE_TIME,
      
      .runtime_revision  = ai_platform_runtime_get_revision(),
      .runtime_version   = ai_platform_runtime_get_version(),

      .tool_revision     = AI_TOOLS_REVISION_ID,
      .tool_version      = {AI_TOOLS_VERSION_MAJOR, AI_TOOLS_VERSION_MINOR,
                            AI_TOOLS_VERSION_MICRO, 0x0},
      .tool_api_version  = AI_STRUCT_INIT,

      .api_version            = ai_platform_api_get_version(),
      .interface_api_version  = ai_platform_interface_api_get_version(),
      
      .n_macc            = 10145178,
      .n_inputs          = 0,
      .inputs            = NULL,
      .n_outputs         = 0,
      .outputs           = NULL,
      .map_signature     = AI_MAGIC_SIGNATURE,
      .map_weights       = AI_STRUCT_INIT,
      .map_activations   = AI_STRUCT_INIT,
      .n_nodes           = 0,
      .signature         = 0x0,
    };

    if (!ai_platform_api_get_network_report(network, &r)) return false;

    *report = r;
    return true;
  }
  return false;
}

AI_API_ENTRY
ai_error ai_network_get_error(ai_handle network)
{
  return ai_platform_network_get_error(network);
}

AI_API_ENTRY
ai_error ai_network_create(
  ai_handle* network, const ai_buffer* network_config)
{
  return ai_platform_network_create(
    network, network_config, 
    &AI_NET_OBJ_INSTANCE,
    AI_TOOLS_API_VERSION_MAJOR, AI_TOOLS_API_VERSION_MINOR, AI_TOOLS_API_VERSION_MICRO);
}

AI_API_ENTRY
ai_error ai_network_create_and_init(
  ai_handle* network, const ai_handle activations[], const ai_handle weights[])
{
    ai_error err;
    ai_network_params params;

    err = ai_network_create(network, AI_NETWORK_DATA_CONFIG);
    if (err.type != AI_ERROR_NONE)
        return err;
    if (ai_network_data_params_get(&params) != true) {
        err = ai_network_get_error(*network);
        return err;
    }
#if defined(AI_NETWORK_DATA_ACTIVATIONS_COUNT)
    if (activations) {
        /* set the addresses of the activations buffers */
        for (int idx=0;idx<params.map_activations.size;idx++)
            AI_BUFFER_ARRAY_ITEM_SET_ADDRESS(&params.map_activations, idx, activations[idx]);
    }
#endif
#if defined(AI_NETWORK_DATA_WEIGHTS_COUNT)
    if (weights) {
        /* set the addresses of the weight buffers */
        for (int idx=0;idx<params.map_weights.size;idx++)
            AI_BUFFER_ARRAY_ITEM_SET_ADDRESS(&params.map_weights, idx, weights[idx]);
    }
#endif
    if (ai_network_init(*network, &params) != true) {
        err = ai_network_get_error(*network);
    }
    return err;
}

AI_API_ENTRY
ai_buffer* ai_network_inputs_get(ai_handle network, ai_u16 *n_buffer)
{
  if (network == AI_HANDLE_NULL) {
    network = (ai_handle)&AI_NET_OBJ_INSTANCE;
    ((ai_network *)network)->magic = AI_MAGIC_CONTEXT_TOKEN;
  }
  return ai_platform_inputs_get(network, n_buffer);
}

AI_API_ENTRY
ai_buffer* ai_network_outputs_get(ai_handle network, ai_u16 *n_buffer)
{
  if (network == AI_HANDLE_NULL) {
    network = (ai_handle)&AI_NET_OBJ_INSTANCE;
    ((ai_network *)network)->magic = AI_MAGIC_CONTEXT_TOKEN;
  }
  return ai_platform_outputs_get(network, n_buffer);
}

AI_API_ENTRY
ai_handle ai_network_destroy(ai_handle network)
{
  return ai_platform_network_destroy(network);
}

AI_API_ENTRY
ai_bool ai_network_init(
  ai_handle network, const ai_network_params* params)
{
  ai_network* net_ctx = ai_platform_network_init(network, params);
  if (!net_ctx) return false;

  ai_bool ok = true;
  ok &= network_configure_weights(net_ctx, params);
  ok &= network_configure_activations(net_ctx, params);

  ok &= ai_platform_network_post_init(network);

  return ok;
}


AI_API_ENTRY
ai_i32 ai_network_run(
  ai_handle network, const ai_buffer* input, ai_buffer* output)
{
  return ai_platform_network_process(network, input, output);
}

AI_API_ENTRY
ai_i32 ai_network_forward(ai_handle network, const ai_buffer* input)
{
  return ai_platform_network_process(network, input, NULL);
}



#undef AI_NETWORK_MODEL_SIGNATURE
#undef AI_NET_OBJ_INSTANCE
#undef AI_TOOLS_DATE_TIME
#undef AI_TOOLS_COMPILE_TIME

