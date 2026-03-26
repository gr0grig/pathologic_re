// @IMPORTS: SetVisibility/1,Hold/0,CreateInvItem/1,SetVariable/2,RemoveActor/1,self/1,CreateIntVector/1,SendWorldWndMessage/2,GetInvItemProperty/3,CreateDiaryEntry/4,GetDiaryRoot/1,Trace/1,SendWorldWndMessage/1,SetDiarySection/1
// @STRINGS: W:avroks_blood|A:SetItemName|W:b10q03|A:add|A:GetItemID|W:Category|A:AddItem|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory
// @GLOBALS: 0:object:
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=bool params=0
// @EVENT_0: op=0x7 vars=object

task_0_event_0(var_0_bool, var_1_object)
{
	var_2_object = Obj(); var_3_object = Obj();
	var_4_bool = var_0_bool;
	if(var_4_bool != 0) {
		return 2;
	}
	CreateInvItem(var_3_object);
	@@var_3_object:SetItemName("avroks_blood");
	var_6_bool = 0; var_7_object = Obj(); var_8_object = Obj(); var_9_int = 0;
	var_1_object = var_7_object;
	var_3_object = var_8_object;
	func_56(var_6_bool, var_7_object, var_8_object, (int)1);
	if(var_6_bool != 0) {
		var_0_bool = true;
		func_73();
		SetVariable("b10q03", (int)4);
		var_48_object = Obj();
		func_38(var_48_object);
		RemoveActor(var_48_object);
	}
	return 2;
}
EMIT "Stack[-1] = 0";


main(var_0_bool)
{
	SetVisibility((bool)1);
	
Label_3:
	Hold();
	goto Label_3;
}
EMIT "Return(); Pop(0)";


func_99(var_28_bool, var_29_object, var_30_int)
{
	var_31_object = Obj(); var_32_object = Obj(); var_33_int = 0; var_34_object = Obj(); var_35_object = Obj(); var_36_int = 0;
	func_86(Obj());
	var_37_object = var_34_object;
	@@var_34_object:Find(var_30_int, var_35_object);
	var_42_bool = var_35_object == 0; //@nz
	if(var_42_bool != 0) {
		var_44_int = "Can't find diary parent with id: " + var_30_int;
		Trace(var_44_int);
		var_28_bool = 0;
		return 6;
	}
	@@var_35_object:AddChild(var_29_object);
	SendWorldWndMessage((int)7);
	@@var_29_object:GetCategory(var_36_int);
	SetDiarySection(var_36_int);
	var_28_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_38(var_48_object)
{
	var_49_object = Obj(); var_50_object = Obj();
	self(var_50_object);
	var_50_object = var_48_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_73()
{
	var_23_object = Obj(); var_24_object = Obj();
	CreateDiaryEntry(var_24_object, (int)604, (int)2, (int)531183);
	var_28_bool = 0; var_29_object = Obj(); var_30_int = 0;
	var_24_object = var_29_object;
	func_99(var_28_bool, var_29_object, (int)594);
	return 2;
}
EMIT "Stack[-1] = 0";


func_44(var_18_int, var_19_int)
{
	var_20_object = Obj(); var_21_object = Obj();
	CreateIntVector(var_21_object);
	@@var_21_object:add(var_18_int);
	@@var_21_object:add(var_19_int);
	SendWorldWndMessage((int)3, var_21_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_86(var_37_object)
{
	var_38_object = Obj(); var_39_object = Obj();
	GetDiaryRoot(var_39_object);
	var_40_bool = var_39_object == 0; //@nz
	if(var_40_bool != 0) {
		Trace("Can't retrieve diary root");
		var_37_object = 0;
		return 2;
	}
	var_39_object = var_37_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_56(var_6_bool, var_7_object, var_8_object, var_9_int)
{
	var_10_int = 0; var_11_int = 0; var_12_bool = 0; var_13_int = 0; var_14_int = 0; var_15_bool = 0;
	@@var_8_object:GetItemID(var_13_int);
	GetInvItemProperty(var_14_int, var_13_int, "Category");
	@@var_7_object:AddItem(var_15_bool, var_8_object, var_14_int, var_9_int);
	var_17_bool = var_15_bool;
	if(var_17_bool != 0) {
		var_18_int = 0; var_19_int = 0;
		var_13_int = var_18_int;
		var_9_int = var_19_int;
		func_44(var_18_int, var_19_int);
	}
	var_15_bool = var_6_bool;
	return 6;
}


