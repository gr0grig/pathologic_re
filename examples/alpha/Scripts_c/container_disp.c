// @IMPORTS: SetVisibility/1,Sleep/2,IsLoaded/1,SetDeathState/0,Hold/0,StopGroup0/0,IsOverrideActive/1,Barter/1,GetItemCount/1,Trace/1,GetItem/2,GetVariable/2
// @STRINGS: A:IsOnGround|W:undisposable|A:HasProperty|A:GetProperty|W:nouse_container
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=bool params=0
// @EVENT_0: op=0x17 vars=object
// @EVENT_33: op=0x30 vars=object,int,int,int
// @EVENT_34: op=0x35 vars=object,int,int,int
// @EVENT_6: op=0x43 vars=
// @PE: 0x30

task_0_event_0(var_0_bool, var_1_object)
{
	var_2_bool = 0; var_3_bool = 0; var_4_bool = 0; var_5_bool = 0;
	func_95();
	var_6_bool = 0;
	func_98(var_6_bool);
	var_10_bool = var_6_bool == 0; //@nz
	if(var_10_bool != 0) {
		return 4;
	}
	StopGroup0();
	@@var_1_object:IsOnGround(var_4_bool);
	var_11_bool = var_4_bool;
	if(var_11_bool != 0) {
		EventDisable(0);
		IsOverrideActive(var_5_bool);
		var_12_bool = var_5_bool == 0; //@nz
		if(var_12_bool != 0) {
			Barter(var_1_object);
		}
		EventEnable(0);
	}
	return 4;
}


task_0_event_33(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_int)
{
	func_95();
	return 0;
}


task_0_event_34(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_int)
{
	var_5_bool = 0; var_6_bool = 0;
	GetItemCount(var_6_bool);
	Trace(var_6_bool);
	var_7_bool = var_6_bool == 0; //@nz
	if(var_7_bool != 0) {
		SetDeathState();
	} else {
		func_95();
	}
	return 2;
	
}


task_0_event_6(var_0_bool)
{
	var_1_int = 0; var_2_int = 0; var_3_object = Obj(); var_4_bool = 0; var_5_bool = 0; var_6_int = 0; var_7_int = 0; var_8_object = Obj(); var_9_bool = 0; var_10_bool = 0;
	var_11_bool = var_0_bool;
	if(var_11_bool != 0) {
		GetItemCount(var_6_int);
		var_7_int = 0;

	Label_73:
		var_12_bool = var_7_int < var_6_int;
		if(var_12_bool != 0) {
			GetItem(var_8_object, var_7_int);
			@@var_8_object:HasProperty(var_9_bool, "undisposable");
			var_14_bool = var_9_bool;
			if(var_14_bool != 0) {
				@@var_8_object:GetProperty(var_10_bool, "undisposable");
				var_16_bool = var_10_bool;
				if(var_16_bool != 0) {
					return 10;
				}
			}
			var_8_object = 0;
			var_7_int = var_7_int + (int)1;
			goto Label_73;
		}
		SetDeathState();
	}
	return 10;
}


main(var_0_bool)
{
	var_1_bool = 0; var_2_bool = 0; var_3_bool = 0; var_4_bool = 0;
	SetVisibility((bool)1);
	
Label_4:
	var_0_bool = false;
	
Label_5:
	Sleep((float)900.0, var_3_bool);
	var_7_bool = var_3_bool == 0; //@nz
	if(var_7_bool != 0) {
		goto Label_5;
	}
	IsLoaded(var_4_bool);
	var_8_bool = var_4_bool == 0; //@nz
	if(var_8_bool != 0) {
		SetDeathState();
		var_0_bool = true;
		Hold();
		goto Label_4;
	}
	return 4;
}
EMIT "Return(); Pop(4)";


func_98(var_6_bool)
{
	var_7_int = 0; var_8_int = 0;
	GetVariable("nouse_container", var_8_int);
	var_6_bool = !var_8_int;
	return 2;
}


func_95()
{
	StopGroup0();
	return 0;
}


