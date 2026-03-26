// @IMPORTS: Hold/0,Trace/1,IsOverrideActive/1,WorkWithCorpse/1,SetVisibility/1,GetPosition/1,GetScene/1,GetGameTime/1,GetVariable/2,GetInvItemByName/2,AddItem/4
// @STRINGS: W:Trying to use|A:IsOnGround|W:blooddiseasedalive|W:Can't add corpse item|W:I am in region |W: and visible|W: and not visible|A:GetRegionByPt|W:Region|W:State
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars= params=0
// @EVENT_0: op=0x7 vars=object
// @EVENT_5: op=0x18 vars=
// @PE: 0x6a,0x70

task_0_event_0(var_0_object)
{
	var_1_bool = 0; var_2_bool = 0; var_3_bool = 0; var_4_bool = 0;
	Trace("Trying to use");
	@@var_0_object:IsOnGround(var_3_bool);
	var_6_bool = var_3_bool;
	if(var_6_bool != 0) {
		EventDisable(0);
		IsOverrideActive(var_4_bool);
		var_7_bool = var_4_bool == 0; //@nz
		if(var_7_bool != 0) {
			WorkWithCorpse(var_0_object);
		}
		EventEnable(0);
	}
	return 4;
}


task_0_event_5()
{
	func_40();
	return 0;
}


main()
{
	func_28();
	
Label_3:
	Hold();
	goto Label_3;
}
EMIT "Return(); Pop(0)";


func_97(var_4_int)
{
	var_5_float = 0; var_6_float = 0;
	GetGameTime(var_6_float);
	var_8_int = 0;
	var_8_int = var_6_float / (int)24;
	var_4_int = (int)1 + var_8_int;
	return 2;
}


func_134(var_8_int, var_9_string)
{
	var_10_int = 0; var_11_int = 0;
	GetInvItemByName(var_11_int, var_9_string);
	var_11_int = var_8_int;
	return 2;
}


func_40()
{
	var_0_int = 0; var_1_int = 0;
	var_2_bool = 0; var_3_int = 0;
	func_106(var_2_bool, (int)5);
	var_10_bool = var_2_bool == 0; //@nz
	if(var_10_bool != 0) {
		SetVisibility((bool)0);
		return 2;
	}
	func_86((int)0);
	var_12_int = var_1_int;
	var_20_bool = 0; var_21_int = 0;
	var_21_int = var_1_int - (int)1;
	func_118(var_20_bool, var_21_int);
	if(var_20_bool != 0) {
		SetVisibility((bool)1);
		var_36_int = "I am in region " + var_1_int;
		var_38_int = var_36_int + " and visible";
		Trace(var_38_int);
	} else {
		SetVisibility((bool)1);
		var_41_int = "I am in region " + var_1_int;
		var_43_int = var_41_int + " and not visible";
		Trace(var_43_int);
	}
	return 2;
	
}


func_106(var_2_bool, var_3_int)
{
	var_4_int = 0;
	func_97(var_4_int);
	var_2_bool = var_4_int == var_3_int;
	return 0;
}


func_139(var_0_bool, var_1_string, var_2_int, var_3_int)
{
	var_4_int = 0; var_5_bool = 0; var_6_int = 0; var_7_bool = 0;
	var_8_int = 0; var_9_string = "";
	var_1_string = var_9_string;
	func_134(var_8_int, var_9_string);
	var_8_int = var_6_int;
	var_13_bool = var_6_int == (int)-1;
	if(var_13_bool != 0) {
		var_0_bool = 0;
		return 4;
	}
	var_15_bool = var_2_int == (int)0;
	if(var_15_bool != 0) {
		var_0_bool = 1;
		return 4;
	}
	AddItem(var_7_bool, var_6_int, var_3_int, var_2_int);
	var_7_bool = var_0_bool;
	return 4;
}


func_112(var_25_string, var_26_int)
{
	var_28_int = "Region" + var_26_int;
	var_25_string = var_28_int + "State";
	return 0;
}


func_81(var_17_cvector)
{
	var_18_cvector = CVector(0,0,0); var_19_cvector = CVector(0,0,0);
	GetPosition(var_19_cvector);
	var_19_cvector = var_17_cvector;
	return 2;
}


func_86(var_12_int)
{
	var_13_object = Obj(); var_14_int = 0; var_15_object = Obj(); var_16_int = 0;
	GetScene(var_15_object);
	var_17_cvector = CVector(0,0,0);
	func_81(var_17_cvector);
	@@var_15_object:GetRegionByPt(var_16_int, var_17_cvector);
	var_16_int = var_12_int;
	return 4;
}
EMIT "Stack[-2] = 0";


func_118(var_20_bool, var_21_int)
{
	var_23_int = 0; var_24_int = 0;
	var_25_string = ""; var_26_int = 0;
	var_21_int = var_26_int;
	func_112(var_25_string, var_26_int);
	GetVariable(var_25_string, var_24_int);
	var_31_int = var_24_int & (int)3;
	var_33_bool = var_31_int == (int)1;
	if(var_33_bool != 0) {
		var_20_bool = 1;
		return 2;
	}
	var_20_bool = 0;
	return 2;
}


func_28()
{
	var_0_bool = 0; var_1_string = ""; var_2_int = 0; var_3_int = 0;
	func_139(var_0_bool, "blooddiseasedalive", (int)1, (int)0);
	var_16_bool = var_0_bool == 0; //@nz
	if(var_16_bool != 0) {
		Trace("Can't add corpse item");
	}
	return 0;
}


