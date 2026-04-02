// @GLOBALS: 0:object:

task task_0
{
}


task task_1
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, object var_7_object, cvector var_8_cvector, bool var_9_bool, object var_10_object, int var_11_int, int var_12_int, bool var_13_bool, float var_14_float, int var_15_int, bool var_16_bool, object var_17_object, bool var_18_bool)
	{
		if(1 != 0) {
			func_2296();
			if(var_18_bool == 19225) {
				object var_23_object = var_1_object;
				func_2502(var_0_object);
			}
			if(var_18_bool == 19226) {
				object var_30_object = var_1_object;
				func_2497(var_0_object);
			}
			if(var_18_bool == 20788) {
				object var_35_object = var_1_object;
				func_2502(var_0_object);
			}
			if(var_18_bool == 20778) {
				object var_39_object = var_1_object;
				func_2497(var_0_object);
			}
			if(var_17_object == 19224) {
				func_132(var_18_bool, "Neutral");
				var_0_object->SetMessage(518092); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(519592, 20773, 20772); //@t
				var_0_object->AddReply(519588, 20769, 20768); //@t
				return 0;
			}
			if(var_17_object == 20769) {
				func_132(var_18_bool, "Neutral");
				var_0_object->SetMessage(519589); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(519590, 20771, 20770); //@t
				var_0_object->AddReply(519596, 20773, 20776); //@t
				return 0;
			}
			if(var_17_object == 20771) {
				func_132(var_18_bool, "Neutral");
				var_0_object->SetMessage(519591); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(519597, -1, 20778); //@t
				var_0_object->AddReply(519598, 20773, 20779); //@t
				return 0;
			}
			if(var_17_object == 20773) {
				func_132(var_18_bool, "Neutral");
				var_0_object->SetMessage(519593); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(519594, 20775, 20774); //@t
				return 0;
			}
			if(var_17_object == 20775) {
				func_132(var_18_bool, "Neutral");
				var_0_object->SetMessage(519595); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(519599, 28362, 20781); //@t
				var_0_object->AddReply(519600, 20786, 20782); //@t
				return 0;
			}
			if(var_17_object == 20786) {
				func_132(var_18_bool, "Neutral");
				var_0_object->SetMessage(519603); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(519604, 20784, 20787); //@t
				var_0_object->AddReply(519605, -1, 20788); //@t
				return 0;
			}
			if(var_17_object == 28362) {
				func_132(var_18_bool, "Neutral");
				var_0_object->SetMessage(527067); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527068, 20784, 28363); //@t
				var_0_object->AddReply(527069, 20784, 28364); //@t
				return 0;
			}
			if(var_17_object == 20784) {
				func_132(var_18_bool, "Neutral");
				var_0_object->SetMessage(519602); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(518093, -1, 19225); //@t
				var_0_object->AddReply(518094, -1, 19226); //@t
				return 0;
			}
			var_3_string = true;
			bool var_129_bool;
			func_2555(var_129_bool);
			if(var_129_bool != 0)
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
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, int var_9_int, int var_10_int, bool var_11_bool, float var_12_float, int var_13_int, bool var_14_bool, object var_15_object, bool var_16_bool)
	{
	
		for(;;) {
			@Sleep(3);
			func_443();
		}
	}
	EMIT "Return(); Pop(0)";

	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, int var_10_int, int var_11_int, bool var_12_bool, float var_13_float, int var_14_int, bool var_15_bool, object var_16_object, bool var_17_bool)
	{
		func_524();
		int var_20_int; object var_21_object;
		var_17_bool = var_21_object;
		TaskCall(0);
		func_0(var_22_object, var_20_int, var_21_object);
		TaskReturn();
		int var_19_int;
		var_22_object = var_19_int;
		if(var_19_int == 0) {
			bool var_140_bool; object var_141_object;
			var_17_bool = var_141_object;
			func_2386(var_140_bool, var_141_object, 0.05);
			object var_178_object;
			var_17_bool = var_178_object;
			TaskCall(3);
			func_529(var_178_object);
			TaskReturn();
		} else if(var_19_int == 1) {
			object var_253_object;
			var_17_bool = var_253_object;
			TaskCall(4);
			func_739(var_253_object, true);
			TaskReturn();
		}
	
	}

	// @pe
	void OnAttacked(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, int var_10_int, int var_11_int, bool var_12_bool, float var_13_float, int var_14_int, bool var_15_bool, object var_16_object, bool var_17_bool)
	{
		object var_19_object;
		var_17_bool = var_19_object;
		bool var_18_bool;
		func_2630(var_18_bool, var_19_object);
		if(var_18_bool != 0) {
			func_524();
			object var_54_object;
			var_17_bool = var_54_object;
			func_2637(var_54_object);
		}
	}

}


task task_3
{
	// @pe
	void OnAttacked(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, object var_9_object, int var_10_int, int var_11_int, bool var_12_bool, float var_13_float, int var_14_int, bool var_15_bool, object var_16_object, bool var_17_bool)
	{
		bool var_18_bool; object var_19_object;
		func_2630(var_18_bool, var_19_object);
		if(var_18_bool != 0) {
			func_707(var_19_object);
			object var_55_object;
			var_17_bool = var_55_object;
			func_2637(var_55_object);
		}
	}

	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, cvector var_6_cvector, bool var_7_bool, int var_8_int, object var_9_object, int var_10_int, int var_11_int, bool var_12_bool, float var_13_float, int var_14_int, bool var_15_bool, object var_16_object, bool var_17_bool)
	{
		cvector var_22_cvector; float var_23_float; cvector var_24_cvector; float var_25_float;
		if(var_17_bool != 120) {
		}
		if(var_0_object == null) {
			@Stop();
			@KillTimer(1);
			var_2_object = true;
		} else {
			@GetDirection(var_22_cvector);
			@FindDirLength(var_23_float, var_22_cvector, 7000.0);
			cvector var_31_cvector;
			func_552(var_25_float, var_31_cvector, 1.7453294);
			var_31_cvector = var_24_cvector;
			var_25_float = var_24_cvector | var_24_cvector;
			bool var_61_bool = false;
			if(var_25_float >= 2500.0) {
				bool var_64_bool;
				var_68_bool = var_25_float >= ((var_23_float * var_23_float) * 2.25);
				if(var_68_bool != 1) {
					bool var_69_bool;
					func_723(true, var_69_bool);
					if(var_69_bool != 1)
						var_64_bool = false;
				}
				if(var_64_bool != 0)
					var_61_bool = true;
			}
			if(var_61_bool == 0) goto Label_706;
			@Stop();
			cvector var_89_cvector;
			func_1856(var_89_cvector);
			var_1_object = var_89_cvector + var_24_cvector;
		}
	Label_706:
	
	}

	// @pe
	void OnDeath(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, object var_9_object, int var_10_int, int var_11_int, bool var_12_bool, float var_13_float, int var_14_int, bool var_15_bool, object var_16_object, bool var_17_bool)
	{
		func_707(var_17_bool);
		object var_19_object;
		var_17_bool = var_19_object;
		func_2624();
	}

}


task task_4
{
}


task task_5
{
	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, int var_9_int, int var_10_int, bool var_11_bool, float var_12_float, int var_13_int, bool var_14_bool, object var_15_object, bool var_16_bool, int var_17_int)
	{
		if(var_17_int == 1) {
			func_2453(var_1_object);
		} else {
			int var_25_int;
			func_1634(var_16_bool, var_25_int, var_25_int);
		}
	
	}

	// @pe
	void OnSee(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, int var_9_int, int var_10_int, bool var_11_bool, float var_12_float, int var_13_int, bool var_14_bool, object var_15_object, bool var_16_bool, object var_17_object)
	{
		bool var_18_bool = false;
		if(var_1_object == var_17_object) {
			if(!var_2_object) //@nz
				var_18_bool = true;
		}
		if(var_18_bool != 0) {
			var_2_object = true;
			object var_21_object;
			var_17_object = var_21_object;
			func_2285(var_21_object);
		}
	}

	// @pe
	void OnStopSee(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, int var_9_int, int var_10_int, bool var_11_bool, float var_12_float, int var_13_int, bool var_14_bool, object var_15_object, bool var_16_bool, object var_17_object)
	{
		bool var_18_bool = false;
		if(var_1_object == var_17_object) {
			if(var_2_object != 0)
				var_18_bool = true;
		}
		if(var_18_bool != 0) {
			var_2_object = false;
			@UnlookAsync("head");
		}
	}

	// @pe
	void OnCollision(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, int var_9_int, int var_10_int, bool var_11_bool, float var_12_float, int var_13_int, bool var_14_bool, object var_15_object, bool var_16_bool, object var_17_object)
	{
		@RequestClearPath(var_17_object);
	}

	// @pe
	void OnDeath(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, int var_9_int, int var_10_int, bool var_11_bool, float var_12_float, int var_13_int, bool var_14_bool, object var_15_object, bool var_16_bool, object var_17_object)
	{
		func_1490(var_17_object);
		object var_22_object;
		var_17_object = var_22_object;
		func_2624();
	}

}


task task_6
{
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, int var_9_int, int var_10_int, bool var_11_bool, float var_12_float, int var_13_int, bool var_14_bool, object var_15_object, bool var_16_bool, object var_17_object)
	{
		bool var_19_bool;
		@IsOverrideActive(var_19_bool);
		if(!var_19_bool) { //@nz
			object var_21_object;
			var_17_object = var_21_object;
			func_2534(var_21_object);
		}
	}

	// @pe
	void OnHit(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, int var_9_int, int var_10_int, bool var_11_bool, float var_12_float, int var_13_int, bool var_14_bool, object var_15_object, bool var_16_bool, object var_17_object, int var_18_int, float var_19_float, float var_20_float)
	{
	}

	// @pe
	void OnPropertyChange(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, int var_9_int, int var_10_int, bool var_11_bool, float var_12_float, int var_13_int, bool var_14_bool, object var_15_object, bool var_16_bool, object var_17_object, string var_18_string)
	{
	}

	// @pe
	void OnDeath(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, int var_9_int, int var_10_int, bool var_11_bool, float var_12_float, int var_13_int, bool var_14_bool, object var_15_object, bool var_16_bool, object var_17_object)
	{
	}

}


// @pe
void OnHit(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, int var_9_int, int var_10_int, bool var_11_bool, float var_12_float, int var_13_int, bool var_14_bool, object var_15_object, bool var_16_bool, object var_17_object, int var_18_int, float var_19_float, float var_20_float)
{
	object var_21_object;
	var_17_object = var_21_object;
	int var_22_int;
	var_18_int = var_22_int;
	float var_23_float;
	var_19_float = var_23_float;
	func_2089(var_21_object, var_22_int, var_23_float);
}


// @pe
void OnHit2(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, int var_9_int, int var_10_int, bool var_11_bool, float var_12_float, int var_13_int, bool var_14_bool, object var_15_object, bool var_16_bool, object var_17_object, int var_18_int, float var_19_float, float var_20_float, cvector var_21_cvector, cvector var_22_cvector)
{
	object var_23_object;
	var_17_object = var_23_object;
	int var_24_int;
	var_18_int = var_24_int;
	float var_25_float;
	var_19_float = var_25_float;
	cvector var_26_cvector;
	var_21_cvector = var_26_cvector;
	cvector var_27_cvector;
	var_22_cvector = var_27_cvector;
	func_2157(var_25_float, var_26_cvector, var_27_cvector);
}


void OnPropertyChange(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, int var_9_int, int var_10_int, bool var_11_bool, float var_12_float, int var_13_int, bool var_14_bool, object var_15_object, bool var_16_bool, object var_17_object, string var_18_string)
{
	float var_20_float;
	if(var_18_string == "health") {
		@GetProperty("health", var_20_float);
		if(var_20_float <= 0)
			@SignalDeath(var_17_object);
	}
}


// @pe
void OnDeath(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, int var_9_int, int var_10_int, bool var_11_bool, float var_12_float, int var_13_int, bool var_14_bool, object var_15_object, bool var_16_bool, object var_17_object)
{
	object var_18_object;
	var_17_object = var_18_object;
	func_2567(var_18_object);
}


void func_0(object var_0_object, int var_20_int, object var_21_object)
{
	var_0_object = var_21_object;
	bool var_31_bool; object var_32_object;
	var_21_object = var_32_object;
	func_2187(var_31_bool, var_32_object, 70.0);
	if(!var_31_bool) { //@nz
		var_20_int = -2;
		return 8;
	}
	object var_27_object;
	@CreateDialog(var_27_object);
	int var_78_int;
	func_2549(var_78_int);
	var_27_object->SetNPCName(var_78_int);
	int var_79_int;
	func_2547(var_79_int);
	var_27_object->SetNPCDescription(var_79_int);
	string var_80_string;
	func_2551(var_80_string);
	var_27_object->SetPhoto(var_80_string);
	string var_81_string;
	func_2553(var_81_string);
	var_27_object->SetPhoto2(var_81_string);
	int var_82_int;
	func_2511(var_82_int);
	var_27_object->SetPlayerName(var_82_int);
	bool var_28_bool;
	@IsOverrideActive(var_28_bool);
	if(var_28_bool != 0) {
		var_20_int = -2;
		return 8;
	}
	@DoDialog(var_27_object);
	object var_91_object; object var_92_object;
	var_21_object = var_91_object;
	var_27_object = var_92_object;
	TaskCall(1);
	func_74(var_93_object, var_94_object, var_95_string, var_96_bool, var_91_object, var_92_object);
	TaskReturn();
	bool var_30_bool;
	var_27_object->IsDialogEnd(var_30_bool);
	
	for(;;) {
		var_130_bool = !var_30_bool; //@nz
		if(var_130_bool == 0) goto Label_63;
		@sync();
		var_27_object->IsDialogEnd(var_30_bool);
	}
	
Label_63:
	object var_131_object;
	var_21_object = var_131_object;
	func_2255();
	@StopDialog(var_27_object);
	var_27_object->GetReturnValue(-1);
	int var_29_int = var_20_int;
}
EMIT "Stack[-4] = 0";


void func_1029(object var_0_object, float var_393_float, int var_394_int)
{
	object var_398_object; float var_399_float; float var_400_float;
	@GetVictim((var_393_float * 0.9), var_398_object);
	@ReportAttack(var_0_object);
	if(var_398_object == var_0_object) {
		float var_404_float; object var_405_object; int var_406_int;
		var_398_object = var_405_object;
		var_394_int = var_406_int;
		func_759(var_406_int);
		var_404_float = var_399_float;
		float var_407_float; object var_408_object; float var_409_float; int var_410_int;
		var_398_object = var_408_object;
		int var_411_int; object var_412_object; int var_413_int;
		var_398_object = var_412_object;
		var_394_int = var_413_int;
		func_762(var_413_int);
		var_411_int = var_410_int;
		func_1907(var_407_float, var_408_object, var_409_float, var_410_int);
		var_407_float = var_400_float;
		int var_468_int;
		func_1412(var_468_int);
		@ReportHit(var_0_object, var_468_int, var_400_float, var_409_float);
		object var_469_object; float var_470_float;
		var_398_object = var_469_object;
		var_400_float = var_470_float;
		func_1419();
	}
}
EMIT "Stack[-3] = 0";


// @pe
void func_2567(object var_18_object)
{
	object var_20_object;
	var_18_object = var_20_object;
	bool var_19_bool;
	func_1868(var_19_bool, var_20_object);
	if(var_19_bool != 0) {
		bool var_23_bool; object var_24_object;
		var_18_object = var_24_object;
		func_2386(var_23_bool, var_24_object, -0.1);
		bool var_61_bool;
		func_2441(var_61_bool, "quest_b1_03", "doberman_dead");
	}
	func_2557();
	object var_72_object;
	var_18_object = var_72_object;
	TaskCall(6);
	func_1683(var_72_object);
	TaskReturn();
}


void func_765(object var_0_object, string var_3_string, object var_5_object, object var_69_object, bool var_70_bool, float var_71_float, bool var_144_bool, bool var_236_bool)
{
	float var_83_float; cvector var_84_cvector; cvector var_85_cvector; bool var_87_bool; float var_90_float; cvector var_91_cvector; bool var_92_bool; float var_93_float;
	func_994(var_91_cvector, var_92_bool, var_93_float);
	var_5_object = 0;
	var_118_bool = IsFuncExist(var_69_object, "@GetAttackDistance", 1);
	if(var_118_bool != 0) {
		var_69_object->GetAttackDistance(var_83_float);
		var_83_float += 50;
	} else {
						var_71_float = var_83_float;
	}
	if(var_83_float >= 150)
		var_83_float = 150;
	var_3_string = false;
	var_0_object = var_69_object;
	bool var_86_bool;
	@IsPlayerActor(var_0_object, var_86_bool);
	if(var_86_bool != 0) {
		@PlayGlobalMusic("attack");
		object var_124_object;
		func_2344(var_124_object);
		@SendPlayerEnemy(var_69_object, var_124_object);
	}
	if(var_70_bool != 0)
		var_87_bool = false;
	else
		var_87_bool = true;

	
Label_805:
	for(;;) {
		bool var_127_bool = false;
		bool var_128_bool;
		func_2021(var_128_bool, var_0_object);
		if(var_128_bool != 0) {
			if(!var_3_string) //@nz
				var_127_bool = true;
		}
		if(var_127_bool != 0) {
			func_1407(var_93_float);
			var_0_object->GetPFPosition(var_84_cvector); //@t
			@GetPFPosition(var_85_cvector);
			var_90_float = (var_84_cvector - var_85_cvector) | (var_84_cvector - var_85_cvector);
			if(var_90_float >= ((400.0 + var_83_float) * (400.0 + var_83_float))) {
				bool var_138_bool; float var_140_float;
				var_83_float = var_140_float;
				TaskCall(5);
				func_1427(var_146_bool, var_138_bool, var_0_object, var_140_float, 10000.0, true, false);
				TaskReturn();
				if(!var_144_bool) { //@nz
				} else {
					var_87_bool = false;
			} else {
			if(var_90_float >= (var_71_float * var_71_float)) {
				var_0_object->GetPFPosition(var_91_cvector); //@t
				@CanReachByPF(var_92_bool, var_91_cvector);
				if(!var_92_bool) { //@nz
					bool var_230_bool; float var_232_float;
					var_83_float = var_232_float;
					TaskCall(5);
					func_1427(var_238_bool, var_230_bool, var_0_object, var_232_float, 10000.0, true, false);
					TaskReturn();
					if(!var_236_bool) { //@nz
						goto Label_977;
					}
					var_87_bool = false;
					goto Label_805;
				}
				if(!var_87_bool) { //@nz
					func_2171(var_0_object);
					@PlayAnimation("all", "attack_on");
					@WaitForAnimEnd();
					func_1407(var_93_float);
					@StopAsync();
					var_87_bool = true;
					bool var_252_bool;
					func_2021(var_252_bool, var_0_object);
					if(!var_252_bool) { //@nz
						goto Label_977;
					}
				}
				@rand(var_93_float);
				bool var_255_bool;
				var_257_bool = var_93_float < 0.25;
				if(var_257_bool != 1) {
					bool var_258_bool;
					func_1364(true, var_258_bool);
					if(var_258_bool != 1)
						var_255_bool = false;
				}
				if(var_255_bool != 0) {
					@Face(var_0_object);
					func_1414();
					@PlayAnimation("all", "attack_stay");
					bool var_295_bool; float var_296_float;
					func_1232(var_93_float, var_295_bool, var_296_float);
					@StopAsync();
				} else {
					@Face(var_0_object);
					@PlayAnimation("all", "fjump");
					@WaitForAnimEnd();
					func_1407(var_93_float);
					@SetSpeed([0.0, 0.0, 0.0]);
					@Stop();
					@StopAsync();
					bool var_513_bool;
					func_1364(var_93_float, var_513_bool);
					var_514_bool = !var_513_bool; //@nz
					if(var_514_bool == 0) goto Label_967;
					bool var_515_bool;
					func_2021(var_515_bool, var_0_object);
					if(!var_515_bool) { //@nz
						goto Label_977;
					}
					var_0_object->GetPFPosition(var_84_cvector); //@t
					@GetPFPosition(var_85_cvector);
					if(!(((var_84_cvector - var_85_cvector) | (var_84_cvector - var_85_cvector)) < (var_296_float * var_296_float))) goto Label_967;
					bool var_520_bool; float var_521_float;
					var_71_float = var_521_float;
					func_1068(var_92_bool, var_93_float, var_520_bool, var_521_float);
					var_522_bool = !var_520_bool; //@nz
					if(var_522_bool == 0) goto Label_967;
					goto Label_977;
			}
				bool var_523_bool; float var_524_float;
				var_71_float = var_524_float;
				func_1068(var_92_bool, var_93_float, var_523_bool, var_524_float);
				if(!var_523_bool) { //@nz
					goto Label_977;
				}
				var_87_bool = true;

			}
		Label_967:
			goto Label_976;
			}
			Label_976:
			}
		}
	Label_977:
		@WaitForAnimEnd();
		if(var_3_string != 0)
			return 22;
		@PlayAnimation("all", "attack_off");
		@WaitForAnimEnd();
		if(var_86_bool != 0)
			@Sleep(2.0);
		return 22;

	}
	
}


void func_522(bool var_61_bool)
{
	var_61_bool = true;
}


void func_524(void)
{
	@StopAnimation();
	@StopGroup0();
}


// @pe
void func_529(object var_178_object)
{
	func_2557();
	object var_187_object;
	func_582(var_180_cvector, var_181_bool, var_187_object, var_187_object);
}


// @pe
void func_1810(string var_101_string)
{
	@RemoveRTEnvelope();
	@SetDeathState();
	@Stop();
	@StopAsync();
	@StopSecondaryAnimation();
	string var_102_string;
	var_101_string = var_102_string;
	func_2303(var_102_string);
	@PlayAnimation("all", var_101_string);
	@WaitForAnimEnd();
	@LockAnimationEnd("all", var_101_string);
	@RemoveEnvelope();
}


void func_1303(bool var_308_bool)
{
	bool var_309_bool = false;
	bool var_310_bool;
	func_1275(var_309_bool, var_310_bool);
	if(var_310_bool != 0) {
		bool var_327_bool;
		func_1319(var_308_bool, var_309_bool, var_327_bool);
		if(var_327_bool != 0)
			var_309_bool = true;
	}
	if(var_309_bool != 0) {
		var_308_bool = true;
		return 0;
	}
	var_308_bool = false;
}


void func_2551(string var_80_string)
{
	var_80_string = "ui/NPC_Citizen2.png";
}


void func_1319(object var_0_object, bool var_4_bool, bool var_327_bool)
{
	object var_333_object; float var_335_float; cvector var_336_cvector; cvector var_337_cvector;
	@GetScene(var_333_object);
	bool var_334_bool = false;
	
	for(;;) {
		cvector var_338_cvector;
		func_1861(var_338_cvector, var_0_object);
		var_344_int = -var_338_cvector;
		@FindDirLength(var_335_float, var_344_int, var_4_bool);
		if(var_335_float < var_4_bool) {
		} else {
				@Face(var_0_object);
				@PlayAnimation("all", "bjump");
				var_0_object->GetPFPosition(var_336_cvector); //@t
				@GetPFPosition(var_337_cvector);
				@WaitForAnimEnd();
				func_1407(var_337_cvector);
				@StopAsync();
				@SetSpeed([0.0, 0.0, 0.0]);
				var_334_bool = true;
				bool var_349_bool;
				func_1275(var_337_cvector, var_349_bool);
				var_350_bool = !var_349_bool; //@nz
				if(var_350_bool == 0) goto Label_1360;
		}
		for(;;) {
			var_334_bool = var_327_bool;

		}

	Label_1360:
	}
}
EMIT "Stack[-5] = 0";


void func_552(object var_0_object, cvector var_31_cvector, float var_32_float)
{
	cvector var_39_cvector;
	@GetPosition(var_39_cvector);
	cvector var_40_cvector;
	var_0_object->GetPosition(var_40_cvector); //@t
	cvector var_41_cvector;
	@GetDirection(var_41_cvector);
	cvector var_45_cvector;
	cvector var_47_cvector;
	func_2350(var_47_cvector, (var_39_cvector - var_40_cvector));
	func_2350(var_45_cvector, (var_47_cvector + (var_41_cvector * 0.75)));
	cvector var_42_cvector;
	var_45_cvector = var_42_cvector;
	cvector var_43_cvector;
	float var_44_float;
	@FindLongestDir(var_43_cvector, var_44_float, var_42_cvector, var_32_float, 32, 7000.0);
	if((var_44_float - 100) < 0)
		var_44_float = 0;
	var_31_cvector = var_43_cvector * var_44_float;
}


void func_2089(object var_21_object, int var_22_int, float var_23_float)
{
	cvector var_33_cvector; object var_34_object; int var_35_int; bool var_36_bool; cvector var_37_cvector; cvector var_38_cvector;
	bool var_42_bool = false;
	bool var_43_bool = false;
	if(var_21_object != 0) {
		if(var_22_int != 4)
			var_43_bool = true;
	}
	if(var_43_bool != 0) {
		if(var_22_int != 5)
			var_42_bool = true;
	}
	if(var_42_bool != 0) {
		cvector var_49_cvector; cvector var_50_cvector;
		cvector var_51_cvector; object var_52_object;
		var_21_object = var_52_object;
		func_1861(var_51_cvector, var_52_object);
		var_51_cvector = var_50_cvector;
		func_2350(var_49_cvector, var_50_cvector);
		var_49_cvector = var_33_cvector;
		@CreateVectorVector(var_34_object);
		var_35_int = 1;

		for(;;) {
			@GetGeometryLocator(("hit" + var_35_int), var_36_bool, var_37_cvector, var_38_cvector);
			if(!var_36_bool) { //@nz
				break;
			Label_2151:
				var_34_object = null;
	}
			object var_111_object;
			var_21_object = var_111_object;
			func_2045(var_111_object);
		}
		if((var_38_cvector | var_33_cvector) >= 0.70710677)
			var_34_object->add(var_37_cvector);
		var_35_int += 1;
	}
	int var_39_int;
	var_34_object->size(var_39_int);
	if(var_39_int == 0) goto Label_2151;
	int var_40_int;
	@irand(var_40_int, var_39_int);
	cvector var_41_cvector;
	var_34_object->get(var_41_cvector, var_40_int);
	object var_66_object; int var_67_int; float var_68_float; cvector var_69_cvector; cvector var_70_cvector;
	var_21_object = var_66_object;
	var_22_int = var_67_int;
	var_23_float = var_68_float;
	var_41_cvector = var_69_cvector;
	var_70_cvector = -var_33_cvector;
	func_2157(var_68_float, var_69_cvector, var_70_cvector);
}


void func_2344(object var_69_object)
{
	object var_71_object;
	@self(var_71_object);
	var_71_object = var_69_object;
}
EMIT "Stack[-1] = 0";


void func_1068(object var_0_object, object var_1_object, bool var_356_bool, float var_357_float)
{
	string var_365_string;
	func_1407(var_365_string);
	int var_362_int;
	@irand(var_362_int, var_1_object);
	@Face(var_0_object);
	@SetAttackState(true);
	func_2462();
	@PlayAnimation("all", ("attack_begin" + (var_362_int + 1)));
	@WaitForAnimEnd();
	int var_364_int;
	func_1375(var_364_int, var_365_string);
	bool var_390_bool;
	func_2021(var_390_bool, var_0_object);
	if(!var_390_bool) { //@nz
		@StopAsync();
		var_356_bool = false;
		return 8;
	}
	float var_393_float; int var_394_int;
	var_357_float = var_393_float;
	var_362_int = var_394_int;
	func_1029(var_365_string, var_393_float, var_394_int);
	bool var_363_bool;
	@HasAnimation(var_363_bool, "all", ("attack_middle" + var_362_int));
	if(var_363_bool != 0) {
		func_2462();
		@PlayAnimation("all", ("attack_middle" + var_362_int));
		@WaitForAnimEnd();
		func_1407(var_365_string);
		bool var_478_bool;
		func_2021(var_478_bool, var_0_object);
		if(!var_478_bool) { //@nz
			@StopAsync();
			var_356_bool = false;
			return 8;
		}
		float var_481_float; int var_482_int;
		var_357_float = var_481_float;
		func_1029(var_365_string, var_481_float, var_482_int);
		var_364_int = 1;

		for(;;) {
			var_365_string = (("attack_middle" + var_482_int) + "_") + var_364_int;
			@HasAnimation(var_363_bool, "all", var_365_string);
			if(!var_363_bool) { //@nz
			} else {
				func_2462();
				@PlayAnimation("all", var_365_string);
				@WaitForAnimEnd();
				func_1407(var_365_string);
				bool var_504_bool;
				func_2021(var_504_bool, var_0_object);
				if(!var_504_bool) { //@nz
					@StopAsync();
					var_356_bool = false;
					return 8;
				}
				float var_507_float; int var_508_int;
				var_357_float = var_507_float;
				var_362_int = var_508_int;
				func_1029(var_365_string, var_507_float, var_508_int);
				var_364_int += 1;
			}
	}
		@SetAttackState(false);
		@PlayAnimation("all", ("attack_end" + var_362_int));
		bool var_493_bool;
		func_1421(var_493_bool);
		if(var_493_bool != 0) {
			bool var_494_bool;
			func_1205(var_494_bool, 0.75);
			@StopAsync();
		}
		var_356_bool = true;
		return 8;

	}
}


void func_2350(cvector var_49_cvector, cvector var_50_cvector)
{
	float var_58_float = sqrt(var_50_cvector | var_50_cvector);
	if(var_58_float < 0.000001)
		var_49_cvector = [0.0, 0.0, 0.0];
	var_49_cvector = var_50_cvector / var_58_float;
}


void func_2045(object var_34_object)
{
	string var_48_string;
	if(var_34_object == null)
		return 14;
	bool var_42_bool;
	@IsDead(var_42_bool);
	if(var_42_bool != 0)
		return 14;
	int var_43_int;
	@GetSecondaryAnimationType(var_43_int);
	if(var_43_int < 0)
		return 14;
	cvector var_44_cvector;
	var_34_object->GetPosition(var_44_cvector);
	cvector var_45_cvector;
	@GetPosition(var_45_cvector);
	cvector var_46_cvector;
	@GetDirection(var_46_cvector);
	cvector var_47_cvector = var_45_cvector - var_44_cvector;
	var_53_float = GetByIndex(var_47_cvector, 0);
	var_54_float = GetByIndex(var_46_cvector, 0);
	var_56_float = GetByIndex(var_47_cvector, 2);
	var_57_float = GetByIndex(var_46_cvector, 2);
	if(((var_53_float * var_54_float) + (var_56_float * var_57_float)) >= 0)
		var_48_string = "fhit";
	else
		var_48_string = "bhit";
	@FadeSecondaryAnimation("hit_react", (var_48_string + "1"), (var_48_string + "2"), -10);
	
}


// @pe
void func_1842(string var_435_string, int var_436_int)
{
	if(var_436_int == 2) {
		var_435_string = "fire";
		return 0;
	EMIT "GOTO 0x73e";
	}
	if(var_436_int == 1) {
		var_435_string = "bullet";
		return 0;
	}
	var_435_string = "phys";
}


void func_2555(bool var_73_bool)
{
	var_73_bool = false;
}


// @pe
void func_2360(float var_445_float, float var_446_float, float var_447_float)
{
	if(var_446_float < var_447_float)
		var_446_float = var_445_float;
	else
		var_447_float = var_445_float;
	
}


// @pe
void func_2367(float var_52_float, float var_53_float, float var_54_float, float var_55_float)
{
	if(var_53_float < var_54_float) {
		var_54_float = var_52_float;
		return 0;
	}
	if(var_53_float > var_55_float) {
		var_55_float = var_52_float;
		return 0;
	}
	var_53_float = var_52_float;
}


void func_1856(cvector var_89_cvector)
{
	cvector var_91_cvector;
	@GetPosition(var_91_cvector);
	var_91_cvector = var_89_cvector;
}


void func_1861(cvector var_51_cvector, object var_52_object)
{
	cvector var_55_cvector;
	@GetPosition(var_55_cvector);
	cvector var_56_cvector;
	var_52_object->GetPosition(var_56_cvector);
	var_51_cvector = var_56_cvector - var_55_cvector;
}


// @pe
void func_2630(bool var_18_bool, object var_19_object)
{
	object var_21_object;
	var_19_object = var_21_object;
	bool var_20_bool;
	func_2021(var_20_bool, var_21_object);
	var_20_bool = var_18_bool;
}


void func_582(object var_0_object, object var_1_object, object var_2_object, object var_187_object)
{
	float var_194_float; cvector var_196_cvector; float var_197_float;
	cvector var_198_cvector;
	func_552(var_197_float, var_198_cvector, 1.7453294);
	cvector var_193_cvector;
	var_198_cvector = var_193_cvector;
	if((var_193_cvector | var_193_cvector) < 2500.0) {
		cvector var_225_cvector;
		func_552(var_197_float, var_225_cvector, 2.6179938);
		var_225_cvector = var_193_cvector;
		var_194_float = var_193_cvector | var_193_cvector;
		if(var_194_float < 2500.0) {
			var_230_float = sqrt(var_194_float);
			@Trace("Can't retreat, distance: " + var_230_float);
			@Sleep(0.5);
			return 10;
		}
	}
	var_233_float = GetByIndex(var_193_cvector, 0);
	var_234_float = GetByIndex(var_193_cvector, 2);
	@Rotate(var_233_float, var_234_float);
	cvector var_235_cvector;
	func_1856(var_235_cvector);
	@SetTimer(120, 0.5);
	
Label_624:
	bool var_195_bool;
	@MovePoint((var_235_cvector + var_193_cvector), 1, var_195_bool);
	if(var_195_bool != 0) {
		if(var_187_object == null) {
			goto Label_654;
		EMIT "GOTO 0x28c";

		Label_654:
			for(;;) {
				return 10;
		}
			cvector var_243_cvector;
			func_552(var_197_float, var_243_cvector, 2.6179938);
			var_243_cvector = var_196_cvector;
			if((var_196_cvector | var_196_cvector) >= 2500.0) {
				cvector var_247_cvector;
				func_1856(var_247_cvector);
				var_1_object = var_247_cvector + var_196_cvector;
				@SetTimer(120, 0.5);
			} else {
			}
	}
		if(!false) goto Label_624; //@nz

	}
}


// @pe
void func_74(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_91_object, object var_92_object)
{
	var_0_object = var_92_object;
	var_1_object = var_91_object;
	var_3_string = false;
	if(1 != 0) {
		func_132(var_92_object, "Neutral");
		var_0_object->SetMessage(518092); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(519592, 20773, 20772); //@t
		var_0_object->AddReply(519588, 20769, 20768); //@t
		goto Label_102;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x4e";
	}
Label_102:
	bool var_117_bool;
	func_2555(var_117_bool);
	if(var_117_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_2272(var_2_object);
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


// @pe
void func_2378(float var_80_float, cvector var_81_cvector, cvector var_82_cvector)
{
	var_87_float = sqrt((var_81_cvector | var_81_cvector) * (var_82_cvector | var_82_cvector));
	var_80_float = (var_81_cvector | var_82_cvector) / var_87_float;
}


void func_1868(bool var_19_bool, object var_20_object)
{
	bool var_22_bool;
	@IsPlayerActor(var_20_object, var_22_bool);
	var_22_bool = var_19_bool;
}


// @pe
void func_2637(object var_55_object)
{
	object var_56_object;
	var_55_object = var_56_object;
	TaskCall(4);
	func_739(var_56_object, true);
	TaskReturn();
}


void func_1873(bool var_42_bool, object var_43_object, string var_44_string)
{
	var_49_bool = IsFuncExist(var_43_object, "HasProperty", 2);
	if(!var_49_bool) { //@nz
		var_42_bool = false;
		return 2;
	}
	bool var_46_bool;
	var_43_object->HasProperty(var_44_string, var_46_bool);
	var_46_bool = var_42_bool;
}


// @pe
void func_2386(bool var_23_bool, object var_24_object, float var_25_float)
{
	if(!var_24_object) { //@nz
		var_23_bool = false;
		return 0;
	}
	if(var_25_float > 0) {
		@SendWorldWndMessage(8);
	} else if(var_25_float < 0) {
			@SendWorldWndMessage(9);
	}
	for(;;) {
		float var_30_float;
		var_25_float = var_30_float;
		func_2431(var_30_float);
		bool var_34_bool; object var_35_object; float var_37_float;
		var_24_object = var_35_object;
		var_25_float = var_37_float;
		func_1885(var_34_bool, var_35_object, "reputation", var_37_float, (float)0, (float)1);
		var_23_bool = true;
		return 0;

	}
	
	var_23_bool = false;
}


void func_1364(object var_0_object, bool var_258_bool)
{
	bool var_260_bool;
	var_263_bool = IsFuncExist(var_0_object, "IsAttacking", 1);
	if(var_263_bool != 0) {
		var_0_object->IsAttacking(var_260_bool); //@t
		var_260_bool = var_258_bool;
	}
	var_258_bool = false;
}


void func_1885(bool var_34_bool, object var_35_object, string var_36_string, float var_37_float, float var_38_float, float var_39_float)
{
	object var_43_object;
	var_35_object = var_43_object;
	string var_44_string;
	var_36_string = var_44_string;
	bool var_42_bool;
	func_1873(var_42_bool, var_43_object, var_44_string);
	if(!var_42_bool) //@nz
		var_34_bool = false;
	float var_41_float;
	var_35_object->GetProperty(var_36_string, var_41_float);
	float var_52_float; float var_54_float; float var_55_float;
	var_38_float = var_54_float;
	var_39_float = var_55_float;
	func_2367(var_52_float, (var_41_float + var_37_float), var_54_float, var_55_float);
	var_35_object->SetProperty(var_36_string, var_52_float);
	var_34_bool = true;
}


void func_1375(object var_2_object, object var_5_object)
{
	int var_378_int;
	if(!var_2_object) //@nz
		return 4;
	if(var_5_object != 0) {
		if((var_5_object + -1) > 0)
			return 4;
	}
	float var_377_float;
	@rand(var_377_float);
	float var_384_float;
	func_1425(var_384_float);
	if(var_377_float < var_384_float) {
		@irand(var_378_int, var_2_object);
		@Speak("attack" + (var_378_int + 1));
		int var_389_int;
		func_1423(var_389_int);
		var_5_object = var_389_int;
	}
}


// @pe
void func_1634(object var_0_object, object var_1_object, int var_25_int)
{
	if(var_25_int != 0)
		return 0;
	bool var_28_bool;
	func_1672(var_28_bool, var_1_object);
	if(!var_28_bool) //@nz
		var_0_object = true;
	@KillTimer(0);
	@Stop();
}


void func_2157(object var_23_object, cvector var_26_cvector, cvector var_27_cvector)
{
	object var_30_object;
	@GetScene(var_30_object);
	object var_31_object;
	@AddActorByType(var_31_object, "scripted", var_30_object, var_26_cvector, var_27_cvector, "blood_dir.xml");
	object var_34_object;
	var_23_object = var_34_object;
	func_2045(var_34_object);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_1907(float var_407_float, object var_408_object, float var_409_float, int var_410_int)
{
	int var_420_int; int var_422_int;
	object var_427_object;
	var_408_object = var_427_object;
	bool var_426_bool;
	func_1873(var_426_bool, var_427_object, "health");
	if(!var_426_bool) //@nz
		var_407_float = 0.0;
	bool var_430_bool; object var_431_object;
	func_1873(var_430_bool, var_431_object, "armor");
	if(!var_430_bool) //@nz
		var_420_int = 0;
	else
		var_431_object->GetProperty("armor", var_420_int);
	string var_435_string; int var_436_int;
	var_410_int = var_436_int;
	func_1842(var_435_string, var_436_int);
	string var_421_string = "armor_" + var_435_string;
	bool var_441_bool; object var_442_object; string var_443_string;
	var_408_object = var_442_object;
	func_1873(var_441_bool, var_442_object, var_443_string);
	if(!var_441_bool) //@nz
		var_422_int = 0;
	else
		var_408_object->GetProperty(var_443_string, var_422_int);

	float var_445_float;
	func_2360(var_445_float, ((var_420_int + var_422_int) / 100.0), (float)1);
	float var_423_float;
	var_445_float = var_423_float;
	float var_424_float;
	var_408_object->GetProperty("health", var_424_float);
	float var_425_float = var_409_float * (1 - var_423_float);
	float var_455_float;
	func_2367(var_455_float, (var_424_float - var_425_float), (float)0, (float)1);
	var_408_object->SetProperty("health", var_455_float);
	bool var_461_bool; object var_462_object;
	var_408_object = var_462_object;
	func_1868(var_461_bool, var_462_object);
	if(var_461_bool != 0) {
		float var_463_float = -var_425_float;
		func_2421(var_463_float);
	}
	var_425_float = var_407_float;
	
}


void func_2421(float var_463_float)
{
	object var_465_object;
	@CreateFloatVector(var_465_object);
	var_465_object->add(var_463_float);
	@SendWorldWndMessage(15, var_465_object);
}
EMIT "Stack[-1] = 0";


void func_1656(object var_0_object)
{
	var_0_object = true;
	@KillTimer(0);
	@Stop();
}


void func_2171(object var_241_object)
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


void func_1407(object var_0_object)
{
	func_2453(var_0_object);
}


void func_2431(float var_30_float)
{
	object var_32_object;
	@CreateFloatVector(var_32_object);
	var_32_object->add(var_30_float);
	@SendWorldWndMessage(16, var_32_object);
}
EMIT "Stack[-1] = 0";


// @pe
void func_132(object var_2_object, string var_98_string)
{
	bool var_99_bool;
	func_2555(var_99_bool);
	if(!var_99_bool) //@nz
		return 0;
	if(var_98_string == var_2_object)
		return 0;
	string var_102_string; bool var_103_bool;
	var_98_string = var_102_string;
	if(var_98_string == "")
		var_103_bool = false;
	else
		var_103_bool = true;
	func_2279(var_102_string, var_103_bool);
	var_2_object = var_98_string;
	
}


void func_1412(int var_468_int)
{
	var_468_int = 0;
}


void func_2182(bool var_32_bool)
{
	bool var_34_bool;
	@IsLoaded(var_34_bool);
	var_34_bool = var_32_bool;
}


void func_1414(void)
{
	func_2303("attack_stay");
}


// @pe
void func_1672(bool var_28_bool, object var_29_object)
{
	object var_31_object;
	var_29_object = var_31_object;
	bool var_30_bool;
	func_2021(var_30_bool, var_31_object);
	var_30_bool = var_28_bool;
}


void func_2441(bool var_61_bool, string var_62_string, string var_63_string)
{
	object var_65_object;
	@FindActor(var_65_object, var_62_string);
	if(var_65_object == null)
		var_61_bool = false;
	@Trigger(var_65_object, var_63_string);
	var_61_bool = true;
}
EMIT "Stack[-1] = 0";


void func_2187(bool var_31_bool, object var_32_object, float var_33_float)
{
	cvector var_44_cvector; bool var_51_bool;
	var_32_object->GetPosition(var_44_cvector);
	float var_43_float;
	var_32_object->GetEyesHeight(var_43_float);
	var_52_float = GetByIndex(var_44_cvector, 1);
	SetByIndex(var_44_cvector, 1) = (var_52_float + var_43_float);
	cvector var_45_cvector;
	@GetPosition(var_45_cvector);
	@GetEyesHeight(var_43_float);
	var_53_float = GetByIndex(var_45_cvector, 1);
	SetByIndex(var_45_cvector, 1) = (var_53_float + var_43_float);
	cvector var_46_cvector = var_44_cvector - var_45_cvector;
	var_54_float = GetByIndex(var_46_cvector, 1);
	SetByIndex(var_46_cvector, 1) = (float)0;
	var_56_float = sqrt(var_46_cvector | var_46_cvector);
	var_46_cvector /= var_56_float;
	cvector var_47_cvector = -var_46_cvector;
	cvector var_58_cvector;
	func_2350(var_58_cvector, (var_47_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_48_cvector = ((var_46_cvector * var_33_float) + (var_58_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_50_bool;
	@IsOverrideActive(var_50_bool);
	if(var_50_bool != 0)
		var_31_bool = false;
	@StopWorld();
	@CameraTransit((var_45_cvector + var_48_cvector), var_47_cvector);
	var_71_float = GetByIndex(var_48_cvector, 0);
	var_72_float = GetByIndex(var_48_cvector, 2);
	@Rotate(var_71_float, var_72_float);
	bool var_73_bool;
	func_2555(var_73_bool);
	if(var_73_bool != 0) {
	} else {
		@HasAnimationTrack(var_51_bool, "head");
		if(var_51_bool == 0) goto Label_2249;
		@LookAsyncCamera("head");
	}
Label_2249:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_31_bool = true;
	
}


// @pe
void func_1419(void)
{
}


void func_1421(bool var_493_bool)
{
	var_493_bool = true;
}


void func_1679(string var_207_string)
{
	var_207_string = "walk";
}


void func_1423(int var_389_int)
{
	var_389_int = 1;
}


void func_1681(string var_208_string)
{
	var_208_string = "run";
}


void func_1425(float var_384_float)
{
	var_384_float = 0.5;
}


void func_1683(object var_72_object)
{
	bool var_74_bool;
	@AddItem(var_74_bool, "powder", 0, 1);
	object var_78_object;
	var_72_object = var_78_object;
	func_1694(var_78_object);
}


void func_1427(object var_2_object, bool var_138_bool, object var_139_object, float var_140_float, float var_141_float, bool var_142_bool, bool var_143_bool)
{
	object var_151_object;
	func_2453(var_151_object);
	@SetTimer(1, 5);
	bool var_149_bool;
	@CanSee(var_149_bool, var_151_object);
	if(var_149_bool != 0) {
		var_2_object = true;
		object var_155_object;
		var_139_object = var_155_object;
		func_2285(var_155_object);
	} else {
		var_2_object = false;
	}
	bool var_162_bool; object var_163_object;
	func_1868(var_162_bool, var_163_object);
	if(var_162_bool != 0) {
		object var_166_object;
		func_2344(var_166_object);
		@SendPlayerEnemy(var_163_object, var_166_object);
	}
	bool var_167_bool; object var_168_object; float var_169_float; float var_170_float; bool var_171_bool; bool var_172_bool;
	var_139_object = var_168_object;
	var_140_float = var_169_float;
	var_141_float = var_170_float;
	var_142_bool = var_171_bool;
	var_143_bool = var_172_bool;
	bool var_150_bool;
	func_1532(var_149_bool, var_150_bool, var_167_bool, var_168_object, var_169_float, var_170_float, var_171_bool, var_172_bool);
	var_167_bool = var_150_bool;
	if(var_2_object != 0)
		@UnlookAsync("head");
	@KillTimer(1);
	var_150_bool = var_138_bool;
	
}


void func_2453(object var_20_object)
{
	bool var_22_bool;
	@IsPlayerActor(var_20_object, var_22_bool);
	if(var_22_bool != 0)
		@PlayGlobalMusic("attack");
}


// @pe
void func_1694(object var_78_object)
{
	object var_79_object;
	var_78_object = var_79_object;
	func_1719(var_79_object);
	@SetRTEnvelope(50, 40);
	disable OnUse;
	enable OnUse;
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


void func_2462(void)
{
	object var_369_object;
	@GetScene(var_369_object);
	object var_371_object;
	func_2344(var_371_object);
	@BroadcastMessage("battle", var_371_object, var_369_object);
}
EMIT "Stack[-1] = 0";


void func_2473(string var_42_string, int var_43_int)
{
	string var_45_string = "idle";
	if(var_43_int != 0)
		var_45_string += var_43_int;
	var_45_string = var_42_string;
}


void func_2480(int var_36_int)
{
	int var_39_int; bool var_40_bool;
	var_39_int = 0;
	
	for(;;) {
		string var_42_string; int var_43_int;
		var_39_int = var_43_int;
		func_2473(var_42_string, var_43_int);
		@HasAnimation(var_40_bool, "all", var_42_string);
		if(!var_40_bool) //@nz
			break;
		var_39_int += 1;
	}
	var_39_int = var_36_int;
}


void func_1205(bool var_494_bool, float var_495_float)
{
	float var_498_float; bool var_499_bool;
	@rand(var_498_float);
	if(var_498_float < var_495_float) {

		for(;;) {
			@IsAnimationPlaying(var_499_bool);
			if(!var_499_bool) { //@nz
			} else {
				bool var_502_bool;
				func_1303(var_502_bool);
				if(var_502_bool != 0) {
					var_494_bool = true;
					return 4;
				}
				@sync();
			}
			break;
		}
		var_494_bool = false;
		return 4;
	}
	@WaitForAnimEnd();
	func_1407(var_499_bool);
}


void func_1719(object var_79_object)
{
	cvector var_90_cvector; cvector var_91_cvector; cvector var_92_cvector; cvector var_93_cvector; string var_94_string; object var_95_object; bool var_96_bool; bool var_97_bool; float var_98_float; cvector var_99_cvector;
	if(var_79_object == null) {
		func_1810("fdie");
	} else {
		var_79_object->GetPosition(var_90_cvector);
		@GetPosition(var_91_cvector);
		@GetDirection(var_92_cvector);
		var_93_cvector = var_91_cvector - var_90_cvector;
		var_133_float = GetByIndex(var_93_cvector, 0);
		var_134_float = GetByIndex(var_92_cvector, 0);
		var_136_float = GetByIndex(var_93_cvector, 2);
		var_137_float = GetByIndex(var_92_cvector, 2);
		if(((var_133_float * var_134_float) + (var_136_float * var_137_float)) >= 0)
			var_94_string = "fdie";
		else
			var_94_string = "bdie";
		@RemoveRTEnvelope();
		@SetDeathState();
		@Stop();
		@StopAsync();
		var_79_object = var_95_object;
		var_144_bool = IsFuncExist(var_79_object, "GetScriptProperty", 2);
		if(var_144_bool != 0) {
			var_79_object->HasScriptProperty(var_96_bool, "Owner");
			if(var_96_bool != 0) {
				var_79_object->GetScriptProperty(var_95_object, "Owner");
				if(var_95_object == null)
					var_79_object = var_95_object;
			}
		}
		var_151_bool = IsFuncExist(var_95_object, "@GetEyesHeight", 1);
		if(var_151_bool != 0) {
			var_95_object->GetEyesHeight(var_98_float);
			var_99_cvector = [0.0, 0.0, 0.0];
			var_152_float = GetByIndex(var_99_cvector, 1);
			var_98_float = var_152_float;
			SetByIndex(var_99_cvector, 1) = var_152_float;
			@LookAsync(var_79_object, "head", var_99_cvector);
			var_97_bool = true;
		} else {
			var_97_bool = false;

		}
		string var_154_string;
		var_94_string = var_154_string;
		func_2303(var_154_string);
		@PlayAnimation("all", var_94_string);
		@WaitForAnimEnd();
		if(var_97_bool != 0) {
			@StopAsync();
			@UnlookAsync("head");
		}
		@LockAnimationEnd("all", var_94_string);
		@RemoveEnvelope();
		var_95_object = null;
	}
	
}


void func_443(void)
{
	int var_27_int; int var_28_int; bool var_29_bool; float var_30_float; bool var_31_bool;
	@WaitForAnimEnd();
	bool var_32_bool;
	func_2182(var_32_bool);
	if(!var_32_bool) //@nz
		return 14;
	int var_36_int;
	func_2480(var_36_int);
	int var_25_int;
	var_36_int = var_25_int;
	int var_26_int = 0;
	
	for(;;) {
		bool var_49_bool = false;
		if(var_26_int < 5) {
			bool var_52_bool;
			func_2182(var_52_bool);
			if(var_52_bool != 0)
				var_49_bool = true;
		}
		if(var_49_bool != 0) {
			@irand(var_27_int, 3);
			if(var_27_int == 0) {
				if(var_25_int == 0) goto Label_490;
				@irand(var_28_int, var_25_int);
				string var_58_string; int var_59_int;
				var_28_int = var_59_int;
				func_2473(var_58_string, var_59_int);
				@PlayAnimation("all", var_58_string);
				@WaitForAnimEnd(var_29_bool);
				if(!var_29_bool) { //@nz
				} else {
			} else {
			if(var_27_int == 1) {
				@rand(var_30_float, 4);
				@Sleep((var_30_float + 1), var_31_bool);
				if(!var_31_bool) { //@nz
					goto Label_519;
				}
			} else if(var_26_int != 0) {
				goto Label_519;
			}
			}
					bool var_61_bool;
					func_522(var_61_bool);
					var_62_bool = !var_61_bool; //@nz
					if(var_62_bool == 0) goto Label_514;
			}
		}
	Label_519:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_514:
		@ResetAAS();
		var_26_int += 1;
	}
	
}


void func_1980(bool var_45_bool, object var_46_object)
{
	bool var_48_bool;
	var_46_object->IsDead(var_48_bool);
	var_48_bool = var_45_bool;
}


// @pe
void func_2497(object var_31_object)
{
	var_31_object->SetReturnValue(1);
}


void func_1985(bool var_34_bool, object var_35_object)
{
	if(var_35_object == null) {
		var_34_bool = false;
		return 4;
	}
	bool var_41_bool = false;
	var_44_bool = IsFuncExist(var_35_object, "IsDead", 1);
	if(var_44_bool != 0) {
		bool var_45_bool; object var_46_object;
		var_35_object = var_46_object;
		func_1980(var_45_bool, var_46_object);
		if(var_45_bool != 0)
			var_41_bool = true;
	}
	if(var_41_bool != 0) {
		var_34_bool = false;
		return 4;
	}
	object var_38_object;
	@GetScene(var_38_object);
	if(var_38_object == null) {
		var_34_bool = false;
		return 4;
	}
	object var_39_object;
	var_35_object->GetScene(var_39_object);
	if(var_38_object != var_39_object) {
		var_34_bool = false;
		return 4;
	}
	var_34_bool = true;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_707(object var_2_object)
{
	@Stop();
	@KillTimer(120);
	var_2_object = true;
}


// @pe
void func_2502(object var_24_object)
{
	@SetVariable("b1q03_retreat", 1);
	var_24_object->SetReturnValue(0);
}


void func_2255(void)
{
	bool var_133_bool;
	@CameraSwitchToNormal();
	bool var_134_bool;
	func_2555(var_134_bool);
	if(var_134_bool != 0) {
	} else {
		@HasAnimationTrack(var_133_bool, "head");
		if(var_133_bool == 0) goto Label_2271;
		@UnlookAsync("head");
	}
Label_2271:
	
}


void func_1232(object var_0_object, bool var_295_bool, float var_296_float)
{
	bool var_302_bool; cvector var_303_cvector; cvector var_304_cvector; cvector var_305_cvector; float var_306_float;
	
	for(;;) {
		@IsAnimationPlaying(var_302_bool);
		if(!var_302_bool) //@nz
			break;
		bool var_308_bool;
		func_1303(var_308_bool);
		if(var_308_bool != 0) {
			var_295_bool = true;
			return 10;
		}
		bool var_351_bool;
		func_2021(var_351_bool, var_0_object);
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
			func_1068(var_305_cvector, var_306_float, var_356_bool, var_357_float);
			var_295_bool = true;
			return 10;
		}
		@sync();
	}
	func_1407(var_306_float);
	var_295_bool = false;
}


void func_2511(int var_82_int)
{
	int var_84_int;
	@GetVariable("branch", var_84_int);
	if(var_84_int == 0) {
		var_82_int = 1;
		return 2;
	EMIT "GOTO 0x9de";
	}
	if(var_84_int == 1) {
		var_82_int = 2;
		return 2;
	}
	var_82_int = 3;
}


void func_1490(object var_2_object)
{
	@KillTimer(1);
	if(var_2_object != 0) {
		var_2_object = false;
		@UnlookAsync("head");
	}
	func_1656(var_17_object);
}


void func_723(object var_0_object, bool var_69_bool)
{
	cvector var_72_cvector;
	@GetDirection(var_72_cvector);
	cvector var_74_cvector;
	func_1861(var_74_cvector, var_0_object);
	cvector var_73_cvector;
	var_74_cvector = var_73_cvector;
	float var_80_float; cvector var_81_cvector; cvector var_82_cvector;
	var_72_cvector = var_81_cvector;
	var_73_cvector = var_82_cvector;
	func_2378(var_80_float, var_81_cvector, var_82_cvector);
	var_69_bool = var_80_float >= -0.34202012;
}


void func_2272(string var_119_string)
{
	float var_122_float; float var_123_float;
	@lshGetAnimTimes(var_119_string, var_122_float, var_123_float);
	@lshPlayAnimation(var_122_float, var_123_float, false);
}


void func_2528(int var_22_int)
{
	int var_24_int;
	@GetVariable("branch", var_24_int);
	var_24_int = var_22_int;
}


void func_994(object var_1_object, object var_2_object, bool var_4_bool)
{
	bool var_97_bool; bool var_98_bool; cvector var_99_cvector;
	var_1_object = 0;
	
	for(;;) {
		@HasAnimation(var_97_bool, "all", ("attack_begin" + (var_1_object + 1)));
		if(!var_97_bool) { //@nz
		} else {
			var_1_object += 1;
		}
		var_2_object = 0;

		for(;;) {
			@IsExisting3DSound(var_98_bool, ("attack" + (var_2_object + 1)));
			if(!var_98_bool) //@nz
				break;
			var_2_object += 1;
		}
		@GetAnimationOffset(var_99_cvector, "all", "bjump");
		var_113_float = GetByIndex(var_99_cvector, 2);
		var_4_bool = -var_113_float;

	}
}


void func_739(object var_56_object, bool var_57_bool)
{
	object var_64_object; object var_65_object;
	@GetScene(var_65_object);
	object var_66_object;
	func_2344(var_66_object);
	var_65_object->RemoveStationaryActor(var_66_object);
	
	for(;;) {
		object var_69_object; bool var_70_bool;
		func_765(var_63_int, var_69_object, var_70_bool, var_64_object, var_65_object, var_69_object, var_70_bool, 180.0);
		@Sleep(1);
	}
}
EMIT "Return(); Pop(2)";
EMIT "Stack[-1] = 0";


void func_2021(bool var_30_bool, object var_31_object)
{
	object var_35_object;
	var_31_object = var_35_object;
	bool var_34_bool;
	func_1985(var_34_bool, var_35_object);
	if(!var_34_bool) { //@nz
		var_30_bool = false;
		return 2;
	}
	bool var_52_bool; object var_53_object;
	func_1873(var_52_bool, var_53_object, "noaccess");
	if(!var_52_bool) { //@nz
		var_30_bool = true;
		return 2;
	}
	int var_33_int;
	var_53_object->GetProperty("noaccess", var_33_int);
	var_30_bool = var_33_int == 0;
}


// @pe
void func_2534(object var_21_object)
{
	int var_22_int;
	func_2528(var_22_int);
	if(var_22_int == 1)
		@WorkWithCorpse(var_21_object);
	else
		@Barter(var_21_object);
	
}


void func_2279(string var_102_string, bool var_103_bool)
{
	float var_108_float; float var_109_float;
	@lshGetAnimTimes(var_102_string, var_108_float, var_109_float);
	@lshPlayAnimation(var_108_float, var_109_float, var_103_bool);
}


void func_2285(object var_21_object)
{
	float var_24_float;
	var_21_object->GetEyesHeight(var_24_float);
	cvector var_25_cvector = [0.0, 0.0, 0.0];
	var_26_float = GetByIndex(var_25_cvector, 1);
	var_24_float = var_26_float;
	SetByIndex(var_25_cvector, 1) = var_26_float;
	@LookAsync(var_21_object, "head", var_25_cvector);
}


void func_2547(int var_79_int)
{
	var_79_int = 518097;
}


void func_2549(int var_78_int)
{
	var_78_int = 518096;
}


// @pe
void func_759(float var_404_float)
{
	var_404_float = 0.03;
}


void func_2296(void)
{
	bool var_20_bool;
	func_2555(var_20_bool);
	if(var_20_bool != 0)
		@lshStopSpeech();
}


void func_2553(string var_81_string)
{
	var_81_string = "ui/NPC_Citizen2_b.png";
}


// @pe
void func_762(int var_411_int)
{
	var_411_int = 0;
}


void func_1275(object var_0_object, bool var_310_bool)
{
	cvector var_316_cvector; cvector var_317_cvector;
	bool var_321_bool;
	func_2021(var_321_bool, var_0_object);
	if(!var_321_bool) { //@nz
		var_310_bool = false;
		return 10;
	}
	bool var_324_bool;
	float var_320_float;
	func_1364(var_320_float, var_324_bool);
	if(var_324_bool != 0) {
		var_0_object->GetPFPosition(var_316_cvector); //@t
		@GetPFPosition(var_317_cvector);
		var_0_object->GetAttackDistance(var_320_float); //@t
		var_310_bool = ((var_316_cvector - var_317_cvector) | (var_316_cvector - var_317_cvector)) <= ((var_320_float + 50) * (var_320_float + 50));
		return 10;
	}
	var_310_bool = false;
}


void func_1532(object var_0_object, object var_1_object, bool var_167_bool, object var_168_object, float var_169_float, float var_170_float, bool var_171_bool, bool var_172_bool)
{
	bool var_181_bool; object var_183_object; cvector var_184_cvector; cvector var_185_cvector; float var_187_float; object var_188_object;
	var_0_object = false;
	var_1_object = var_168_object;
	bool var_182_bool;
	var_172_bool = var_182_bool;
	
	for(;;) {
		bool var_189_bool; object var_190_object;
		var_168_object = var_190_object;
		func_1672(var_189_bool, var_190_object);
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
				if(var_182_bool == 0) goto Label_1585;
				var_182_bool = false;
				@RotatePath(var_183_object, var_181_bool);
				if(!var_181_bool) { //@nz
				} else {
						@SetTimer(0, 0.3);
						string var_207_string;
						func_1679(var_207_string);
						string var_208_string;
						func_1681(var_208_string);
						@FollowPath(var_183_object, var_171_bool, var_181_bool, var_207_string, var_208_string);
						if(!var_181_bool) { //@nz
							if(var_0_object == 0) goto Label_1604;
							var_183_object = null;
						}
					EMIT "GOTO 0x645";

					Label_1604:
						} else {
					var_183_object = null;
			} else {
					@KillTimer(0);
					@Sleep(0.5, var_181_bool);
					if(!var_181_bool) { //@nz
						if(var_0_object != 0) {
							var_183_object = null;
							goto Label_1632;
						}
					}
					@SetTimer(0, 0.3);
		}
				@KillTimer(0);
				goto Label_1632;
		}
			var_188_object = null;
			goto Label_1630;

		Label_1630:
			var_183_object = null;

		}
	Label_1632:
		for(;;) {
			var_167_bool = !var_0_object;
			return 16;

			}
	}
	
}


void func_2557(void)
{
	object var_68_object;
	@GetScene(var_68_object);
	object var_69_object;
	func_2344(var_69_object);
	var_68_object->RemoveStationaryActor(var_69_object);
}
EMIT "Stack[-1] = 0";


void func_2303(string var_102_string)
{
	bool var_111_bool; int var_112_int; bool var_113_bool; int var_114_int; bool var_115_bool; float var_116_float; cvector var_117_cvector; cvector var_118_cvector;
	@IsExisting3DSound(var_111_bool, var_102_string);
	if(!var_111_bool) { //@nz
		var_112_int = 0;

		for(;;) {
			@IsExisting3DSound(var_113_bool, (var_102_string + (var_112_int + 1)));
			if(!var_113_bool) { //@nz
				break;
			Label_2323:
				@irand(var_114_int, var_112_int);
				var_102_string += (var_114_int + 1);
	}
			@Is3DSoundLoaded(var_115_bool, var_102_string);
			if(var_115_bool != 0) {
				@GetEyesHeight(var_116_float);
				@GetDirection(var_117_cvector);
				var_118_cvector = var_117_cvector * 50;
				var_129_float = GetByIndex(var_118_cvector, 1);
				SetByIndex(var_118_cvector, 1) = (var_129_float + var_116_float);
				@PlayGlobalSound(var_102_string, var_118_cvector);
			}
		}
		var_112_int += 1;
	}
	var_124_bool = !var_112_int; //@nz
	if(var_124_bool == 0) goto Label_2323;
}


