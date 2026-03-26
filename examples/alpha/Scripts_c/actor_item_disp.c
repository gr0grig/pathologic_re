// @IMPORTS: RemoveActor/1,IsLoaded/1,FindGeometry/2,Hold/0,GetItem/2,GetItemAmount/2,SetDeathStateAndRemove/0,GetScene/1,self/1,GetInvItemProperty/3
// @STRINGS: W:cleanup|W:object|A:Enable|W:HasProperty|A:HasProperty|A:IsDead|W:IsDead|A:GetScene|W:noaccess|A:GetProperty|A:GetItemID|W:Category|A:AddItem
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=bool params=0
// @EVENT_26: op=0xd vars=string
// @EVENT_6: op=0x1c vars=
// @EVENT_0: op=0x2c vars=object
// @PE: 0x49

task_0_event_26(var_0_bool, var_1_string)
{
	var_2_bool = 0; var_3_bool = 0;
	var_5_bool = var_1_string == "cleanup";
	if(var_5_bool != 0) {
		var_0_bool = true;
		IsLoaded(var_3_bool);
		var_6_bool = var_3_bool == 0; //@nz
		if(var_6_bool != 0) {
			var_7_object = Obj();
			func_152(var_7_object);
			RemoveActor(var_7_object);
		}
	}
	return 2;
}


task_0_event_6(var_0_bool)
{
	func_5();
	return 0;
}


task_0_event_0(var_0_bool, var_1_object)
{
	var_2_object = Obj(); var_3_int = 0; var_4_object = Obj(); var_5_int = 0;
	var_6_bool = 0; var_7_object = Obj();
	var_1_object = var_7_object;
	func_128(var_6_bool, var_7_object);
	var_40_bool = var_6_bool == 0; //@nz
	if(var_40_bool != 0) {
		return 4;
	}
	GetItem(var_4_object, (int)0);
	GetItemAmount(var_5_int, (int)0);
	var_43_bool = 0; var_44_object = Obj(); var_45_object = Obj(); var_46_int = 0;
	var_1_object = var_44_object;
	var_4_object = var_45_object;
	var_5_int = var_46_int;
	func_158(var_43_bool, var_44_object, var_45_object, var_46_int);
	if(var_43_bool != 0) {
		var_1_object = Obj();
		func_73();
		SetDeathStateAndRemove();
	}
	return 4;
}
EMIT "Stack[-2] = 0";


main(var_0_bool)
{
	var_0_bool = false;
	func_32();
	return 0;
}


func_32()
{
	var_1_object = Obj(); var_2_object = Obj();
	FindGeometry("object", var_2_object);
	@@var_2_object:Enable((bool)1);
	
Label_39:
	Hold();
	goto Label_39;
}
EMIT "Return(); Pop(2)";
EMIT "Stack[-1] = 0";


func_128(var_6_bool, var_7_object)
{
	var_8_int = 0; var_9_int = 0;
	var_10_bool = 0; var_11_object = Obj();
	var_7_object = var_11_object;
	func_92(var_10_bool, var_11_object);
	var_27_bool = var_10_bool == 0; //@nz
	if(var_27_bool != 0) {
		var_6_bool = 0;
		return 2;
	}
	var_28_bool = 0; var_29_object = Obj(); var_30_string = "";
	var_7_object = var_29_object;
	func_75(var_28_bool, var_29_object, "noaccess");
	var_37_bool = var_28_bool == 0; //@nz
	if(var_37_bool != 0) {
		var_6_bool = 1;
		return 2;
	}
	@@var_7_object:GetProperty("noaccess", var_9_int);
	var_6_bool = var_9_int == (int)0;
	return 2;
}


func_5()
{
	var_1_bool = var_0_bool;
	if(var_1_bool != 0) {
		var_2_object = Obj();
		func_152(var_2_object);
		RemoveActor(var_2_object);
	}
	return 0;
}


func_73()
{
	return 0;
}


func_75(var_28_bool, var_29_object, var_30_string)
{
	var_31_bool = 0; var_32_bool = 0;
	var_35_bool = IsFuncExist(var_29_object, "HasProperty", (int)2);
	var_36_bool = var_35_bool == 0; //@nz
	if(var_36_bool != 0) {
		var_28_bool = 0;
		return 2;
	}
	@@var_29_object:HasProperty(var_30_string, var_32_bool);
	var_32_bool = var_28_bool;
	return 2;
}


func_87(var_21_bool, var_22_object)
{
	var_23_bool = 0; var_24_bool = 0;
	@@var_22_object:IsDead(var_24_bool);
	var_24_bool = var_21_bool;
	return 2;
}


func_152(var_2_object)
{
	var_3_object = Obj(); var_4_object = Obj();
	self(var_4_object);
	var_4_object = var_2_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_92(var_10_bool, var_11_object)
{
	var_12_object = Obj(); var_13_object = Obj(); var_14_object = Obj(); var_15_object = Obj();
	var_16_bool = var_11_object == 0; //@ne
	if(var_16_bool != 0) {
		var_10_bool = 0;
		return 4;
	}
	var_17_bool = 0;
	var_17_bool = 0;
	var_20_bool = IsFuncExist(var_11_object, "IsDead", (int)1);
	if(var_20_bool != 0) {
		var_21_bool = 0; var_22_object = Obj();
		var_11_object = var_22_object;
		func_87(var_21_bool, var_22_object);
		if(var_21_bool != 0) {
			var_17_bool = 1;
		}
	}
	if(var_17_bool != 0) {
		var_10_bool = 0;
		return 4;
	}
	GetScene(var_14_object);
	var_25_bool = var_14_object == 0; //@ne
	if(var_25_bool != 0) {
		var_10_bool = 0;
		return 4;
	}
	@@var_11_object:GetScene(var_15_object);
	var_26_bool = var_14_object != var_15_object;
	if(var_26_bool != 0) {
		var_10_bool = 0;
		return 4;
	}
	var_10_bool = 1;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_158(var_43_bool, var_44_object, var_45_object, var_46_int)
{
	var_47_int = 0; var_48_int = 0; var_49_bool = 0; var_50_int = 0; var_51_int = 0; var_52_bool = 0;
	@@var_45_object:GetItemID(var_50_int);
	GetInvItemProperty(var_51_int, var_50_int, "Category");
	@@var_44_object:AddItem(var_52_bool, var_45_object, var_51_int, var_46_int);
	var_52_bool = var_43_bool;
	return 6;
}


