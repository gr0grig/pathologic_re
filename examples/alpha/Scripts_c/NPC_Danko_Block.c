// @GLOBALS: 0:object:

task task_0
{
	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool)
	{
		@StopGroup0();
	}

}


maintask task_1
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool)
	{
		func_1904();
		bool var_10_bool;
		func_1531(var_10_bool);
		if(!var_10_bool) { //@nz
			TaskCall(0);
			func_0();
			TaskReturn();
		}
		for(;;) {
			func_1596("Neutral");
			@lshWaitForAnimEnd();
		}
	}
	EMIT "@ Hold()";
	EMIT "Pop(0)";
	EMIT "Return(); Pop(0)";

	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool)
	{
		TaskCall(0);
		func_0();
		TaskReturn();
	}

	// @pe
	void OnUse(object actor, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool)
	{
		object var_11_object;
		var_10_bool = var_11_object;
		func_1905(var_11_object);
	}

	// @pe
	void OnCollision(object actor, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool)
	{
		object var_12_object;
		var_10_bool = var_12_object;
		bool var_11_bool;
		func_1519(var_11_bool, var_12_object);
		@WaitForAnimEnd();
	}

}


task task_2
{
}


task task_3
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool)
	{
		if(1 != 0) {
			func_1614();
			if(var_11_bool == 15137) {
				object var_16_object; object var_17_object;
				var_16_object = var_1_object;
				var_17_object = var_0_object;
				func_1704();
			}
			if(var_11_bool == 15149) {
				object var_22_object = var_1_object;
				func_1710(var_0_object);
				object var_41_object; object var_42_object;
				var_41_object = var_1_object;
				var_42_object = var_0_object;
				func_1692();
				object var_45_object = var_1_object;
				func_1749(var_0_object);
			}
			if(var_11_bool == 15150) {
				object var_58_object = var_1_object;
				func_1710(var_0_object);
				object var_60_object; object var_61_object;
				var_60_object = var_1_object;
				var_61_object = var_0_object;
				func_1692();
				object var_62_object = var_1_object;
				func_1749(var_0_object);
			}
			if(var_11_bool == 15155) {
				object var_66_object; object var_67_object;
				var_66_object = var_1_object;
				var_67_object = var_0_object;
				func_1760();
			}
			if(var_10_string == 15109) {
				object var_72_object; object var_73_object;
				var_72_object = var_1_object;
				var_73_object = var_0_object;
				func_1698();
				func_209(var_11_bool, "Neutral");
				var_0_object->SetMessage(13882); //@t
				var_0_object->ClearReplies(); //@t
				bool var_92_bool;
				func_1766(var_92_bool, var_1_object);
				if(var_92_bool != 0)
					var_0_object->AddReply(13883, 15111, 15110); //@t
				bool var_99_bool = false;
				bool var_100_bool;
				func_1776(var_1_object);
				if(var_100_bool != 0) {
					bool var_108_bool;
					func_1788(var_1_object);
					if(var_108_bool != 0)
						var_99_bool = true;
				}
				if(var_99_bool != 0)
					var_0_object->AddReply(13906, 15138, 15137); //@t
				bool var_117_bool;
				func_1872(var_1_object);
				if(var_117_bool != 0)
					var_0_object->AddReply(13924, 15156, 15155); //@t
				var_0_object->AddReply(13947, -1, 15182); //@t
				return 0;
			}
			if(var_10_string == 15156) {
				func_209(var_11_bool, "Neutral");
				var_0_object->SetMessage(13925); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13926, 15158, 15157); //@t
				var_0_object->AddReply(13946, 15158, 15180); //@t
				return 0;
			}
			if(var_10_string == 15158) {
				func_209(var_11_bool, "Neutral");
				var_0_object->SetMessage(13927); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13928, 15160, 15159); //@t
				var_0_object->AddReply(13945, 15160, 15178); //@t
				return 0;
			}
			if(var_10_string == 15160) {
				func_209(var_11_bool, "Neutral");
				var_0_object->SetMessage(13929); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13930, 15162, 15161); //@t
				var_0_object->AddReply(13944, 15162, 15176); //@t
				return 0;
			}
			if(var_10_string == 15162) {
				func_209(var_11_bool, "Neutral");
				var_0_object->SetMessage(13931); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13932, 15164, 15163); //@t
				var_0_object->AddReply(13941, 15173, 15172); //@t
				return 0;
			}
			if(var_10_string == 15173) {
				func_209(var_11_bool, "Neutral");
				var_0_object->SetMessage(13942); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13943, 15166, 15174); //@t
				return 0;
			}
			if(var_10_string == 15164) {
				func_209(var_11_bool, "Neutral");
				var_0_object->SetMessage(13933); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13934, 15166, 15165); //@t
				return 0;
			}
			if(var_10_string == 15166) {
				func_209(var_11_bool, "Neutral");
				var_0_object->SetMessage(13935); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13936, 15168, 15167); //@t
				return 0;
			}
			if(var_10_string == 15168) {
				func_209(var_11_bool, "Neutral");
				var_0_object->SetMessage(13937); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13938, 15170, 15169); //@t
				return 0;
			}
			if(var_10_string == 15170) {
				func_209(var_11_bool, "Neutral");
				var_0_object->SetMessage(13939); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13940, -1, 15171); //@t
				return 0;
			}
			if(var_10_string == 15138) {
				func_209(var_11_bool, "Neutral");
				var_0_object->SetMessage(13907); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13908, 15140, 15139); //@t
				return 0;
			}
			if(var_10_string == 15140) {
				func_209(var_11_bool, "Neutral");
				var_0_object->SetMessage(13909); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13910, 15142, 15141); //@t
				return 0;
			}
			if(var_10_string == 15142) {
				func_209(var_11_bool, "Neutral");
				var_0_object->SetMessage(13911); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13912, 15144, 15143); //@t
				var_0_object->AddReply(13920, 15152, 15151); //@t
				return 0;
			}
			if(var_10_string == 15152) {
				func_209(var_11_bool, "Neutral");
				var_0_object->SetMessage(13921); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13922, 15154, 15153); //@t
				return 0;
			}
			if(var_10_string == 15154) {
				func_209(var_11_bool, "Neutral");
				var_0_object->SetMessage(13923); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(14067, -1, 15304); //@t
				return 0;
			}
			if(var_10_string == 15144) {
				func_209(var_11_bool, "Neutral");
				var_0_object->SetMessage(13913); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13914, 15146, 15145); //@t
				var_0_object->AddReply(13919, -1, 15150); //@t
				return 0;
			}
			if(var_10_string == 15146) {
				func_209(var_11_bool, "Neutral");
				var_0_object->SetMessage(13915); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13916, 15148, 15147); //@t
				return 0;
			}
			if(var_10_string == 15148) {
				func_209(var_11_bool, "Neutral");
				var_0_object->SetMessage(13917); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13918, -1, 15149); //@t
				return 0;
			}
			if(var_10_string == 15111) {
				func_209(var_11_bool, "Neutral");
				var_0_object->SetMessage(13884); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13885, 15113, 15112); //@t
				var_0_object->AddReply(13905, 15113, 15135); //@t
				return 0;
			}
			if(var_10_string == 15113) {
				func_209(var_11_bool, "Neutral");
				var_0_object->SetMessage(13886); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13887, 15115, 15114); //@t
				var_0_object->AddReply(13899, 15128, 15127); //@t
				return 0;
			}
			if(var_10_string == 15128) {
				func_209(var_11_bool, "Neutral");
				var_0_object->SetMessage(13900); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13901, 15130, 15129); //@t
				var_0_object->AddReply(13904, 15115, 15133); //@t
				return 0;
			}
			if(var_10_string == 15130) {
				func_209(var_11_bool, "Neutral");
				var_0_object->SetMessage(13902); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13903, 15121, 15131); //@t
				return 0;
			}
			if(var_10_string == 15115) {
				func_209(var_11_bool, "Neutral");
				var_0_object->SetMessage(13888); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13889, 15117, 15116); //@t
				var_0_object->AddReply(13898, 15117, 15125); //@t
				return 0;
			}
			if(var_10_string == 15117) {
				func_209(var_11_bool, "Neutral");
				var_0_object->SetMessage(13890); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13891, 15119, 15118); //@t
				var_0_object->AddReply(13897, -1, 15124); //@t
				return 0;
			}
			if(var_10_string == 15119) {
				func_209(var_11_bool, "Neutral");
				var_0_object->SetMessage(13892); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13893, 15121, 15120); //@t
				return 0;
			}
			if(var_10_string == 15121) {
				func_209(var_11_bool, "Neutral");
				var_0_object->SetMessage(13894); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13895, -1, 15122); //@t
				var_0_object->AddReply(13896, -1, 15123); //@t
				return 0;
			}
			var_3_string = true;
			bool var_340_bool;
			func_1690(var_340_bool);
			if(var_340_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xe2";
	
	}

}


task task_4
{
}


task task_5
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, int var_10_int, int var_11_int)
	{
		if(1 != 0) {
			func_1614();
			if(var_11_int == 15501) {
				object var_16_object; object var_17_object;
				var_16_object = var_1_object;
				var_17_object = var_0_object;
				func_1731();
			}
			if(var_11_int == 15528) {
				object var_22_object; object var_23_object;
				var_22_object = var_1_object;
				var_23_object = var_0_object;
				func_1737();
			}
			if(var_11_int == 15539) {
				object var_28_object; object var_29_object;
				var_28_object = var_1_object;
				var_29_object = var_0_object;
				func_1743();
			}
			if(var_10_int == 15500) {
				func_1041(var_11_int, "Neutral");
				var_0_object->SetMessage(14280); //@t
				var_0_object->ClearReplies(); //@t
				bool var_50_bool = false;
				bool var_51_bool;
				func_1812(var_1_object);
				if(var_51_bool != 0) {
					bool var_59_bool;
					func_1824(var_1_object);
					if(var_59_bool != 0)
						var_50_bool = true;
				}
				if(var_50_bool != 0)
					var_0_object->AddReply(14281, 15502, 15501); //@t
				bool var_68_bool = false;
				bool var_69_bool;
				func_1836(var_1_object);
				if(var_69_bool != 0) {
					bool var_75_bool;
					func_1848(var_1_object);
					if(var_75_bool != 0)
						var_68_bool = true;
				}
				if(var_68_bool != 0)
					var_0_object->AddReply(14306, 15529, 15528); //@t
				bool var_84_bool = false;
				bool var_85_bool;
				func_1800(var_1_object);
				if(var_85_bool != 0) {
					bool var_91_bool;
					func_1860(var_1_object);
					if(var_91_bool != 0)
						var_84_bool = true;
				}
				if(var_84_bool != 0)
					var_0_object->AddReply(14317, 15540, 15539); //@t
				var_0_object->AddReply(14324, -1, 15546); //@t
				return 0;
			}
			if(var_10_int == 15540) {
				func_1041(var_11_int, "Neutral");
				var_0_object->SetMessage(14318); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(14319, 15542, 15541); //@t
				return 0;
			}
			if(var_10_int == 15542) {
				func_1041(var_11_int, "Neutral");
				var_0_object->SetMessage(14320); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(14321, 15544, 15543); //@t
				return 0;
			}
			if(var_10_int == 15544) {
				func_1041(var_11_int, "Neutral");
				var_0_object->SetMessage(14322); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(14323, -1, 15545); //@t
				return 0;
			}
			if(var_10_int == 15529) {
				func_1041(var_11_int, "Neutral");
				var_0_object->SetMessage(14307); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(14308, 15531, 15530); //@t
				return 0;
			}
			if(var_10_int == 15531) {
				func_1041(var_11_int, "Neutral");
				var_0_object->SetMessage(14309); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(14310, 15533, 15532); //@t
				return 0;
			}
			if(var_10_int == 15533) {
				func_1041(var_11_int, "Neutral");
				var_0_object->SetMessage(14311); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(14312, 15535, 15534); //@t
				return 0;
			}
			if(var_10_int == 15535) {
				func_1041(var_11_int, "Neutral");
				var_0_object->SetMessage(14313); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(14314, 15537, 15536); //@t
				return 0;
			}
			if(var_10_int == 15537) {
				func_1041(var_11_int, "Neutral");
				var_0_object->SetMessage(14315); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(14316, -1, 15538); //@t
				return 0;
			}
			if(var_10_int == 15502) {
				func_1041(var_11_int, "Neutral");
				var_0_object->SetMessage(14282); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(14283, 15504, 15503); //@t
				return 0;
			}
			if(var_10_int == 15504) {
				func_1041(var_11_int, "Neutral");
				var_0_object->SetMessage(14284); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(14285, 15506, 15505); //@t
				var_0_object->AddReply(14290, 15511, 15510); //@t
				return 0;
			}
			if(var_10_int == 15511) {
				func_1041(var_11_int, "Neutral");
				var_0_object->SetMessage(14291); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(14292, 15513, 15512); //@t
				var_0_object->AddReply(14299, 15520, 15519); //@t
				return 0;
			}
			if(var_10_int == 15520) {
				func_1041(var_11_int, "Neutral");
				var_0_object->SetMessage(14300); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(14301, 15513, 15521); //@t
				var_0_object->AddReply(14302, 15524, 15523); //@t
				return 0;
			}
			if(var_10_int == 15524) {
				func_1041(var_11_int, "Neutral");
				var_0_object->SetMessage(14303); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(14304, 15513, 15525); //@t
				var_0_object->AddReply(14305, -1, 15527); //@t
				return 0;
			}
			if(var_10_int == 15513) {
				func_1041(var_11_int, "Neutral");
				var_0_object->SetMessage(14293); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(14294, 15515, 15514); //@t
				return 0;
			}
			if(var_10_int == 15515) {
				func_1041(var_11_int, "Neutral");
				var_0_object->SetMessage(14295); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(14296, 15517, 15516); //@t
				return 0;
			}
			if(var_10_int == 15517) {
				func_1041(var_11_int, "Neutral");
				var_0_object->SetMessage(14297); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(14298, -1, 15518); //@t
				return 0;
			}
			if(var_10_int == 15506) {
				func_1041(var_11_int, "Neutral");
				var_0_object->SetMessage(14286); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(14287, 15508, 15507); //@t
				return 0;
			}
			if(var_10_int == 15508) {
				func_1041(var_11_int, "Neutral");
				var_0_object->SetMessage(14288); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(14289, -1, 15509); //@t
				return 0;
			}
			var_3_string = true;
			bool var_241_bool;
			func_1690(var_241_bool);
			if(var_241_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x422";
	
	}

}


void func_0(void)
{
	@Hold();
}


void func_1536(bool var_31_bool, object var_32_object)
{
	cvector var_42_cvector;
	var_32_object->GetPosition(var_42_cvector);
	float var_41_float;
	var_32_object->GetEyesHeight(var_41_float);
	var_49_float = GetByIndex(var_42_cvector, 1);
	SetByIndex(var_42_cvector, 1) = (var_49_float + var_41_float);
	cvector var_43_cvector;
	@GetPosition(var_43_cvector);
	@GetEyesHeight(var_41_float);
	var_50_float = GetByIndex(var_43_cvector, 1);
	SetByIndex(var_43_cvector, 1) = (var_50_float + var_41_float);
	cvector var_44_cvector = var_42_cvector - var_43_cvector;
	var_51_float = GetByIndex(var_44_cvector, 1);
	SetByIndex(var_44_cvector, 1) = (float)0;
	var_53_float = sqrt(var_44_cvector | var_44_cvector);
	var_44_cvector /= var_53_float;
	cvector var_45_cvector = -var_44_cvector;
	cvector var_56_cvector;
	func_1621(var_56_cvector, (var_45_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_46_cvector = ((var_44_cvector * 70) + (var_56_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_48_bool;
	@IsOverrideActive(var_48_bool);
	if(var_48_bool != 0)
		var_31_bool = false;
	@StopWorld();
	@CameraTransit((var_43_cvector + var_46_cvector), var_45_cvector);
	var_69_float = GetByIndex(var_46_cvector, 0);
	var_70_float = GetByIndex(var_46_cvector, 2);
	@Rotate(var_69_float, var_70_float);
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_31_bool = true;
}


// @pe
void func_1671(bool var_12_bool, int var_13_int)
{
	int var_14_int;
	func_1662(var_14_int);
	var_12_bool = var_14_int == var_13_int;
}


// @pe
void func_1800(bool var_85_bool)
{
	int var_87_int;
	func_1631(var_87_int, "d11q02");
	if(var_87_int == 1)
		var_85_bool = true;
	var_85_bool = false;
}


void func_1677(bool var_251_bool)
{
	func_1596("No");
	bool var_253_bool;
	@lshWaitForAnimEnd(var_253_bool);
	var_253_bool = var_251_bool;
}


// @pe
void func_1041(object var_2_object, string var_34_string)
{
	bool var_35_bool;
	func_1690(var_35_bool);
	if(!var_35_bool) //@nz
		return 0;
	if(var_34_string == var_2_object)
		return 0;
	string var_38_string;
	func_1596(var_38_string);
	var_2_object = var_38_string;
}


// @pe
void func_1812(bool var_51_bool)
{
	int var_53_int;
	func_1631(var_53_int, "d11q01");
	if(var_53_int == 2)
		var_51_bool = true;
	var_51_bool = false;
}


void func_1686(int var_72_int)
{
	var_72_int = 11961;
}


void func_1688(string var_73_string)
{
	var_73_string = "ui/NPC_Burah.png";
}


void func_1690(bool var_13_bool)
{
	var_13_bool = true;
}


// @pe
void func_1692(void)
{
	@TriggerWorld("playsound", "giveitem");
}


// @pe
void func_1824(bool var_59_bool)
{
	int var_61_int;
	func_1631(var_61_int, "ood11Block1");
	if(var_61_int == 0) {
		var_59_bool = true;
		return 0;
	}
	var_59_bool = false;
}


// @pe
void func_1698(void)
{
	@SetVariable("d9TalkToPolkovodec", 1);
}


// @pe
void func_931(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_177_object, object var_178_object)
{
	var_0_object = var_178_object;
	var_1_object = var_177_object;
	var_3_object = false;
	if(1 != 0) {
		func_1041(var_178_object, "Neutral");
		var_0_object->SetMessage(14280); //@t
		var_0_object->ClearReplies(); //@t
		bool var_190_bool = false;
		bool var_191_bool;
		func_1812(var_1_object);
		if(var_191_bool != 0) {
			bool var_197_bool;
			func_1824(var_1_object);
			if(var_197_bool != 0)
				var_190_bool = true;
		}
		if(var_190_bool != 0)
			var_0_object->AddReply(14281, 15502, 15501); //@t
		bool var_206_bool = false;
		bool var_207_bool;
		func_1836(var_1_object);
		if(var_207_bool != 0) {
			bool var_213_bool;
			func_1848(var_1_object);
			if(var_213_bool != 0)
				var_206_bool = true;
		}
		if(var_206_bool != 0)
			var_0_object->AddReply(14306, 15529, 15528); //@t
		bool var_222_bool = false;
		bool var_223_bool;
		func_1800(var_1_object);
		if(var_223_bool != 0) {
			bool var_229_bool;
			func_1860(var_1_object);
			if(var_229_bool != 0)
				var_222_bool = true;
		}
		if(var_222_bool != 0)
			var_0_object->AddReply(14317, 15540, 15539); //@t
		var_0_object->AddReply(14324, -1, 15546); //@t
		goto Label_1011;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x3a7";
	}
Label_1011:
	bool var_241_bool;
	func_1690(var_241_bool);
	if(var_241_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_1596(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_1040;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_1040:
		return 0;

	}
	
}


// @pe
void func_1704(void)
{
	@SetVariable("ood9Block1", 1);
}


// @pe
void func_1836(bool var_69_bool)
{
	int var_71_int;
	func_1631(var_71_int, "d11q01");
	if(var_71_int >= 3)
		var_69_bool = true;
	var_69_bool = false;
}


void func_1710(object var_22_object)
{
	@Trace("Rifle is given");
	object var_25_object;
	@CreateInvItem(var_25_object);
	var_25_object->SetItemName("Rifle");
	var_25_object->SetProperty("durability", 100);
	object var_30_object; object var_31_object;
	var_22_object = var_30_object;
	var_25_object = var_31_object;
	func_1636(var_30_object, var_31_object, 1);
}
EMIT "Stack[-1] = 0";


void func_49(object var_0_object, int var_20_int, object var_21_object)
{
	var_0_object = var_21_object;
	bool var_31_bool; object var_32_object;
	var_21_object = var_32_object;
	func_1536(var_31_bool, var_32_object);
	if(!var_31_bool) { //@nz
		var_20_int = -2;
		return 8;
	}
	object var_27_object;
	@CreateDialog(var_27_object);
	int var_72_int;
	func_1686(var_72_int);
	var_27_object->SetNPCName(var_72_int);
	string var_73_string;
	func_1688(var_73_string);
	var_27_object->SetPhoto(var_73_string);
	int var_74_int;
	func_1887(var_74_int);
	var_27_object->SetPlayerName(var_74_int);
	bool var_28_bool;
	@IsOverrideActive(var_28_bool);
	if(var_28_bool != 0) {
		var_20_int = -2;
		return 8;
	}
	@DoDialog(var_27_object);
	object var_83_object; object var_84_object;
	var_21_object = var_83_object;
	var_27_object = var_84_object;
	TaskCall(3);
	func_112(var_85_object, var_86_object, var_87_string, var_88_bool, var_83_object, var_84_object);
	TaskReturn();
	bool var_30_bool;
	var_27_object->IsDialogEnd(var_30_bool);
	
	for(;;) {
		var_155_bool = !var_30_bool; //@nz
		if(var_155_bool == 0) goto Label_101;
		@sync();
		var_27_object->IsDialogEnd(var_30_bool);
	}
	
Label_101:
	object var_156_object;
	var_21_object = var_156_object;
	func_1592();
	@StopDialog(var_27_object);
	var_27_object->GetReturnValue(-1);
	int var_29_int = var_20_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_1592(void)
{
	@CameraSwitchToNormal();
}


// @pe
void func_1848(bool var_75_bool)
{
	int var_77_int;
	func_1631(var_77_int, "ood11Block2");
	if(var_77_int == 0) {
		var_75_bool = true;
		return 0;
	}
	var_75_bool = false;
}


void func_1596(string var_14_string)
{
	@Trace("playing " + var_14_string);
	float var_17_float;
	float var_18_float;
	@lshGetAnimTimes(var_14_string, var_17_float, var_18_float);
	@lshPlayAnimation(var_17_float, var_18_float);
	@Trace("start: " + var_17_float);
	@Trace("end: " + var_18_float);
}


// @pe
void func_1731(void)
{
	@SetVariable("ood11Block1", 1);
}


// @pe
void func_1860(bool var_91_bool)
{
	int var_93_int;
	func_1631(var_93_int, "ood11Block3");
	if(var_93_int == 0) {
		var_91_bool = true;
		return 0;
	}
	var_91_bool = false;
}


// @pe
void func_1737(void)
{
	@SetVariable("ood11Block2", 1);
}


void func_1614(void)
{
	bool var_13_bool;
	func_1690(var_13_bool);
	if(var_13_bool != 0)
		@lshStopSpeech();
}


// @pe
void func_1743(void)
{
	@SetVariable("ood11Block3", 1);
}


// @pe
void func_1872(bool var_117_bool)
{
	int var_119_int;
	func_1631(var_119_int, "ood9Block2");
	if(var_119_int == 0) {
		var_117_bool = true;
		return 0;
	}
	var_117_bool = false;
}


// @pe
void func_209(object var_2_object, string var_76_string)
{
	bool var_77_bool;
	func_1690(var_77_bool);
	if(!var_77_bool) //@nz
		return 0;
	if(var_76_string == var_2_object)
		return 0;
	string var_80_string;
	func_1596(var_80_string);
	var_2_object = var_80_string;
}


// @pe
void func_1749(object var_45_object)
{
	@Trace("rifle ammo10 is given");
	object var_48_object;
	var_45_object = var_48_object;
	func_1649(var_48_object, "rifle_ammo", 10);
}


void func_1621(cvector var_56_cvector, cvector var_57_cvector)
{
	float var_60_float = sqrt(var_57_cvector | var_57_cvector);
	if(var_60_float < 0.000001)
		var_56_cvector = [0.0, 0.0, 0.0];
	var_56_cvector = var_57_cvector / var_60_float;
}


// @pe
void func_1884(bool var_94_bool)
{
	var_94_bool = false;
}


void func_1887(int var_74_int)
{
	int var_76_int;
	@GetVariable("player", var_76_int);
	if(var_76_int == 0) {
		var_74_int = 200001;
		return 2;
	EMIT "GOTO 0x76e";
	}
	if(var_76_int == 1) {
		var_74_int = 200002;
		return 2;
	}
	var_74_int = 200003;
}


// @pe
void func_1760(void)
{
	@SetVariable("ood9Block2", 1);
}


void func_1631(int var_53_int, string var_54_string)
{
	int var_56_int;
	@GetVariable(var_54_string, var_56_int);
	var_56_int = var_53_int;
}


void func_1636(object var_30_object, object var_31_object, int var_32_int)
{
	int var_36_int;
	var_31_object->GetItemID(var_36_int);
	int var_37_int;
	@GetInvItemProperty(var_37_int, var_36_int, "Category");
	bool var_38_bool;
	var_30_object->AddItem(var_38_bool, var_31_object, var_37_int, var_32_int);
	if(!var_38_bool) //@nz
		var_30_object->DropItems(var_31_object, var_32_int);
}


void func_868(object var_0_object, int var_159_int, object var_160_object)
{
	var_0_object = var_160_object;
	bool var_170_bool; object var_171_object;
	var_160_object = var_171_object;
	func_1536(var_170_bool, var_171_object);
	if(!var_170_bool) { //@nz
		var_159_int = -2;
		return 8;
	}
	object var_166_object;
	@CreateDialog(var_166_object);
	int var_173_int;
	func_1686(var_173_int);
	var_166_object->SetNPCName(var_173_int);
	string var_174_string;
	func_1688(var_174_string);
	var_166_object->SetPhoto(var_174_string);
	int var_175_int;
	func_1887(var_175_int);
	var_166_object->SetPlayerName(var_175_int);
	bool var_167_bool;
	@IsOverrideActive(var_167_bool);
	if(var_167_bool != 0) {
		var_159_int = -2;
		return 8;
	}
	@DoDialog(var_166_object);
	object var_177_object; object var_178_object;
	var_160_object = var_177_object;
	var_166_object = var_178_object;
	TaskCall(5);
	func_931(var_179_object, var_180_object, var_181_string, var_182_bool, var_177_object, var_178_object);
	TaskReturn();
	bool var_169_bool;
	var_166_object->IsDialogEnd(var_169_bool);
	
	for(;;) {
		var_249_bool = !var_169_bool; //@nz
		if(var_249_bool == 0) goto Label_920;
		@sync();
		var_166_object->IsDialogEnd(var_169_bool);
	}
	
Label_920:
	object var_250_object;
	var_160_object = var_250_object;
	func_1592();
	@StopDialog(var_166_object);
	var_166_object->GetReturnValue(-1);
	int var_168_int = var_159_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_1766(bool var_92_bool, object var_93_object)
{
	object var_95_object;
	var_93_object = var_95_object;
	func_1884(var_95_object);
	bool var_94_bool;
	if(var_94_bool != 0) {
		var_92_bool = true;
		return 0;
	}
	var_92_bool = false;
}


void func_1519(bool var_11_bool, object var_12_object)
{
	cvector var_17_cvector;
	var_12_object->GetPosition(var_17_cvector);
	cvector var_18_cvector;
	@GetPosition(var_18_cvector);
	cvector var_19_cvector = var_17_cvector - var_18_cvector;
	var_21_float = GetByIndex(var_19_cvector, 0);
	var_22_float = GetByIndex(var_19_cvector, 2);
	bool var_20_bool;
	@Rotate(var_21_float, var_22_float, var_20_bool);
	var_20_bool = var_11_bool;
}


void func_1904(void)
{
}


// @pe
void func_1905(object var_11_object)
{
	bool var_12_bool;
	func_1671(var_12_bool, 9);
	if(var_12_bool != 0) {
		int var_20_int; object var_21_object;
		var_11_object = var_21_object;
		TaskCall(2);
		func_49(var_22_object, var_20_int, var_21_object);
		TaskReturn();
		return 0;
	}
	bool var_157_bool;
	func_1671(var_157_bool, 11);
	if(var_157_bool != 0) {
		int var_159_int; object var_160_object;
		var_11_object = var_160_object;
		TaskCall(4);
		func_868(var_161_object, var_159_int, var_160_object);
		TaskReturn();
		return 0;
	}
	bool var_251_bool;
	func_1677(var_251_bool);
}


// @pe
void func_112(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_83_object, object var_84_object)
{
	var_0_object = var_84_object;
	var_1_object = var_83_object;
	var_3_object = false;
	if(1 != 0) {
		object var_90_object; object var_91_object;
		var_90_object = var_1_object;
		var_91_object = var_0_object;
		func_1698();
		func_209(var_84_object, "Neutral");
		var_0_object->SetMessage(13882); //@t
		var_0_object->ClearReplies(); //@t
		bool var_110_bool;
		func_1766(var_110_bool, var_1_object);
		if(var_110_bool != 0)
			var_0_object->AddReply(13883, 15111, 15110); //@t
		bool var_117_bool = false;
		bool var_118_bool;
		func_1776(var_1_object);
		if(var_118_bool != 0) {
			bool var_126_bool;
			func_1788(var_1_object);
			if(var_126_bool != 0)
				var_117_bool = true;
		}
		if(var_117_bool != 0)
			var_0_object->AddReply(13906, 15138, 15137); //@t
		bool var_135_bool;
		func_1872(var_1_object);
		if(var_135_bool != 0)
			var_0_object->AddReply(13924, 15156, 15155); //@t
		var_0_object->AddReply(13947, -1, 15182); //@t
		goto Label_179;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x74";
	}
Label_179:
	bool var_147_bool;
	func_1690(var_147_bool);
	if(var_147_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_1596(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_208;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_208:
		return 0;

	}
	
}


// @pe
void func_1776(bool var_100_bool)
{
	int var_102_int;
	func_1631(var_102_int, "d9q01");
	if(var_102_int == 2)
		var_100_bool = true;
	var_100_bool = false;
}


void func_1649(object var_48_object, string var_49_string, int var_50_int)
{
	object var_52_object;
	@CreateInvItem(var_52_object);
	var_52_object->SetItemName(var_49_string);
	object var_53_object; object var_54_object; int var_55_int;
	var_48_object = var_53_object;
	var_52_object = var_54_object;
	var_50_int = var_55_int;
	func_1636(var_53_object, var_54_object, var_55_int);
}
EMIT "Stack[-1] = 0";


void func_1531(bool var_10_bool)
{
	bool var_12_bool;
	@IsLoaded(var_12_bool);
	var_12_bool = var_10_bool;
}


// @pe
void func_1788(bool var_108_bool)
{
	int var_110_int;
	func_1631(var_110_int, "ood9Block1");
	if(var_110_int == 0) {
		var_108_bool = true;
		return 0;
	}
	var_108_bool = false;
}


void func_1662(int var_14_int)
{
	float var_16_float;
	@GetGameTime(var_16_float);
	var_14_int = 1 + (var_16_float / 24);
}


