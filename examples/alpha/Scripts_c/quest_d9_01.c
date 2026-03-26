// @IMPORTS: Hold/0,Trace/1,GetMainOutdoorScene/1,AddActor/6,SetVariable/2,FindActor/2
// @STRINGS: W:place_rifles|W:d9q01_rifle|W:d9q01_rifle.xml|W:unlock_polyh|W:polyh@door1|W:fail|W:completed|W:d9q01|W:Door |W: not found|W:locked|A:SetProperty
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars= params=0
// @EVENT_26: op=0x4 vars=string

task_0_event_26(var_0_string)
{
	var_1_object = Obj(); var_2_int = 0; var_3_object = Obj(); var_4_object = Obj(); var_5_int = 0; var_6_object = Obj();
	Trace(var_0_string);
	var_8_bool = var_0_string == "place_rifles";
	if(var_8_bool != 0) {
		GetMainOutdoorScene(var_4_object);
		var_5_int = 1;

	Label_13:
		var_10_bool = var_5_int <= (int)5;
		if(var_10_bool != 0) {
			var_12_int = "d9q01_rifle" + var_5_int;
			AddActor(var_6_object, var_12_int, var_4_object, CVector(0.0, 0.0, 0.0), CVector(0.0, 0.0, 1.0), "d9q01_rifle.xml");
			var_6_object = 0;
			var_5_int = var_5_int + (int)1;
			goto Label_13;
		}
		var_4_object = 0;
	} else {
		var_18_bool = var_0_string == "unlock_polyh";
		if(var_18_bool != 0) {
			var_19_string = ""; var_20_bool = 0;
			func_75("polyh@door1", (bool)0);
			goto Label_51;
		}
		var_30_bool = var_0_string == "fail";
		if(var_30_bool != 0) {
			func_52();
			goto Label_51;
		}
		var_36_bool = var_0_string == "completed";
		if(var_36_bool == 0) goto Label_51;
		func_60();
	}
Label_51:
	return 6;
	
}


main()
{
	
Label_0:
	Hold();
	goto Label_0;
}
EMIT "Return(); Pop(0)";


func_75(var_19_string, var_20_bool)
{
	var_21_object = Obj(); var_22_object = Obj();
	FindActor(var_22_object, var_19_string);
	var_23_bool = var_22_object == 0; //@nz
	if(var_23_bool != 0) {
		var_25_int = "Door " + var_19_string;
		var_27_int = var_25_int + " not found";
		Trace(var_27_int);
	}
	@@var_22_object:SetProperty("locked", var_20_bool);
	return 2;
}
EMIT "Stack[-1] = 0";


func_52()
{
	SetVariable("d9q01", (int)-1);
	func_68();
	return 0;
}


func_60()
{
	SetVariable("d9q01", (int)1000);
	func_68();
	return 0;
}


func_68()
{
	EventDisable(26);
	var_33_string = ""; var_34_bool = 0;
	func_75("polyh@door1", (bool)1);
	return 0;
}


