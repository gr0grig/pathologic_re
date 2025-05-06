task_0_event_200(var_0_int, var_1_string, var_2_object)
{
	var_3_string = "people_button"; // 0x95 PushS
	var_4_bool = var_1_string == var_3_string; // 0x96 Eq
	if(var_4_bool == 0) goto Label_155; // 0x97 JumpB
	var_5_int = 1; // 0x98 PushI
	DestroyWindow(var_5_int); // 0x99 Func
	
Label_155:
	return 0; // 0x9b Return
}


task_0_event_100(var_0_int)
{
	DestroyWindow(); // 0x9d Func
	return 0; // 0x9f Return
}


main()
{
	var_0_object = Obj(); var_1_float = 0; var_2_float = 0; var_3_float = 0; var_4_float = 0; var_5_float = 0; var_6_float = 0; var_7_object = Obj(); var_8_float = 0; var_9_float = 0; var_10_float = 0; var_11_float = 0; var_12_float = 0; var_13_float = 0; // 0x0 PushV
	CaptureKeyboard(); // 0x1 Func
	var_14_string = "default"; // 0x3 PushS
	SetCursor(var_14_string); // 0x4 Func
	var_15_string = "player"; // 0x6 PushS
	FindActor(var_7_object, var_15_string); // 0x7 Func
	var_16_bool = var_7_object == 0; // 0x9 Not
	if(var_16_bool == 0) goto Label_14; // 0xa JumpB
	DestroyWindow(); // 0xb Func
	return 14; // 0xd Return
	
Label_14:
	var_17_string = "health"; // 0xe PushS
	GetProperty(var_17_string, var_8_float); // 0xf ObjFunc
	var_18_int = 100; // 0x11 PushI
	var_19_float = var_18_int * var_8_float; // 0x12 Mult
	var_20_string = "health"; // 0x13 PushS
	SendMessage(var_19_float, var_20_string); // 0x14 Func
	var_21_string = "immunity"; // 0x16 PushS
	GetProperty(var_21_string, var_8_float); // 0x17 ObjFunc
	var_22_int = 100; // 0x19 PushI
	var_23_float = var_22_int * var_8_float; // 0x1a Mult
	var_24_string = "immunity"; // 0x1b PushS
	SendMessage(var_23_float, var_24_string); // 0x1c Func
	var_25_string = "reputation"; // 0x1e PushS
	GetProperty(var_25_string, var_8_float); // 0x1f ObjFunc
	var_26_int = 100; // 0x21 PushI
	var_27_float = var_26_int * var_8_float; // 0x22 Mult
	var_28_string = "reputation"; // 0x23 PushS
	SendMessage(var_27_float, var_28_string); // 0x24 Func
	var_29_string = "hunger"; // 0x26 PushS
	GetProperty(var_29_string, var_8_float); // 0x27 ObjFunc
	var_30_int = 100; // 0x29 PushI
	var_31_float = var_30_int * var_8_float; // 0x2a Mult
	var_32_string = "hunger"; // 0x2b PushS
	SendMessage(var_31_float, var_32_string); // 0x2c Func
	var_33_string = "tiredness"; // 0x2e PushS
	GetProperty(var_33_string, var_8_float); // 0x2f ObjFunc
	var_34_int = 100; // 0x31 PushI
	var_35_float = var_34_int * var_8_float; // 0x32 Mult
	var_36_string = "tiredness"; // 0x33 PushS
	SendMessage(var_35_float, var_36_string); // 0x34 Func
	var_37_string = "disease"; // 0x36 PushS
	GetProperty(var_37_string, var_8_float); // 0x37 ObjFunc
	var_38_int = 100; // 0x39 PushI
	var_39_float = var_38_int * var_8_float; // 0x3a Mult
	var_40_string = "infection"; // 0x3b PushS
	SendMessage(var_39_float, var_40_string); // 0x3c Func
	var_41_string = "armor"; // 0x3e PushS
	GetProperty(var_41_string, var_9_float); // 0x3f ObjFunc
	var_42_string = "armor_fire"; // 0x41 PushS
	GetProperty(var_42_string, var_10_float); // 0x42 ObjFunc
	var_43_string = "armor_phys"; // 0x44 PushS
	GetProperty(var_43_string, var_11_float); // 0x45 ObjFunc
	var_44_string = "armor_bullet"; // 0x47 PushS
	GetProperty(var_44_string, var_12_float); // 0x48 ObjFunc
	var_45_string = "armor_disease"; // 0x4a PushS
	GetProperty(var_45_string, var_13_float); // 0x4b ObjFunc
	var_46_int = var_9_float + var_10_float; // 0x4d Add
	var_47_string = "armor_fire"; // 0x4e PushS
	SendMessage(var_46_int, var_47_string); // 0x4f Func
	var_48_int = var_9_float + var_11_float; // 0x51 Add
	var_49_string = "armor_phys"; // 0x52 PushS
	SendMessage(var_48_int, var_49_string); // 0x53 Func
	var_50_int = var_9_float + var_12_float; // 0x55 Add
	var_51_string = "armor_bullet"; // 0x56 PushS
	SendMessage(var_50_int, var_51_string); // 0x57 Func
	var_52_string = "armor_disease"; // 0x59 PushS
	SendMessage(var_13_float, var_52_string); // 0x5a Func
	var_53_int = 700; // 0x5c PushI
	var_54_string = "reputation_text"; // 0x5d PushS
	SendMessage(var_53_int, var_54_string); // 0x5e Func
	var_55_int = 701; // 0x60 PushI
	var_56_string = "health_text"; // 0x61 PushS
	SendMessage(var_55_int, var_56_string); // 0x62 Func
	var_57_int = 702; // 0x64 PushI
	var_58_string = "immunity_text"; // 0x65 PushS
	SendMessage(var_57_int, var_58_string); // 0x66 Func
	var_59_int = 703; // 0x68 PushI
	var_60_string = "hunger_text"; // 0x69 PushS
	SendMessage(var_59_int, var_60_string); // 0x6a Func
	var_61_int = 704; // 0x6c PushI
	var_62_string = "tiredness_text"; // 0x6d PushS
	SendMessage(var_61_int, var_62_string); // 0x6e Func
	var_63_int = 705; // 0x70 PushI
	var_64_string = "infection_text"; // 0x71 PushS
	SendMessage(var_63_int, var_64_string); // 0x72 Func
	var_65_int = 706; // 0x74 PushI
	var_66_string = "armor_phys_text"; // 0x75 PushS
	SendMessage(var_65_int, var_66_string); // 0x76 Func
	var_67_int = 707; // 0x78 PushI
	var_68_string = "armor_bullet_text"; // 0x79 PushS
	SendMessage(var_67_int, var_68_string); // 0x7a Func
	var_69_int = 708; // 0x7c PushI
	var_70_string = "armor_fire_text"; // 0x7d PushS
	SendMessage(var_69_int, var_70_string); // 0x7e Func
	var_71_int = 709; // 0x80 PushI
	var_72_string = "armor_disease_text"; // 0x81 PushS
	SendMessage(var_71_int, var_72_string); // 0x82 Func
	var_73_int = 710; // 0x84 PushI
	var_74_string = "body_text"; // 0x85 PushS
	SendMessage(var_73_int, var_74_string); // 0x86 Func
	var_75_int = 711; // 0x88 PushI
	var_76_string = "clothes_text"; // 0x89 PushS
	SendMessage(var_75_int, var_76_string); // 0x8a Func
	var_77_int = 712; // 0x8c PushI
	var_78_string = "time_text"; // 0x8d PushS
	SendMessage(var_77_int, var_78_string); // 0x8e Func
	ProcessEvents(); // 0x90 Func
	return 14; // 0x92 Return
}


