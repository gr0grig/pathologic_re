// @GLOBALS: 0:object:

task task_0
{
}


task task_1
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int)
	{
		if(1 != 0) {
			func_569();
			if(var_6_int == 16338) {
				object var_11_object; object var_12_object;
				var_11_object = var_1_object;
				var_12_object = var_0_object;
				func_597();
			}
			if(var_6_int == 16349) {
				object var_17_object; object var_18_object;
				var_17_object = var_1_object;
				var_18_object = var_0_object;
				func_597();
			}
			if(var_6_int == 16351) {
				object var_21_object; object var_22_object;
				var_21_object = var_1_object;
				var_22_object = var_0_object;
				func_597();
			}
			if(var_5_int == 16322) {
				bool var_25_bool;
				func_603(var_1_object);
				if(var_25_bool != 0) {
					object var_33_object; object var_34_object;
					var_33_object = var_1_object;
					var_34_object = var_0_object;
					func_591();
					func_176(var_6_int, "Neutral");
					var_0_object->SetMessage(15058); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(15059, 16324, 16323); //@t
					var_0_object->AddReply(15072, -1, 16336); //@t
					return 0;
				}
				func_176(var_6_int, "Neutral");
				var_0_object->SetMessage(15073); //@t
				var_0_object->ClearReplies(); //@t
				bool var_61_bool;
				func_615(var_1_object);
				if(var_61_bool != 0)
					var_0_object->AddReply(15074, 16339, 16338); //@t
				bool var_70_bool;
				func_615(var_1_object);
				if(var_70_bool != 0)
					var_0_object->AddReply(15085, 16341, 16349); //@t
				bool var_75_bool;
				func_615(var_1_object);
				if(var_75_bool != 0)
					var_0_object->AddReply(15086, 16341, 16351); //@t
				var_0_object->AddReply(15087, -1, 16353); //@t
				return 0;
			}
			if(var_5_int == 16339) {
				func_176(var_6_int, "Neutral");
				var_0_object->SetMessage(15075); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(15076, 16341, 16340); //@t
				var_0_object->AddReply(15081, -1, 16345); //@t
				var_0_object->AddReply(15082, 16347, 16346); //@t
				return 0;
			}
			if(var_5_int == 16347) {
				func_176(var_6_int, "Neutral");
				var_0_object->SetMessage(15083); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(15084, -1, 16348); //@t
				return 0;
			}
			if(var_5_int == 16341) {
				func_176(var_6_int, "Neutral");
				var_0_object->SetMessage(15077); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(15078, -1, 16342); //@t
				var_0_object->AddReply(15079, -1, 16343); //@t
				var_0_object->AddReply(15080, -1, 16344); //@t
				return 0;
			}
			if(var_5_int == 16324) {
				func_176(var_6_int, "Neutral");
				var_0_object->SetMessage(15060); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(15061, 16326, 16325); //@t
				var_0_object->AddReply(15071, -1, 16335); //@t
				return 0;
			}
			if(var_5_int == 16326) {
				func_176(var_6_int, "Neutral");
				var_0_object->SetMessage(15062); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(15063, 16328, 16327); //@t
				var_0_object->AddReply(15067, 16332, 16331); //@t
				return 0;
			}
			if(var_5_int == 16332) {
				func_176(var_6_int, "Neutral");
				var_0_object->SetMessage(15068); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(15069, -1, 16333); //@t
				var_0_object->AddReply(15070, -1, 16334); //@t
				return 0;
			}
			if(var_5_int == 16328) {
				func_176(var_6_int, "Neutral");
				var_0_object->SetMessage(15064); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(15065, -1, 16329); //@t
				var_0_object->AddReply(15066, -1, 16330); //@t
				return 0;
			}
			var_3_string = true;
			bool var_156_bool;
			func_648(var_156_bool);
			if(var_156_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xc1";
	
	}

}


maintask task_2
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool)
	{
	
		for(;;) {
			@Hold();
		}
	}
	EMIT "Return(); Pop(0)";

	// @pe
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object)
	{
		object var_7_object;
		var_5_object = var_7_object;
		TaskCall(0);
		int var_6_int;
		func_0(var_8_object, var_6_int, var_7_object);
		TaskReturn();
	}

}


void func_0(object var_0_object, int var_6_int, object var_7_object)
{
	var_0_object = var_7_object;
	bool var_17_bool; object var_18_object;
	var_7_object = var_18_object;
	func_491(var_17_bool, var_18_object);
	if(!var_17_bool) { //@nz
		var_6_int = -2;
		return 8;
	}
	object var_13_object;
	@CreateDialog(var_13_object);
	int var_58_int;
	func_644(var_58_int);
	var_13_object->SetNPCName(var_58_int);
	string var_59_string;
	func_646(var_59_string);
	var_13_object->SetPhoto(var_59_string);
	int var_60_int;
	func_627(var_60_int);
	var_13_object->SetPlayerName(var_60_int);
	bool var_14_bool;
	@IsOverrideActive(var_14_bool);
	if(var_14_bool != 0) {
		var_6_int = -2;
		return 8;
	}
	@DoDialog(var_13_object);
	object var_69_object; object var_70_object;
	var_7_object = var_69_object;
	var_13_object = var_70_object;
	TaskCall(1);
	func_63(var_71_object, var_72_object, var_73_string, var_74_bool, var_69_object, var_70_object);
	TaskReturn();
	bool var_16_bool;
	var_13_object->IsDialogEnd(var_16_bool);
	
	for(;;) {
		var_142_bool = !var_16_bool; //@nz
		if(var_142_bool == 0) goto Label_52;
		@sync();
		var_13_object->IsDialogEnd(var_16_bool);
	}
	
Label_52:
	object var_143_object;
	var_7_object = var_143_object;
	func_547();
	@StopDialog(var_13_object);
	var_13_object->GetReturnValue(-1);
	int var_15_int = var_6_int;
}
EMIT "Stack[-4] = 0";


void func_576(cvector var_42_cvector, cvector var_43_cvector)
{
	float var_46_float = sqrt(var_43_cvector | var_43_cvector);
	if(var_46_float < 0.000001)
		var_42_cvector = [0.0, 0.0, 0.0];
	var_42_cvector = var_43_cvector / var_46_float;
}


void func_644(int var_58_int)
{
	var_58_int = 3354;
}


void func_646(string var_59_string)
{
	var_59_string = "ui/NPC_Black.png";
}


void func_648(bool var_89_bool)
{
	var_89_bool = false;
}


void func_586(int var_78_int, string var_79_string)
{
	int var_81_int;
	@GetVariable(var_79_string, var_81_int);
	var_81_int = var_78_int;
}


// @pe
void func_591(void)
{
	@SetVariable("ood12Whitemask1", 1);
}


// @pe
void func_597(void)
{
	@SetVariable("ood12Whitemask2", 1);
}


// @pe
void func_603(bool var_76_bool)
{
	int var_78_int;
	func_586(var_78_int, "ood12Whitemask1");
	if(var_78_int == 0) {
		var_76_bool = true;
		return 0;
	}
	var_76_bool = false;
}


// @pe
void func_547(void)
{
	@CameraSwitchToNormal();
}


// @pe
void func_615(bool var_120_bool)
{
	int var_122_int;
	func_586(var_122_int, "ood12Whitemask2");
	if(var_122_int == 0) {
		var_120_bool = true;
		return 0;
	}
	var_120_bool = false;
}


void func_551(string var_92_string)
{
	@Trace("playing " + var_92_string);
	float var_95_float;
	float var_96_float;
	@lshGetAnimTimes(var_92_string, var_95_float, var_96_float);
	@lshPlayAnimation(var_95_float, var_96_float);
	@Trace("start: " + var_95_float);
	@Trace("end: " + var_96_float);
}


void func_491(bool var_17_bool, object var_18_object)
{
	cvector var_28_cvector;
	var_18_object->GetPosition(var_28_cvector);
	float var_27_float;
	var_18_object->GetEyesHeight(var_27_float);
	var_35_float = GetByIndex(var_28_cvector, 1);
	SetByIndex(var_28_cvector, 1) = (var_35_float + var_27_float);
	cvector var_29_cvector;
	@GetPosition(var_29_cvector);
	@GetEyesHeight(var_27_float);
	var_36_float = GetByIndex(var_29_cvector, 1);
	SetByIndex(var_29_cvector, 1) = (var_36_float + var_27_float);
	cvector var_30_cvector = var_28_cvector - var_29_cvector;
	var_37_float = GetByIndex(var_30_cvector, 1);
	SetByIndex(var_30_cvector, 1) = (float)0;
	var_39_float = sqrt(var_30_cvector | var_30_cvector);
	var_30_cvector /= var_39_float;
	cvector var_31_cvector = -var_30_cvector;
	cvector var_42_cvector;
	func_576(var_42_cvector, (var_31_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_32_cvector = ((var_30_cvector * 70) + (var_42_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_34_bool;
	@IsOverrideActive(var_34_bool);
	if(var_34_bool != 0)
		var_17_bool = false;
	@StopWorld();
	@CameraTransit((var_29_cvector + var_32_cvector), var_31_cvector);
	var_55_float = GetByIndex(var_32_cvector, 0);
	var_56_float = GetByIndex(var_32_cvector, 2);
	@Rotate(var_55_float, var_56_float);
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_17_bool = true;
}


// @pe
void func_176(object var_2_object, string var_88_string)
{
	bool var_89_bool;
	func_648(var_89_bool);
	if(!var_89_bool) //@nz
		return 0;
	if(var_88_string == var_2_object)
		return 0;
	string var_92_string;
	func_551(var_92_string);
	var_2_object = var_92_string;
}


void func_627(int var_60_int)
{
	int var_62_int;
	@GetVariable("player", var_62_int);
	if(var_62_int == 0) {
		var_60_int = 200001;
		return 2;
	EMIT "GOTO 0x282";
	}
	if(var_62_int == 1) {
		var_60_int = 200002;
		return 2;
	}
	var_60_int = 200003;
}


void func_569(void)
{
	bool var_8_bool;
	func_648(var_8_bool);
	if(var_8_bool != 0)
		@lshStopSpeech();
}


// @pe
void func_63(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_69_object, object var_70_object)
{
	var_0_object = var_70_object;
	var_1_object = var_69_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_76_bool;
		func_603(var_1_object);
		if(var_76_bool != 0) {
			object var_84_object; object var_85_object;
			var_84_object = var_1_object;
			var_85_object = var_0_object;
			func_591();
			func_176(var_70_object, "Neutral");
			var_0_object->SetMessage(15058); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(15059, 16324, 16323); //@t
			var_0_object->AddReply(15072, -1, 16336); //@t
		} else {
					func_176(var_70_object, "Neutral");
					var_0_object->SetMessage(15073); //@t
					var_0_object->ClearReplies(); //@t
					bool var_120_bool;
					func_615(var_1_object);
					if(var_120_bool != 0)
						var_0_object->AddReply(15074, 16339, 16338); //@t
					bool var_129_bool;
					func_615(var_1_object);
					if(var_129_bool != 0)
						var_0_object->AddReply(15085, 16341, 16349); //@t
					bool var_134_bool;
					func_615(var_1_object);
					if(var_134_bool != 0)
						var_0_object->AddReply(15086, 16341, 16351); //@t
					var_0_object->AddReply(15087, -1, 16353); //@t
		}
	}
	for(;;) {
		bool var_110_bool;
		func_648(var_110_bool);
		if(var_110_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_551(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_175;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_175:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x43";


