// @IMPORTS: GetItemPosByID/4,Trace/1,GetItem/3,RemoveItem/3,HasProperty/2,GetProperty/2,SetProperty/2,CreateFloatVector/1,SendWorldWndMessage/2,RumblePlay/2
// @STRINGS: W:error: |W:hl_inc|A:GetProperty|W:im_inc|W:GC: |W:health|W:immunity|A:add
// @GLOBALS: 0:int:ItemID1,1:int:ItemID2,2:int:Container
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars= params=0
// @PE: 0x55

main()
{
	var_0_int = 0; var_1_object = Obj(); var_2_float = 0; var_3_float = 0; var_4_float = 0; var_5_int = 0; var_6_object = Obj(); var_7_float = 0; var_8_float = 0; var_9_float = 0;
	var_10_int = GlobalVars[0];
	var_11_int = GlobalVars[1];
	var_12_int = GlobalVars[2];
	GetItemPosByID(var_5_int, var_10_int, var_11_int, var_12_int);
	var_14_bool = var_5_int == (int)-1;
	if(var_14_bool != 0) {
		var_16_int = GlobalVars[0];
		var_17_int = "error: " + var_16_int;
		var_19_int = var_17_int + " ";
		var_20_int = GlobalVars[1];
		var_21_int = var_19_int + var_20_int;
		Trace(var_21_int);
		return 10;
	}
	var_22_int = GlobalVars[2];
	GetItem(var_6_object, var_5_int, var_22_int);
	@@var_6_object:GetProperty(var_7_float, "hl_inc");
	@@var_6_object:GetProperty(var_8_float, "im_inc");
	var_26_int = "GC: " + var_7_float;
	var_28_int = var_26_int + " ";
	var_29_int = var_28_int + var_8_float;
	var_31_int = var_29_int + " ";
	var_32_int = var_31_int + var_9_float;
	Trace(var_32_int);
	var_33_bool = 0; var_34_string = ""; var_35_float = 0; var_36_float = 0; var_37_float = 0;
	var_7_float = var_35_float;
	func_66(var_33_bool, "health", var_35_float, (float)0, (float)1);
	var_49_float = 0;
	var_7_float = var_49_float;
	func_106(var_49_float);
	var_57_bool = 0; var_58_string = ""; var_59_float = 0; var_60_float = 0; var_61_float = 0;
	var_8_float = var_59_float;
	func_66(var_57_bool, "immunity", var_59_float, (float)0, (float)1);
	var_62_float = 0;
	var_8_float = var_62_float;
	func_96(var_62_float);
	var_67_int = GlobalVars[2];
	RemoveItem(var_5_int, (int)1, var_67_int);
	return 10;
}
EMIT "Stack[-4] = 0";


func_96(var_62_float)
{
	var_63_object = Obj(); var_64_object = Obj();
	CreateFloatVector(var_64_object);
	@@var_64_object:add(var_62_float);
	SendWorldWndMessage((int)13, var_64_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_66(var_33_bool, var_34_string, var_35_float, var_36_float, var_37_float)
{
	var_38_bool = 0; var_39_float = 0; var_40_bool = 0; var_41_float = 0;
	HasProperty(var_34_string, var_40_bool);
	var_42_bool = var_40_bool == 0; //@nz
	if(var_42_bool != 0) {
		var_33_bool = 0;
		return 4;
	}
	GetProperty(var_34_string, var_41_float);
	var_43_float = 0; var_44_float = 0; var_45_float = 0; var_46_float = 0;
	var_44_float = var_41_float + var_35_float;
	var_36_float = var_45_float;
	var_37_float = var_46_float;
	func_85(var_43_float, var_44_float, var_45_float, var_46_float);
	SetProperty(var_34_string, var_43_float);
	var_33_bool = 1;
	return 4;
}


func_85(var_43_float, var_44_float, var_45_float, var_46_float)
{
	var_47_bool = var_44_float < var_45_float;
	if(var_47_bool != 0) {
		var_45_float = var_43_float;
		return 0;
	}
	var_48_bool = var_44_float > var_46_float;
	if(var_48_bool != 0) {
		var_46_float = var_43_float;
		return 0;
	}
	var_44_float = var_43_float;
	return 0;
}


func_106(var_49_float)
{
	var_50_object = Obj(); var_51_object = Obj();
	CreateFloatVector(var_51_object);
	@@var_51_object:add(var_49_float);
	var_53_bool = var_49_float < (int)0;
	if(var_53_bool != 0) {
		RumblePlay((float)0.699999988079071, (int)500);
	}
	SendWorldWndMessage((int)15, var_51_object);
	return 2;
}
EMIT "Stack[-1] = 0";


