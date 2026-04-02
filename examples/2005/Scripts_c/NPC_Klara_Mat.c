// @GLOBALS: 0:object:,1:bool:

task task_0
{
	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, cvector var_20_cvector)
	{
		@StopGroup0();
		@sync();
	}

}


task task_1
{
}


task task_2
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, cvector var_22_cvector)
	{
		if(1 != 0) {
			func_1789();
			if(var_21_bool == 26863) {
				func_147(var_22_cvector, "Neutral");
				var_0_object->SetMessage(525507); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(525508, 30772, 26864); //@t
				return 0;
			}
			if(var_21_bool == 30772) {
				func_147(var_22_cvector, "Neutral");
				var_0_object->SetMessage(529318); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(529319, -1, 30773); //@t
				var_0_object->AddReply(529320, -1, 30774); //@t
				return 0;
			}
			var_3_string = true;
			bool var_53_bool;
			func_1876(var_53_bool);
			if(var_53_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xaa";
	
	}

}


task task_3
{
}


task task_4
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, int var_10_int, int var_11_int, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, cvector var_22_cvector)
	{
		if(1 != 0) {
			func_1789();
			if(var_22_cvector == 27685) {
				object var_27_object; object var_28_object;
				var_27_object = var_1_object;
				var_28_object = var_0_object;
				func_1878();
			}
			if(var_22_cvector == 30467) {
				object var_56_object; object var_57_object;
				var_56_object = var_1_object;
				var_57_object = var_0_object;
				func_1901();
			}
			if(var_22_cvector == 30471) {
				object var_74_object; object var_75_object;
				var_74_object = var_1_object;
				var_75_object = var_0_object;
				func_1901();
			}
			if(var_22_cvector == 27703) {
				object var_78_object; object var_79_object;
				var_78_object = var_1_object;
				var_79_object = var_0_object;
				func_1887();
			}
			if(var_22_cvector == 30462) {
				object var_95_object; object var_96_object;
				var_95_object = var_1_object;
				var_96_object = var_0_object;
				func_1901();
			}
			if(var_21_bool == 27680) {
				func_388(var_22_cvector, "Neutral");
				var_0_object->SetMessage(526405); //@t
				var_0_object->ClearReplies(); //@t
				bool var_112_bool;
				func_1911(var_1_object);
				if(var_112_bool != 0)
					var_0_object->AddReply(526406, 27682, 27681); //@t
				bool var_123_bool;
				func_1923(var_1_object);
				if(var_123_bool != 0)
					var_0_object->AddReply(526420, 27696, 27695); //@t
				var_0_object->AddReply(526411, -1, 27686); //@t
				var_0_object->AddReply(529012, -1, 30452); //@t
				return 0;
			}
			if(var_21_bool == 27696) {
				func_388(var_22_cvector, "Neutral");
				var_0_object->SetMessage(526421); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526422, 30457, 27697); //@t
				return 0;
			}
			if(var_21_bool == 30457) {
				func_388(var_22_cvector, "Neutral");
				var_0_object->SetMessage(529017); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(529018, 27698, 30458); //@t
				return 0;
			}
			if(var_21_bool == 27698) {
				func_388(var_22_cvector, "Neutral");
				var_0_object->SetMessage(526423); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(529019, 30464, 30459); //@t
				var_0_object->AddReply(529020, 30468, 30460); //@t
				var_0_object->AddReply(526424, 30461, 27699); //@t
				return 0;
			}
			if(var_21_bool == 30461) {
				func_388(var_22_cvector, "Neutral");
				var_0_object->SetMessage(529021); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(529023, 30472, 30463); //@t
				var_0_object->AddReply(529022, -1, 30462); //@t
				return 0;
			}
			if(var_21_bool == 30472) {
				func_388(var_22_cvector, "Neutral");
				var_0_object->SetMessage(529032); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(529033, 27700, 30473); //@t
				return 0;
			}
			if(var_21_bool == 27700) {
				func_388(var_22_cvector, "Neutral");
				var_0_object->SetMessage(526425); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526426, 27702, 27701); //@t
				return 0;
			}
			if(var_21_bool == 27702) {
				func_388(var_22_cvector, "Neutral");
				var_0_object->SetMessage(526427); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526428, -1, 27703); //@t
				return 0;
			}
			if(var_21_bool == 30468) {
				func_388(var_22_cvector, "Neutral");
				var_0_object->SetMessage(529028); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(529029, 30470, 30469); //@t
				return 0;
			}
			if(var_21_bool == 30470) {
				func_388(var_22_cvector, "Neutral");
				var_0_object->SetMessage(529030); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(529031, -1, 30471); //@t
				return 0;
			}
			if(var_21_bool == 30464) {
				func_388(var_22_cvector, "Neutral");
				var_0_object->SetMessage(529024); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(529025, 30466, 30465); //@t
				return 0;
			}
			if(var_21_bool == 30466) {
				func_388(var_22_cvector, "Neutral");
				var_0_object->SetMessage(529026); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(529027, -1, 30467); //@t
				return 0;
			}
			if(var_21_bool == 27682) {
				func_388(var_22_cvector, "Neutral");
				var_0_object->SetMessage(526407); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526408, 30453, 27683); //@t
				return 0;
			}
			if(var_21_bool == 30453) {
				func_388(var_22_cvector, "Neutral");
				var_0_object->SetMessage(529013); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(529014, 27684, 30454); //@t
				return 0;
			}
			if(var_21_bool == 27684) {
				func_388(var_22_cvector, "Neutral");
				var_0_object->SetMessage(526409); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526410, -1, 27685); //@t
				return 0;
			}
			var_3_string = true;
			bool var_245_bool;
			func_1876(var_245_bool);
			if(var_245_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x19b";
	
	}

}


task task_5
{
}


task task_6
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, int var_15_int, int var_16_int, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, cvector var_22_cvector)
	{
		if(1 != 0) {
			func_1789();
			if(var_21_bool == 36960) {
				func_923(var_22_cvector, "Neutral");
				var_0_object->SetMessage(535284); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535285, 36962, 36961); //@t
				var_0_object->AddReply(535292, -1, 36968); //@t
				var_0_object->AddReply(535293, -1, 36969); //@t
				return 0;
			}
			if(var_21_bool == 36962) {
				func_923(var_22_cvector, "Neutral");
				var_0_object->SetMessage(535286); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535287, 36964, 36963); //@t
				var_0_object->AddReply(535291, -1, 36967); //@t
				return 0;
			}
			if(var_21_bool == 36964) {
				func_923(var_22_cvector, "Neutral");
				var_0_object->SetMessage(535288); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535289, -1, 36965); //@t
				var_0_object->AddReply(535290, -1, 36966); //@t
				return 0;
			}
			var_3_string = true;
			bool var_69_bool;
			func_1876(var_69_bool);
			if(var_69_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x3b2";
	
	}

}


task task_7
{
}


task task_8
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, int var_20_int, int var_21_int, cvector var_22_cvector)
	{
		if(1 != 0) {
			func_1789();
			if(var_21_int == 42548) {
				func_1177(var_22_cvector, "Neutral");
				var_0_object->SetMessage(540539); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540540, -1, 42549); //@t
				var_0_object->AddReply(540799, -1, 42848); //@t
				return 0;
			}
			var_3_string = true;
			bool var_46_bool;
			func_1876(var_46_bool);
			if(var_46_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x4b0";
	
	}

}


maintask task_9
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, cvector var_20_cvector)
	{
		var_21_bool = GlobalVars[1];
		GlobalVars[1] = false;
		func_1248(var_20_cvector);
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, cvector var_20_cvector, int var_21_int)
	{
		if(var_21_int == 10) {
			func_1319();
			bool var_25_bool = false;
			bool var_26_bool;
			func_1533(var_26_bool);
			if(var_26_bool != 0) {
				bool var_29_bool;
				func_1288(var_29_bool);
				if(var_29_bool != 0)
					var_25_bool = true;
			}
			if(var_25_bool != 0) {
				bool var_46_bool;
				func_1268(var_46_bool);
				if(var_46_bool != 0) {
					bool var_65_bool; object var_66_object;
					object var_67_object;
					func_1796(var_67_object);
					var_67_object = var_66_object;
					func_1681(var_65_bool, var_66_object);
				}
			} else {
				func_1283(var_21_int);
				func_1310();
			}
		}
	
	}

	// @pe
	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, cvector var_20_cvector)
	{
		func_1501();
		func_1319();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

		void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, cvector var_20_cvector)
		{
		@StopGroup0();
		func_1319();
		func_1761("Neutral");
		func_1310();
		}

	// @pe
	void OnLSHAnimationEnd(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, cvector var_20_cvector, bool var_21_bool)
	{
		if(var_21_bool != 0)
			func_1310();
		else
			func_1761("Neutral");
	
	}

	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, cvector var_20_cvector, object var_21_object)
	{
		bool var_23_bool;
		@IsOverrideActive(var_23_bool);
		if(!var_23_bool) { //@nz
			disable OnUse;
			func_1501();
			bool var_25_bool; object var_26_object;
			var_21_object = var_26_object;
			func_1524(var_25_bool, var_26_object);
			enable OnUse;
			object var_39_object;
			var_21_object = var_39_object;
			func_2032(var_39_object);
			func_1761("Neutral");
			func_1319();
			func_1310();
		}
	}

}


void func_0(void)
{
	
Label_0:
	@Hold();
	bool var_26_bool;
	func_1533(var_26_bool);
	if(!var_26_bool) goto Label_0; //@nz
}


void func_1538(bool var_148_bool, object var_149_object, float var_150_float)
{
	cvector var_161_cvector; bool var_168_bool;
	var_149_object->GetPosition(var_161_cvector);
	float var_160_float;
	var_149_object->GetEyesHeight(var_160_float);
	var_169_float = GetByIndex(var_161_cvector, 1);
	SetByIndex(var_161_cvector, 1) = (var_169_float + var_160_float);
	cvector var_162_cvector;
	@GetPosition(var_162_cvector);
	@GetEyesHeight(var_160_float);
	var_170_float = GetByIndex(var_162_cvector, 1);
	SetByIndex(var_162_cvector, 1) = (var_170_float + var_160_float);
	cvector var_163_cvector = var_161_cvector - var_162_cvector;
	var_171_float = GetByIndex(var_163_cvector, 1);
	SetByIndex(var_163_cvector, 1) = (float)0;
	var_173_float = sqrt(var_163_cvector | var_163_cvector);
	var_163_cvector /= var_173_float;
	cvector var_164_cvector = -var_163_cvector;
	cvector var_175_cvector;
	func_1802(var_175_cvector, (var_164_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_165_cvector = ((var_163_cvector * var_150_float) + (var_175_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_167_bool;
	@IsOverrideActive(var_167_bool);
	if(var_167_bool != 0)
		var_148_bool = false;
	@StopWorld();
	@CameraTransit((var_162_cvector + var_165_cvector), var_164_cvector);
	var_188_float = GetByIndex(var_165_cvector, 0);
	var_189_float = GetByIndex(var_165_cvector, 2);
	@Rotate(var_188_float, var_189_float);
	bool var_190_bool;
	func_1876(var_190_bool);
	if(var_190_bool != 0) {
	} else {
		@HasAnimationTrack(var_168_bool, "head");
		if(var_168_bool == 0) goto Label_1600;
		@LookAsyncCamera("head");
	}
Label_1600:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_148_bool = true;
	
}


// @pe
void func_1923(bool var_307_bool)
{
	int var_309_int;
	func_1812(var_309_int, "k8q01");
	if(var_309_int == 3)
		var_307_bool = true;
	var_307_bool = false;
}


// @pe
void func_388(object var_2_object, string var_287_string)
{
	bool var_288_bool;
	func_1876(var_288_bool);
	if(!var_288_bool) //@nz
		return 0;
	if(var_287_string == var_2_object)
		return 0;
	string var_291_string; bool var_292_bool;
	var_287_string = var_291_string;
	if(var_287_string == "")
		var_292_bool = false;
	else
		var_292_bool = true;
	func_1768(var_291_string, var_292_bool);
	var_2_object = var_287_string;
	
}


void func_1796(object var_55_object)
{
	object var_57_object;
	@self(var_57_object);
	var_57_object = var_55_object;
}
EMIT "Stack[-1] = 0";


void func_1283(object var_0_object)
{
	var_98_float = GetByIndex(var_0_object, 0);
	var_99_float = GetByIndex(var_0_object, 2);
	@RotateAsync(var_98_float, var_99_float);
}


void func_1288(bool var_29_bool)
{
	object var_32_object;
	@FindActor(var_32_object, "player");
	if(!var_32_object) { //@nz
		var_29_bool = false;
		return 4;
	}
	float var_36_float; object var_37_object;
	func_1506(var_36_float, var_37_object);
	if(var_36_float > 90000.0) {
		var_29_bool = false;
		return 4;
	}
	bool var_33_bool;
	@CanSee(var_33_bool, var_37_object);
	var_33_bool = var_29_bool;
}
EMIT "Stack[-2] = 0";


void func_1802(cvector var_175_cvector, cvector var_176_cvector)
{
	float var_179_float = sqrt(var_176_cvector | var_176_cvector);
	if(var_179_float < 0.000001)
		var_175_cvector = [0.0, 0.0, 0.0];
	var_175_cvector = var_176_cvector / var_179_float;
}


void func_779(object var_0_object, int var_334_int, object var_335_object)
{
	var_0_object = var_335_object;
	bool var_345_bool; object var_346_object;
	object var_347_object;
	func_1796(var_347_object);
	var_347_object = var_346_object;
	func_1623(var_345_bool, var_346_object);
	bool var_348_bool; object var_349_object;
	var_335_object = var_349_object;
	func_1538(var_348_bool, var_349_object, 70.0);
	if(!var_348_bool) { //@nz
		var_334_int = -2;
		return 8;
	}
	object var_341_object;
	@CreateDialog(var_341_object);
	int var_352_int;
	func_1870(var_352_int);
	var_341_object->SetNPCName(var_352_int);
	int var_353_int;
	func_1868(var_353_int);
	var_341_object->SetNPCDescription(var_353_int);
	string var_354_string;
	func_1872(var_354_string);
	var_341_object->SetPhoto(var_354_string);
	string var_355_string;
	func_1874(var_355_string);
	var_341_object->SetPhoto2(var_355_string);
	int var_356_int;
	func_2015(var_356_int);
	var_341_object->SetPlayerName(var_356_int);
	bool var_342_bool;
	@IsOverrideActive(var_342_bool);
	if(var_342_bool != 0) {
		var_334_int = -2;
		return 8;
	}
	@DoDialog(var_341_object);
	object var_358_object; object var_359_object;
	var_335_object = var_358_object;
	var_341_object = var_359_object;
	TaskCall(6);
	func_860(var_360_object, var_361_object, var_362_string, var_363_bool, var_358_object, var_359_object);
	TaskReturn();
	bool var_344_bool;
	var_341_object->IsDialogEnd(var_344_bool);
	
	for(;;) {
		var_391_bool = !var_344_bool; //@nz
		if(var_391_bool == 0) goto Label_849;
		@sync();
		var_341_object->IsDialogEnd(var_344_bool);
	}
	
Label_849:
	object var_392_object;
	var_335_object = var_392_object;
	func_1606();
	@StopDialog(var_341_object);
	var_341_object->GetReturnValue(-1);
	int var_343_int = var_334_int;
}
EMIT "Stack[-4] = 0";


void func_13(object var_0_object, int var_42_int, object var_43_object)
{
	var_0_object = var_43_object;
	bool var_53_bool; object var_54_object;
	object var_55_object;
	func_1796(var_55_object);
	var_55_object = var_54_object;
	func_1623(var_53_bool, var_54_object);
	bool var_148_bool; object var_149_object;
	var_43_object = var_149_object;
	func_1538(var_148_bool, var_149_object, 70.0);
	if(!var_148_bool) { //@nz
		var_42_int = -2;
		return 8;
	}
	object var_49_object;
	@CreateDialog(var_49_object);
	int var_195_int;
	func_1870(var_195_int);
	var_49_object->SetNPCName(var_195_int);
	int var_196_int;
	func_1868(var_196_int);
	var_49_object->SetNPCDescription(var_196_int);
	string var_197_string;
	func_1872(var_197_string);
	var_49_object->SetPhoto(var_197_string);
	string var_198_string;
	func_1874(var_198_string);
	var_49_object->SetPhoto2(var_198_string);
	int var_199_int;
	func_2015(var_199_int);
	var_49_object->SetPlayerName(var_199_int);
	bool var_50_bool;
	@IsOverrideActive(var_50_bool);
	if(var_50_bool != 0) {
		var_42_int = -2;
		return 8;
	}
	@DoDialog(var_49_object);
	object var_208_object; object var_209_object;
	var_43_object = var_208_object;
	var_49_object = var_209_object;
	TaskCall(2);
	func_94(var_210_object, var_211_object, var_212_string, var_213_bool, var_208_object, var_209_object);
	TaskReturn();
	bool var_52_bool;
	var_49_object->IsDialogEnd(var_52_bool);
	
	for(;;) {
		var_244_bool = !var_52_bool; //@nz
		if(var_244_bool == 0) goto Label_83;
		@sync();
		var_49_object->IsDialogEnd(var_52_bool);
	}
	
Label_83:
	object var_245_object;
	var_43_object = var_245_object;
	func_1606();
	@StopDialog(var_49_object);
	var_49_object->GetReturnValue(-1);
	int var_51_int = var_42_int;
}
EMIT "Stack[-4] = 0";


void func_1038(object var_0_object, int var_393_int, object var_394_object)
{
	var_0_object = var_394_object;
	bool var_404_bool; object var_405_object;
	object var_406_object;
	func_1796(var_406_object);
	var_406_object = var_405_object;
	func_1623(var_404_bool, var_405_object);
	bool var_407_bool; object var_408_object;
	var_394_object = var_408_object;
	func_1538(var_407_bool, var_408_object, 70.0);
	if(!var_407_bool) { //@nz
		var_393_int = -2;
		return 8;
	}
	object var_400_object;
	@CreateDialog(var_400_object);
	int var_411_int;
	func_1870(var_411_int);
	var_400_object->SetNPCName(var_411_int);
	int var_412_int;
	func_1868(var_412_int);
	var_400_object->SetNPCDescription(var_412_int);
	string var_413_string;
	func_1872(var_413_string);
	var_400_object->SetPhoto(var_413_string);
	string var_414_string;
	func_1874(var_414_string);
	var_400_object->SetPhoto2(var_414_string);
	int var_415_int;
	func_2015(var_415_int);
	var_400_object->SetPlayerName(var_415_int);
	bool var_401_bool;
	@IsOverrideActive(var_401_bool);
	if(var_401_bool != 0) {
		var_393_int = -2;
		return 8;
	}
	@DoDialog(var_400_object);
	object var_417_object; object var_418_object;
	var_394_object = var_417_object;
	var_400_object = var_418_object;
	TaskCall(8);
	func_1119(var_419_object, var_420_object, var_421_string, var_422_bool, var_417_object, var_418_object);
	TaskReturn();
	bool var_403_bool;
	var_400_object->IsDialogEnd(var_403_bool);
	
	for(;;) {
		var_447_bool = !var_403_bool; //@nz
		if(var_447_bool == 0) goto Label_1108;
		@sync();
		var_400_object->IsDialogEnd(var_403_bool);
	}
	
Label_1108:
	object var_448_object;
	var_394_object = var_448_object;
	func_1606();
	@StopDialog(var_400_object);
	var_400_object->GetReturnValue(-1);
	int var_402_int = var_393_int;
}
EMIT "Stack[-4] = 0";


void func_1935(void)
{
	object var_59_object;
	@CreateDiaryEntry(var_59_object, 530, 1, 530194);
	bool var_63_bool; object var_64_object;
	var_59_object = var_64_object;
	func_1987(var_63_bool, var_64_object, 438);
}
EMIT "Stack[-1] = 0";


void func_1681(bool var_64_bool, object var_65_object)
{
	string var_71_string; bool var_73_bool; int var_74_int; string var_75_string;
	var_71_string = "c";
	int var_72_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_65_object->HasProperty((var_71_string + (var_72_int + 1)), var_73_bool);
			if(!var_73_bool) { //@nz
			} else {
				var_72_int += 1;
			}
		}
		if(!var_72_int) { //@nz
			var_64_bool = false;
			return 10;
		}
		var_74_int = 0;
		if(var_72_int > 1)
			@irand(var_74_int, var_72_int);
		var_65_object->GetProperty((var_71_string + (var_74_int + 1)), var_75_string);
		bool var_87_bool; string var_88_string;
		var_75_string = var_88_string;
		func_1774(var_87_bool, var_88_string);
		var_87_bool = var_64_bool;
		return 10;

	}
}


// @pe
void func_147(object var_2_object, string var_215_string)
{
	bool var_216_bool;
	func_1876(var_216_bool);
	if(!var_216_bool) //@nz
		return 0;
	if(var_215_string == var_2_object)
		return 0;
	string var_219_string; bool var_220_bool;
	var_215_string = var_219_string;
	if(var_215_string == "")
		var_220_bool = false;
	else
		var_220_bool = true;
	func_1768(var_219_string, var_220_bool);
	var_2_object = var_215_string;
	
}


void func_1812(int var_298_int, string var_299_string)
{
	int var_301_int;
	@GetVariable(var_299_string, var_301_int);
	var_301_int = var_298_int;
}


void func_1430(void)
{
	bool var_48_bool; int var_49_int; int var_50_int; bool var_51_bool;
	@WaitForAnimEnd();
	bool var_52_bool;
	func_1533(var_52_bool);
	if(!var_52_bool) //@nz
		return 12;
	int var_54_int;
	func_1851(var_54_int);
	int var_46_int;
	var_54_int = var_46_int;
	int var_47_int = 0;
	
	for(;;) {
		bool var_67_bool = false;
		if(var_47_int < 5) {
			bool var_70_bool;
			func_1533(var_70_bool);
			if(var_70_bool != 0)
				var_67_bool = true;
		}
		if(var_67_bool != 0) {
			if(!var_46_int) { //@nz
				@Sleep(3, var_48_bool);
				if(!var_48_bool) { //@nz
				} else {
			} else {
			@irand(var_49_int, var_46_int);
			@irand(var_50_int, 5);
			if(var_50_int != 0)
				var_49_int = 0;
			string var_81_string; int var_82_int;
			var_49_int = var_82_int;
			func_1844(var_81_string, var_82_int);
			@PlayAnimation("all", var_81_string);
			@WaitForAnimEnd(var_51_bool);
			var_83_bool = !var_51_bool; //@nz
			if(var_83_bool == 0) goto Label_1485;
			goto Label_1496;
			}
				Label_1485:
					bool var_74_bool;
					func_1499(var_74_bool);
					var_75_bool = !var_74_bool; //@nz
					if(var_75_bool == 0) goto Label_1491;
			}
		}
	Label_1496:
		for(;;) {
			@ResetAAS();
			return 12;

		}

	Label_1491:
		@ResetAAS();
		var_47_int += 1;
	}
	
}


void func_1817(bool var_66_bool, string var_67_string, string var_68_string)
{
	object var_70_object;
	@FindActor(var_70_object, var_67_string);
	if(var_70_object == null)
		var_66_bool = false;
	@Trigger(var_70_object, var_68_string);
	var_66_bool = true;
}
EMIT "Stack[-1] = 0";


// @pe
void func_1177(object var_2_object, string var_424_string)
{
	bool var_425_bool;
	func_1876(var_425_bool);
	if(!var_425_bool) //@nz
		return 0;
	if(var_424_string == var_2_object)
		return 0;
	string var_428_string; bool var_429_bool;
	var_424_string = var_428_string;
	if(var_424_string == "")
		var_429_bool = false;
	else
		var_429_bool = true;
	func_1768(var_428_string, var_429_bool);
	var_2_object = var_424_string;
	
}


// @pe
void func_923(object var_2_object, string var_365_string)
{
	bool var_366_bool;
	func_1876(var_366_bool);
	if(!var_366_bool) //@nz
		return 0;
	if(var_365_string == var_2_object)
		return 0;
	string var_369_string; bool var_370_bool;
	var_365_string = var_369_string;
	if(var_365_string == "")
		var_370_bool = false;
	else
		var_370_bool = true;
	func_1768(var_369_string, var_370_bool);
	var_2_object = var_365_string;
	
}


void func_1948(void)
{
	object var_32_object;
	@CreateDiaryEntry(var_32_object, 440, 1, 526465);
	bool var_36_bool; object var_37_object;
	var_32_object = var_37_object;
	func_1987(var_36_bool, var_37_object, 438);
}
EMIT "Stack[-1] = 0";


void func_1310(void)
{
	float var_36_float;
	@rand(var_36_float, 8, 16);
	@SetTimer(10, var_36_float);
}


void func_1829(int var_108_int)
{
	float var_110_float;
	@GetGameTime(var_110_float);
	var_108_int = 1 + (var_110_float / 24);
}


void func_1319(void)
{
	@KillTimer(10);
}


void func_1961(void)
{
	object var_83_object;
	@CreateDiaryEntry(var_83_object, 442, 1, 526467);
	bool var_87_bool; object var_88_object;
	var_83_object = var_88_object;
	func_1987(var_87_bool, var_88_object, 438);
}
EMIT "Stack[-1] = 0";


void func_1789(void)
{
	bool var_24_bool;
	func_1876(var_24_bool);
	if(var_24_bool != 0)
		@lshStopSpeech();
}


// @pe
void func_1838(bool var_253_bool, int var_254_int)
{
	int var_255_int;
	func_1829(var_255_int);
	var_253_bool = var_255_int == var_254_int;
}


void func_1844(string var_60_string, int var_61_int)
{
	string var_63_string = "idle";
	if(var_61_int != 0)
		var_63_string += var_61_int;
	var_63_string = var_60_string;
}


// @pe
void func_310(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_280_object, object var_281_object)
{
	var_0_object = var_281_object;
	var_1_object = var_280_object;
	var_3_string = false;
	if(1 != 0) {
		func_388(var_281_object, "Neutral");
		var_0_object->SetMessage(526405); //@t
		var_0_object->ClearReplies(); //@t
		bool var_296_bool;
		func_1911(var_1_object);
		if(var_296_bool != 0)
			var_0_object->AddReply(526406, 27682, 27681); //@t
		bool var_307_bool;
		func_1923(var_1_object);
		if(var_307_bool != 0)
			var_0_object->AddReply(526420, 27696, 27695); //@t
		var_0_object->AddReply(526411, -1, 27686); //@t
		var_0_object->AddReply(529012, -1, 30452); //@t
		goto Label_358;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x13a";
	}
Label_358:
	bool var_322_bool;
	func_1876(var_322_bool);
	if(var_322_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_1761(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_387;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_387:
		return 0;

	}
	
}


void func_1718(bool var_95_bool, object var_96_object)
{
	bool var_104_bool; int var_105_int; string var_106_string;
	int var_108_int;
	func_1829(var_108_int);
	string var_102_string = ("d" + var_108_int) + "m";
	int var_103_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_96_object->HasProperty((var_102_string + (var_103_int + 1)), var_104_bool);
			if(!var_104_bool) { //@nz
			} else {
				var_103_int += 1;
			}
		}
		if(!var_103_int) { //@nz
			var_95_bool = false;
			return 10;
		}
		var_105_int = 0;
		if(var_103_int > 1)
			@irand(var_105_int, var_103_int);
		var_96_object->GetProperty((var_102_string + (var_105_int + 1)), var_106_string);
		bool var_127_bool; string var_128_string;
		var_106_string = var_128_string;
		func_1774(var_127_bool, var_128_string);
		var_127_bool = var_95_bool;
		return 10;

	}
}


void func_1974(object var_45_object)
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


void func_1851(int var_54_int)
{
	int var_57_int; bool var_58_bool;
	var_57_int = 0;
	
	for(;;) {
		string var_60_string; int var_61_int;
		var_57_int = var_61_int;
		func_1844(var_60_string, var_61_int);
		@HasAnimation(var_58_bool, "all", var_60_string);
		if(!var_58_bool) //@nz
			break;
		var_57_int += 1;
	}
	var_57_int = var_54_int;
}


void func_1987(bool var_36_bool, object var_37_object, int var_38_int)
{
	object var_45_object;
	func_1974(var_45_object);
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


void func_1606(void)
{
	bool var_247_bool;
	@CameraSwitchToNormal();
	bool var_248_bool;
	func_1876(var_248_bool);
	if(var_248_bool != 0) {
	} else {
		@HasAnimationTrack(var_247_bool, "head");
		if(var_247_bool == 0) goto Label_1622;
		@UnlookAsync("head");
	}
Label_1622:
	
}


void func_1868(int var_196_int)
{
	var_196_int = 515545;
}


void func_1870(int var_195_int)
{
	var_195_int = 502870;
}


void func_1872(string var_197_string)
{
	var_197_string = "ui/NPC_Mat.png";
}


void func_1874(string var_198_string)
{
	var_198_string = "ui/NPC_Mat_b.png";
}


void func_1876(bool var_91_bool)
{
	var_91_bool = true;
}


// @pe
void func_1878(void)
{
	@SetVariable("k8q01", 2);
	func_1948();
}


void func_1623(bool var_53_bool, object var_54_object)
{
	int var_60_int; int var_61_int;
	@GetVariable("voice_common", var_60_int);
	if(var_60_int != 0) {
		bool var_64_bool; object var_65_object;
		var_54_object = var_65_object;
		func_1681(var_64_bool, var_65_object);
		if(!var_64_bool) { //@nz
			bool var_95_bool; object var_96_object;
			var_54_object = var_96_object;
			func_1718(var_95_bool, var_96_object);
			if(!var_95_bool) { //@nz
				var_53_bool = false;
				return 4;
			}
		}
		@irand(var_61_int, 2);
		if(var_61_int != 0)
			@SetVariable("voice_common", ((var_60_int + 1) % 3));
		else
			@SetVariable("voice_common", 0);
		bool var_140_bool; object var_141_object;
		var_54_object = var_141_object;
		func_1718(var_140_bool, var_141_object);
		if(!var_140_bool) { //@nz
			bool var_143_bool; object var_144_object;
			var_54_object = var_144_object;
			func_1681(var_143_bool, var_144_object);
			if(!var_143_bool) { //@nz
				var_53_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_1679;
	
Label_1679:
	var_53_bool = true;
	
}


void func_1499(bool var_74_bool)
{
	var_74_bool = true;
}


// @pe
void func_860(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_358_object, object var_359_object)
{
	var_0_object = var_359_object;
	var_1_object = var_358_object;
	var_3_string = false;
	if(1 != 0) {
		func_923(var_359_object, "Neutral");
		var_0_object->SetMessage(535284); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(535285, 36962, 36961); //@t
		var_0_object->AddReply(535292, -1, 36968); //@t
		var_0_object->AddReply(535293, -1, 36969); //@t
		goto Label_893;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x360";
	}
Label_893:
	bool var_383_bool;
	func_1876(var_383_bool);
	if(var_383_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_1761(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_922;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_922:
		return 0;

	}
	
}


void func_1501(void)
{
	@StopAnimation();
	@StopGroup0();
}


// @pe
void func_94(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_208_object, object var_209_object)
{
	var_0_object = var_209_object;
	var_1_object = var_208_object;
	var_3_string = false;
	if(1 != 0) {
		func_147(var_209_object, "Neutral");
		var_0_object->SetMessage(525507); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(525508, 30772, 26864); //@t
		goto Label_117;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x62";
	}
Label_117:
	bool var_231_bool;
	func_1876(var_231_bool);
	if(var_231_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_1761(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_146;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_146:
		return 0;

	}
	
}


void func_2015(int var_199_int)
{
	int var_201_int;
	@GetVariable("branch", var_201_int);
	if(var_201_int == 0) {
		var_199_int = 1;
		return 2;
	EMIT "GOTO 0x7ee";
	}
	if(var_201_int == 1) {
		var_199_int = 2;
		return 2;
	}
	var_199_int = 3;
}


// @pe
void func_1887(void)
{
	@SetVariable("k8q01", 4);
	func_1961();
	bool var_90_bool;
	func_1817(var_90_bool, "quest_k8_01", "unlock_boiny");
}


void func_1761(string var_29_string)
{
	float var_32_float; float var_33_float;
	@lshGetAnimTimes(var_29_string, var_32_float, var_33_float);
	@lshPlayAnimation(var_32_float, var_33_float, false);
}


// @pe
void func_1119(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_417_object, object var_418_object)
{
	var_0_object = var_418_object;
	var_1_object = var_417_object;
	var_3_string = false;
	if(1 != 0) {
		func_1177(var_418_object, "Neutral");
		var_0_object->SetMessage(540539); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(540540, -1, 42549); //@t
		var_0_object->AddReply(540799, -1, 42848); //@t
		goto Label_1147;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x463";
	}
Label_1147:
	bool var_439_bool;
	func_1876(var_439_bool);
	if(var_439_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_1761(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_1176;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_1176:
		return 0;

	}
	
}


void func_1248(object var_0_object)
{
	bool var_22_bool;
	func_1533(var_22_bool);
	if(!var_22_bool) { //@nz
		TaskCall(0);
		func_0();
		TaskReturn();
	}
	func_1376();
	@GetDirection(var_0_object);
	
	for(;;) {
		func_1430();
	}
}
EMIT "Return(); Pop(0)";


void func_1506(float var_36_float, object var_37_object)
{
	cvector var_41_cvector;
	@GetPosition(var_41_cvector);
	cvector var_42_cvector;
	var_37_object->GetPosition(var_42_cvector);
	var_36_float = (var_42_cvector - var_41_cvector) | (var_42_cvector - var_41_cvector);
}


void func_229(object var_0_object, int var_256_int, object var_257_object)
{
	var_0_object = var_257_object;
	bool var_267_bool; object var_268_object;
	object var_269_object;
	func_1796(var_269_object);
	var_269_object = var_268_object;
	func_1623(var_267_bool, var_268_object);
	bool var_270_bool; object var_271_object;
	var_257_object = var_271_object;
	func_1538(var_270_bool, var_271_object, 70.0);
	if(!var_270_bool) { //@nz
		var_256_int = -2;
		return 8;
	}
	object var_263_object;
	@CreateDialog(var_263_object);
	int var_274_int;
	func_1870(var_274_int);
	var_263_object->SetNPCName(var_274_int);
	int var_275_int;
	func_1868(var_275_int);
	var_263_object->SetNPCDescription(var_275_int);
	string var_276_string;
	func_1872(var_276_string);
	var_263_object->SetPhoto(var_276_string);
	string var_277_string;
	func_1874(var_277_string);
	var_263_object->SetPhoto2(var_277_string);
	int var_278_int;
	func_2015(var_278_int);
	var_263_object->SetPlayerName(var_278_int);
	bool var_264_bool;
	@IsOverrideActive(var_264_bool);
	if(var_264_bool != 0) {
		var_256_int = -2;
		return 8;
	}
	@DoDialog(var_263_object);
	object var_280_object; object var_281_object;
	var_257_object = var_280_object;
	var_263_object = var_281_object;
	TaskCall(4);
	func_310(var_282_object, var_283_object, var_284_string, var_285_bool, var_280_object, var_281_object);
	TaskReturn();
	bool var_266_bool;
	var_263_object->IsDialogEnd(var_266_bool);
	
	for(;;) {
		var_330_bool = !var_266_bool; //@nz
		if(var_330_bool == 0) goto Label_299;
		@sync();
		var_263_object->IsDialogEnd(var_266_bool);
	}
	
Label_299:
	object var_331_object;
	var_257_object = var_331_object;
	func_1606();
	@StopDialog(var_263_object);
	var_263_object->GetReturnValue(-1);
	int var_265_int = var_256_int;
}
EMIT "Stack[-4] = 0";


void func_1768(string var_219_string, bool var_220_bool)
{
	float var_225_float; float var_226_float;
	@lshGetAnimTimes(var_219_string, var_225_float, var_226_float);
	@lshPlayAnimation(var_225_float, var_226_float, var_220_bool);
}


void func_1514(bool var_29_bool, cvector var_30_cvector)
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
void func_1901(void)
{
	func_1935();
	bool var_66_bool;
	func_1817(var_66_bool, "quest_k8_01", "fail");
}


void func_1774(bool var_87_bool, string var_88_string)
{
	bool var_90_bool;
	bool var_91_bool;
	func_1876(var_91_bool);
	if(var_91_bool != 0) {
		@lshHasSpeech(var_90_bool, var_88_string);
		if(var_90_bool != 0) {
			@lshPlaySpeech(var_88_string);
			var_87_bool = true;
		}
	}
	var_87_bool = false;
}


// @pe
void func_2032(object var_39_object)
{
	var_40_bool = GlobalVars[1];
	if(!var_40_bool) { //@nz
		int var_42_int; object var_43_object;
		var_39_object = var_43_object;
		TaskCall(1);
		func_13(var_44_object, var_42_int, var_43_object);
		TaskReturn();
		var_252_bool = GlobalVars[1];
		GlobalVars[1] = true;
	}
	bool var_253_bool;
	func_1838(var_253_bool, 8);
	if(var_253_bool != 0) {
		int var_256_int; object var_257_object;
		var_39_object = var_257_object;
		TaskCall(3);
		func_229(var_258_object, var_256_int, var_257_object);
		TaskReturn();
		return 0;
	}
	bool var_332_bool;
	func_1838(var_332_bool, 12);
	if(var_332_bool != 0) {
		int var_334_int; object var_335_object;
		var_39_object = var_335_object;
		TaskCall(5);
		func_779(var_336_object, var_334_int, var_335_object);
		TaskReturn();
		return 0;
	}
	int var_393_int; object var_394_object;
	var_39_object = var_394_object;
	TaskCall(7);
	func_1038(var_395_object, var_393_int, var_394_object);
	TaskReturn();
}


void func_1524(bool var_25_bool, object var_26_object)
{
	cvector var_28_cvector;
	var_26_object->GetPosition(var_28_cvector);
	bool var_29_bool; cvector var_30_cvector;
	var_28_cvector = var_30_cvector;
	func_1514(var_29_bool, var_30_cvector);
	var_29_bool = var_25_bool;
}


void func_1268(bool var_46_bool)
{
	object var_48_object;
	@FindActor(var_48_object, "player");
	if(!var_48_object) //@nz
		var_46_bool = false;
	bool var_51_bool; object var_52_object;
	var_48_object = var_52_object;
	func_1524(var_51_bool, var_52_object);
	var_51_bool = var_46_bool;
}
EMIT "Stack[-1] = 0";


// @pe
void func_1911(bool var_296_bool)
{
	int var_298_int;
	func_1812(var_298_int, "k8q01");
	if(var_298_int == 1)
		var_296_bool = true;
	var_296_bool = false;
}


void func_1533(bool var_22_bool)
{
	bool var_24_bool;
	@IsLoaded(var_24_bool);
	var_24_bool = var_22_bool;
}


