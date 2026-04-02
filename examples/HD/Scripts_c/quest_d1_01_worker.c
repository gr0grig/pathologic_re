// @GLOBALS: 0:object:

task task_0
{
}


task task_1
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, object var_8_object, int var_9_int, int var_10_int, bool var_11_bool, float var_12_float, int var_13_int, bool var_14_bool, object var_15_object, bool var_16_bool)
	{
		if(1 != 0) {
			func_1993();
			if(var_16_bool == 22775) {
				object var_21_object; object var_22_object;
				var_21_object = var_1_object;
				var_22_object = var_0_object;
				func_2148();
			}
			if(var_15_object == 22657) {
				func_132(var_16_bool, "Neutral");
				var_0_object->SetMessage(521496); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(521497, 34596, 22658); //@t
				var_0_object->AddReply(533084, -1, 34595); //@t
				return 0;
			}
			if(var_15_object == 34596) {
				func_132(var_16_bool, "Neutral");
				var_0_object->SetMessage(533085); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(533086, 34598, 34597); //@t
				var_0_object->AddReply(533088, -1, 34599); //@t
				return 0;
			}
			if(var_15_object == 34598) {
				func_132(var_16_bool, "Neutral");
				var_0_object->SetMessage(533087); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(521608, -1, 22775); //@t
				var_0_object->AddReply(533089, -1, 34600); //@t
				return 0;
			}
			var_3_string = true;
			bool var_75_bool;
			func_2199(var_75_bool);
			if(var_75_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x9b";
	
	}

}


maintask task_2
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, float var_10_float, int var_11_int, bool var_12_bool, object var_13_object, bool var_14_bool)
	{
	
	Label_298:
		for(;;) {
			bool var_17_bool;
			func_1859(var_17_bool);
			var_20_bool = !var_17_bool; //@nz
			if(var_20_bool == 0) goto Label_306;
			@Hold();
		}
	
	Label_306:
		float var_16_float;
		@rand(var_16_float, 3);
		@Sleep(var_16_float + 3);
		func_369();
		goto Label_298;
	}
	EMIT "Return(); Pop(2)";

	// @pe
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, object var_6_object, object var_7_object, int var_8_int, int var_9_int, bool var_10_bool, float var_11_float, int var_12_int, bool var_13_bool, object var_14_object, bool var_15_bool)
	{
		func_450();
		int var_16_int; object var_17_object;
		var_15_bool = var_17_object;
		TaskCall(0);
		func_0(var_18_object, var_16_int, var_17_object);
		TaskReturn();
	}

	void OnAttacked(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, object var_6_object, object var_7_object, int var_8_int, int var_9_int, bool var_10_bool, float var_11_float, int var_12_int, bool var_13_bool, object var_14_object, bool var_15_bool)
	{
		bool var_17_bool;
		@IsPlayerActor(var_15_bool, var_17_bool);
		if(var_17_bool != 0) {
			bool var_19_bool;
			func_2092(var_19_bool, "quest_d1_01", "attack");
		}
	}

	// @pe
	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, string var_6_string, object var_7_object, int var_8_int, int var_9_int, bool var_10_bool, float var_11_float, int var_12_int, bool var_13_bool, object var_14_object, bool var_15_bool)
	{
		if(var_15_bool == "attack") {
			func_450();
			func_318(var_15_bool);
			object var_26_object;
			object var_27_object;
			func_1560(var_27_object);
			var_27_object = var_26_object;
			TaskCall(3);
			func_455(var_26_object);
			TaskReturn();
		} else {
			string var_531_string;
			var_15_bool = var_531_string;
			func_338(var_531_string);
		}
	
	}

	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, float var_10_float, int var_11_int, bool var_12_bool, object var_13_object, bool var_14_bool)
	{
		@StopGroup0();
		@sync();
	}

	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, float var_10_float, int var_11_int, bool var_12_bool, object var_13_object, bool var_14_bool)
	{
		bool var_15_bool = false;
		if(var_0_object != 0) {
			bool var_17_bool;
			func_367(var_17_bool);
			if(var_17_bool != 0)
				var_15_bool = true;
		}
		if(var_15_bool != 0) {
			object var_18_object;
			func_2041(var_18_object);
			@RemoveActor(var_18_object);
		}
	}

}


task task_3
{
}


task task_4
{
	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, float var_10_float, int var_11_int, bool var_12_bool, object var_13_object, bool var_14_bool, int var_15_int)
	{
		if(var_15_int == 1) {
			func_2104(var_1_object);
		} else {
			int var_23_int;
			func_1342(var_14_bool, var_23_int, var_23_int);
		}
	
	}

	// @pe
	void OnSee(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, float var_10_float, int var_11_int, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object)
	{
		bool var_16_bool = false;
		if(var_1_object == var_15_object) {
			if(!var_2_object) //@nz
				var_16_bool = true;
		}
		if(var_16_bool != 0) {
			var_2_object = true;
			object var_19_object;
			var_15_object = var_19_object;
			func_1982(var_19_object);
		}
	}

	// @pe
	void OnStopSee(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, float var_10_float, int var_11_int, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object)
	{
		bool var_16_bool = false;
		if(var_1_object == var_15_object) {
			if(var_2_object != 0)
				var_16_bool = true;
		}
		if(var_16_bool != 0) {
			var_2_object = false;
			@UnlookAsync("head");
		}
	}

	// @pe
	void OnCollision(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, float var_10_float, int var_11_int, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object)
	{
		@RequestClearPath(var_15_object);
	}

	// @pe
	void OnDeath(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, float var_10_float, int var_11_int, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object)
	{
		func_1198(var_15_object);
		object var_20_object;
		var_15_object = var_20_object;
		func_2240();
	}

}


task task_5
{
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, float var_10_float, int var_11_int, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object)
	{
		bool var_17_bool;
		@IsOverrideActive(var_17_bool);
		if(!var_17_bool) { //@nz
			object var_19_object;
			var_15_object = var_19_object;
			func_2178(var_19_object);
		}
	}

	// @pe
	void OnHit(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, float var_10_float, int var_11_int, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, int var_16_int, float var_17_float, float var_18_float)
	{
	}

	// @pe
	void OnPropertyChange(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, float var_10_float, int var_11_int, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, string var_16_string)
	{
	}

	// @pe
	void OnDeath(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, float var_10_float, int var_11_int, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object)
	{
	}

}


// @pe
void OnHit(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, float var_10_float, int var_11_int, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, int var_16_int, float var_17_float, float var_18_float)
{
	object var_19_object;
	var_15_object = var_19_object;
	int var_20_int;
	var_16_int = var_20_int;
	float var_21_float;
	var_17_float = var_21_float;
	func_1766(var_19_object, var_20_int, var_21_float);
}


// @pe
void OnHit2(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, float var_10_float, int var_11_int, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, int var_16_int, float var_17_float, float var_18_float, cvector var_19_cvector, cvector var_20_cvector)
{
	object var_21_object;
	var_15_object = var_21_object;
	int var_22_int;
	var_16_int = var_22_int;
	float var_23_float;
	var_17_float = var_23_float;
	cvector var_24_cvector;
	var_19_cvector = var_24_cvector;
	cvector var_25_cvector;
	var_20_cvector = var_25_cvector;
	func_1834(var_23_float, var_24_cvector, var_25_cvector);
}


void OnPropertyChange(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, float var_10_float, int var_11_int, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, string var_16_string)
{
	float var_18_float;
	if(var_16_string == "health") {
		@GetProperty("health", var_18_float);
		if(var_18_float <= 0)
			@SignalDeath(var_15_object);
	}
}


// @pe
void OnDeath(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, float var_10_float, int var_11_int, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object)
{
	object var_16_object;
	var_15_object = var_16_object;
	func_2201(var_16_object);
}


void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, float var_10_float, int var_11_int, bool var_12_bool, object var_13_object, bool var_14_bool)
{
	object var_15_object;
	func_2041(var_15_object);
	@RemoveActor(var_15_object);
	@Hold();
}


void func_0(object var_0_object, int var_16_int, object var_17_object)
{
	var_0_object = var_17_object;
	bool var_27_bool; object var_28_object;
	var_17_object = var_28_object;
	func_1864(var_27_bool, var_28_object, 70.0);
	if(!var_27_bool) { //@nz
		var_16_int = -2;
		return 8;
	}
	object var_23_object;
	@CreateDialog(var_23_object);
	int var_75_int;
	func_2193(var_75_int);
	var_23_object->SetNPCName(var_75_int);
	int var_76_int;
	func_2191(var_76_int);
	var_23_object->SetNPCDescription(var_76_int);
	string var_77_string;
	func_2195(var_77_string);
	var_23_object->SetPhoto(var_77_string);
	string var_78_string;
	func_2197(var_78_string);
	var_23_object->SetPhoto2(var_78_string);
	int var_79_int;
	func_2155(var_79_int);
	var_23_object->SetPlayerName(var_79_int);
	bool var_24_bool;
	@IsOverrideActive(var_24_bool);
	if(var_24_bool != 0) {
		var_16_int = -2;
		return 8;
	}
	@DoDialog(var_23_object);
	object var_88_object; object var_89_object;
	var_17_object = var_88_object;
	var_23_object = var_89_object;
	TaskCall(1);
	func_74(var_90_object, var_91_object, var_92_string, var_93_bool, var_88_object, var_89_object);
	TaskReturn();
	bool var_26_bool;
	var_23_object->IsDialogEnd(var_26_bool);
	
	for(;;) {
		var_137_bool = !var_26_bool; //@nz
		if(var_137_bool == 0) goto Label_63;
		@sync();
		var_23_object->IsDialogEnd(var_26_bool);
	}
	
Label_63:
	object var_138_object;
	var_17_object = var_138_object;
	func_1933();
	@StopDialog(var_23_object);
	var_23_object->GetReturnValue(-1);
	int var_25_int = var_16_int;
}
EMIT "Stack[-4] = 0";


void func_1027(object var_0_object, bool var_4_bool, bool var_327_bool)
{
	object var_333_object; float var_335_float; cvector var_336_cvector; cvector var_337_cvector;
	@GetScene(var_333_object);
	bool var_334_bool = false;
	
	for(;;) {
		cvector var_338_cvector;
		func_1553(var_338_cvector, var_0_object);
		var_344_int = -var_338_cvector;
		@FindDirLength(var_335_float, var_344_int, var_4_bool);
		if(var_335_float < var_4_bool) {
		} else {
				@Face(var_0_object);
				@PlayAnimation("all", "bjump");
				var_0_object->GetPFPosition(var_336_cvector); //@t
				@GetPFPosition(var_337_cvector);
				@WaitForAnimEnd();
				func_1115(var_337_cvector);
				@StopAsync();
				@SetSpeed([0.0, 0.0, 0.0]);
				var_334_bool = true;
				bool var_349_bool;
				func_983(var_337_cvector, var_349_bool);
				var_350_bool = !var_349_bool; //@nz
				if(var_350_bool == 0) goto Label_1068;
		}
		for(;;) {
			var_334_bool = var_327_bool;

		}

	Label_1068:
	}
}
EMIT "Stack[-5] = 0";


// @pe
void func_1539(string var_435_string, int var_436_int)
{
	if(var_436_int == 2) {
		var_435_string = "fire";
		return 0;
	EMIT "GOTO 0x60f";
	}
	if(var_436_int == 1) {
		var_435_string = "bullet";
		return 0;
	}
	var_435_string = "phys";
}


// @pe
void func_2057(float var_445_float, float var_446_float, float var_447_float)
{
	if(var_446_float < var_447_float)
		var_446_float = var_445_float;
	else
		var_447_float = var_445_float;
	
}


// @pe
void func_2064(float var_455_float, float var_456_float, float var_457_float, float var_458_float)
{
	if(var_456_float < var_457_float) {
		var_457_float = var_455_float;
		return 0;
	}
	if(var_456_float > var_458_float) {
		var_458_float = var_455_float;
		return 0;
	}
	var_456_float = var_455_float;
}


void func_1553(cvector var_49_cvector, object var_50_object)
{
	cvector var_53_cvector;
	@GetPosition(var_53_cvector);
	cvector var_54_cvector;
	var_50_object->GetPosition(var_54_cvector);
	var_49_cvector = var_54_cvector - var_53_cvector;
}


void func_1560(object var_27_object)
{
	object var_29_object;
	@FindActor(var_29_object, "player");
	var_29_object = var_27_object;
}
EMIT "Stack[-1] = 0";


void func_2075(float var_463_float)
{
	object var_465_object;
	@CreateFloatVector(var_465_object);
	var_465_object->add(var_463_float);
	if(var_463_float < 0)
		@RumblePlay(0.7, 500);
	@SendWorldWndMessage(15, var_465_object);
}
EMIT "Stack[-1] = 0";


void func_1567(bool var_162_bool, object var_163_object)
{
	bool var_165_bool;
	@IsPlayerActor(var_163_object, var_165_bool);
	var_165_bool = var_162_bool;
}


void func_1572(bool var_50_bool, object var_51_object, string var_52_string)
{
	var_57_bool = IsFuncExist(var_51_object, "HasProperty", 2);
	if(!var_57_bool) { //@nz
		var_50_bool = false;
		return 2;
	}
	bool var_54_bool;
	var_51_object->HasProperty(var_52_string, var_54_bool);
	var_54_bool = var_50_bool;
}


void func_2092(bool var_19_bool, string var_20_string, string var_21_string)
{
	object var_23_object;
	@FindActor(var_23_object, var_20_string);
	if(var_23_object == null)
		var_19_bool = false;
	@Trigger(var_23_object, var_21_string);
	var_19_bool = true;
}
EMIT "Stack[-1] = 0";


void func_1072(object var_0_object, bool var_258_bool)
{
	bool var_260_bool;
	var_263_bool = IsFuncExist(var_0_object, "IsAttacking", 1);
	if(var_263_bool != 0) {
		var_0_object->IsAttacking(var_260_bool); //@t
		var_260_bool = var_258_bool;
	}
	var_258_bool = false;
}


void func_1584(float var_407_float, object var_408_object, float var_409_float, int var_410_int)
{
	int var_420_int; int var_422_int;
	object var_427_object;
	var_408_object = var_427_object;
	bool var_426_bool;
	func_1572(var_426_bool, var_427_object, "health");
	if(!var_426_bool) //@nz
		var_407_float = 0.0;
	bool var_430_bool; object var_431_object;
	func_1572(var_430_bool, var_431_object, "armor");
	if(!var_430_bool) //@nz
		var_420_int = 0;
	else
		var_431_object->GetProperty("armor", var_420_int);
	string var_435_string; int var_436_int;
	var_410_int = var_436_int;
	func_1539(var_435_string, var_436_int);
	string var_421_string = "armor_" + var_435_string;
	bool var_441_bool; object var_442_object; string var_443_string;
	var_408_object = var_442_object;
	func_1572(var_441_bool, var_442_object, var_443_string);
	if(!var_441_bool) //@nz
		var_422_int = 0;
	else
		var_408_object->GetProperty(var_443_string, var_422_int);

	float var_445_float;
	func_2057(var_445_float, ((var_420_int + var_422_int) / 100.0), (float)1);
	float var_423_float;
	var_445_float = var_423_float;
	float var_424_float;
	var_408_object->GetProperty("health", var_424_float);
	float var_425_float = var_409_float * (1 - var_423_float);
	float var_455_float;
	func_2064(var_455_float, (var_424_float - var_425_float), (float)0, (float)1);
	var_408_object->SetProperty("health", var_455_float);
	bool var_461_bool; object var_462_object;
	var_408_object = var_462_object;
	func_1567(var_461_bool, var_462_object);
	if(var_461_bool != 0) {
		float var_463_float = -var_425_float;
		func_2075(var_463_float);
	}
	var_425_float = var_407_float;
	
}


void func_2104(object var_18_object)
{
	bool var_20_bool;
	@IsPlayerActor(var_18_object, var_20_bool);
	if(var_20_bool != 0)
		@PlayGlobalMusic("attack");
}


void func_1083(object var_2_object, bool var_5_bool)
{
	int var_378_int;
	if(!var_2_object) //@nz
		return 4;
	if(var_5_bool != 0) {
		if((var_5_bool + -1) > 0)
			return 4;
	}
	float var_377_float;
	@rand(var_377_float);
	float var_384_float;
	func_1133(var_384_float);
	if(var_377_float < var_384_float) {
		@irand(var_378_int, var_2_object);
		@Speak("attack" + (var_378_int + 1));
		int var_389_int;
		func_1131(var_389_int);
		var_5_bool = var_389_int;
	}
}


void func_2113(void)
{
	object var_369_object;
	@GetScene(var_369_object);
	object var_371_object;
	func_2041(var_371_object);
	@BroadcastMessage("battle", var_371_object, var_369_object);
}
EMIT "Stack[-1] = 0";


// @pe
void func_74(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_88_object, object var_89_object)
{
	var_0_object = var_89_object;
	var_1_object = var_88_object;
	var_3_string = false;
	if(1 != 0) {
		func_132(var_89_object, "Neutral");
		var_0_object->SetMessage(521496); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(521497, 34596, 22658); //@t
		var_0_object->AddReply(533084, -1, 34595); //@t
		goto Label_102;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x4e";
	}
Label_102:
	bool var_119_bool;
	func_2199(var_119_bool);
	if(var_119_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_1951(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_131;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_131:
		return 0;

	}
	
}


void func_2124(string var_46_string, int var_47_int)
{
	string var_49_string = "idle";
	if(var_47_int != 0)
		var_49_string += var_47_int;
	var_49_string = var_46_string;
}


void func_2131(int var_40_int)
{
	int var_43_int; bool var_44_bool;
	var_43_int = 0;
	
	for(;;) {
		string var_46_string; int var_47_int;
		var_43_int = var_47_int;
		func_2124(var_46_string, var_47_int);
		@HasAnimation(var_44_bool, "all", var_46_string);
		if(!var_44_bool) //@nz
			break;
		var_43_int += 1;
	}
	var_43_int = var_40_int;
}


void func_1115(object var_0_object)
{
	func_2104(var_0_object);
}


void func_1120(int var_472_int)
{
	var_472_int = 0;
}


void func_1122(void)
{
	func_2000("attack_stay");
}


// @pe
void func_2148(void)
{
	bool var_23_bool;
	func_2092(var_23_bool, "quest_d1_01", "attack");
}


// @pe
void func_1127(void)
{
}


void func_1129(bool var_497_bool)
{
	var_497_bool = true;
}


void func_2155(int var_79_int)
{
	int var_81_int;
	@GetVariable("branch", var_81_int);
	if(var_81_int == 0) {
		var_79_int = 1;
		return 2;
	EMIT "GOTO 0x87a";
	}
	if(var_81_int == 1) {
		var_79_int = 2;
		return 2;
	}
	var_79_int = 3;
}


void func_1131(int var_389_int)
{
	var_389_int = 1;
}


void func_1133(float var_384_float)
{
	var_384_float = 0.5;
}


void func_1135(object var_2_object, bool var_138_bool, object var_139_object, float var_140_float, float var_141_float, bool var_142_bool, bool var_143_bool)
{
	object var_151_object;
	func_2104(var_151_object);
	@SetTimer(1, 5);
	bool var_149_bool;
	@CanSee(var_149_bool, var_151_object);
	if(var_149_bool != 0) {
		var_2_object = true;
		object var_155_object;
		var_139_object = var_155_object;
		func_1982(var_155_object);
	} else {
		var_2_object = false;
	}
	bool var_162_bool; object var_163_object;
	func_1567(var_162_bool, var_163_object);
	if(var_162_bool != 0) {
		object var_166_object;
		func_2041(var_166_object);
		@SendPlayerEnemy(var_163_object, var_166_object);
	}
	bool var_167_bool; object var_168_object; float var_169_float; float var_170_float; bool var_171_bool; bool var_172_bool;
	var_139_object = var_168_object;
	var_140_float = var_169_float;
	var_141_float = var_170_float;
	var_142_bool = var_171_bool;
	var_143_bool = var_172_bool;
	bool var_150_bool;
	func_1240(var_149_bool, var_150_bool, var_167_bool, var_168_object, var_169_float, var_170_float, var_171_bool, var_172_bool);
	var_167_bool = var_150_bool;
	if(var_2_object != 0)
		@UnlookAsync("head");
	@KillTimer(1);
	var_150_bool = var_138_bool;
	
}


void func_1657(bool var_43_bool, object var_44_object)
{
	bool var_46_bool;
	var_44_object->IsDead(var_46_bool);
	var_46_bool = var_43_bool;
}


void func_2172(int var_20_int)
{
	int var_22_int;
	@GetVariable("branch", var_22_int);
	var_22_int = var_20_int;
}


void func_1662(bool var_32_bool, object var_33_object)
{
	if(var_33_object == null) {
		var_32_bool = false;
		return 4;
	}
	bool var_39_bool = false;
	var_42_bool = IsFuncExist(var_33_object, "IsDead", 1);
	if(var_42_bool != 0) {
		bool var_43_bool; object var_44_object;
		var_33_object = var_44_object;
		func_1657(var_43_bool, var_44_object);
		if(var_43_bool != 0)
			var_39_bool = true;
	}
	if(var_39_bool != 0) {
		var_32_bool = false;
		return 4;
	}
	object var_36_object;
	@GetScene(var_36_object);
	if(var_36_object == null) {
		var_32_bool = false;
		return 4;
	}
	object var_37_object;
	var_33_object->GetScene(var_37_object);
	if(var_36_object != var_37_object) {
		var_32_bool = false;
		return 4;
	}
	var_32_bool = true;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_2178(object var_19_object)
{
	int var_20_int;
	func_2172(var_20_int);
	if(var_20_int == 1)
		@WorkWithCorpse(var_19_object);
	else
		@Barter(var_19_object);
	
}


// @pe
void func_132(object var_2_object, string var_95_string)
{
	bool var_96_bool;
	func_2199(var_96_bool);
	if(!var_96_bool) //@nz
		return 0;
	if(var_95_string == var_2_object)
		return 0;
	string var_99_string; bool var_100_bool;
	var_95_string = var_99_string;
	if(var_95_string == "")
		var_100_bool = false;
	else
		var_100_bool = true;
	func_1967(var_99_string, var_100_bool);
	var_2_object = var_95_string;
	
}


void func_2191(int var_76_int)
{
	var_76_int = 515568;
}


void func_2193(int var_75_int)
{
	var_75_int = 503353;
}


void func_2195(string var_77_string)
{
	var_77_string = "ui/NPC_Citizen1.png";
}


void func_2197(string var_78_string)
{
	var_78_string = "ui/NPC_Citizen1_b.png";
}


void func_2199(bool var_70_bool)
{
	var_70_bool = false;
}


// @pe
void func_2201(object var_16_object)
{
	object var_17_object;
	var_16_object = var_17_object;
	TaskCall(5);
	func_1391(var_17_object);
	TaskReturn();
}


void func_1698(bool var_28_bool, object var_29_object)
{
	object var_33_object;
	var_29_object = var_33_object;
	bool var_32_bool;
	func_1662(var_32_bool, var_33_object);
	if(!var_32_bool) { //@nz
		var_28_bool = false;
		return 2;
	}
	bool var_50_bool; object var_51_object;
	func_1572(var_50_bool, var_51_object, "noaccess");
	if(!var_50_bool) { //@nz
		var_28_bool = true;
		return 2;
	}
	int var_31_int;
	var_51_object->GetProperty("noaccess", var_31_int);
	var_28_bool = var_31_int == 0;
}


void func_1198(object var_2_object)
{
	@KillTimer(1);
	if(var_2_object != 0) {
		var_2_object = false;
		@UnlookAsync("head");
	}
	func_1364(var_15_object);
}


void func_1722(object var_32_object)
{
	string var_46_string;
	if(var_32_object == null)
		return 14;
	bool var_40_bool;
	@IsDead(var_40_bool);
	if(var_40_bool != 0)
		return 14;
	int var_41_int;
	@GetSecondaryAnimationType(var_41_int);
	if(var_41_int < 0)
		return 14;
	cvector var_42_cvector;
	var_32_object->GetPosition(var_42_cvector);
	cvector var_43_cvector;
	@GetPosition(var_43_cvector);
	cvector var_44_cvector;
	@GetDirection(var_44_cvector);
	cvector var_45_cvector = var_43_cvector - var_42_cvector;
	var_51_float = GetByIndex(var_45_cvector, 0);
	var_52_float = GetByIndex(var_44_cvector, 0);
	var_54_float = GetByIndex(var_45_cvector, 2);
	var_55_float = GetByIndex(var_44_cvector, 2);
	if(((var_51_float * var_52_float) + (var_54_float * var_55_float)) >= 0)
		var_46_string = "fhit";
	else
		var_46_string = "bhit";
	@FadeSecondaryAnimation("hit_react", (var_46_string + "1"), (var_46_string + "2"), -10);
	
}


void func_702(object var_1_object, object var_2_object, bool var_4_bool)
{
	bool var_65_bool; bool var_66_bool; cvector var_67_cvector;
	var_1_object = 0;
	
	for(;;) {
		@HasAnimation(var_65_bool, "all", ("attack_begin" + (var_1_object + 1)));
		if(!var_65_bool) { //@nz
		} else {
			var_1_object += 1;
		}
		var_2_object = 0;

		for(;;) {
			@IsExisting3DSound(var_66_bool, ("attack" + (var_2_object + 1)));
			if(!var_66_bool) //@nz
				break;
			var_2_object += 1;
		}
		@GetAnimationOffset(var_67_cvector, "all", "bjump");
		var_81_float = GetByIndex(var_67_cvector, 2);
		var_4_bool = -var_81_float;

	}
}


void func_1240(object var_0_object, object var_1_object, bool var_167_bool, object var_168_object, float var_169_float, float var_170_float, bool var_171_bool, bool var_172_bool)
{
	bool var_181_bool; object var_183_object; cvector var_184_cvector; cvector var_185_cvector; float var_187_float; object var_188_object;
	var_0_object = false;
	var_1_object = var_168_object;
	bool var_182_bool;
	var_172_bool = var_182_bool;
	
	for(;;) {
		bool var_189_bool; object var_190_object;
		var_168_object = var_190_object;
		func_1380(var_189_bool, var_190_object);
		if(!var_189_bool) { //@nz
			var_167_bool = false;
			return 16;
		}
		var_168_object->GetPosition(var_184_cvector);
		@GetPosition(var_185_cvector);
		var_187_float = (var_184_cvector - var_185_cvector) | (var_184_cvector - var_185_cvector);
		bool var_194_bool = false;
		if(var_170_float > 0) {
			if(var_187_float > (var_170_float * var_170_float))
				var_194_bool = true;
		}
		if(var_194_bool != 0) {
			@Stop();
			var_167_bool = false;
			return 16;
		}
		if(var_187_float > (var_169_float * var_169_float)) {
			var_168_object->GetPFPosition(var_184_cvector);
			@FindPathTo(var_188_object, var_184_cvector);
			if(var_188_object != null) {
				var_188_object = var_183_object;
				var_188_object = null;
			}
			if(var_183_object != null) {
				if(var_182_bool == 0) goto Label_1293;
				var_182_bool = false;
				@RotatePath(var_183_object, var_181_bool);
				if(!var_181_bool) { //@nz
				} else {
						@SetTimer(0, 0.3);
						string var_207_string;
						func_1387(var_207_string);
						string var_208_string;
						func_1389(var_208_string);
						@FollowPath(var_183_object, var_171_bool, var_181_bool, var_207_string, var_208_string);
						if(!var_181_bool) { //@nz
							if(var_0_object == 0) goto Label_1312;
							var_183_object = null;
						}
					EMIT "GOTO 0x521";

					Label_1312:
						} else {
					var_183_object = null;
			} else {
					@KillTimer(0);
					@Sleep(0.5, var_181_bool);
					if(!var_181_bool) { //@nz
						if(var_0_object != 0) {
							var_183_object = null;
							goto Label_1340;
						}
					}
					@SetTimer(0, 0.3);
		}
				@KillTimer(0);
				goto Label_1340;
		}
			var_188_object = null;
			goto Label_1338;

		Label_1338:
			var_183_object = null;

		}
	Label_1340:
		for(;;) {
			var_167_bool = !var_0_object;
			return 16;

			}
	}
	
}


void func_737(object var_0_object, float var_393_float, int var_394_int)
{
	object var_398_object; float var_399_float; float var_400_float;
	@GetVictim((var_393_float * 0.9), var_398_object);
	@ReportAttack(var_0_object);
	if(var_398_object == var_0_object) {
		float var_404_float; object var_405_object; int var_406_int;
		var_398_object = var_405_object;
		var_394_int = var_406_int;
		func_467(var_406_int);
		var_404_float = var_399_float;
		float var_407_float; object var_408_object; float var_409_float; int var_410_int;
		var_398_object = var_408_object;
		int var_411_int; object var_412_object; int var_413_int;
		var_398_object = var_412_object;
		var_394_int = var_413_int;
		func_470(var_413_int);
		var_411_int = var_410_int;
		func_1584(var_407_float, var_408_object, var_409_float, var_410_int);
		var_407_float = var_400_float;
		int var_472_int;
		func_1120(var_472_int);
		@ReportHit(var_0_object, var_472_int, var_400_float, var_409_float);
		object var_473_object; float var_474_float;
		var_398_object = var_473_object;
		var_400_float = var_474_float;
		func_1127();
	}
}
EMIT "Stack[-3] = 0";


void func_1766(object var_19_object, int var_20_int, float var_21_float)
{
	cvector var_31_cvector; object var_32_object; int var_33_int; bool var_34_bool; cvector var_35_cvector; cvector var_36_cvector;
	bool var_40_bool = false;
	bool var_41_bool = false;
	if(var_19_object != 0) {
		if(var_20_int != 4)
			var_41_bool = true;
	}
	if(var_41_bool != 0) {
		if(var_20_int != 5)
			var_40_bool = true;
	}
	if(var_40_bool != 0) {
		cvector var_47_cvector; cvector var_48_cvector;
		cvector var_49_cvector; object var_50_object;
		var_19_object = var_50_object;
		func_1553(var_49_cvector, var_50_object);
		var_49_cvector = var_48_cvector;
		func_2047(var_47_cvector, var_48_cvector);
		var_47_cvector = var_31_cvector;
		@CreateVectorVector(var_32_object);
		var_33_int = 1;

		for(;;) {
			@GetGeometryLocator(("hit" + var_33_int), var_34_bool, var_35_cvector, var_36_cvector);
			if(!var_34_bool) { //@nz
				break;
			Label_1828:
				var_32_object = null;
	}
			object var_109_object;
			var_19_object = var_109_object;
			func_1722(var_109_object);
		}
		if((var_36_cvector | var_31_cvector) >= 0.70710677)
			var_32_object->add(var_35_cvector);
		var_33_int += 1;
	}
	int var_37_int;
	var_32_object->size(var_37_int);
	if(var_37_int == 0) goto Label_1828;
	int var_38_int;
	@irand(var_38_int, var_37_int);
	cvector var_39_cvector;
	var_32_object->get(var_39_cvector, var_38_int);
	object var_64_object; int var_65_int; float var_66_float; cvector var_67_cvector; cvector var_68_cvector;
	var_19_object = var_64_object;
	var_20_int = var_65_int;
	var_21_float = var_66_float;
	var_39_cvector = var_67_cvector;
	var_68_cvector = -var_31_cvector;
	func_1834(var_66_float, var_67_cvector, var_68_cvector);
}


void func_776(object var_0_object, object var_1_object, bool var_356_bool, float var_357_float)
{
	string var_365_string;
	func_1115(var_365_string);
	int var_362_int;
	@irand(var_362_int, var_1_object);
	@Face(var_0_object);
	@SetAttackState(true);
	func_2113();
	@PlayAnimation("all", ("attack_begin" + (var_362_int + 1)));
	@WaitForAnimEnd();
	int var_364_int;
	func_1083(var_364_int, var_365_string);
	bool var_390_bool;
	func_1698(var_390_bool, var_0_object);
	if(!var_390_bool) { //@nz
		@StopAsync();
		var_356_bool = false;
		return 8;
	}
	float var_393_float; int var_394_int;
	var_357_float = var_393_float;
	var_362_int = var_394_int;
	func_737(var_365_string, var_393_float, var_394_int);
	bool var_363_bool;
	@HasAnimation(var_363_bool, "all", ("attack_middle" + var_362_int));
	if(var_363_bool != 0) {
		func_2113();
		@PlayAnimation("all", ("attack_middle" + var_362_int));
		@WaitForAnimEnd();
		func_1115(var_365_string);
		bool var_482_bool;
		func_1698(var_482_bool, var_0_object);
		if(!var_482_bool) { //@nz
			@StopAsync();
			var_356_bool = false;
			return 8;
		}
		float var_485_float; int var_486_int;
		var_357_float = var_485_float;
		func_737(var_365_string, var_485_float, var_486_int);
		var_364_int = 1;

		for(;;) {
			var_365_string = (("attack_middle" + var_486_int) + "_") + var_364_int;
			@HasAnimation(var_363_bool, "all", var_365_string);
			if(!var_363_bool) { //@nz
			} else {
				func_2113();
				@PlayAnimation("all", var_365_string);
				@WaitForAnimEnd();
				func_1115(var_365_string);
				bool var_508_bool;
				func_1698(var_508_bool, var_0_object);
				if(!var_508_bool) { //@nz
					@StopAsync();
					var_356_bool = false;
					return 8;
				}
				float var_511_float; int var_512_int;
				var_357_float = var_511_float;
				var_362_int = var_512_int;
				func_737(var_365_string, var_511_float, var_512_int);
				var_364_int += 1;
			}
	}
		@SetAttackState(false);
		@PlayAnimation("all", ("attack_end" + var_362_int));
		bool var_497_bool;
		func_1129(var_497_bool);
		if(var_497_bool != 0) {
			bool var_498_bool;
			func_913(var_498_bool, 0.75);
			@StopAsync();
		}
		var_356_bool = true;
		return 8;

	}
}


void func_1834(object var_21_object, cvector var_24_cvector, cvector var_25_cvector)
{
	object var_28_object;
	@GetScene(var_28_object);
	object var_29_object;
	@AddActorByType(var_29_object, "scripted", var_28_object, var_24_cvector, var_25_cvector, "blood_dir.xml");
	object var_32_object;
	var_21_object = var_32_object;
	func_1722(var_32_object);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_1848(object var_241_object)
{
	cvector var_245_cvector;
	var_241_object->GetPosition(var_245_cvector);
	cvector var_246_cvector;
	@GetPosition(var_246_cvector);
	cvector var_247_cvector = var_245_cvector - var_246_cvector;
	var_248_float = GetByIndex(var_247_cvector, 0);
	var_249_float = GetByIndex(var_247_cvector, 2);
	@RotateAsync(var_248_float, var_249_float);
}


void func_318(object var_0_object)
{
	var_0_object = true;
	bool var_19_bool;
	@IsLoaded(var_19_bool);
	bool var_20_bool = false;
	if(!var_19_bool) { //@nz
		bool var_22_bool;
		func_367(var_22_bool);
		if(var_22_bool != 0)
			var_20_bool = true;
	}
	if(var_20_bool != 0) {
		object var_23_object;
		func_2041(var_23_object);
		@RemoveActor(var_23_object);
	}
}


// @pe
void func_1342(object var_0_object, object var_1_object, int var_23_int)
{
	if(var_23_int != 0)
		return 0;
	bool var_26_bool;
	func_1380(var_26_bool, var_1_object);
	if(!var_26_bool) //@nz
		var_0_object = true;
	@KillTimer(0);
	@Stop();
}


void func_1859(bool var_17_bool)
{
	bool var_19_bool;
	@IsLoaded(var_19_bool);
	var_19_bool = var_17_bool;
}


void func_1864(bool var_27_bool, object var_28_object, float var_29_float)
{
	cvector var_40_cvector; bool var_47_bool;
	var_28_object->GetPosition(var_40_cvector);
	float var_39_float;
	var_28_object->GetEyesHeight(var_39_float);
	var_48_float = GetByIndex(var_40_cvector, 1);
	SetByIndex(var_40_cvector, 1) = (var_48_float + var_39_float);
	cvector var_41_cvector;
	@GetPosition(var_41_cvector);
	@GetEyesHeight(var_39_float);
	var_49_float = GetByIndex(var_41_cvector, 1);
	SetByIndex(var_41_cvector, 1) = (var_49_float + var_39_float);
	cvector var_42_cvector = var_40_cvector - var_41_cvector;
	var_50_float = GetByIndex(var_42_cvector, 1);
	SetByIndex(var_42_cvector, 1) = (float)0;
	var_52_float = sqrt(var_42_cvector | var_42_cvector);
	var_42_cvector /= var_52_float;
	cvector var_43_cvector = -var_42_cvector;
	cvector var_54_cvector;
	func_2047(var_54_cvector, (var_43_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_44_cvector = ((var_42_cvector * var_29_float) + (var_54_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_46_bool;
	@IsOverrideActive(var_46_bool);
	if(var_46_bool != 0)
		var_27_bool = false;
	@StopWorld();
	@CameraTransit((var_41_cvector + var_44_cvector), var_43_cvector, true);
	var_68_float = GetByIndex(var_44_cvector, 0);
	var_69_float = GetByIndex(var_44_cvector, 2);
	@Rotate(var_68_float, var_69_float);
	bool var_70_bool;
	func_2199(var_70_bool);
	if(var_70_bool != 0) {
	} else {
		@HasAnimationTrack(var_47_bool, "head");
		if(var_47_bool == 0) goto Label_1927;
		@LookAsyncCamera("head");
	}
Label_1927:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_27_bool = true;
	
}


// @pe
void func_338(string var_531_string)
{
	if(var_531_string == "cleanup")
		func_318(var_531_string);
}


void func_1364(object var_0_object)
{
	var_0_object = true;
	@KillTimer(0);
	@Stop();
}


// @pe
void func_1380(bool var_26_bool, object var_27_object)
{
	object var_29_object;
	var_27_object = var_29_object;
	bool var_28_bool;
	func_1698(var_28_bool, var_29_object);
	var_28_bool = var_26_bool;
}


void func_1387(string var_207_string)
{
	var_207_string = "walk";
}


void func_1389(string var_208_string)
{
	var_208_string = "run";
}


void func_367(bool var_17_bool)
{
	var_17_bool = true;
}


// @pe
void func_1391(object var_17_object)
{
	object var_18_object;
	var_17_object = var_18_object;
	func_1416(var_18_object);
	@SetRTEnvelope(50, 40);
	disable OnUse;
	enable OnUse;
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


void func_369(void)
{
	int var_33_int; int var_34_int; bool var_35_bool; float var_36_float; bool var_37_bool;
	@WaitForAnimEnd();
	bool var_38_bool;
	func_1859(var_38_bool);
	if(!var_38_bool) //@nz
		return 14;
	int var_40_int;
	func_2131(var_40_int);
	int var_31_int;
	var_40_int = var_31_int;
	int var_32_int = 0;
	
	for(;;) {
		bool var_53_bool = false;
		if(var_32_int < 5) {
			bool var_56_bool;
			func_1859(var_56_bool);
			if(var_56_bool != 0)
				var_53_bool = true;
		}
		if(var_53_bool != 0) {
			@irand(var_33_int, 3);
			if(var_33_int == 0) {
				if(var_31_int == 0) goto Label_416;
				@irand(var_34_int, var_31_int);
				string var_62_string; int var_63_int;
				var_34_int = var_63_int;
				func_2124(var_62_string, var_63_int);
				@PlayAnimation("all", var_62_string);
				@WaitForAnimEnd(var_35_bool);
				if(!var_35_bool) { //@nz
				} else {
			} else {
			if(var_33_int == 1) {
				@rand(var_36_float, 4);
				@Sleep((var_36_float + 1), var_37_bool);
				if(!var_37_bool) { //@nz
					goto Label_445;
				}
			} else if(var_32_int != 0) {
				goto Label_445;
			}
			}
					bool var_65_bool;
					func_448(var_65_bool);
					var_66_bool = !var_65_bool; //@nz
					if(var_66_bool == 0) goto Label_440;
			}
		}
	Label_445:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_440:
		@ResetAAS();
		var_32_int += 1;
	}
	
}


void func_1416(object var_18_object)
{
	cvector var_29_cvector; cvector var_30_cvector; cvector var_31_cvector; cvector var_32_cvector; string var_33_string; object var_34_object; bool var_35_bool; bool var_36_bool; float var_37_float; cvector var_38_cvector;
	if(var_18_object == null) {
		func_1507("fdie");
	} else {
		var_18_object->GetPosition(var_29_cvector);
		@GetPosition(var_30_cvector);
		@GetDirection(var_31_cvector);
		var_32_cvector = var_30_cvector - var_29_cvector;
		var_72_float = GetByIndex(var_32_cvector, 0);
		var_73_float = GetByIndex(var_31_cvector, 0);
		var_75_float = GetByIndex(var_32_cvector, 2);
		var_76_float = GetByIndex(var_31_cvector, 2);
		if(((var_72_float * var_73_float) + (var_75_float * var_76_float)) >= 0)
			var_33_string = "fdie";
		else
			var_33_string = "bdie";
		@RemoveRTEnvelope();
		@SetDeathState();
		@Stop();
		@StopAsync();
		var_18_object = var_34_object;
		var_83_bool = IsFuncExist(var_18_object, "GetScriptProperty", 2);
		if(var_83_bool != 0) {
			var_18_object->HasScriptProperty(var_35_bool, "Owner");
			if(var_35_bool != 0) {
				var_18_object->GetScriptProperty(var_34_object, "Owner");
				if(var_34_object == null)
					var_18_object = var_34_object;
			}
		}
		var_90_bool = IsFuncExist(var_34_object, "@GetEyesHeight", 1);
		if(var_90_bool != 0) {
			var_34_object->GetEyesHeight(var_37_float);
			var_38_cvector = [0.0, 0.0, 0.0];
			var_91_float = GetByIndex(var_38_cvector, 1);
			var_37_float = var_91_float;
			SetByIndex(var_38_cvector, 1) = var_91_float;
			@LookAsync(var_18_object, "head", var_38_cvector);
			var_36_bool = true;
		} else {
			var_36_bool = false;

		}
		string var_93_string;
		var_33_string = var_93_string;
		func_2000(var_93_string);
		@PlayAnimation("all", var_33_string);
		@WaitForAnimEnd();
		if(var_36_bool != 0) {
			@StopAsync();
			@UnlookAsync("head");
		}
		@LockAnimationEnd("all", var_33_string);
		@RemoveEnvelope();
		var_34_object = null;
	}
	
}


void func_1933(void)
{
	bool var_140_bool;
	@CameraSwitchToNormal(true);
	bool var_142_bool;
	func_2199(var_142_bool);
	if(var_142_bool != 0) {
	} else {
		@HasAnimationTrack(var_140_bool, "head");
		if(var_140_bool == 0) goto Label_1950;
		@UnlookAsync("head");
	}
Label_1950:
	
}


void func_913(bool var_498_bool, float var_499_float)
{
	float var_502_float; bool var_503_bool;
	@rand(var_502_float);
	if(var_502_float < var_499_float) {

		for(;;) {
			@IsAnimationPlaying(var_503_bool);
			if(!var_503_bool) { //@nz
			} else {
				bool var_506_bool;
				func_1011(var_506_bool);
				if(var_506_bool != 0) {
					var_498_bool = true;
					return 4;
				}
				@sync();
			}
			break;
		}
		var_498_bool = false;
		return 4;
	}
	@WaitForAnimEnd();
	func_1115(var_503_bool);
}


void func_1951(string var_121_string)
{
	bool var_125_bool; float var_126_float; float var_127_float;
	@lshHasAnimation(var_125_bool, var_121_string);
	if(var_125_bool != 0) {
		@lshGetAnimTimes(var_121_string, var_126_float, var_127_float);
		@lshPlayAnimation(var_126_float, var_127_float, false);
	} else {
		@Trace("Can't find lsh animation : " + var_121_string);
	}
	
}


void func_940(object var_0_object, bool var_295_bool, float var_296_float)
{
	bool var_302_bool; cvector var_303_cvector; cvector var_304_cvector; cvector var_305_cvector; float var_306_float;
	
	for(;;) {
		@IsAnimationPlaying(var_302_bool);
		if(!var_302_bool) //@nz
			break;
		bool var_308_bool;
		func_1011(var_308_bool);
		if(var_308_bool != 0) {
			var_295_bool = true;
			return 10;
		}
		bool var_351_bool;
		func_1698(var_351_bool, var_0_object);
		if(!var_351_bool) { //@nz
			var_295_bool = false;
			return 10;
		}
		var_0_object->GetPFPosition(var_303_cvector); //@t
		@GetPFPosition(var_304_cvector);
		var_305_cvector = var_303_cvector - var_304_cvector;
		var_306_float = var_305_cvector | var_305_cvector;
		if(var_306_float < (var_296_float * var_296_float)) {
			bool var_356_bool; float var_357_float;
			var_296_float = var_357_float;
			func_776(var_305_cvector, var_306_float, var_356_bool, var_357_float);
			var_295_bool = true;
			return 10;
		}
		@sync();
	}
	func_1115(var_306_float);
	var_295_bool = false;
}


void func_1967(string var_99_string, bool var_100_bool)
{
	bool var_106_bool; float var_107_float; float var_108_float;
	@lshHasAnimation(var_106_bool, var_99_string);
	if(var_106_bool != 0) {
		@lshGetAnimTimes(var_99_string, var_107_float, var_108_float);
		@lshPlayAnimation(var_107_float, var_108_float, var_100_bool);
	} else {
		@Trace("Can't find lsh animation : " + var_99_string);
	}
	
}


void func_1982(object var_19_object)
{
	float var_22_float;
	var_19_object->GetEyesHeight(var_22_float);
	cvector var_23_cvector = [0.0, 0.0, 0.0];
	var_24_float = GetByIndex(var_23_cvector, 1);
	var_22_float = var_24_float;
	SetByIndex(var_23_cvector, 1) = var_24_float;
	@LookAsync(var_19_object, "head", var_23_cvector);
}


void func_448(bool var_65_bool)
{
	var_65_bool = true;
}


void func_450(void)
{
	@StopAnimation();
	@StopGroup0();
}


// @pe
void func_455(object var_26_object)
{
	
	for(;;) {
		object var_37_object;
		func_473(var_33_int, var_34_bool, var_35_float, var_36_int, var_37_object, var_37_object, true, 180.0);
		@Sleep(1);
	}
}
EMIT "Return(); Pop(0)";


void func_1993(void)
{
	bool var_18_bool;
	func_2199(var_18_bool);
	if(var_18_bool != 0)
		@lshStopSpeech();
}


void func_2000(string var_41_string)
{
	bool var_50_bool; int var_51_int; bool var_52_bool; int var_53_int; bool var_54_bool; float var_55_float; cvector var_56_cvector; cvector var_57_cvector;
	@IsExisting3DSound(var_50_bool, var_41_string);
	if(!var_50_bool) { //@nz
		var_51_int = 0;

		for(;;) {
			@IsExisting3DSound(var_52_bool, (var_41_string + (var_51_int + 1)));
			if(!var_52_bool) { //@nz
				break;
			Label_2020:
				@irand(var_53_int, var_51_int);
				var_41_string += (var_53_int + 1);
	}
			@Is3DSoundLoaded(var_54_bool, var_41_string);
			if(var_54_bool != 0) {
				@GetEyesHeight(var_55_float);
				@GetDirection(var_56_cvector);
				var_57_cvector = var_56_cvector * 50;
				var_68_float = GetByIndex(var_57_cvector, 1);
				SetByIndex(var_57_cvector, 1) = (var_68_float + var_55_float);
				@PlayGlobalSound(var_41_string, var_57_cvector);
			}
		}
		var_51_int += 1;
	}
	var_63_bool = !var_51_int; //@nz
	if(var_63_bool == 0) goto Label_2020;
}


// @pe
void func_467(float var_404_float)
{
	var_404_float = 0.1;
}


// @pe
void func_470(int var_411_int)
{
	var_411_int = 0;
}


void func_983(object var_0_object, bool var_310_bool)
{
	cvector var_316_cvector; cvector var_317_cvector;
	bool var_321_bool;
	func_1698(var_321_bool, var_0_object);
	if(!var_321_bool) { //@nz
		var_310_bool = false;
		return 10;
	}
	bool var_324_bool;
	float var_320_float;
	func_1072(var_320_float, var_324_bool);
	if(var_324_bool != 0) {
		var_0_object->GetPFPosition(var_316_cvector); //@t
		@GetPFPosition(var_317_cvector);
		var_0_object->GetAttackDistance(var_320_float); //@t
		var_310_bool = ((var_316_cvector - var_317_cvector) | (var_316_cvector - var_317_cvector)) <= ((var_320_float + 50) * (var_320_float + 50));
		return 10;
	}
	var_310_bool = false;
}


void func_473(object var_0_object, string var_3_string, bool var_5_bool, object var_37_object, bool var_38_bool, float var_39_float, bool var_144_bool, bool var_236_bool)
{
	float var_51_float; cvector var_52_cvector; cvector var_53_cvector; bool var_55_bool; float var_58_float; cvector var_59_cvector; bool var_60_bool; float var_61_float;
	func_702(var_59_cvector, var_60_bool, var_61_float);
	var_5_bool = 0;
	var_86_bool = IsFuncExist(var_37_object, "@GetAttackDistance", 1);
	if(var_86_bool != 0) {
		var_37_object->GetAttackDistance(var_51_float);
		var_51_float += 50;
	} else {
						var_39_float = var_51_float;
	}
	if(var_51_float >= 150)
		var_51_float = 150;
	var_3_string = false;
	var_0_object = var_37_object;
	bool var_54_bool;
	@IsPlayerActor(var_0_object, var_54_bool);
	if(var_54_bool != 0) {
		@PlayGlobalMusic("attack");
		object var_92_object;
		func_2041(var_92_object);
		@SendPlayerEnemy(var_37_object, var_92_object);
	}
	if(var_38_bool != 0)
		var_55_bool = false;
	else
		var_55_bool = true;

	
Label_513:
	for(;;) {
		bool var_95_bool = false;
		bool var_96_bool;
		func_1698(var_96_bool, var_0_object);
		if(var_96_bool != 0) {
			if(!var_3_string) //@nz
				var_95_bool = true;
		}
		if(var_95_bool != 0) {
			func_1115(var_61_float);
			var_0_object->GetPFPosition(var_52_cvector); //@t
			@GetPFPosition(var_53_cvector);
			var_58_float = (var_52_cvector - var_53_cvector) | (var_52_cvector - var_53_cvector);
			if(var_58_float >= ((400.0 + var_51_float) * (400.0 + var_51_float))) {
				bool var_138_bool; float var_140_float;
				var_51_float = var_140_float;
				TaskCall(4);
				func_1135(var_146_bool, var_138_bool, var_0_object, var_140_float, 10000.0, true, false);
				TaskReturn();
				if(!var_144_bool) { //@nz
				} else {
					var_55_bool = false;
			} else {
			if(var_58_float >= (var_39_float * var_39_float)) {
				var_0_object->GetPFPosition(var_59_cvector); //@t
				@CanReachByPF(var_60_bool, var_59_cvector);
				if(!var_60_bool) { //@nz
					bool var_230_bool; float var_232_float;
					var_51_float = var_232_float;
					TaskCall(4);
					func_1135(var_238_bool, var_230_bool, var_0_object, var_232_float, 10000.0, true, false);
					TaskReturn();
					if(!var_236_bool) { //@nz
						goto Label_685;
					}
					var_55_bool = false;
					goto Label_513;
				}
				if(!var_55_bool) { //@nz
					func_1848(var_0_object);
					@PlayAnimation("all", "attack_on");
					@WaitForAnimEnd();
					func_1115(var_61_float);
					@StopAsync();
					var_55_bool = true;
					bool var_252_bool;
					func_1698(var_252_bool, var_0_object);
					if(!var_252_bool) { //@nz
						goto Label_685;
					}
				}
				@rand(var_61_float);
				bool var_255_bool;
				var_257_bool = var_61_float < 0.25;
				if(var_257_bool != 1) {
					bool var_258_bool;
					func_1072(true, var_258_bool);
					if(var_258_bool != 1)
						var_255_bool = false;
				}
				if(var_255_bool != 0) {
					@Face(var_0_object);
					func_1122();
					@PlayAnimation("all", "attack_stay");
					bool var_295_bool; float var_296_float;
					func_940(var_61_float, var_295_bool, var_296_float);
					@StopAsync();
				} else {
					@Face(var_0_object);
					@PlayAnimation("all", "fjump");
					@WaitForAnimEnd();
					func_1115(var_61_float);
					@SetSpeed([0.0, 0.0, 0.0]);
					@Stop();
					@StopAsync();
					bool var_517_bool;
					func_1072(var_61_float, var_517_bool);
					var_518_bool = !var_517_bool; //@nz
					if(var_518_bool == 0) goto Label_675;
					bool var_519_bool;
					func_1698(var_519_bool, var_0_object);
					if(!var_519_bool) { //@nz
						goto Label_685;
					}
					var_0_object->GetPFPosition(var_52_cvector); //@t
					@GetPFPosition(var_53_cvector);
					if(!(((var_52_cvector - var_53_cvector) | (var_52_cvector - var_53_cvector)) < (var_296_float * var_296_float))) goto Label_675;
					bool var_524_bool; float var_525_float;
					var_39_float = var_525_float;
					func_776(var_60_bool, var_61_float, var_524_bool, var_525_float);
					var_526_bool = !var_524_bool; //@nz
					if(var_526_bool == 0) goto Label_675;
					goto Label_685;
			}
				bool var_527_bool; float var_528_float;
				var_39_float = var_528_float;
				func_776(var_60_bool, var_61_float, var_527_bool, var_528_float);
				if(!var_527_bool) { //@nz
					goto Label_685;
				}
				var_55_bool = true;

			}
		Label_675:
			goto Label_684;
			}
			Label_684:
			}
		}
	Label_685:
		@WaitForAnimEnd();
		if(var_3_string != 0)
			return 22;
		@PlayAnimation("all", "attack_off");
		@WaitForAnimEnd();
		if(var_54_bool != 0)
			@Sleep(2.0);
		return 22;

	}
	
}


// @pe
void func_1507(string var_40_string)
{
	@RemoveRTEnvelope();
	@SetDeathState();
	@Stop();
	@StopAsync();
	@StopSecondaryAnimation();
	string var_41_string;
	var_40_string = var_41_string;
	func_2000(var_41_string);
	@PlayAnimation("all", var_40_string);
	@WaitForAnimEnd();
	@LockAnimationEnd("all", var_40_string);
	@RemoveEnvelope();
}


void func_1011(bool var_308_bool)
{
	bool var_309_bool = false;
	bool var_310_bool;
	func_983(var_309_bool, var_310_bool);
	if(var_310_bool != 0) {
		bool var_327_bool;
		func_1027(var_308_bool, var_309_bool, var_327_bool);
		if(var_327_bool != 0)
			var_309_bool = true;
	}
	if(var_309_bool != 0) {
		var_308_bool = true;
		return 0;
	}
	var_308_bool = false;
}


void func_2041(object var_15_object)
{
	object var_17_object;
	@self(var_17_object);
	var_17_object = var_15_object;
}
EMIT "Stack[-1] = 0";


void func_2047(cvector var_47_cvector, cvector var_48_cvector)
{
	float var_56_float = sqrt(var_48_cvector | var_48_cvector);
	if(var_56_float < 0.000001)
		var_47_cvector = [0.0, 0.0, 0.0];
	var_47_cvector = var_48_cvector / var_56_float;
}


