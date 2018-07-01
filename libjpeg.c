#include "jcapimin.c"
#include "jcapistd.c"
#define my_coef_controller my_coef_controller_jccoefct
#define my_coef_ptr        my_coef_ptr_jccoefct
#define start_iMCU_row     start_iMCU_row_jccoefct
#define start_pass_coef    start_pass_coef_jccoefct
#define compress_output    compress_output_jccoefct
#define my_coef_controller my_coef_controller_jccoefct
#include "jccoefct.c"
#undef my_coef_controller
#undef my_coef_ptr
#undef start_iMCU_row    
#undef start_pass_coef   
#undef compress_output   
#undef my_coef_controller
#include "jcdctmgr.c"
#undef CONST_BITS
#define dump_buffer dump_buffer_jchuff
#define flush_bits flush_bits_jchuff
#define emit_restart emit_restart_jchuff
#define savable_state savable_state_jchuff
#define huff_entropy_ptr huff_entropy_ptr_jchuff
#include "jchuff.c"
#undef huff_entropy_ptr
#undef emit_byte
#undef dump_buffer
#undef flush_bits
#undef emit_restart
#undef savable_state
#undef BUFSIZE
#include "jcicc.c"
#include "jcinit.c"
#define my_main_controller my_main_controller_jcmainct
#define my_main_ptr my_main_ptr_jcmainct
#define start_pass_main start_pass_main_jcmainct
#define process_data_simple_main process_data_simple_main_jcmainct
#include "jcmainct.c"
#undef process_data_simple_main
#undef start_pass_main
#undef my_main_controller
#undef my_main_ptr
#define my_marker_ptr my_marker_ptr_jcmarker
#define emit_byte emit_byte_jcmarker
#include "jcmarker.c"
#undef emit_byte
#undef my_marker_ptr
#define my_master_ptr my_master_ptr_jcmaster
#define initial_setup initial_setup_jcmaster
#define per_scan_setup per_scan_setup_jcmaster
#include "jcmaster.c"
#undef per_scan_setup
#undef initial_setup
#undef my_master_ptr
#include "jcomapi.c"
#include "jcparam.c"
#define phuff_entropy_ptr phuff_entropy_ptr_jcpjuff
#define emit_restart emit_restart_jcphuff
#define encode_mcu_DC_first encode_mcu_DC_first_jcphuff
#define encode_mcu_AC_first encode_mcu_AC_first_jcphuff
#define encode_mcu_DC_refine encode_mcu_DC_refine_jcphuff
#define encode_mcu_AC_refine encode_mcu_AC_refine_jcphuff
#include "jcphuff.c"
#undef encode_mcu_DC_refine
#undef encode_mcu_AC_refine
#undef encode_mcu_AC_first
#undef encode_mcu_DC_first
#undef emit_restart
#undef phuff_entropy_ptr
#undef emit_byte
#include "jcprepct.c"
#include "jcsample.c"
#define my_coef_controller my_coef_controller_jctrans
#define my_coef_ptr my_coef_ptr_jctrans
#define start_iMCU_row start_iMCU_row_jctrans
#include "jctrans.c"
#undef my_coef_controller
#undef my_coef_ptr
#undef start_iMCU_row
#include "jdapimin.c"
#include "jdapistd.c"
#define my_mem_dest_ptr  my_mem_dest_ptr_jdatadst
#define my_mem_destination_mgr  my_mem_destination_mgr_jdatadst
#define init_mem_destination    init_mem_destination_jdatadst
#define empty_mem_output_buffer empty_mem_output_buffer_jdatadst
#define term_mem_destination    term_mem_destination_jdatadst
#include "jdatadst.c"
#undef my_mem_dest_ptr  
#undef my_mem_destination_mgr  
#undef init_mem_destination    
#undef empty_mem_output_buffer 
#undef term_mem_destination    
#define init_mem_source       init_mem_source_jdatasrc
#define fill_mem_input_buffer fill_mem_input_buffer_jdatasrc
//#define skip_input_data       skip_input_data_jdatasrc
//#define term_source           term_source_jdatasrc
#include "jdatasrc.c"
#undef init_mem_source       
#undef fill_mem_input_buffer 
//#undef skip_input_data       
//#undef term_source
#include "jdcoefct.c"
#include "jddctmgr.c"
#undef CONST_BITS
#define add_huff_table add_huff_table_jdhuff
#define std_huff_tables std_huff_tables_jdhuff
#define savable_state savable_state_jdhuff
#define process_restart process_restart_jdhuff
#include "jdhuff.c"
#undef process_restart
#undef NEG_1
#undef HUFF_EXTEND
#undef savable_state
#undef add_huff_table
#undef std_huff_tables
#include "jdicc.c"
#include "jdinput.c"
#include "jdmainct.c"
#include "jdmarker.c"
#include "jdmaster.c"
#define process_restart process_restart_jdphuff
#define decode_mcu_DC_first   decode_mcu_DC_first_jdphuff
#define decode_mcu_AC_first   decode_mcu_AC_first_jdphuff
#define decode_mcu_DC_refine  decode_mcu_DC_refine_jdphuff
#define decode_mcu_AC_refine  decode_mcu_AC_refine_jdphuff
#include "jdphuff.c"
#undef decode_mcu_DC_first
#undef decode_mcu_AC_first
#undef decode_mcu_DC_refine
#undef decode_mcu_AC_refine
#undef process_restart
#undef NEG_1
#include "jdpostct.c"
#include "jdsample.c"
#include "jdtrans.c"
#include "jerror.c"
#include "jfdctflt.c"
#include "jfdctfst.c"
#undef FIX_0_541196100
#undef CONST_BITS
#undef DESCALE
#undef CONST_BITS
#undef MULTIPLY
#include "jfdctint.c"
#undef MULTIPLY
#undef FIX_1_847759065
#undef FIX_0_541196100
#undef CONST_BITS
#include "jidctflt.c"
#undef DEQUANTIZE
#include "jidctfst.c"
#undef DEQUANTIZE
#undef MULTIPLY
#undef FIX_1_847759065
#undef DESCALE
#undef CONST_BITS
#include "jidctint.c"
#include "jidctred.c"
#include "jquant1.c"
#define my_cquantizer my_cquantizer_jquant2
#define my_cquantize_ptr my_cquantize_ptr_jquant
#include "jquant2.c"
#undef my_cquantizer
#undef my_cquantize_ptr
#include "jutils.c"
#include "jmemmgr.c"
#include "jmemnobs.c"
#include "jaricom.c"
#define arith_entropy_ptr arith_entropy_ptr_jcarith
#include "jcarith.c"
#undef arith_entropy_ptr
#include "jdarith.c"
#include "turbojpeg.c"
#include "transupp.c"
#include "jdatadst-tj.c"
#include "jdatasrc-tj.c"
#define alpha_index alpha_index_rdbmp
#include "rdbmp.c"
#undef alpha_index
#include "rdppm.c"
#define is_big_endian is_big_endian_wrbmp
#include "wrbmp.c"
#undef is_big_endian
#include "wrppm.c"


#define my_upsampler my_upsampler_jdmerge
#define my_upsample_ptr my_upsample_ptr_jdmerge
#undef FIX
#define build_ycc_rgb_table build_ycc_rgb_table_jdmerge
#define dither_matrix       dither_matrix_jdmerge
#define is_big_endian       is_big_endian_jdmerge
#include "jdmerge.c"
#undef build_ycc_rgb_table
#undef dither_matrix      
#undef is_big_endian     
#undef FIX
#undef my_upsample_ptr
#undef my_upsampler
#define my_cconvert_ptr my_cconvert_ptr_jccolor
#define rgb_gray_convert  rgb_gray_convert_jccolor
#define null_convert      null_convert_jccolor
#define grayscale_convert grayscale_convert_jccolor
#define rgb_rgb_convert   rgb_rgb_convert_jccolor
#include "jccolor.c"
#undef rgb_gray_convert  
#undef null_convert      
#undef grayscale_convert 
#undef rgb_rgb_convert
#undef my_cconvert_ptr
#undef FIX
#undef TABLE_SIZE
#include "jdcolor.c"
#undef FIX
