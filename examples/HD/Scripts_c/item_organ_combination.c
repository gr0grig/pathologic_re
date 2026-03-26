// @IMPORTS: GetItemPosByID/4,Trace/1,GetItem/3,GetProperty/2,SetProperty/2,RemoveItem/3,HasProperty/2,CreateFloatVector/1,SendWorldWndMessage/2,RumblePlay/2
// @STRINGS: W:error: |W:DiseaseRate|A:GetProperty|W:HealthIncrease|W:health|W:disease|W:GC: |A:add
// @GLOBALS: 0:int:ItemID1,1:int:ItemID2,2:int:Container
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars= params=0
// @PE: 0x53

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
	@@var_6_object:GetProperty(var_7_float, "DiseaseRate");
	@@var_6_object:GetProperty(var_8_float, "HealthIncrease");
	var_25_bool = 0; var_26_string = ""; var_27_float = 0; var_28_float = 0; var_29_float = 0;
	var_8_float = var_27_float;
	func_64(var_25_bool, "health", var_27_float, (float)0, (float)1);
	var_41_float = 0;
	var_8_float = var_41_float;
	func_104(var_41_float);
	GetProperty("disease", var_9_float);
	var_51_float = var_9_float * var_7_float;
	SetProperty("disease", var_51_float);
	var_52_float = 0;
	var_53_float = var_9_float * var_7_float;
	var_52_float = var_9_float - var_53_float;
	func_94(var_52_float);
	var_58_int = "GC: " + var_8_float;
	var_60_int = var_58_int + " ";
	var_61_int = var_60_int + var_7_float;
	Trace(var_61_int);
	var_63_int = GlobalVars[2];
	RemoveItem(var_5_int, (int)1, var_63_int);
	return 10;
}
EMIT "Stack[-4] = 0";


func_64(var_25_bool, var_26_string, var_27_float, var_28_float, var_29_float)
{
	var_30_bool = 0; var_31_float = 0; var_32_bool = 0; var_33_float = 0;
	HasProperty(var_26_string, var_32_bool);
	var_34_bool = var_32_bool == 0; //@nz
	if(var_34_bool != 0) {
		var_25_bool = 0;
		return 4;
	}
	GetProperty(var_26_string, var_33_float);
	var_35_float = 0; var_36_float = 0; var_37_float = 0; var_38_float = 0;
	var_36_float = var_33_float + var_27_float;
	var_28_float = var_37_float;
	var_29_float = var_38_float;
	func_83(var_35_float, var_36_float, var_37_float, var_38_float);
	SetProperty(var_26_string, var_35_float);
	var_25_bool = 1;
	return 4;
}


func_83(var_35_float, var_36_float, var_37_float, var_38_float)
{
	var_39_bool = var_36_float < var_37_float;
	if(var_39_bool != 0) {
		var_37_float = var_35_float;
		return 0;
	}
	var_40_bool = var_36_float > var_38_float;
	if(var_40_bool != 0) {
		var_38_float = var_35_float;
		return 0;
	}
	var_36_float = var_35_float;
	return 0;
}


func_104(var_41_float)
{
	var_42_object = Obj(); var_43_object = Obj();
	CreateFloatVector(var_43_object);
	@@var_43_object:add(var_41_float);
	var_45_bool = var_41_float < (int)0;
	if(var_45_bool != 0) {
		RumblePlay((float)0.699999988079071, (int)500);
	}
	SendWorldWndMessage((int)15, var_43_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_94(var_52_float)
{
	var_54_object = Obj(); var_55_object = Obj();
	CreateFloatVector(var_55_object);
	@@var_55_object:add(var_52_float);
	SendWorldWndMessage((int)14, var_55_object);
	return 2;
}
EMIT "Stack[-1] = 0";


