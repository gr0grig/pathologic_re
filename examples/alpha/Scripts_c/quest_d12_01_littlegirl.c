// @GLOBALS: 0:object:

task task_0
{
}


task task_1
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool)
	{
		if(1 != 0) {
			func_554();
			if(var_6_int == 16263) {
				bool var_12_bool = false;
				bool var_13_bool;
				func_588(var_1_object);
				if(var_13_bool != 0) {
					bool var_21_bool;
					func_600(var_1_object);
					if(var_21_bool != 0)
						var_12_bool = true;
				}
				if(var_12_bool != 0) {
					object var_27_object; object var_28_object;
					var_27_object = var_1_object;
					var_28_object = var_0_object;
					func_582();
					func_145(var_7_bool, "Neutral");
					var_0_object->SetMessage(15005); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(15006, 16265, 16264); //@t
					var_0_object->AddReply(15017, -1, 16276); //@t
					var_0_object->AddReply(15018, 16278, 16277); //@t
					return 0;
				}
			}
			if(var_6_int == 16278) {
				func_145(var_7_bool, "Neutral");
				var_0_object->SetMessage(15019); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(15020, -1, 16279); //@t
				var_0_object->AddReply(15021, -1, 16280); //@t
				return 0;
			}
			if(var_6_int == 16265) {
				func_145(var_7_bool, "Neutral");
				var_0_object->SetMessage(15007); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(15008, 16267, 16266); //@t
				return 0;
			}
			if(var_6_int == 16267) {
				func_145(var_7_bool, "Neutral");
				var_0_object->SetMessage(15009); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(15010, -1, 16268); //@t
				var_0_object->AddReply(15011, -1, 16269); //@t
				var_0_object->AddReply(15012, 16271, 16270); //@t
				var_0_object->AddReply(15016, 16271, 16274); //@t
				return 0;
			}
			if(var_6_int == 16271) {
				func_145(var_7_bool, "Neutral");
				var_0_object->SetMessage(15013); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(15014, -1, 16272); //@t
				var_0_object->AddReply(15015, -1, 16273); //@t
				return 0;
			}
			var_3_string = true;
			bool var_99_bool;
			func_633(var_99_bool);
			if(var_99_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xa2";
	
	}

}


maintask task_2
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool)
	{
	
	Label_335:
		for(;;) {
			bool var_6_bool;
			func_471(var_6_bool);
			var_9_bool = !var_6_bool; //@nz
			if(var_9_bool == 0) goto Label_343;
			@Hold();
		}
	
	Label_343:
		@Sleep(3);
		func_397();
		goto Label_335;
	}
	EMIT "Return(); Pop(0)";

	// @pe
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, object var_6_object)
	{
		func_466();
		int var_7_int; object var_8_object;
		var_6_object = var_8_object;
		TaskCall(0);
		func_0(var_9_object, var_7_int, var_8_object);
		TaskReturn();
	}

	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, string var_6_string)
	{
		bool var_8_bool;
		if(var_6_string == "cleanup") {
			var_0_object = true;
			@IsLoaded(var_8_bool);
			bool var_11_bool = false;
			if(!var_8_bool) { //@nz
				bool var_13_bool;
				func_395(var_13_bool);
				if(var_13_bool != 0)
					var_11_bool = true;
			}
			if(var_11_bool != 0) {
				object var_14_object;
				func_561(var_14_object);
				@RemoveActor(var_14_object);
			}
		}
	}

	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool)
	{
		@StopGroup0();
		@sync();
	}

	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool)
	{
		bool var_6_bool = false;
		if(var_0_object != 0) {
			bool var_8_bool;
			func_395(var_8_bool);
			if(var_8_bool != 0)
				var_6_bool = true;
		}
		if(var_6_bool != 0) {
			object var_9_object;
			func_561(var_9_object);
			@RemoveActor(var_9_object);
		}
	}

}


void func_0(object var_0_object, int var_7_int, object var_8_object)
{
	var_0_object = var_8_object;
	bool var_18_bool; object var_19_object;
	var_8_object = var_19_object;
	func_476(var_18_bool, var_19_object);
	if(!var_18_bool) { //@nz
		var_7_int = -2;
		return 8;
	}
	object var_14_object;
	@CreateDialog(var_14_object);
	int var_59_int;
	func_629(var_59_int);
	var_14_object->SetNPCName(var_59_int);
	string var_60_string;
	func_631(var_60_string);
	var_14_object->SetPhoto(var_60_string);
	int var_61_int;
	func_612(var_61_int);
	var_14_object->SetPlayerName(var_61_int);
	bool var_15_bool;
	@IsOverrideActive(var_15_bool);
	if(var_15_bool != 0) {
		var_7_int = -2;
		return 8;
	}
	@DoDialog(var_14_object);
	object var_70_object; object var_71_object;
	var_8_object = var_70_object;
	var_14_object = var_71_object;
	TaskCall(1);
	func_63(var_72_object, var_73_object, var_74_string, var_75_bool, var_70_object, var_71_object);
	TaskReturn();
	bool var_17_bool;
	var_14_object->IsDialogEnd(var_17_bool);
	
	for(;;) {
		var_129_bool = !var_17_bool; //@nz
		if(var_129_bool == 0) goto Label_52;
		@sync();
		var_14_object->IsDialogEnd(var_17_bool);
	}
	
Label_52:
	object var_130_object;
	var_8_object = var_130_object;
	func_532();
	@StopDialog(var_14_object);
	var_14_object->GetReturnValue(-1);
	int var_16_int = var_7_int;
}
EMIT "Stack[-4] = 0";


void func_642(int var_27_int)
{
	int var_30_int; bool var_31_bool;
	var_30_int = 0;
	
	for(;;) {
		string var_33_string; int var_34_int;
		var_30_int = var_34_int;
		func_635(var_33_string, var_34_int);
		@HasAnimation(var_31_bool, "all", var_33_string);
		if(!var_31_bool) //@nz
			break;
		var_30_int += 1;
	}
	var_30_int = var_27_int;
}


void func_395(bool var_8_bool)
{
	var_8_bool = true;
}


void func_397(void)
{
	int var_20_int; int var_21_int; bool var_22_bool; float var_23_float; bool var_24_bool;
	@WaitForAnimEnd();
	bool var_25_bool;
	func_471(var_25_bool);
	if(!var_25_bool) //@nz
		return 14;
	int var_27_int;
	func_642(var_27_int);
	int var_18_int;
	var_27_int = var_18_int;
	int var_19_int = 0;
	
	for(;;) {
		bool var_40_bool = false;
		if(var_19_int < 5) {
			bool var_43_bool;
			func_471(var_43_bool);
			if(var_43_bool != 0)
				var_40_bool = true;
		}
		if(var_40_bool != 0) {
			@irand(var_20_int, 3);
			if(var_20_int == 0) {
				if(var_18_int == 0) goto Label_444;
				@irand(var_21_int, var_18_int);
				string var_49_string; int var_50_int;
				var_21_int = var_50_int;
				func_635(var_49_string, var_50_int);
				@PlayAnimation("all", var_49_string);
				@WaitForAnimEnd(var_22_bool);
				if(!var_22_bool) { //@nz
				} else {
			} else {
			if(var_20_int == 1) {
				@rand(var_23_float, 4);
				@Sleep((var_23_float + 1), var_24_bool);
				if(!var_24_bool) { //@nz
					goto Label_465;
				}
			} else if(var_19_int != 0) {
				goto Label_465;
			}
			}
				var_19_int += 1;
			}
		}
	Label_465:
		return 14;

	}
	
}


// @pe
void func_145(object var_2_object, string var_96_string)
{
	bool var_97_bool;
	func_633(var_97_bool);
	if(!var_97_bool) //@nz
		return 0;
	if(var_96_string == var_2_object)
		return 0;
	string var_100_string;
	func_536(var_100_string);
	var_2_object = var_100_string;
}


// @pe
void func_532(void)
{
	@CameraSwitchToNormal();
}


void func_536(string var_100_string)
{
	@Trace("playing " + var_100_string);
	float var_103_float;
	float var_104_float;
	@lshGetAnimTimes(var_100_string, var_103_float, var_104_float);
	@lshPlayAnimation(var_103_float, var_104_float);
	@Trace("start: " + var_103_float);
	@Trace("end: " + var_104_float);
}


void func_554(void)
{
	bool var_9_bool;
	func_633(var_9_bool);
	if(var_9_bool != 0)
		@lshStopSpeech();
}


void func_561(object var_9_object)
{
	object var_11_object;
	@self(var_11_object);
	var_11_object = var_9_object;
}
EMIT "Stack[-1] = 0";


void func_567(cvector var_43_cvector, cvector var_44_cvector)
{
	float var_47_float = sqrt(var_44_cvector | var_44_cvector);
	if(var_47_float < 0.000001)
		var_43_cvector = [0.0, 0.0, 0.0];
	var_43_cvector = var_44_cvector / var_47_float;
}


// @pe
void func_63(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_70_object, object var_71_object)
{
	var_0_object = var_71_object;
	var_1_object = var_70_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_77_bool = false;
		bool var_78_bool;
		func_588(var_1_object);
		if(var_78_bool != 0) {
			bool var_86_bool;
			func_600(var_1_object);
			if(var_86_bool != 0)
				var_77_bool = true;
		}
		if(var_77_bool != 0) {
			object var_92_object; object var_93_object;
			var_92_object = var_1_object;
			var_93_object = var_0_object;
			func_582();
			func_145(var_71_object, "Neutral");
			var_0_object->SetMessage(15005); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(15006, 16265, 16264); //@t
			var_0_object->AddReply(15017, -1, 16276); //@t
			var_0_object->AddReply(15018, 16278, 16277); //@t
		} else {
				return 0;
		}
	}
	bool var_121_bool;
	func_633(var_121_bool);
	if(var_121_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_536(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_144;
			}
			@PlayAnimation("all", "idle");
		}

	}
	Label_144:
		return 0;

	}
	
}
EMIT "GOTO 0x43";


void func_577(int var_80_int, string var_81_string)
{
	int var_83_int;
	@GetVariable(var_81_string, var_83_int);
	var_83_int = var_80_int;
}


// @pe
void func_582(void)
{
	@SetVariable("ood12Littlegirl1", 1);
}


// @pe
void func_588(bool var_78_bool)
{
	int var_80_int;
	func_577(var_80_int, "d12q01DankoKnowHeIsToy");
	if(var_80_int != 0) {
		var_78_bool = true;
		return 0;
	}
	var_78_bool = false;
}


void func_466(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_471(bool var_6_bool)
{
	bool var_8_bool;
	@IsLoaded(var_8_bool);
	var_8_bool = var_6_bool;
}


// @pe
void func_600(bool var_86_bool)
{
	int var_88_int;
	func_577(var_88_int, "ood12Littlegirl1");
	if(var_88_int == 0) {
		var_86_bool = true;
		return 0;
	}
	var_86_bool = false;
}


void func_476(bool var_18_bool, object var_19_object)
{
	cvector var_29_cvector;
	var_19_object->GetPosition(var_29_cvector);
	float var_28_float;
	var_19_object->GetEyesHeight(var_28_float);
	var_36_float = GetByIndex(var_29_cvector, 1);
	SetByIndex(var_29_cvector, 1) = (var_36_float + var_28_float);
	cvector var_30_cvector;
	@GetPosition(var_30_cvector);
	@GetEyesHeight(var_28_float);
	var_37_float = GetByIndex(var_30_cvector, 1);
	SetByIndex(var_30_cvector, 1) = (var_37_float + var_28_float);
	cvector var_31_cvector = var_29_cvector - var_30_cvector;
	var_38_float = GetByIndex(var_31_cvector, 1);
	SetByIndex(var_31_cvector, 1) = (float)0;
	var_40_float = sqrt(var_31_cvector | var_31_cvector);
	var_31_cvector /= var_40_float;
	cvector var_32_cvector = -var_31_cvector;
	cvector var_43_cvector;
	func_567(var_43_cvector, (var_32_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_33_cvector = ((var_31_cvector * 70) + (var_43_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_35_bool;
	@IsOverrideActive(var_35_bool);
	if(var_35_bool != 0)
		var_18_bool = false;
	@StopWorld();
	@CameraTransit((var_30_cvector + var_33_cvector), var_32_cvector);
	var_56_float = GetByIndex(var_33_cvector, 0);
	var_57_float = GetByIndex(var_33_cvector, 2);
	@Rotate(var_56_float, var_57_float);
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_18_bool = true;
}


void func_612(int var_61_int)
{
	int var_63_int;
	@GetVariable("player", var_63_int);
	if(var_63_int == 0) {
		var_61_int = 200001;
		return 2;
	EMIT "GOTO 0x273";
	}
	if(var_63_int == 1) {
		var_61_int = 200002;
		return 2;
	}
	var_61_int = 200003;
}


void func_629(int var_59_int)
{
	var_59_int = 3346;
}


void func_631(string var_60_string)
{
	var_60_string = "ui/NPC_None.png";
}


void func_633(bool var_97_bool)
{
	var_97_bool = false;
}


void func_635(string var_33_string, int var_34_int)
{
	string var_36_string = "idle";
	if(var_34_int != 0)
		var_36_string += var_34_int;
	var_36_string = var_33_string;
}


