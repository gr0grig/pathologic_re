// @GLOBALS: 0:object:,1:bool:

task task_0
{
}


task task_1
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, cvector var_22_cvector)
	{
		if(1 != 0) {
			func_1792();
			if(var_21_bool == 19142) {
				func_139(var_22_cvector, "Neutral");
				var_0_object->SetMessage(518009); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(518010, 32920, 19143); //@t
				var_0_object->AddReply(531560, -1, 32919); //@t
				return 0;
			}
			if(var_21_bool == 32920) {
				func_139(var_22_cvector, "Neutral");
				var_0_object->SetMessage(531561); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531562, -1, 32921); //@t
				var_0_object->AddReply(531563, -1, 32922); //@t
				return 0;
			}
			var_3_string = true;
			bool var_61_bool;
			func_1879(var_61_bool);
			if(var_61_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xa2";
	
	}

}


task task_2
{
}


task task_3
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, int var_10_int, int var_11_int, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, cvector var_22_cvector)
	{
		if(1 != 0) {
			func_1792();
			if(var_22_cvector == 32444) {
				object var_27_object; object var_28_object;
				var_27_object = var_1_object;
				var_28_object = var_0_object;
				func_1881();
			}
			if(var_22_cvector == 32756) {
				object var_56_object; object var_57_object;
				var_56_object = var_1_object;
				var_57_object = var_0_object;
				func_1881();
			}
			if(var_22_cvector == 32750) {
				object var_60_object; object var_61_object;
				var_60_object = var_1_object;
				var_61_object = var_0_object;
				func_1890();
			}
			if(var_21_bool == 32441) {
				bool var_78_bool;
				func_1906(var_1_object);
				if(var_78_bool != 0) {
					func_383(var_22_cvector, "Questioning");
					var_0_object->SetMessage(531123); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(531124, 32443, 32442); //@t
					var_0_object->AddReply(531403, 32745, 32744); //@t
					return 0;
				}
				func_383(var_22_cvector, "Neutral");
				var_0_object->SetMessage(531127); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531128, -1, 32446); //@t
				var_0_object->AddReply(531398, -1, 32739); //@t
				return 0;
			}
			if(var_21_bool == 32745) {
				func_383(var_22_cvector, "Grin");
				var_0_object->SetMessage(531404); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531405, 32749, 32746); //@t
				var_0_object->AddReply(531406, 32443, 32747); //@t
				return 0;
			}
			if(var_21_bool == 32443) {
				func_383(var_22_cvector, "Suspicion");
				var_0_object->SetMessage(531125); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531399, 32741, 32740); //@t
				return 0;
			}
			if(var_21_bool == 32741) {
				func_383(var_22_cvector, "Suspicion");
				var_0_object->SetMessage(531400); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531401, 32757, 32742); //@t
				var_0_object->AddReply(531407, 32749, 32748); //@t
				return 0;
			}
			if(var_21_bool == 32749) {
				func_383(var_22_cvector, "Questioning");
				var_0_object->SetMessage(531408); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531409, -1, 32750); //@t
				return 0;
			}
			if(var_21_bool == 32757) {
				func_383(var_22_cvector, "Doubt");
				var_0_object->SetMessage(531415); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531417, 32760, 32759); //@t
				var_0_object->AddReply(531416, 32743, 32758); //@t
				return 0;
			}
			if(var_21_bool == 32743) {
				func_383(var_22_cvector, "Grin");
				var_0_object->SetMessage(531402); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531126, -1, 32444); //@t
				var_0_object->AddReply(531410, 32753, 32752); //@t
				return 0;
			}
			if(var_21_bool == 32753) {
				func_383(var_22_cvector, "Neutral");
				var_0_object->SetMessage(531411); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531412, 32755, 32754); //@t
				return 0;
			}
			if(var_21_bool == 32755) {
				func_383(var_22_cvector, "Grin");
				var_0_object->SetMessage(531413); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531414, -1, 32756); //@t
				return 0;
			}
			if(var_21_bool == 32760) {
				func_383(var_22_cvector, "Doubt");
				var_0_object->SetMessage(531418); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531419, 32743, 32761); //@t
				return 0;
			}
			var_3_string = true;
			bool var_193_bool;
			func_1879(var_193_bool);
			if(var_193_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x196";
	
	}

}


task task_4
{
}


task task_5
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, int var_15_int, int var_16_int, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, cvector var_22_cvector)
	{
		if(1 != 0) {
			func_1792();
			if(var_22_cvector == 36944) {
				object var_27_object; object var_28_object;
				var_27_object = var_1_object;
				var_28_object = var_0_object;
				func_1900();
			}
			if(var_21_bool == 36943) {
				func_822(var_22_cvector, "Doubt");
				var_0_object->SetMessage(535268); //@t
				var_0_object->ClearReplies(); //@t
				bool var_51_bool;
				func_1918(var_1_object);
				if(var_51_bool != 0)
					var_0_object->AddReply(535269, 37004, 36944); //@t
				var_0_object->AddReply(535322, -1, 37003); //@t
				return 0;
			}
			if(var_21_bool == 37004) {
				func_822(var_22_cvector, "Doubt");
				var_0_object->SetMessage(535323); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535325, 37007, 37006); //@t
				var_0_object->AddReply(535324, 37008, 37005); //@t
				return 0;
			}
			if(var_21_bool == 37008) {
				func_822(var_22_cvector, "Grin");
				var_0_object->SetMessage(535327); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535328, 37015, 37009); //@t
				var_0_object->AddReply(535329, 37011, 37010); //@t
				return 0;
			}
			if(var_21_bool == 37011) {
				func_822(var_22_cvector, "Grin");
				var_0_object->SetMessage(535330); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535331, 37007, 37012); //@t
				return 0;
			}
			if(var_21_bool == 37015) {
				func_822(var_22_cvector, "Grin");
				var_0_object->SetMessage(535334); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535336, -1, 37017); //@t
				var_0_object->AddReply(535335, -1, 37016); //@t
				return 0;
			}
			if(var_21_bool == 37007) {
				func_822(var_22_cvector, "Questioning");
				var_0_object->SetMessage(535326); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535332, 37014, 37013); //@t
				return 0;
			}
			if(var_21_bool == 37014) {
				func_822(var_22_cvector, "Questioning");
				var_0_object->SetMessage(535333); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535337, -1, 37019); //@t
				var_0_object->AddReply(535338, -1, 37020); //@t
				return 0;
			}
			var_3_string = true;
			bool var_119_bool;
			func_1879(var_119_bool);
			if(var_119_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x34d";
	
	}

}


task task_6
{
}


task task_7
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, int var_20_int, int var_21_int, cvector var_22_cvector)
	{
		if(1 != 0) {
			func_1792();
			if(var_21_int == 42563) {
				func_1166(var_22_cvector, "Neutral");
				var_0_object->SetMessage(540554); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540555, -1, 42564); //@t
				var_0_object->AddReply(540794, -1, 42843); //@t
				return 0;
			}
			var_3_string = true;
			bool var_51_bool;
			func_1879(var_51_bool);
			if(var_51_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x4a5";
	
	}

}


maintask task_8
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, cvector var_20_cvector)
	{
		var_21_bool = GlobalVars[1];
		GlobalVars[1] = false;
		func_1237(var_20_cvector);
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, cvector var_20_cvector, int var_21_int)
	{
		if(var_21_int == 10) {
			func_1302();
			bool var_25_bool = false;
			bool var_26_bool;
			func_1516(var_26_bool);
			if(var_26_bool != 0) {
				bool var_29_bool;
				func_1271(var_29_bool);
				if(var_29_bool != 0)
					var_25_bool = true;
			}
			if(var_25_bool != 0) {
				bool var_46_bool;
				func_1251(var_46_bool);
				if(var_46_bool != 0) {
					bool var_65_bool; object var_66_object;
					object var_67_object;
					func_1799(var_67_object);
					var_67_object = var_66_object;
					func_1666(var_65_bool, var_66_object);
				}
			} else {
				func_1266(var_21_int);
				func_1293();
			}
		}
	
	}

	// @pe
	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, cvector var_20_cvector)
	{
		func_1484();
		func_1302();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, cvector var_20_cvector)
	{
		@StopGroup0();
		func_1302();
		func_1746("Neutral");
		func_1293();
	}

	// @pe
	void OnLSHAnimationEnd(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, cvector var_20_cvector, bool var_21_bool)
	{
		if(var_21_bool != 0)
			func_1293();
		else
			func_1746("Neutral");
	
	}

	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, cvector var_20_cvector, object var_21_object)
	{
		bool var_23_bool;
		@IsOverrideActive(var_23_bool);
		if(!var_23_bool) { //@nz
			disable OnUse;
			func_1484();
			bool var_25_bool; object var_26_object;
			var_21_object = var_26_object;
			func_1507(var_25_bool, var_26_object);
			enable OnUse;
			object var_39_object;
			var_21_object = var_39_object;
			func_2014(var_39_object);
			func_1746("Neutral");
			func_1302();
			func_1293();
		}
	}

}


void func_1792(void)
{
	bool var_24_bool;
	func_1879(var_24_bool);
	if(var_24_bool != 0)
		@lshStopSpeech();
}


void func_0(object var_0_object, int var_42_int, object var_43_object)
{
	var_0_object = var_43_object;
	bool var_53_bool; object var_54_object;
	var_43_object = var_54_object;
	func_1521(var_53_bool, var_54_object, 70.0);
	if(!var_53_bool) { //@nz
		var_42_int = -2;
		return 8;
	}
	object var_49_object;
	@CreateDialog(var_49_object);
	int var_101_int;
	func_1873(var_101_int);
	var_49_object->SetNPCName(var_101_int);
	int var_102_int;
	func_1871(var_102_int);
	var_49_object->SetNPCDescription(var_102_int);
	string var_103_string;
	func_1875(var_103_string);
	var_49_object->SetPhoto(var_103_string);
	string var_104_string;
	func_1877(var_104_string);
	var_49_object->SetPhoto2(var_104_string);
	int var_105_int;
	func_1997(var_105_int);
	var_49_object->SetPlayerName(var_105_int);
	bool var_50_bool;
	@IsOverrideActive(var_50_bool);
	if(var_50_bool != 0) {
		var_42_int = -2;
		return 8;
	}
	@DoDialog(var_49_object);
	bool var_114_bool; object var_115_object;
	object var_116_object;
	func_1799(var_116_object);
	var_116_object = var_115_object;
	func_1608(var_114_bool, var_115_object);
	object var_209_object; object var_210_object;
	var_43_object = var_209_object;
	var_49_object = var_210_object;
	TaskCall(1);
	func_81(var_211_object, var_212_object, var_213_string, var_214_bool, var_209_object, var_210_object);
	TaskReturn();
	bool var_52_bool;
	var_49_object->IsDialogEnd(var_52_bool);
	
	for(;;) {
		var_258_bool = !var_52_bool; //@nz
		if(var_258_bool == 0) goto Label_70;
		@sync();
		var_49_object->IsDialogEnd(var_52_bool);
	}
	
Label_70:
	object var_259_object;
	var_43_object = var_259_object;
	func_1590();
	@StopDialog(var_49_object);
	var_49_object->GetReturnValue(-1);
	int var_51_int = var_42_int;
}
EMIT "Stack[-4] = 0";


void func_1666(bool var_125_bool, object var_126_object)
{
	string var_132_string; bool var_134_bool; int var_135_int; string var_136_string;
	var_132_string = "c";
	int var_133_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_126_object->HasProperty((var_132_string + (var_133_int + 1)), var_134_bool);
			if(!var_134_bool) { //@nz
			} else {
				var_133_int += 1;
			}
		}
		if(!var_133_int) { //@nz
			var_125_bool = false;
			return 10;
		}
		var_135_int = 0;
		if(var_133_int > 1)
			@irand(var_135_int, var_133_int);
		var_126_object->GetProperty((var_132_string + (var_135_int + 1)), var_136_string);
		bool var_148_bool; string var_149_string;
		var_136_string = var_149_string;
		func_1777(var_148_bool, var_149_string);
		var_148_bool = var_125_bool;
		return 10;

	}
}


void func_1027(object var_0_object, int var_404_int, object var_405_object)
{
	var_0_object = var_405_object;
	bool var_415_bool; object var_416_object;
	var_405_object = var_416_object;
	func_1521(var_415_bool, var_416_object, 70.0);
	if(!var_415_bool) { //@nz
		var_404_int = -2;
		return 8;
	}
	object var_411_object;
	@CreateDialog(var_411_object);
	int var_419_int;
	func_1873(var_419_int);
	var_411_object->SetNPCName(var_419_int);
	int var_420_int;
	func_1871(var_420_int);
	var_411_object->SetNPCDescription(var_420_int);
	string var_421_string;
	func_1875(var_421_string);
	var_411_object->SetPhoto(var_421_string);
	string var_422_string;
	func_1877(var_422_string);
	var_411_object->SetPhoto2(var_422_string);
	int var_423_int;
	func_1997(var_423_int);
	var_411_object->SetPlayerName(var_423_int);
	bool var_412_bool;
	@IsOverrideActive(var_412_bool);
	if(var_412_bool != 0) {
		var_404_int = -2;
		return 8;
	}
	@DoDialog(var_411_object);
	bool var_425_bool; object var_426_object;
	object var_427_object;
	func_1799(var_427_object);
	var_427_object = var_426_object;
	func_1608(var_425_bool, var_426_object);
	object var_428_object; object var_429_object;
	var_405_object = var_428_object;
	var_411_object = var_429_object;
	TaskCall(7);
	func_1108(var_430_object, var_431_object, var_432_string, var_433_bool, var_428_object, var_429_object);
	TaskReturn();
	bool var_414_bool;
	var_411_object->IsDialogEnd(var_414_bool);
	
	for(;;) {
		var_458_bool = !var_414_bool; //@nz
		if(var_458_bool == 0) goto Label_1097;
		@sync();
		var_411_object->IsDialogEnd(var_414_bool);
	}
	
Label_1097:
	object var_459_object;
	var_405_object = var_459_object;
	func_1590();
	@StopDialog(var_411_object);
	var_411_object->GetReturnValue(-1);
	int var_413_int = var_404_int;
}
EMIT "Stack[-4] = 0";


void func_1413(void)
{
	bool var_34_bool; int var_35_int; int var_36_int; bool var_37_bool;
	@WaitForAnimEnd();
	bool var_38_bool;
	func_1516(var_38_bool);
	if(!var_38_bool) //@nz
		return 12;
	int var_40_int;
	func_1854(var_40_int);
	int var_32_int;
	var_40_int = var_32_int;
	int var_33_int = 0;
	
	for(;;) {
		bool var_53_bool = false;
		if(var_33_int < 5) {
			bool var_56_bool;
			func_1516(var_56_bool);
			if(var_56_bool != 0)
				var_53_bool = true;
		}
		if(var_53_bool != 0) {
			if(!var_32_int) { //@nz
				@Sleep(3, var_34_bool);
				if(!var_34_bool) { //@nz
				} else {
			} else {
			@irand(var_35_int, var_32_int);
			@irand(var_36_int, 5);
			if(var_36_int != 0)
				var_35_int = 0;
			string var_67_string; int var_68_int;
			var_35_int = var_68_int;
			func_1847(var_67_string, var_68_int);
			@PlayAnimation("all", var_67_string);
			@WaitForAnimEnd(var_37_bool);
			var_69_bool = !var_37_bool; //@nz
			if(var_69_bool == 0) goto Label_1468;
			goto Label_1479;
			}
				Label_1468:
					bool var_60_bool;
					func_1482(var_60_bool);
					var_61_bool = !var_60_bool; //@nz
					if(var_61_bool == 0) goto Label_1474;
			}
		}
	Label_1479:
		for(;;) {
			@ResetAAS();
			return 12;

		}

	Label_1474:
		@ResetAAS();
		var_33_int += 1;
	}
	
}


void func_1799(object var_116_object)
{
	object var_118_object;
	@self(var_118_object);
	var_118_object = var_116_object;
}
EMIT "Stack[-1] = 0";


void func_1930(void)
{
	object var_63_object;
	@CreateDiaryEntry(var_63_object, 611, 2, 531506);
	bool var_67_bool; object var_68_object;
	var_63_object = var_68_object;
	func_1969(var_67_bool, var_68_object, 598);
}
EMIT "Stack[-1] = 0";


// @pe
void func_139(object var_2_object, string var_216_string)
{
	bool var_217_bool;
	func_1879(var_217_bool);
	if(!var_217_bool) //@nz
		return 0;
	if(var_216_string == var_2_object)
		return 0;
	string var_220_string; bool var_221_bool;
	var_216_string = var_220_string;
	if(var_216_string == "")
		var_221_bool = false;
	else
		var_221_bool = true;
	func_1762(var_220_string, var_221_bool);
	var_2_object = var_216_string;
	
}


void func_1293(void)
{
	float var_463_float;
	@rand(var_463_float, 8, 16);
	@SetTimer(10, var_463_float);
}


// @pe
void func_1166(object var_2_object, string var_435_string)
{
	bool var_436_bool;
	func_1879(var_436_bool);
	if(!var_436_bool) //@nz
		return 0;
	if(var_435_string == var_2_object)
		return 0;
	string var_439_string; bool var_440_bool;
	var_435_string = var_439_string;
	if(var_435_string == "")
		var_440_bool = false;
	else
		var_440_bool = true;
	func_1762(var_439_string, var_440_bool);
	var_2_object = var_435_string;
	
}


void func_1805(cvector var_80_cvector, cvector var_81_cvector)
{
	float var_84_float = sqrt(var_81_cvector | var_81_cvector);
	if(var_84_float < 0.000001)
		var_80_cvector = [0.0, 0.0, 0.0];
	var_80_cvector = var_81_cvector / var_84_float;
}


void func_1302(void)
{
	@KillTimer(10);
}


void func_1815(int var_301_int, string var_302_string)
{
	int var_304_int;
	@GetVariable(var_302_string, var_304_int);
	var_304_int = var_301_int;
}


void func_1943(void)
{
	object var_32_object;
	@CreateDiaryEntry(var_32_object, 601, 2, 531152);
	bool var_36_bool; object var_37_object;
	var_32_object = var_37_object;
	func_1969(var_36_bool, var_37_object, 598);
}
EMIT "Stack[-1] = 0";


void func_1820(bool var_70_bool, string var_71_string, string var_72_string)
{
	object var_74_object;
	@FindActor(var_74_object, var_71_string);
	if(var_74_object == null)
		var_70_bool = false;
	@Trigger(var_74_object, var_72_string);
	var_70_bool = true;
}
EMIT "Stack[-1] = 0";


void func_1956(object var_45_object)
{
	object var_47_object;
	@GetDiaryRoot(var_47_object);
	if(!var_47_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_45_object = false;
	}
	var_47_object = var_45_object;
}
EMIT "Stack[-1] = 0";


void func_678(object var_0_object, int var_342_int, object var_343_object)
{
	var_0_object = var_343_object;
	bool var_353_bool; object var_354_object;
	var_343_object = var_354_object;
	func_1521(var_353_bool, var_354_object, 70.0);
	if(!var_353_bool) { //@nz
		var_342_int = -2;
		return 8;
	}
	object var_349_object;
	@CreateDialog(var_349_object);
	int var_357_int;
	func_1873(var_357_int);
	var_349_object->SetNPCName(var_357_int);
	int var_358_int;
	func_1871(var_358_int);
	var_349_object->SetNPCDescription(var_358_int);
	string var_359_string;
	func_1875(var_359_string);
	var_349_object->SetPhoto(var_359_string);
	string var_360_string;
	func_1877(var_360_string);
	var_349_object->SetPhoto2(var_360_string);
	int var_361_int;
	func_1997(var_361_int);
	var_349_object->SetPlayerName(var_361_int);
	bool var_350_bool;
	@IsOverrideActive(var_350_bool);
	if(var_350_bool != 0) {
		var_342_int = -2;
		return 8;
	}
	@DoDialog(var_349_object);
	bool var_363_bool; object var_364_object;
	object var_365_object;
	func_1799(var_365_object);
	var_365_object = var_364_object;
	func_1608(var_363_bool, var_364_object);
	object var_366_object; object var_367_object;
	var_343_object = var_366_object;
	var_349_object = var_367_object;
	TaskCall(5);
	func_759(var_368_object, var_369_object, var_370_string, var_371_bool, var_366_object, var_367_object);
	TaskReturn();
	bool var_352_bool;
	var_349_object->IsDialogEnd(var_352_bool);
	
	for(;;) {
		var_402_bool = !var_352_bool; //@nz
		if(var_402_bool == 0) goto Label_748;
		@sync();
		var_349_object->IsDialogEnd(var_352_bool);
	}
	
Label_748:
	object var_403_object;
	var_343_object = var_403_object;
	func_1590();
	@StopDialog(var_349_object);
	var_349_object->GetReturnValue(-1);
	int var_351_int = var_342_int;
}
EMIT "Stack[-4] = 0";


void func_1703(bool var_156_bool, object var_157_object)
{
	bool var_165_bool; int var_166_int; string var_167_string;
	int var_169_int;
	func_1832(var_169_int);
	string var_163_string = ("d" + var_169_int) + "m";
	int var_164_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_157_object->HasProperty((var_163_string + (var_164_int + 1)), var_165_bool);
			if(!var_165_bool) { //@nz
			} else {
				var_164_int += 1;
			}
		}
		if(!var_164_int) { //@nz
			var_156_bool = false;
			return 10;
		}
		var_166_int = 0;
		if(var_164_int > 1)
			@irand(var_166_int, var_164_int);
		var_157_object->GetProperty((var_163_string + (var_166_int + 1)), var_167_string);
		bool var_188_bool; string var_189_string;
		var_167_string = var_189_string;
		func_1777(var_188_bool, var_189_string);
		var_188_bool = var_156_bool;
		return 10;

	}
}


void func_1832(int var_169_int)
{
	float var_171_float;
	@GetGameTime(var_171_float);
	var_169_int = 1 + (var_171_float / 24);
}


// @pe
void func_300(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_292_object, object var_293_object)
{
	var_0_object = var_293_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_299_bool;
		func_1906(var_292_object);
		if(var_299_bool != 0) {
			func_383(var_293_object, "Questioning");
			var_0_object->SetMessage(531123); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(531124, 32443, 32442); //@t
			var_0_object->AddReply(531403, 32745, 32744); //@t
		} else {
					func_383(var_293_object, "Neutral");
					var_0_object->SetMessage(531127); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(531128, -1, 32446); //@t
					var_0_object->AddReply(531398, -1, 32739); //@t
		}
	}
	for(;;) {
		bool var_322_bool;
		func_1879(var_322_bool);
		if(var_322_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_1746(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_382;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_382:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x130";


void func_1969(bool var_36_bool, object var_37_object, int var_38_int)
{
	object var_45_object;
	func_1956(var_45_object);
	object var_42_object;
	var_45_object = var_42_object;
	object var_43_object;
	var_42_object->Find(var_38_int, var_43_object);
	if(!var_43_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_38_int);
		var_36_bool = false;
	}
	var_43_object->AddChild(var_37_object);
	@SendWorldWndMessage(7);
	int var_44_int;
	var_37_object->GetCategory(var_44_int);
	@SetDiarySection(var_44_int);
	var_36_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


// @pe
void func_1841(bool var_268_bool, int var_269_int)
{
	int var_270_int;
	func_1832(var_270_int);
	var_268_bool = var_270_int == var_269_int;
}


void func_1590(void)
{
	bool var_261_bool;
	@CameraSwitchToNormal(true);
	bool var_263_bool;
	func_1879(var_263_bool);
	if(var_263_bool != 0) {
	} else {
		@HasAnimationTrack(var_261_bool, "head");
		if(var_261_bool == 0) goto Label_1607;
		@UnlookAsync("head");
	}
Label_1607:
	
}


// @pe
void func_822(object var_2_object, string var_373_string)
{
	bool var_374_bool;
	func_1879(var_374_bool);
	if(!var_374_bool) //@nz
		return 0;
	if(var_373_string == var_2_object)
		return 0;
	string var_377_string; bool var_378_bool;
	var_373_string = var_377_string;
	if(var_373_string == "")
		var_378_bool = false;
	else
		var_378_bool = true;
	func_1762(var_377_string, var_378_bool);
	var_2_object = var_373_string;
	
}


void func_1847(string var_46_string, int var_47_int)
{
	string var_49_string = "idle";
	if(var_47_int != 0)
		var_49_string += var_47_int;
	var_49_string = var_46_string;
}


void func_1854(int var_40_int)
{
	int var_43_int; bool var_44_bool;
	var_43_int = 0;
	
	for(;;) {
		string var_46_string; int var_47_int;
		var_43_int = var_47_int;
		func_1847(var_46_string, var_47_int);
		@HasAnimation(var_44_bool, "all", var_46_string);
		if(!var_44_bool) //@nz
			break;
		var_43_int += 1;
	}
	var_43_int = var_40_int;
}


void func_1608(bool var_114_bool, object var_115_object)
{
	int var_121_int; int var_122_int;
	@GetVariable("voice_common", var_121_int);
	if(var_121_int != 0) {
		bool var_125_bool; object var_126_object;
		var_115_object = var_126_object;
		func_1666(var_125_bool, var_126_object);
		if(!var_125_bool) { //@nz
			bool var_156_bool; object var_157_object;
			var_115_object = var_157_object;
			func_1703(var_156_bool, var_157_object);
			if(!var_156_bool) { //@nz
				var_114_bool = false;
				return 4;
			}
		}
		@irand(var_122_int, 2);
		if(var_122_int != 0)
			@SetVariable("voice_common", ((var_121_int + 1) % 3));
		else
			@SetVariable("voice_common", 0);
		bool var_201_bool; object var_202_object;
		var_115_object = var_202_object;
		func_1703(var_201_bool, var_202_object);
		if(!var_201_bool) { //@nz
			bool var_204_bool; object var_205_object;
			var_115_object = var_205_object;
			func_1666(var_204_bool, var_205_object);
			if(!var_204_bool) { //@nz
				var_114_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_1664;
	
Label_1664:
	var_114_bool = true;
	
}


void func_1482(bool var_60_bool)
{
	var_60_bool = true;
}


void func_1484(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_1997(int var_105_int)
{
	int var_107_int;
	@GetVariable("branch", var_107_int);
	if(var_107_int == 0) {
		var_105_int = 1;
		return 2;
	EMIT "GOTO 0x7dc";
	}
	if(var_107_int == 1) {
		var_105_int = 2;
		return 2;
	}
	var_105_int = 3;
}


void func_1871(int var_102_int)
{
	var_102_int = 515536;
}


void func_1873(int var_101_int)
{
	var_101_int = 502861;
}


// @pe
void func_81(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_209_object, object var_210_object)
{
	var_0_object = var_210_object;
	var_1_object = var_209_object;
	var_3_string = false;
	if(1 != 0) {
		func_139(var_210_object, "Neutral");
		var_0_object->SetMessage(518009); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(518010, 32920, 19143); //@t
		var_0_object->AddReply(531560, -1, 32919); //@t
		goto Label_109;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x55";
	}
Label_109:
	bool var_240_bool;
	func_1879(var_240_bool);
	if(var_240_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_1746(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_138;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_138:
		return 0;

	}
	
}


void func_1875(string var_103_string)
{
	var_103_string = "ui/NPC_Han.png";
}


void func_1746(string var_242_string)
{
	bool var_246_bool; float var_247_float; float var_248_float;
	@lshHasAnimation(var_246_bool, var_242_string);
	if(var_246_bool != 0) {
		@lshGetAnimTimes(var_242_string, var_247_float, var_248_float);
		@lshPlayAnimation(var_247_float, var_248_float, false);
	} else {
		@Trace("Can't find lsh animation : " + var_242_string);
	}
	
}


void func_1877(string var_104_string)
{
	var_104_string = "ui/NPC_Han_b.png";
}


// @pe
void func_1108(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_428_object, object var_429_object)
{
	var_0_object = var_429_object;
	var_1_object = var_428_object;
	var_3_string = false;
	if(1 != 0) {
		func_1166(var_429_object, "Neutral");
		var_0_object->SetMessage(540554); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(540555, -1, 42564); //@t
		var_0_object->AddReply(540794, -1, 42843); //@t
		goto Label_1136;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x458";
	}
Label_1136:
	bool var_450_bool;
	func_1879(var_450_bool);
	if(var_450_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_1746(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_1165;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_1165:
		return 0;

	}
	
}


void func_1879(bool var_96_bool)
{
	var_96_bool = true;
}


void func_1237(object var_0_object)
{
	bool var_22_bool;
	func_1516(var_22_bool);
	if(!var_22_bool) //@nz
		@Hold();
	@GetDirection(var_0_object);
	
	for(;;) {
		func_1413();
	}
}
EMIT "Return(); Pop(0)";


// @pe
void func_1881(void)
{
	@SetVariable("b11q02", 4);
	func_1943();
}


void func_1489(float var_36_float, object var_37_object)
{
	cvector var_41_cvector;
	@GetPosition(var_41_cvector);
	cvector var_42_cvector;
	var_37_object->GetPosition(var_42_cvector);
	var_36_float = (var_42_cvector - var_41_cvector) | (var_42_cvector - var_41_cvector);
}


void func_1497(bool var_29_bool, cvector var_30_cvector)
{
	cvector var_34_cvector;
	@GetPosition(var_34_cvector);
	cvector var_35_cvector = var_30_cvector - var_34_cvector;
	var_37_float = GetByIndex(var_35_cvector, 0);
	var_38_float = GetByIndex(var_35_cvector, 2);
	bool var_36_bool;
	@Rotate(var_37_float, var_38_float, var_36_bool);
	var_36_bool = var_29_bool;
}


// @pe
void func_2014(object var_39_object)
{
	var_40_bool = GlobalVars[1];
	if(!var_40_bool) { //@nz
		int var_42_int; object var_43_object;
		var_39_object = var_43_object;
		TaskCall(0);
		func_0(var_44_object, var_42_int, var_43_object);
		TaskReturn();
		var_267_bool = GlobalVars[1];
		GlobalVars[1] = true;
	}
	bool var_268_bool;
	func_1841(var_268_bool, 11);
	if(var_268_bool != 0) {
		int var_271_int; object var_272_object;
		var_39_object = var_272_object;
		TaskCall(2);
		func_226(var_273_object, var_271_int, var_272_object);
		TaskReturn();
		return 0;
	}
	bool var_340_bool;
	func_1841(var_340_bool, 12);
	if(var_340_bool != 0) {
		int var_342_int; object var_343_object;
		var_39_object = var_343_object;
		TaskCall(4);
		func_678(var_344_object, var_342_int, var_343_object);
		TaskReturn();
		return 0;
	}
	int var_404_int; object var_405_object;
	var_39_object = var_405_object;
	TaskCall(6);
	func_1027(var_406_object, var_404_int, var_405_object);
	TaskReturn();
}


void func_1762(string var_220_string, bool var_221_bool)
{
	bool var_227_bool; float var_228_float; float var_229_float;
	@lshHasAnimation(var_227_bool, var_220_string);
	if(var_227_bool != 0) {
		@lshGetAnimTimes(var_220_string, var_228_float, var_229_float);
		@lshPlayAnimation(var_228_float, var_229_float, var_221_bool);
	} else {
		@Trace("Can't find lsh animation : " + var_220_string);
	}
	
}


// @pe
void func_1890(void)
{
	func_1930();
	bool var_70_bool;
	func_1820(var_70_bool, "quest_b11_02", "fail");
}


void func_1507(bool var_25_bool, object var_26_object)
{
	cvector var_28_cvector;
	var_26_object->GetPosition(var_28_cvector);
	bool var_29_bool; cvector var_30_cvector;
	var_28_cvector = var_30_cvector;
	func_1497(var_29_bool, var_30_cvector);
	var_29_bool = var_25_bool;
}


void func_1251(bool var_46_bool)
{
	object var_48_object;
	@FindActor(var_48_object, "player");
	if(!var_48_object) //@nz
		var_46_bool = false;
	bool var_51_bool; object var_52_object;
	var_48_object = var_52_object;
	func_1507(var_51_bool, var_52_object);
	var_51_bool = var_46_bool;
}
EMIT "Stack[-1] = 0";


void func_226(object var_0_object, int var_271_int, object var_272_object)
{
	var_0_object = var_272_object;
	bool var_282_bool; object var_283_object;
	var_272_object = var_283_object;
	func_1521(var_282_bool, var_283_object, 70.0);
	if(!var_282_bool) { //@nz
		var_271_int = -2;
		return 8;
	}
	object var_278_object;
	@CreateDialog(var_278_object);
	int var_286_int;
	func_1873(var_286_int);
	var_278_object->SetNPCName(var_286_int);
	int var_287_int;
	func_1871(var_287_int);
	var_278_object->SetNPCDescription(var_287_int);
	string var_288_string;
	func_1875(var_288_string);
	var_278_object->SetPhoto(var_288_string);
	string var_289_string;
	func_1877(var_289_string);
	var_278_object->SetPhoto2(var_289_string);
	int var_290_int;
	func_1997(var_290_int);
	var_278_object->SetPlayerName(var_290_int);
	bool var_279_bool;
	@IsOverrideActive(var_279_bool);
	if(var_279_bool != 0) {
		var_271_int = -2;
		return 8;
	}
	@DoDialog(var_278_object);
	object var_292_object; object var_293_object;
	var_272_object = var_292_object;
	var_278_object = var_293_object;
	TaskCall(3);
	func_300(var_294_object, var_295_object, var_296_string, var_297_bool, var_292_object, var_293_object);
	TaskReturn();
	bool var_281_bool;
	var_278_object->IsDialogEnd(var_281_bool);
	
	for(;;) {
		var_338_bool = !var_281_bool; //@nz
		if(var_338_bool == 0) goto Label_289;
		@sync();
		var_278_object->IsDialogEnd(var_281_bool);
	}
	
Label_289:
	object var_339_object;
	var_272_object = var_339_object;
	func_1590();
	@StopDialog(var_278_object);
	var_278_object->GetReturnValue(-1);
	int var_280_int = var_271_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_1900(void)
{
	@SetVariable("oob12Han1", 1);
}


void func_1516(bool var_22_bool)
{
	bool var_24_bool;
	@IsLoaded(var_24_bool);
	var_24_bool = var_22_bool;
}


void func_1521(bool var_53_bool, object var_54_object, float var_55_float)
{
	cvector var_66_cvector; bool var_73_bool;
	var_54_object->GetPosition(var_66_cvector);
	float var_65_float;
	var_54_object->GetEyesHeight(var_65_float);
	var_74_float = GetByIndex(var_66_cvector, 1);
	SetByIndex(var_66_cvector, 1) = (var_74_float + var_65_float);
	cvector var_67_cvector;
	@GetPosition(var_67_cvector);
	@GetEyesHeight(var_65_float);
	var_75_float = GetByIndex(var_67_cvector, 1);
	SetByIndex(var_67_cvector, 1) = (var_75_float + var_65_float);
	cvector var_68_cvector = var_66_cvector - var_67_cvector;
	var_76_float = GetByIndex(var_68_cvector, 1);
	SetByIndex(var_68_cvector, 1) = (float)0;
	var_78_float = sqrt(var_68_cvector | var_68_cvector);
	var_68_cvector /= var_78_float;
	cvector var_69_cvector = -var_68_cvector;
	cvector var_80_cvector;
	func_1805(var_80_cvector, (var_69_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_70_cvector = ((var_68_cvector * var_55_float) + (var_80_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_72_bool;
	@IsOverrideActive(var_72_bool);
	if(var_72_bool != 0)
		var_53_bool = false;
	@StopWorld();
	@CameraTransit((var_67_cvector + var_70_cvector), var_69_cvector, true);
	var_94_float = GetByIndex(var_70_cvector, 0);
	var_95_float = GetByIndex(var_70_cvector, 2);
	@Rotate(var_94_float, var_95_float);
	bool var_96_bool;
	func_1879(var_96_bool);
	if(var_96_bool != 0) {
	} else {
		@HasAnimationTrack(var_73_bool, "head");
		if(var_73_bool == 0) goto Label_1584;
		@LookAsyncCamera("head");
	}
Label_1584:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_53_bool = true;
	
}


// @pe
void func_1906(bool var_299_bool)
{
	int var_301_int;
	func_1815(var_301_int, "b11q02");
	if(var_301_int == 3)
		var_299_bool = true;
	var_299_bool = false;
}


void func_1266(object var_0_object)
{
	var_98_float = GetByIndex(var_0_object, 0);
	var_99_float = GetByIndex(var_0_object, 2);
	@RotateAsync(var_98_float, var_99_float);
}


void func_1777(bool var_148_bool, string var_149_string)
{
	bool var_151_bool;
	bool var_152_bool;
	func_1879(var_152_bool);
	if(var_152_bool != 0) {
		@lshHasSpeech(var_151_bool, var_149_string);
		if(var_151_bool != 0) {
			@lshPlaySpeech(var_149_string);
			var_148_bool = true;
		}
	}
	var_148_bool = false;
}


// @pe
void func_759(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_366_object, object var_367_object)
{
	var_0_object = var_367_object;
	var_3_string = false;
	if(1 != 0) {
		func_822(var_367_object, "Doubt");
		var_0_object->SetMessage(535268); //@t
		var_0_object->ClearReplies(); //@t
		bool var_382_bool;
		func_1918(var_366_object);
		if(var_382_bool != 0)
			var_0_object->AddReply(535269, 37004, 36944); //@t
		var_0_object->AddReply(535322, -1, 37003); //@t
		goto Label_792;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x2fb";
	}
Label_792:
	bool var_394_bool;
	func_1879(var_394_bool);
	if(var_394_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_1746(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_821;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_821:
		return 0;

	}
	
}


void func_1271(bool var_29_bool)
{
	object var_32_object;
	@FindActor(var_32_object, "player");
	if(!var_32_object) { //@nz
		var_29_bool = false;
		return 4;
	}
	float var_36_float; object var_37_object;
	func_1489(var_36_float, var_37_object);
	if(var_36_float > 90000.0) {
		var_29_bool = false;
		return 4;
	}
	bool var_33_bool;
	@CanSee(var_33_bool, var_37_object);
	var_33_bool = var_29_bool;
}
EMIT "Stack[-2] = 0";


// @pe
void func_1918(bool var_382_bool)
{
	int var_384_int;
	func_1815(var_384_int, "oob12Han1");
	if(var_384_int == 0) {
		var_382_bool = true;
		return 0;
	}
	var_382_bool = false;
}


// @pe
void func_383(object var_2_object, string var_307_string)
{
	bool var_308_bool;
	func_1879(var_308_bool);
	if(!var_308_bool) //@nz
		return 0;
	if(var_307_string == var_2_object)
		return 0;
	string var_311_string; bool var_312_bool;
	var_307_string = var_311_string;
	if(var_307_string == "")
		var_312_bool = false;
	else
		var_312_bool = true;
	func_1762(var_311_string, var_312_bool);
	var_2_object = var_307_string;
	
}


