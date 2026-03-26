// @IMPORTS: SetVisibility/1,SetTimeEvent/2,RemoveActor/1,Hold/0,IsOverrideActive/1,WorkWithCorpse/1,IsLoaded/1,self/1,GetVariable/2,CreateInvItem/1,AddItem/4
// @STRINGS: A:IsOnGround|W:nouse_container|W:branch|A:SetItemName|W:Organ|A:SetProperty|A:GetItemID|W:liver|W:kidney|W:heart|W:blood
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=bool params=0
// @EVENT_9: op=0xf vars=int,float
// @EVENT_6: op=0x1d vars=
// @EVENT_0: op=0x29 vars=object
// @PE: 0x0,0xf

task_0_event_9(var_0_bool, var_1_int, var_2_float)
{
	var_3_bool = 0;
	func_67(var_3_bool);
	var_6_bool = var_3_bool == 0; //@nz
	if(var_6_bool != 0) {
		var_7_object = Obj();
		func_72(var_7_object);
		RemoveActor(var_7_object);
	} else {
		var_0_bool = true;
	}
	return 0;
	
}


task_0_event_6(var_0_bool)
{
	var_1_bool = var_0_bool;
	if(var_1_bool != 0) {
		var_2_object = Obj();
		func_72(var_2_object);
		RemoveActor(var_2_object);
	}
	return 0;
}


task_0_event_0(var_0_bool, var_1_object)
{
	var_2_bool = 0; var_3_bool = 0; var_4_bool = 0; var_5_bool = 0;
	var_6_bool = 0;
	var_6_bool = 1;
	var_7_bool = var_1_object == 0; //@nz
	if(var_7_bool != 1) {
		var_8_bool = 0;
		func_78(var_8_bool);
		var_12_bool = var_8_bool == 0; //@nz
		if(var_12_bool != 1) {
			var_6_bool = 0;
		}
	}
	if(var_6_bool != 0) {
		return 4;
	}
	@@var_1_object:IsOnGround(var_4_bool);
	var_13_bool = var_4_bool;
	if(var_13_bool != 0) {
		EventDisable(0);
		IsOverrideActive(var_5_bool);
		var_14_bool = var_5_bool == 0; //@nz
		if(var_14_bool != 0) {
			WorkWithCorpse(var_1_object);
		}
		EventEnable(0);
	}
	return 4;
}


main(var_0_bool)
{
	func_107();
	SetVisibility((bool)1);
	var_0_bool = false;
	SetTimeEvent((int)0, (int)24);
	func_37();
	return 0;
}


func_67(var_3_bool)
{
	var_4_bool = 0; var_5_bool = 0;
	IsLoaded(var_5_bool);
	var_5_bool = var_3_bool;
	return 2;
}


func_37()
{
	
Label_37:
	Hold();
	goto Label_37;
}
EMIT "Return(); Pop(0)";


func_72(var_2_object)
{
	var_3_object = Obj(); var_4_object = Obj();
	self(var_4_object);
	var_4_object = var_2_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_107()
{
	var_1_int = 0;
	func_84(var_1_int);
	var_6_bool = var_1_int != (int)1;
	if(var_6_bool != 0) {
		return 0;
	}
	var_7_string = "";
	func_90("liver");
	var_18_string = "";
	func_90("kidney");
	var_19_string = "";
	func_90("heart");
	var_20_string = "";
	func_90("blood");
	return 0;
}


func_78(var_8_bool)
{
	var_9_int = 0; var_10_int = 0;
	GetVariable("nouse_container", var_10_int);
	var_8_bool = !var_10_int;
	return 2;
}


func_84(var_1_int)
{
	var_2_int = 0; var_3_int = 0;
	GetVariable("branch", var_3_int);
	var_3_int = var_1_int;
	return 2;
}


func_90(var_7_string)
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


