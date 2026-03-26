// @IMPORTS: PlaySound/1,GetProperty/2,HasProperty/2,SetProperty/2,self/1,CreateIntVector/1,SendWorldWndMessage/2,GetInvItemProperty/3,CreateInvItem/1,CreateFloatVector/1,RumblePlay/2
// @STRINGS: W:drink|W:hunger|W:tiredness|W:health|W:bottle_empty|A:add|A:GetItemID|W:Category|A:AddItem|A:DropItems|A:SetItemName
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars= params=0
// @PE: 0x54

main()
{
	var_0_float = 0; var_1_float = 0; var_2_float = 0; var_3_float = 0;
	PlaySound("drink");
	var_5_bool = 0; var_6_string = ""; var_7_float = 0; var_8_float = 0; var_9_float = 0;
	func_59(var_5_bool, "hunger", (float)-0.009999999776482582, (float)0, (float)1);
	var_21_float = 0;
	func_149((float)-0.009999999776482582);
	GetProperty("tiredness", var_2_float);
	var_27_int = var_2_float + (float)0.029999999329447746;
	var_29_bool = var_27_int > (int)1;
	if(var_29_bool != 0) {
		var_31_int = var_2_float + (float)0.029999999329447746;
		var_3_float = var_31_int - (int)1;
		var_33_bool = 0; var_34_string = ""; var_35_float = 0; var_36_float = 0; var_37_float = 0;
		var_35_float = -var_3_float;
		func_59(var_33_bool, "health", var_35_float, (float)0, (float)1);
		var_38_float = 0;
		var_38_float = -var_3_float;
		func_159(var_38_float);
	}
	var_46_bool = 0; var_47_string = ""; var_48_float = 0; var_49_float = 0; var_50_float = 0;
	func_59(var_46_bool, "tiredness", (float)0.029999999329447746, (float)0, (float)1);
	var_51_float = 0;
	func_139((float)0.029999999329447746);
	var_55_object = Obj(); var_56_string = ""; var_57_int = 0;
	func_78(Obj());
	var_58_object = var_55_object;
	func_126(var_55_object, "bottle_empty", (int)1);
	return 4;
}


func_159(var_38_float)
{
	var_39_object = Obj(); var_40_object = Obj();
	CreateFloatVector(var_40_object);
	@@var_40_object:add(var_38_float);
	var_42_bool = var_38_float < (int)0;
	if(var_42_bool != 0) {
		RumblePlay((float)0.699999988079071, (int)500);
	}
	SendWorldWndMessage((int)15, var_40_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_107(var_63_object, var_64_object, var_65_int)
{
	var_66_int = 0; var_67_int = 0; var_68_bool = 0; var_69_int = 0; var_70_int = 0; var_71_bool = 0;
	@@var_64_object:GetItemID(var_69_int);
	GetInvItemProperty(var_70_int, var_69_int, "Category");
	@@var_63_object:AddItem(var_71_bool, var_64_object, var_70_int, var_65_int);
	var_73_bool = var_71_bool == 0; //@nz
	if(var_73_bool != 0) {
		@@var_63_object:DropItems(var_64_object, var_65_int);
	} else {
		var_74_int = 0; var_75_int = 0;
		var_69_int = var_74_int;
		var_65_int = var_75_int;
		func_95(var_74_int, var_75_int);
	}
	return 6;
	
}


func_139(var_51_float)
{
	var_52_object = Obj(); var_53_object = Obj();
	CreateFloatVector(var_53_object);
	@@var_53_object:add(var_51_float);
	SendWorldWndMessage((int)11, var_53_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_78(var_58_object)
{
	var_59_object = Obj(); var_60_object = Obj();
	self(var_60_object);
	var_60_object = var_58_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_84(var_15_float, var_16_float, var_17_float, var_18_float)
{
	var_19_bool = var_16_float < var_17_float;
	if(var_19_bool != 0) {
		var_17_float = var_15_float;
		return 0;
	}
	var_20_bool = var_16_float > var_18_float;
	if(var_20_bool != 0) {
		var_18_float = var_15_float;
		return 0;
	}
	var_16_float = var_15_float;
	return 0;
}


func_149(var_21_float)
{
	var_22_object = Obj(); var_23_object = Obj();
	CreateFloatVector(var_23_object);
	@@var_23_object:add(var_21_float);
	SendWorldWndMessage((int)12, var_23_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_59(var_5_bool, var_6_string, var_7_float, var_8_float, var_9_float)
{
	var_10_bool = 0; var_11_float = 0; var_12_bool = 0; var_13_float = 0;
	HasProperty(var_6_string, var_12_bool);
	var_14_bool = var_12_bool == 0; //@nz
	if(var_14_bool != 0) {
		var_5_bool = 0;
		return 4;
	}
	GetProperty(var_6_string, var_13_float);
	var_15_float = 0; var_16_float = 0; var_17_float = 0; var_18_float = 0;
	var_16_float = var_13_float + var_7_float;
	var_8_float = var_17_float;
	var_9_float = var_18_float;
	func_84(var_15_float, var_16_float, var_17_float, var_18_float);
	SetProperty(var_6_string, var_15_float);
	var_5_bool = 1;
	return 4;
}


func_126(var_55_object, var_56_string, var_57_int)
{
	var_61_object = Obj(); var_62_object = Obj();
	CreateInvItem(var_62_object);
	@@var_62_object:SetItemName(var_56_string);
	var_63_object = Obj(); var_64_object = Obj(); var_65_int = 0;
	var_55_object = var_63_object;
	var_62_object = var_64_object;
	var_57_int = var_65_int;
	func_107(var_63_object, var_64_object, var_65_int);
	return 2;
}
EMIT "Stack[-1] = 0";


func_95(var_74_int, var_75_int)
{
	var_76_object = Obj(); var_77_object = Obj();
	CreateIntVector(var_77_object);
	@@var_77_object:add(var_74_int);
	@@var_77_object:add(var_75_int);
	SendWorldWndMessage((int)3, var_77_object);
	return 2;
}
EMIT "Stack[-1] = 0";


