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
			func_1786();
			if(var_21_bool == 26863) {
				func_134(var_22_cvector, "Neutral");
				var_0_object->SetMessage(525507); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(525508, 30772, 26864); //@t
				return 0;
			}
			if(var_21_bool == 30772) {
				func_134(var_22_cvector, "Neutral");
				var_0_object->SetMessage(529318); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(529319, -1, 30773); //@t
				var_0_object->AddReply(529320, -1, 30774); //@t
				return 0;
			}
			var_3_string = true;
			bool var_58_bool;
			func_1873(var_58_bool);
			if(var_58_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x9d";
	
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
			func_1786();
			if(var_22_cvector == 27685) {
				object var_27_object; object var_28_object;
				var_27_object = var_1_object;
				var_28_object = var_0_object;
				func_1875();
			}
			if(var_22_cvector == 30467) {
				object var_56_object; object var_57_object;
				var_56_object = var_1_object;
				var_57_object = var_0_object;
				func_1898();
			}
			if(var_22_cvector == 30471) {
				object var_74_object; object var_75_object;
				var_74_object = var_1_object;
				var_75_object = var_0_object;
				func_1898();
			}
			if(var_22_cvector == 27703) {
				object var_78_object; object var_79_object;
				var_78_object = var_1_object;
				var_79_object = var_0_object;
				func_1884();
			}
			if(var_22_cvector == 30462) {
				object var_95_object; object var_96_object;
				var_95_object = var_1_object;
				var_96_object = var_0_object;
				func_1898();
			}
			if(var_21_bool == 27680) {
				func_375(var_22_cvector, "Neutral");
				var_0_object->SetMessage(526405); //@t
				var_0_object->ClearReplies(); //@t
				bool var_117_bool;
				func_1908(var_1_object);
				if(var_117_bool != 0)
					var_0_object->AddReply(526406, 27682, 27681); //@t
				bool var_128_bool;
				func_1920(var_1_object);
				if(var_128_bool != 0)
					var_0_object->AddReply(526420, 27696, 27695); //@t
				var_0_object->AddReply(526411, -1, 27686); //@t
				var_0_object->AddReply(529012, -1, 30452); //@t
				return 0;
			}
			if(var_21_bool == 27696) {
				func_375(var_22_cvector, "Untrust");
				var_0_object->SetMessage(526421); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526422, 30457, 27697); //@t
				return 0;
			}
			if(var_21_bool == 30457) {
				func_375(var_22_cvector, "Untrust");
				var_0_object->SetMessage(529017); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(529018, 27698, 30458); //@t
				return 0;
			}
			if(var_21_bool == 27698) {
				func_375(var_22_cvector, "Neutral");
				var_0_object->SetMessage(526423); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(529019, 30464, 30459); //@t
				var_0_object->AddReply(529020, 30468, 30460); //@t
				var_0_object->AddReply(526424, 30461, 27699); //@t
				return 0;
			}
			if(var_21_bool == 30461) {
				func_375(var_22_cvector, "Rage");
				var_0_object->SetMessage(529021); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(529023, 30472, 30463); //@t
				var_0_object->AddReply(529022, -1, 30462); //@t
				return 0;
			}
			if(var_21_bool == 30472) {
				func_375(var_22_cvector, "Untrust");
				var_0_object->SetMessage(529032); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(529033, 27700, 30473); //@t
				return 0;
			}
			if(var_21_bool == 27700) {
				func_375(var_22_cvector, "Patronage");
				var_0_object->SetMessage(526425); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526426, 27702, 27701); //@t
				return 0;
			}
			if(var_21_bool == 27702) {
				func_375(var_22_cvector, "Neutral");
				var_0_object->SetMessage(526427); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526428, -1, 27703); //@t
				return 0;
			}
			if(var_21_bool == 30468) {
				func_375(var_22_cvector, "Discontent");
				var_0_object->SetMessage(529028); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(529029, 30470, 30469); //@t
				return 0;
			}
			if(var_21_bool == 30470) {
				func_375(var_22_cvector, "Rage");
				var_0_object->SetMessage(529030); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(529031, -1, 30471); //@t
				return 0;
			}
			if(var_21_bool == 30464) {
				func_375(var_22_cvector, "Discontent");
				var_0_object->SetMessage(529024); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(529025, 30466, 30465); //@t
				return 0;
			}
			if(var_21_bool == 30466) {
				func_375(var_22_cvector, "Rage");
				var_0_object->SetMessage(529026); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(529027, -1, 30467); //@t
				return 0;
			}
			if(var_21_bool == 27682) {
				var_0_object->SetMessage(526407); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526408, 30453, 27683); //@t
				return 0;
			}
			if(var_21_bool == 30453) {
				func_375(var_22_cvector, "Discontent");
				var_0_object->SetMessage(529013); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(529014, 27684, 30454); //@t
				return 0;
			}
			if(var_21_bool == 27684) {
				func_375(var_22_cvector, "Rage");
				var_0_object->SetMessage(526409); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526410, -1, 27685); //@t
				return 0;
			}
			var_3_string = true;
			bool var_249_bool;
			func_1873(var_249_bool);
			if(var_249_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x18e";
	
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
			func_1786();
			if(var_21_bool == 36960) {
				func_906(var_22_cvector, "Neutral");
				var_0_object->SetMessage(535284); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535285, 36962, 36961); //@t
				var_0_object->AddReply(535292, -1, 36968); //@t
				var_0_object->AddReply(535293, -1, 36969); //@t
				return 0;
			}
			if(var_21_bool == 36962) {
				func_906(var_22_cvector, "Neutral");
				var_0_object->SetMessage(535286); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535287, 36964, 36963); //@t
				var_0_object->AddReply(535291, -1, 36967); //@t
				return 0;
			}
			if(var_21_bool == 36964) {
				func_906(var_22_cvector, "Neutral");
				var_0_object->SetMessage(535288); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535289, -1, 36965); //@t
				var_0_object->AddReply(535290, -1, 36966); //@t
				return 0;
			}
			var_3_string = true;
			bool var_74_bool;
			func_1873(var_74_bool);
			if(var_74_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x3a1";
	
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
			func_1786();
			if(var_21_int == 42548) {
				func_1160(var_22_cvector, "Neutral");
				var_0_object->SetMessage(540539); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540540, -1, 42549); //@t
				var_0_object->AddReply(540799, -1, 42848); //@t
				return 0;
			}
			var_3_string = true;
			bool var_51_bool;
			func_1873(var_51_bool);
			if(var_51_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x49f";
	
	}

}


maintask task_8
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, cvector var_20_cvector)
	{
		var_21_bool = GlobalVars[1];
		GlobalVars[1] = false;
		func_1231(var_20_cvector);
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, cvector var_20_cvector, int var_21_int)
	{
		if(var_21_int == 10) {
			func_1296();
			bool var_25_bool = false;
			bool var_26_bool;
			func_1510(var_26_bool);
			if(var_26_bool != 0) {
				bool var_29_bool;
				func_1265(var_29_bool);
				if(var_29_bool != 0)
					var_25_bool = true;
			}
			if(var_25_bool != 0) {
				bool var_46_bool;
				func_1245(var_46_bool);
				if(var_46_bool != 0) {
					bool var_65_bool; object var_66_object;
					object var_67_object;
					func_1793(var_67_object);
					var_67_object = var_66_object;
					func_1660(var_65_bool, var_66_object);
				}
			} else {
				func_1260(var_21_int);
				func_1287();
			}
		}
	
	}

	// @pe
	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, cvector var_20_cvector)
	{
		func_1478();
		func_1296();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, cvector var_20_cvector)
	{
		@StopGroup0();
		func_1296();
		func_1740("Neutral");
		func_1287();
	}

	// @pe
	void OnLSHAnimationEnd(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, cvector var_20_cvector, bool var_21_bool)
	{
		if(var_21_bool != 0)
			func_1287();
		else
			func_1740("Neutral");
	
	}

	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, cvector var_20_cvector, object var_21_object)
	{
		bool var_23_bool;
		@IsOverrideActive(var_23_bool);
		if(!var_23_bool) { //@nz
			disable OnUse;
			func_1478();
			bool var_25_bool; object var_26_object;
			var_21_object = var_26_object;
			func_1501(var_25_bool, var_26_object);
			enable OnUse;
			object var_39_object;
			var_21_object = var_39_object;
			func_2029(var_39_object);
			func_1740("Neutral");
			func_1296();
			func_1287();
		}
	}

}


// @pe
void func_1920(bool var_319_bool)
{
	int var_321_int;
	func_1809(var_321_int, "k8q01");
	if(var_321_int == 3)
		var_319_bool = true;
	var_319_bool = false;
}


void func_1793(object var_116_object)
{
	object var_118_object;
	@self(var_118_object);
	var_118_object = var_116_object;
}
EMIT "Stack[-1] = 0";


void func_0(object var_0_object, int var_42_int, object var_43_object)
{
	var_0_object = var_43_object;
	bool var_53_bool; object var_54_object;
	var_43_object = var_54_object;
	func_1515(var_53_bool, var_54_object, 70.0);
	if(!var_53_bool) { //@nz
		var_42_int = -2;
		return 8;
	}
	object var_49_object;
	@CreateDialog(var_49_object);
	int var_101_int;
	func_1867(var_101_int);
	var_49_object->SetNPCName(var_101_int);
	int var_102_int;
	func_1865(var_102_int);
	var_49_object->SetNPCDescription(var_102_int);
	string var_103_string;
	func_1869(var_103_string);
	var_49_object->SetPhoto(var_103_string);
	string var_104_string;
	func_1871(var_104_string);
	var_49_object->SetPhoto2(var_104_string);
	int var_105_int;
	func_2012(var_105_int);
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
	func_1793(var_116_object);
	var_116_object = var_115_object;
	func_1602(var_114_bool, var_115_object);
	object var_209_object; object var_210_object;
	var_43_object = var_209_object;
	var_49_object = var_210_object;
	TaskCall(1);
	func_81(var_211_object, var_212_object, var_213_string, var_214_bool, var_209_object, var_210_object);
	TaskReturn();
	bool var_52_bool;
	var_49_object->IsDialogEnd(var_52_bool);
	
	for(;;) {
		var_255_bool = !var_52_bool; //@nz
		if(var_255_bool == 0) goto Label_70;
		@sync();
		var_49_object->IsDialogEnd(var_52_bool);
	}
	
Label_70:
	object var_256_object;
	var_43_object = var_256_object;
	func_1584();
	@StopDialog(var_49_object);
	var_49_object->GetReturnValue(-1);
	int var_51_int = var_42_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_134(object var_2_object, string var_216_string)
{
	bool var_217_bool;
	func_1873(var_217_bool);
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
	func_1756(var_220_string, var_221_bool);
	var_2_object = var_216_string;
	
}


void func_1287(void)
{
	float var_464_float;
	@rand(var_464_float, 8, 16);
	@SetTimer(10, var_464_float);
}


// @pe
void func_1160(object var_2_object, string var_436_string)
{
	bool var_437_bool;
	func_1873(var_437_bool);
	if(!var_437_bool) //@nz
		return 0;
	if(var_436_string == var_2_object)
		return 0;
	string var_440_string; bool var_441_bool;
	var_436_string = var_440_string;
	if(var_436_string == "")
		var_441_bool = false;
	else
		var_441_bool = true;
	func_1756(var_440_string, var_441_bool);
	var_2_object = var_436_string;
	
}


void func_1799(cvector var_80_cvector, cvector var_81_cvector)
{
	float var_84_float = sqrt(var_81_cvector | var_81_cvector);
	if(var_84_float < 0.000001)
		var_80_cvector = [0.0, 0.0, 0.0];
	var_80_cvector = var_81_cvector / var_84_float;
}


// @pe
void func_906(object var_2_object, string var_377_string)
{
	bool var_378_bool;
	func_1873(var_378_bool);
	if(!var_378_bool) //@nz
		return 0;
	if(var_377_string == var_2_object)
		return 0;
	string var_381_string; bool var_382_bool;
	var_377_string = var_381_string;
	if(var_377_string == "")
		var_382_bool = false;
	else
		var_382_bool = true;
	func_1756(var_381_string, var_382_bool);
	var_2_object = var_377_string;
	
}


void func_1932(void)
{
	object var_59_object;
	@CreateDiaryEntry(var_59_object, 530, 1, 530194);
	bool var_63_bool; object var_64_object;
	var_59_object = var_64_object;
	func_1984(var_63_bool, var_64_object, 438);
}
EMIT "Stack[-1] = 0";


void func_1296(void)
{
	@KillTimer(10);
}


void func_1809(int var_310_int, string var_311_string)
{
	int var_313_int;
	@GetVariable(var_311_string, var_313_int);
	var_313_int = var_310_int;
}


void func_1814(bool var_66_bool, string var_67_string, string var_68_string)
{
	object var_70_object;
	@FindActor(var_70_object, var_67_string);
	if(var_70_object == null)
		var_66_bool = false;
	@Trigger(var_70_object, var_68_string);
	var_66_bool = true;
}
EMIT "Stack[-1] = 0";


void func_1945(void)
{
	object var_32_object;
	@CreateDiaryEntry(var_32_object, 440, 1, 526465);
	bool var_36_bool; object var_37_object;
	var_32_object = var_37_object;
	func_1984(var_36_bool, var_37_object, 438);
}
EMIT "Stack[-1] = 0";


void func_1786(void)
{
	bool var_24_bool;
	func_1873(var_24_bool);
	if(var_24_bool != 0)
		@lshStopSpeech();
}


void func_1697(bool var_156_bool, object var_157_object)
{
	bool var_165_bool; int var_166_int; string var_167_string;
	int var_169_int;
	func_1826(var_169_int);
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
		func_1771(var_188_bool, var_189_string);
		var_188_bool = var_156_bool;
		return 10;

	}
}


void func_1826(int var_169_int)
{
	float var_171_float;
	@GetGameTime(var_171_float);
	var_169_int = 1 + (var_171_float / 24);
}


void func_1958(void)
{
	object var_83_object;
	@CreateDiaryEntry(var_83_object, 442, 1, 526467);
	bool var_87_bool; object var_88_object;
	var_83_object = var_88_object;
	func_1984(var_87_bool, var_88_object, 438);
}
EMIT "Stack[-1] = 0";


// @pe
void func_297(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_292_object, object var_293_object)
{
	var_0_object = var_293_object;
	var_1_object = var_292_object;
	var_3_string = false;
	if(1 != 0) {
		func_375(var_293_object, "Neutral");
		var_0_object->SetMessage(526405); //@t
		var_0_object->ClearReplies(); //@t
		bool var_308_bool;
		func_1908(var_1_object);
		if(var_308_bool != 0)
			var_0_object->AddReply(526406, 27682, 27681); //@t
		bool var_319_bool;
		func_1920(var_1_object);
		if(var_319_bool != 0)
			var_0_object->AddReply(526420, 27696, 27695); //@t
		var_0_object->AddReply(526411, -1, 27686); //@t
		var_0_object->AddReply(529012, -1, 30452); //@t
		goto Label_345;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x12d";
	}
Label_345:
	bool var_334_bool;
	func_1873(var_334_bool);
	if(var_334_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_1740(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_374;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_374:
		return 0;

	}
	
}


// @pe
void func_1835(bool var_265_bool, int var_266_int)
{
	int var_267_int;
	func_1826(var_267_int);
	var_265_bool = var_267_int == var_266_int;
}


void func_1584(void)
{
	bool var_258_bool;
	@CameraSwitchToNormal(true);
	bool var_260_bool;
	func_1873(var_260_bool);
	if(var_260_bool != 0) {
	} else {
		@HasAnimationTrack(var_258_bool, "head");
		if(var_258_bool == 0) goto Label_1601;
		@UnlookAsync("head");
	}
Label_1601:
	
}


void func_1841(string var_46_string, int var_47_int)
{
	string var_49_string = "idle";
	if(var_47_int != 0)
		var_49_string += var_47_int;
	var_49_string = var_46_string;
}


void func_1971(object var_45_object)
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


void func_1848(int var_40_int)
{
	int var_43_int; bool var_44_bool;
	var_43_int = 0;
	
	for(;;) {
		string var_46_string; int var_47_int;
		var_43_int = var_47_int;
		func_1841(var_46_string, var_47_int);
		@HasAnimation(var_44_bool, "all", var_46_string);
		if(!var_44_bool) //@nz
			break;
		var_43_int += 1;
	}
	var_43_int = var_40_int;
}


void func_1984(bool var_36_bool, object var_37_object, int var_38_int)
{
	object var_45_object;
	func_1971(var_45_object);
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


void func_1602(bool var_114_bool, object var_115_object)
{
	int var_121_int; int var_122_int;
	@GetVariable("voice_common", var_121_int);
	if(var_121_int != 0) {
		bool var_125_bool; object var_126_object;
		var_115_object = var_126_object;
		func_1660(var_125_bool, var_126_object);
		if(!var_125_bool) { //@nz
			bool var_156_bool; object var_157_object;
			var_115_object = var_157_object;
			func_1697(var_156_bool, var_157_object);
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
		func_1697(var_201_bool, var_202_object);
		if(!var_201_bool) { //@nz
			bool var_204_bool; object var_205_object;
			var_115_object = var_205_object;
			func_1660(var_204_bool, var_205_object);
			if(!var_204_bool) { //@nz
				var_114_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_1658;
	
Label_1658:
	var_114_bool = true;
	
}


void func_1476(bool var_60_bool)
{
	var_60_bool = true;
}


void func_1478(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_1865(int var_102_int)
{
	var_102_int = 515545;
}


void func_1483(float var_36_float, object var_37_object)
{
	cvector var_41_cvector;
	@GetPosition(var_41_cvector);
	cvector var_42_cvector;
	var_37_object->GetPosition(var_42_cvector);
	var_36_float = (var_42_cvector - var_41_cvector) | (var_42_cvector - var_41_cvector);
}


void func_1867(int var_101_int)
{
	var_101_int = 502870;
}


void func_1740(string var_239_string)
{
	bool var_243_bool; float var_244_float; float var_245_float;
	@lshHasAnimation(var_243_bool, var_239_string);
	if(var_243_bool != 0) {
		@lshGetAnimTimes(var_239_string, var_244_float, var_245_float);
		@lshPlayAnimation(var_244_float, var_245_float, false);
	} else {
		@Trace("Can't find lsh animation : " + var_239_string);
	}
	
}


void func_1869(string var_103_string)
{
	var_103_string = "ui/NPC_Mat.png";
}


// @pe
void func_843(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_370_object, object var_371_object)
{
	var_0_object = var_371_object;
	var_1_object = var_370_object;
	var_3_string = false;
	if(1 != 0) {
		func_906(var_371_object, "Neutral");
		var_0_object->SetMessage(535284); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(535285, 36962, 36961); //@t
		var_0_object->AddReply(535292, -1, 36968); //@t
		var_0_object->AddReply(535293, -1, 36969); //@t
		goto Label_876;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x34f";
	}
Label_876:
	bool var_395_bool;
	func_1873(var_395_bool);
	if(var_395_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_1740(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_905;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_905:
		return 0;

	}
	
}


void func_1871(string var_104_string)
{
	var_104_string = "ui/NPC_Mat_b.png";
}


// @pe
void func_1102(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_429_object, object var_430_object)
{
	var_0_object = var_430_object;
	var_1_object = var_429_object;
	var_3_string = false;
	if(1 != 0) {
		func_1160(var_430_object, "Neutral");
		var_0_object->SetMessage(540539); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(540540, -1, 42549); //@t
		var_0_object->AddReply(540799, -1, 42848); //@t
		goto Label_1130;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x452";
	}
Label_1130:
	bool var_451_bool;
	func_1873(var_451_bool);
	if(var_451_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_1740(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_1159;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_1159:
		return 0;

	}
	
}


// @pe
void func_81(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_209_object, object var_210_object)
{
	var_0_object = var_210_object;
	var_1_object = var_209_object;
	var_3_string = false;
	if(1 != 0) {
		func_134(var_210_object, "Neutral");
		var_0_object->SetMessage(525507); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(525508, 30772, 26864); //@t
		goto Label_104;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x55";
	}
Label_104:
	bool var_237_bool;
	func_1873(var_237_bool);
	if(var_237_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_1740(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_133;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_133:
		return 0;

	}
	
}


void func_1873(bool var_96_bool)
{
	var_96_bool = true;
}


// @pe
void func_1875(void)
{
	@SetVariable("k8q01", 2);
	func_1945();
}


void func_1231(object var_0_object)
{
	bool var_22_bool;
	func_1510(var_22_bool);
	if(!var_22_bool) //@nz
		@Hold();
	@GetDirection(var_0_object);
	
	for(;;) {
		func_1407();
	}
}
EMIT "Return(); Pop(0)";


void func_1491(bool var_29_bool, cvector var_30_cvector)
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


void func_216(object var_0_object, int var_268_int, object var_269_object)
{
	var_0_object = var_269_object;
	bool var_279_bool; object var_280_object;
	var_269_object = var_280_object;
	func_1515(var_279_bool, var_280_object, 70.0);
	if(!var_279_bool) { //@nz
		var_268_int = -2;
		return 8;
	}
	object var_275_object;
	@CreateDialog(var_275_object);
	int var_283_int;
	func_1867(var_283_int);
	var_275_object->SetNPCName(var_283_int);
	int var_284_int;
	func_1865(var_284_int);
	var_275_object->SetNPCDescription(var_284_int);
	string var_285_string;
	func_1869(var_285_string);
	var_275_object->SetPhoto(var_285_string);
	string var_286_string;
	func_1871(var_286_string);
	var_275_object->SetPhoto2(var_286_string);
	int var_287_int;
	func_2012(var_287_int);
	var_275_object->SetPlayerName(var_287_int);
	bool var_276_bool;
	@IsOverrideActive(var_276_bool);
	if(var_276_bool != 0) {
		var_268_int = -2;
		return 8;
	}
	@DoDialog(var_275_object);
	bool var_289_bool; object var_290_object;
	object var_291_object;
	func_1793(var_291_object);
	var_291_object = var_290_object;
	func_1602(var_289_bool, var_290_object);
	object var_292_object; object var_293_object;
	var_269_object = var_292_object;
	var_275_object = var_293_object;
	TaskCall(3);
	func_297(var_294_object, var_295_object, var_296_string, var_297_bool, var_292_object, var_293_object);
	TaskReturn();
	bool var_278_bool;
	var_275_object->IsDialogEnd(var_278_bool);
	
	for(;;) {
		var_342_bool = !var_278_bool; //@nz
		if(var_342_bool == 0) goto Label_286;
		@sync();
		var_275_object->IsDialogEnd(var_278_bool);
	}
	
Label_286:
	object var_343_object;
	var_269_object = var_343_object;
	func_1584();
	@StopDialog(var_275_object);
	var_275_object->GetReturnValue(-1);
	int var_277_int = var_268_int;
}
EMIT "Stack[-4] = 0";


void func_1756(string var_220_string, bool var_221_bool)
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


void func_2012(int var_105_int)
{
	int var_107_int;
	@GetVariable("branch", var_107_int);
	if(var_107_int == 0) {
		var_105_int = 1;
		return 2;
	EMIT "GOTO 0x7eb";
	}
	if(var_107_int == 1) {
		var_105_int = 2;
		return 2;
	}
	var_105_int = 3;
}


// @pe
void func_1884(void)
{
	@SetVariable("k8q01", 4);
	func_1958();
	bool var_90_bool;
	func_1814(var_90_bool, "quest_k8_01", "unlock_boiny");
}


void func_1501(bool var_25_bool, object var_26_object)
{
	cvector var_28_cvector;
	var_26_object->GetPosition(var_28_cvector);
	bool var_29_bool; cvector var_30_cvector;
	var_28_cvector = var_30_cvector;
	func_1491(var_29_bool, var_30_cvector);
	var_29_bool = var_25_bool;
}


void func_1245(bool var_46_bool)
{
	object var_48_object;
	@FindActor(var_48_object, "player");
	if(!var_48_object) //@nz
		var_46_bool = false;
	bool var_51_bool; object var_52_object;
	var_48_object = var_52_object;
	func_1501(var_51_bool, var_52_object);
	var_51_bool = var_46_bool;
}
EMIT "Stack[-1] = 0";


void func_1510(bool var_22_bool)
{
	bool var_24_bool;
	@IsLoaded(var_24_bool);
	var_24_bool = var_22_bool;
}


// @pe
void func_1898(void)
{
	func_1932();
	bool var_66_bool;
	func_1814(var_66_bool, "quest_k8_01", "fail");
}


void func_1515(bool var_53_bool, object var_54_object, float var_55_float)
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
	func_1799(var_80_cvector, (var_69_cvector ^ [0.0, 1.0, 0.0]));
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
	func_1873(var_96_bool);
	if(var_96_bool != 0) {
	} else {
		@HasAnimationTrack(var_73_bool, "head");
		if(var_73_bool == 0) goto Label_1578;
		@LookAsyncCamera("head");
	}
Label_1578:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_53_bool = true;
	
}


void func_1260(object var_0_object)
{
	var_98_float = GetByIndex(var_0_object, 0);
	var_99_float = GetByIndex(var_0_object, 2);
	@RotateAsync(var_98_float, var_99_float);
}


// @pe
void func_2029(object var_39_object)
{
	var_40_bool = GlobalVars[1];
	if(!var_40_bool) { //@nz
		int var_42_int; object var_43_object;
		var_39_object = var_43_object;
		TaskCall(0);
		func_0(var_44_object, var_42_int, var_43_object);
		TaskReturn();
		var_264_bool = GlobalVars[1];
		GlobalVars[1] = true;
	}
	bool var_265_bool;
	func_1835(var_265_bool, 8);
	if(var_265_bool != 0) {
		int var_268_int; object var_269_object;
		var_39_object = var_269_object;
		TaskCall(2);
		func_216(var_270_object, var_268_int, var_269_object);
		TaskReturn();
		return 0;
	}
	bool var_344_bool;
	func_1835(var_344_bool, 12);
	if(var_344_bool != 0) {
		int var_346_int; object var_347_object;
		var_39_object = var_347_object;
		TaskCall(4);
		func_762(var_348_object, var_346_int, var_347_object);
		TaskReturn();
		return 0;
	}
	int var_405_int; object var_406_object;
	var_39_object = var_406_object;
	TaskCall(6);
	func_1021(var_407_object, var_405_int, var_406_object);
	TaskReturn();
}


void func_1771(bool var_148_bool, string var_149_string)
{
	bool var_151_bool;
	bool var_152_bool;
	func_1873(var_152_bool);
	if(var_152_bool != 0) {
		@lshHasSpeech(var_151_bool, var_149_string);
		if(var_151_bool != 0) {
			@lshPlaySpeech(var_149_string);
			var_148_bool = true;
		}
	}
	var_148_bool = false;
}


void func_1265(bool var_29_bool)
{
	object var_32_object;
	@FindActor(var_32_object, "player");
	if(!var_32_object) { //@nz
		var_29_bool = false;
		return 4;
	}
	float var_36_float; object var_37_object;
	func_1483(var_36_float, var_37_object);
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
void func_1908(bool var_308_bool)
{
	int var_310_int;
	func_1809(var_310_int, "k8q01");
	if(var_310_int == 1)
		var_308_bool = true;
	var_308_bool = false;
}


// @pe
void func_375(object var_2_object, string var_299_string)
{
	bool var_300_bool;
	func_1873(var_300_bool);
	if(!var_300_bool) //@nz
		return 0;
	if(var_299_string == var_2_object)
		return 0;
	string var_303_string; bool var_304_bool;
	var_299_string = var_303_string;
	if(var_299_string == "")
		var_304_bool = false;
	else
		var_304_bool = true;
	func_1756(var_303_string, var_304_bool);
	var_2_object = var_299_string;
	
}


void func_762(object var_0_object, int var_346_int, object var_347_object)
{
	var_0_object = var_347_object;
	bool var_357_bool; object var_358_object;
	var_347_object = var_358_object;
	func_1515(var_357_bool, var_358_object, 70.0);
	if(!var_357_bool) { //@nz
		var_346_int = -2;
		return 8;
	}
	object var_353_object;
	@CreateDialog(var_353_object);
	int var_361_int;
	func_1867(var_361_int);
	var_353_object->SetNPCName(var_361_int);
	int var_362_int;
	func_1865(var_362_int);
	var_353_object->SetNPCDescription(var_362_int);
	string var_363_string;
	func_1869(var_363_string);
	var_353_object->SetPhoto(var_363_string);
	string var_364_string;
	func_1871(var_364_string);
	var_353_object->SetPhoto2(var_364_string);
	int var_365_int;
	func_2012(var_365_int);
	var_353_object->SetPlayerName(var_365_int);
	bool var_354_bool;
	@IsOverrideActive(var_354_bool);
	if(var_354_bool != 0) {
		var_346_int = -2;
		return 8;
	}
	@DoDialog(var_353_object);
	bool var_367_bool; object var_368_object;
	object var_369_object;
	func_1793(var_369_object);
	var_369_object = var_368_object;
	func_1602(var_367_bool, var_368_object);
	object var_370_object; object var_371_object;
	var_347_object = var_370_object;
	var_353_object = var_371_object;
	TaskCall(5);
	func_843(var_372_object, var_373_object, var_374_string, var_375_bool, var_370_object, var_371_object);
	TaskReturn();
	bool var_356_bool;
	var_353_object->IsDialogEnd(var_356_bool);
	
	for(;;) {
		var_403_bool = !var_356_bool; //@nz
		if(var_403_bool == 0) goto Label_832;
		@sync();
		var_353_object->IsDialogEnd(var_356_bool);
	}
	
Label_832:
	object var_404_object;
	var_347_object = var_404_object;
	func_1584();
	@StopDialog(var_353_object);
	var_353_object->GetReturnValue(-1);
	int var_355_int = var_346_int;
}
EMIT "Stack[-4] = 0";


void func_1660(bool var_125_bool, object var_126_object)
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
		func_1771(var_148_bool, var_149_string);
		var_148_bool = var_125_bool;
		return 10;

	}
}


void func_1021(object var_0_object, int var_405_int, object var_406_object)
{
	var_0_object = var_406_object;
	bool var_416_bool; object var_417_object;
	var_406_object = var_417_object;
	func_1515(var_416_bool, var_417_object, 70.0);
	if(!var_416_bool) { //@nz
		var_405_int = -2;
		return 8;
	}
	object var_412_object;
	@CreateDialog(var_412_object);
	int var_420_int;
	func_1867(var_420_int);
	var_412_object->SetNPCName(var_420_int);
	int var_421_int;
	func_1865(var_421_int);
	var_412_object->SetNPCDescription(var_421_int);
	string var_422_string;
	func_1869(var_422_string);
	var_412_object->SetPhoto(var_422_string);
	string var_423_string;
	func_1871(var_423_string);
	var_412_object->SetPhoto2(var_423_string);
	int var_424_int;
	func_2012(var_424_int);
	var_412_object->SetPlayerName(var_424_int);
	bool var_413_bool;
	@IsOverrideActive(var_413_bool);
	if(var_413_bool != 0) {
		var_405_int = -2;
		return 8;
	}
	@DoDialog(var_412_object);
	bool var_426_bool; object var_427_object;
	object var_428_object;
	func_1793(var_428_object);
	var_428_object = var_427_object;
	func_1602(var_426_bool, var_427_object);
	object var_429_object; object var_430_object;
	var_406_object = var_429_object;
	var_412_object = var_430_object;
	TaskCall(7);
	func_1102(var_431_object, var_432_object, var_433_string, var_434_bool, var_429_object, var_430_object);
	TaskReturn();
	bool var_415_bool;
	var_412_object->IsDialogEnd(var_415_bool);
	
	for(;;) {
		var_459_bool = !var_415_bool; //@nz
		if(var_459_bool == 0) goto Label_1091;
		@sync();
		var_412_object->IsDialogEnd(var_415_bool);
	}
	
Label_1091:
	object var_460_object;
	var_406_object = var_460_object;
	func_1584();
	@StopDialog(var_412_object);
	var_412_object->GetReturnValue(-1);
	int var_414_int = var_405_int;
}
EMIT "Stack[-4] = 0";


void func_1407(void)
{
	bool var_34_bool; int var_35_int; int var_36_int; bool var_37_bool;
	@WaitForAnimEnd();
	bool var_38_bool;
	func_1510(var_38_bool);
	if(!var_38_bool) //@nz
		return 12;
	int var_40_int;
	func_1848(var_40_int);
	int var_32_int;
	var_40_int = var_32_int;
	int var_33_int = 0;
	
	for(;;) {
		bool var_53_bool = false;
		if(var_33_int < 5) {
			bool var_56_bool;
			func_1510(var_56_bool);
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
			func_1841(var_67_string, var_68_int);
			@PlayAnimation("all", var_67_string);
			@WaitForAnimEnd(var_37_bool);
			var_69_bool = !var_37_bool; //@nz
			if(var_69_bool == 0) goto Label_1462;
			goto Label_1473;
			}
				Label_1462:
					bool var_60_bool;
					func_1476(var_60_bool);
					var_61_bool = !var_60_bool; //@nz
					if(var_61_bool == 0) goto Label_1468;
			}
		}
	Label_1473:
		for(;;) {
			@ResetAAS();
			return 12;

		}

	Label_1468:
		@ResetAAS();
		var_33_int += 1;
	}
	
}


