// @IMPORTS: SetVisibility/1,RemoveActor/1,Hold/0,IsOverrideActive/1,WorkWithCorpse/1,self/1,GetVariable/2,CreateInvItem/1,AddItem/4
// @STRINGS: A:IsOnGround|W:nouse_container|W:branch|A:SetItemName|W:Organ|A:SetProperty|A:GetItemID|W:liver|W:kidney|W:heart|W:blood
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars= params=0
// @EVENT_6: op=0xa vars=
// @EVENT_0: op=0x14 vars=object

task_0_event_6()
{
	var_0_object = Obj();
	func_46(var_0_object);
	RemoveActor(var_0_object);
	return 0;
}


task_0_event_0(var_0_object)
{
	var_1_bool = 0; var_2_bool = 0; var_3_bool = 0; var_4_bool = 0;
	var_5_bool = 0;
	var_5_bool = 1;
	var_6_bool = var_0_object == 0; //@nz
	if(var_6_bool != 1) {
		var_7_bool = 0;
		func_52(var_7_bool);
		var_11_bool = var_7_bool == 0; //@nz
		if(var_11_bool != 1) {
			var_5_bool = 0;
		}
	}
	if(var_5_bool != 0) {
		return 4;
	}
	@@var_0_object:IsOnGround(var_3_bool);
	var_12_bool = var_3_bool;
	if(var_12_bool != 0) {
		EventDisable(0);
		IsOverrideActive(var_4_bool);
		var_13_bool = var_4_bool == 0; //@nz
		if(var_13_bool != 0) {
			WorkWithCorpse(var_0_object);
		}
		EventEnable(0);
	}
	return 4;
}


main()
{
	SetVisibility((bool)1);
	func_81();
	func_16();
	return 0;
}


func_64(var_7_string)
{
	var_8_object = Obj(); var_9_int = 0; var_10_bool = 0; var_11_object = Obj(); var_12_int = 0; var_13_bool = 0;
	CreateInvItem(var_11_object);
	@@var_11_object:SetItemName(var_7_string);
	@@var_11_object:SetProperty("Organ", (int)1);
	@@var_11_object:GetItemID(var_12_int);
	AddItem(var_13_bool, var_11_object, (int)0, (int)1);
	return 6;
}
EMIT "Stack[-3] = 0";


func_46(var_0_object)
{
	var_1_object = Obj(); var_2_object = Obj();
	self(var_2_object);
	var_2_object = var_0_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_16()
{
	
Label_16:
	Hold();
	goto Label_16;
}
EMIT "Return(); Pop(0)";


func_81()
{
	var_1_int = 0;
	func_58(var_1_int);
	var_6_bool = var_1_int != (int)1;
	if(var_6_bool != 0) {
		return 0;
	}
	var_7_string = "";
	func_64("liver");
	var_18_string = "";
	func_64("kidney");
	var_19_string = "";
	func_64("heart");
	var_20_string = "";
	func_64("blood");
	return 0;
}


func_52(var_7_bool)
{
	var_8_int = 0; var_9_int = 0;
	GetVariable("nouse_container", var_9_int);
	var_7_bool = !var_9_int;
	return 2;
}


func_58(var_1_int)
{
	var_2_int = 0; var_3_int = 0;
	GetVariable("branch", var_3_int);
	var_3_int = var_1_int;
	return 2;
}


