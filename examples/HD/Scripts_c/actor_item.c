// @IMPORTS: FindGeometry/2,Hold/0,GetItem/2,GetItemAmount/2,RemoveActor/1,GetScene/1,self/1,CreateIntVector/1,SendWorldWndMessage/2,GetInvItemProperty/3
// @STRINGS: W:object|A:Enable|W:HasProperty|A:HasProperty|A:IsDead|W:IsDead|A:GetScene|W:noaccess|A:GetProperty|A:add|A:GetItemID|W:Category|A:AddItem
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars= params=0
// @EVENT_0: op=0xc vars=object
// @PE: 0x27

task_0_event_0(var_0_object)
{
	var_1_object = Obj(); var_2_int = 0; var_3_object = Obj(); var_4_int = 0;
	var_5_bool = 0; var_6_object = Obj();
	var_0_object = var_6_object;
	func_99(var_5_bool, var_6_object);
	var_39_bool = var_5_bool == 0; //@nz
	if(var_39_bool != 0) {
		return 4;
	}
	GetItem(var_3_object, (int)0);
	GetItemAmount(var_4_int, (int)0);
	var_42_bool = 0; var_43_object = Obj(); var_44_object = Obj(); var_45_int = 0;
	var_0_object = var_43_object;
	var_3_object = var_44_object;
	var_4_int = var_45_int;
	func_141(var_42_bool, var_43_object, var_44_object, var_45_int);
	if(var_42_bool != 0) {
		var_0_object = Obj();
		func_39();
	}
	return 4;
}
EMIT "Stack[-2] = 0";


main()
{
	var_0_object = Obj(); var_1_object = Obj();
	FindGeometry("object", var_1_object);
	@@var_1_object:Enable((bool)1);
	
Label_7:
	Hold();
	goto Label_7;
}
EMIT "Return(); Pop(2)";
EMIT "Stack[-1] = 0";


func_129(var_54_int, var_55_int)
{
	var_56_object = Obj(); var_57_object = Obj();
	CreateIntVector(var_57_object);
	@@var_57_object:add(var_54_int);
	@@var_57_object:add(var_55_int);
	SendWorldWndMessage((int)3, var_57_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_99(var_5_bool, var_6_object)
{
	var_7_int = 0; var_8_int = 0;
	var_9_bool = 0; var_10_object = Obj();
	var_6_object = var_10_object;
	func_63(var_9_bool, var_10_object);
	var_26_bool = var_9_bool == 0; //@nz
	if(var_26_bool != 0) {
		var_5_bool = 0;
		return 2;
	}
	var_27_bool = 0; var_28_object = Obj(); var_29_string = "";
	var_6_object = var_28_object;
	func_46(var_27_bool, var_28_object, "noaccess");
	var_36_bool = var_27_bool == 0; //@nz
	if(var_36_bool != 0) {
		var_5_bool = 1;
		return 2;
	}
	@@var_6_object:GetProperty("noaccess", var_8_int);
	var_5_bool = var_8_int == (int)0;
	return 2;
}


func_39()
{
	var_60_object = Obj();
	func_123(var_60_object);
	RemoveActor(var_60_object);
	return 0;
}


func_141(var_42_bool, var_43_object, var_44_object, var_45_int)
{
	var_46_int = 0; var_47_int = 0; var_48_bool = 0; var_49_int = 0; var_50_int = 0; var_51_bool = 0;
	@@var_44_object:GetItemID(var_49_int);
	GetInvItemProperty(var_50_int, var_49_int, "Category");
	@@var_43_object:AddItem(var_51_bool, var_44_object, var_50_int, var_45_int);
	var_53_bool = var_51_bool;
	if(var_53_bool != 0) {
		var_54_int = 0; var_55_int = 0;
		var_49_int = var_54_int;
		var_45_int = var_55_int;
		func_129(var_54_int, var_55_int);
	}
	var_51_bool = var_42_bool;
	return 6;
}


func_46(var_27_bool, var_28_object, var_29_string)
{
	var_30_bool = 0; var_31_bool = 0;
	var_34_bool = IsFuncExist(var_28_object, "HasProperty", (int)2);
	var_35_bool = var_34_bool == 0; //@nz
	if(var_35_bool != 0) {
		var_27_bool = 0;
		return 2;
	}
	@@var_28_object:HasProperty(var_29_string, var_31_bool);
	var_31_bool = var_27_bool;
	return 2;
}


func_58(var_20_bool, var_21_object)
{
	var_22_bool = 0; var_23_bool = 0;
	@@var_21_object:IsDead(var_23_bool);
	var_23_bool = var_20_bool;
	return 2;
}


func_123(var_60_object)
{
	var_61_object = Obj(); var_62_object = Obj();
	self(var_62_object);
	var_62_object = var_60_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_63(var_9_bool, var_10_object)
{
	var_11_object = Obj(); var_12_object = Obj(); var_13_object = Obj(); var_14_object = Obj();
	var_15_bool = var_10_object == 0; //@ne
	if(var_15_bool != 0) {
		var_9_bool = 0;
		return 4;
	}
	var_16_bool = 0;
	var_16_bool = 0;
	var_19_bool = IsFuncExist(var_10_object, "IsDead", (int)1);
	if(var_19_bool != 0) {
		var_20_bool = 0; var_21_object = Obj();
		var_10_object = var_21_object;
		func_58(var_20_bool, var_21_object);
		if(var_20_bool != 0) {
			var_16_bool = 1;
		}
	}
	if(var_16_bool != 0) {
		var_9_bool = 0;
		return 4;
	}
	GetScene(var_13_object);
	var_24_bool = var_13_object == 0; //@ne
	if(var_24_bool != 0) {
		var_9_bool = 0;
		return 4;
	}
	@@var_10_object:GetScene(var_14_object);
	var_25_bool = var_13_object != var_14_object;
	if(var_25_bool != 0) {
		var_9_bool = 0;
		return 4;
	}
	var_9_bool = 1;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


