// @GLOBALS: 0:object:,1:bool:

task task_0
{
	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool)
	{
		@StopGroup0();
	}

}


maintask task_1
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool)
	{
		func_5217();
		bool var_36_bool;
		func_4032(var_36_bool);
		if(!var_36_bool) { //@nz
			TaskCall(0);
			func_0();
			TaskReturn();
		}
		for(;;) {
			func_4097("Neutral");
			@lshWaitForAnimEnd();
		}
	}
	EMIT "@ Hold()";
	EMIT "Pop(0)";
	EMIT "Return(); Pop(0)";

	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool)
	{
		TaskCall(0);
		func_0();
		TaskReturn();
	}

	// @pe
	void OnUse(object actor, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, object var_31_object, object var_32_object, object var_33_object, string var_34_string, bool var_35_bool)
	{
		object var_36_object;
		var_35_bool = var_36_object;
		func_5221(var_36_object);
	}

	// @pe
	void OnCollision(object actor, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, object var_31_object, object var_32_object, object var_33_object, string var_34_string, bool var_35_bool)
	{
		object var_37_object;
		var_35_bool = var_37_object;
		bool var_36_bool;
		func_4020(var_36_bool, var_37_object);
		@WaitForAnimEnd();
	}

}


task task_2
{
}


task task_3
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool)
	{
		if(1 != 0) {
			func_4115();
			if(var_35_string == 346) {
				object var_41_object; object var_42_object;
				var_41_object = var_1_object;
				var_42_object = var_0_object;
				func_4256();
				func_180(var_36_bool, "Neutral");
				var_0_object->SetMessage(295); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(296, 350, 347); //@t
				var_0_object->AddReply(297, 350, 348); //@t
				var_0_object->AddReply(298, 350, 349); //@t
				return 0;
			}
			if(var_35_string == 350) {
				func_180(var_36_bool, "Neutral");
				var_0_object->SetMessage(299); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(300, 355, 351); //@t
				var_0_object->AddReply(301, 358, 352); //@t
				return 0;
			}
			if(var_35_string == 358) {
				func_180(var_36_bool, "Neutral");
				var_0_object->SetMessage(305); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(306, -1, 359); //@t
				var_0_object->AddReply(307, -1, 360); //@t
				return 0;
			}
			if(var_35_string == 355) {
				func_180(var_36_bool, "Neutral");
				var_0_object->SetMessage(302); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(304, -1, 357); //@t
				var_0_object->AddReply(303, -1, 356); //@t
				return 0;
			}
			var_3_string = true;
			bool var_100_bool;
			func_4236(var_100_bool);
			if(var_100_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xc5";
	
	}

}


task task_4
{
}


task task_5
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, int var_10_int, int var_11_int, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool)
	{
		if(1 != 0) {
			func_4115();
			if(var_36_bool == 3742) {
				object var_41_object; object var_42_object;
				var_41_object = var_1_object;
				var_42_object = var_0_object;
				func_4523();
			}
			if(var_36_bool == 3745) {
				object var_47_object; object var_48_object;
				var_47_object = var_1_object;
				var_48_object = var_0_object;
				func_4523();
			}
			if(var_36_bool == 3746) {
				object var_51_object; object var_52_object;
				var_51_object = var_1_object;
				var_52_object = var_0_object;
				func_4523();
			}
			if(var_36_bool == 3740) {
				object var_55_object; object var_56_object;
				var_55_object = var_1_object;
				var_56_object = var_0_object;
				func_4523();
			}
			if(var_36_bool == 13984) {
				object var_59_object; object var_60_object;
				var_59_object = var_1_object;
				var_60_object = var_0_object;
				func_4529();
				object var_63_object; object var_64_object;
				var_63_object = var_1_object;
				var_64_object = var_0_object;
				func_4535();
			}
			if(var_36_bool == 13988) {
				object var_121_object; object var_122_object;
				var_121_object = var_1_object;
				var_122_object = var_0_object;
				func_4529();
				object var_123_object; object var_124_object;
				var_123_object = var_1_object;
				var_124_object = var_0_object;
				func_4535();
			}
			if(var_36_bool == 13990) {
				object var_127_object; object var_128_object;
				var_127_object = var_1_object;
				var_128_object = var_0_object;
				func_4572();
			}
			if(var_35_string == 13969) {
				func_508(var_36_bool, "Neutral");
				var_0_object->SetMessage(12770); //@t
				var_0_object->ClearReplies(); //@t
				bool var_149_bool = false;
				bool var_150_bool;
				func_4820(var_1_object);
				if(var_150_bool != 0) {
					bool var_158_bool;
					func_4796(var_1_object);
					if(var_158_bool != 0)
						var_149_bool = true;
				}
				if(var_149_bool != 0)
					var_0_object->AddReply(12771, 3726, 13970); //@t
				bool var_167_bool = false;
				bool var_168_bool;
				func_4832(var_1_object);
				if(var_168_bool != 0) {
					bool var_174_bool;
					func_4808(var_1_object);
					if(var_174_bool != 0)
						var_167_bool = true;
				}
				if(var_167_bool != 0)
					var_0_object->AddReply(12772, 13972, 13971); //@t
				bool var_183_bool = true;
				bool var_184_bool = false;
				bool var_185_bool;
				func_4844(var_1_object);
				if(var_185_bool != 0) {
					bool var_191_bool;
					func_4868(var_1_object);
					if(var_191_bool != 0)
						var_184_bool = true;
				}
				if(var_184_bool != 1) {
					bool var_197_bool = false;
					bool var_198_bool;
					func_4856(var_1_object);
					if(var_198_bool != 0) {
						bool var_204_bool;
						func_4868(var_1_object);
						if(var_204_bool != 0)
							var_197_bool = true;
					}
					if(var_197_bool != 1)
						var_183_bool = false;
				}
				if(var_183_bool != 0)
					var_0_object->AddReply(12791, 13991, 13990); //@t
				var_0_object->AddReply(12790, -1, 13989); //@t
				return 0;
			}
			if(var_35_string == 13991) {
				func_508(var_36_bool, "Neutral");
				var_0_object->SetMessage(12792); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12793, 13993, 13992); //@t
				return 0;
			}
			if(var_35_string == 13993) {
				func_508(var_36_bool, "Neutral");
				var_0_object->SetMessage(12794); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12795, -1, 13994); //@t
				var_0_object->AddReply(12798, -1, 13997); //@t
				return 0;
			}
			if(var_35_string == 13972) {
				func_508(var_36_bool, "Neutral");
				var_0_object->SetMessage(12773); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12774, 13974, 13973); //@t
				return 0;
			}
			if(var_35_string == 13974) {
				func_508(var_36_bool, "Neutral");
				var_0_object->SetMessage(12775); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12776, 13976, 13975); //@t
				return 0;
			}
			if(var_35_string == 13976) {
				func_508(var_36_bool, "Neutral");
				var_0_object->SetMessage(12777); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12779, 13980, 13978); //@t
				var_0_object->AddReply(12778, 13979, 13977); //@t
				return 0;
			}
			if(var_35_string == 13979) {
				func_508(var_36_bool, "Neutral");
				var_0_object->SetMessage(12780); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13020, 13983, 14226); //@t
				return 0;
			}
			if(var_35_string == 13980) {
				func_508(var_36_bool, "Neutral");
				var_0_object->SetMessage(12781); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12782, 13983, 13981); //@t
				return 0;
			}
			if(var_35_string == 13983) {
				func_508(var_36_bool, "Neutral");
				var_0_object->SetMessage(12784); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12785, -1, 13984); //@t
				var_0_object->AddReply(12783, 13985, 13982); //@t
				return 0;
			}
			if(var_35_string == 13985) {
				func_508(var_36_bool, "Neutral");
				var_0_object->SetMessage(12786); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12787, 13987, 13986); //@t
				return 0;
			}
			if(var_35_string == 13987) {
				func_508(var_36_bool, "Neutral");
				var_0_object->SetMessage(12788); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12789, -1, 13988); //@t
				return 0;
			}
			if(var_35_string == 3726) {
				func_508(var_36_bool, "Neutral");
				var_0_object->SetMessage(3459); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(3460, 3729, 3727); //@t
				var_0_object->AddReply(3461, 3730, 3728); //@t
				return 0;
			}
			if(var_35_string == 3730) {
				func_508(var_36_bool, "Neutral");
				var_0_object->SetMessage(3463); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(3464, 3729, 3731); //@t
				var_0_object->AddReply(3465, 3734, 3733); //@t
				return 0;
			}
			if(var_35_string == 3734) {
				func_508(var_36_bool, "Neutral");
				var_0_object->SetMessage(3466); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(3467, 3729, 3735); //@t
				var_0_object->AddReply(3468, 3729, 3736); //@t
				return 0;
			}
			if(var_35_string == 3729) {
				func_508(var_36_bool, "Neutral");
				var_0_object->SetMessage(3462); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(3469, 3741, 3739); //@t
				var_0_object->AddReply(3470, -1, 3740); //@t
				return 0;
			}
			if(var_35_string == 3741) {
				func_508(var_36_bool, "Neutral");
				var_0_object->SetMessage(3471); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(3472, -1, 3742); //@t
				var_0_object->AddReply(3473, 3744, 3743); //@t
				return 0;
			}
			if(var_35_string == 3744) {
				func_508(var_36_bool, "Neutral");
				var_0_object->SetMessage(3474); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(3475, -1, 3745); //@t
				var_0_object->AddReply(3476, -1, 3746); //@t
				return 0;
			}
			var_3_string = true;
			bool var_351_bool;
			func_4236(var_351_bool);
			if(var_351_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x20d";
	
	}

}


task task_6
{
}


task task_7
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, int var_15_int, int var_16_int, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool)
	{
		if(1 != 0) {
			func_4115();
			if(var_36_bool == 6059) {
				object var_41_object; object var_42_object;
				var_41_object = var_1_object;
				var_42_object = var_0_object;
				func_4238();
				object var_45_object; object var_46_object;
				var_45_object = var_1_object;
				var_46_object = var_0_object;
				func_4514();
			}
			if(var_36_bool == 6060) {
				object var_76_object; object var_77_object;
				var_76_object = var_1_object;
				var_77_object = var_0_object;
				func_4238();
				object var_78_object; object var_79_object;
				var_78_object = var_1_object;
				var_79_object = var_0_object;
				func_4514();
			}
			if(var_36_bool == 6061) {
				object var_82_object; object var_83_object;
				var_82_object = var_1_object;
				var_83_object = var_0_object;
				func_4238();
				object var_84_object; object var_85_object;
				var_84_object = var_1_object;
				var_85_object = var_0_object;
				func_4514();
			}
			if(var_36_bool == 6089) {
				object var_88_object; object var_89_object;
				var_88_object = var_1_object;
				var_89_object = var_0_object;
				func_4238();
				object var_90_object; object var_91_object;
				var_90_object = var_1_object;
				var_91_object = var_0_object;
				func_4514();
			}
			if(var_36_bool == 6746) {
				object var_94_object; object var_95_object;
				var_94_object = var_1_object;
				var_95_object = var_0_object;
				func_4244();
				object var_98_object; object var_99_object;
				var_98_object = var_1_object;
				var_99_object = var_0_object;
				func_4262();
				object var_126_object; object var_127_object;
				var_126_object = var_1_object;
				var_127_object = var_0_object;
				func_4401();
				object var_144_object = var_1_object;
				func_4417(var_0_object);
			}
			if(var_36_bool == 6747) {
				object var_172_object; object var_173_object;
				var_172_object = var_1_object;
				var_173_object = var_0_object;
				func_4244();
				object var_174_object; object var_175_object;
				var_174_object = var_1_object;
				var_175_object = var_0_object;
				func_4262();
				object var_176_object; object var_177_object;
				var_176_object = var_1_object;
				var_177_object = var_0_object;
				func_4401();
			}
			if(var_36_bool == 6744) {
				object var_180_object; object var_181_object;
				var_180_object = var_1_object;
				var_181_object = var_0_object;
				func_4244();
			}
			if(var_36_bool == 6073) {
				object var_184_object; object var_185_object;
				var_184_object = var_1_object;
				var_185_object = var_0_object;
				func_4250();
			}
			if(var_36_bool == 6074) {
				object var_190_object; object var_191_object;
				var_190_object = var_1_object;
				var_191_object = var_0_object;
				func_4250();
			}
			if(var_36_bool == 6075) {
				object var_194_object; object var_195_object;
				var_194_object = var_1_object;
				var_195_object = var_0_object;
				func_4250();
			}
			if(var_36_bool == 6084) {
				object var_198_object; object var_199_object;
				var_198_object = var_1_object;
				var_199_object = var_0_object;
				func_4250();
			}
			if(var_36_bool == 6048) {
				object var_202_object = var_1_object;
				func_4280(var_0_object);
				object var_252_object; object var_253_object;
				var_252_object = var_1_object;
				var_253_object = var_0_object;
				func_4274();
			}
			if(var_36_bool == 6946) {
				object var_258_object; object var_259_object;
				var_258_object = var_1_object;
				var_259_object = var_0_object;
				func_4340();
				object var_289_object; object var_290_object;
				var_289_object = var_1_object;
				var_290_object = var_0_object;
				func_4274();
			}
			if(var_36_bool == 10030) {
				object var_293_object; object var_294_object;
				var_293_object = var_1_object;
				var_294_object = var_0_object;
				func_4401();
				object var_295_object; object var_296_object;
				var_295_object = var_1_object;
				var_296_object = var_0_object;
				func_4262();
				object var_297_object; object var_298_object;
				var_297_object = var_1_object;
				var_298_object = var_0_object;
				func_4433();
			}
			if(var_36_bool == 10031) {
				object var_303_object; object var_304_object;
				var_303_object = var_1_object;
				var_304_object = var_0_object;
				func_4401();
				object var_305_object = var_1_object;
				func_4417(var_0_object);
				object var_307_object; object var_308_object;
				var_307_object = var_1_object;
				var_308_object = var_0_object;
				func_4262();
				object var_309_object; object var_310_object;
				var_309_object = var_1_object;
				var_310_object = var_0_object;
				func_4433();
			}
			if(var_36_bool == 9548) {
				object var_313_object; object var_314_object;
				var_313_object = var_1_object;
				var_314_object = var_0_object;
				func_4439();
			}
			if(var_36_bool == 9549) {
				object var_319_object; object var_320_object;
				var_319_object = var_1_object;
				var_320_object = var_0_object;
				func_4445();
			}
			if(var_36_bool == 9550) {
				object var_325_object; object var_326_object;
				var_325_object = var_1_object;
				var_326_object = var_0_object;
				func_4451();
			}
			if(var_36_bool == 9551) {
				object var_331_object; object var_332_object;
				var_331_object = var_1_object;
				var_332_object = var_0_object;
				func_4457();
			}
			if(var_36_bool == 9552) {
				object var_337_object; object var_338_object;
				var_337_object = var_1_object;
				var_338_object = var_0_object;
				func_4463();
			}
			if(var_35_string == 6050) {
				bool var_343_bool = false;
				bool var_344_bool;
				func_4607(var_1_object);
				if(var_344_bool != 0) {
					bool var_352_bool;
					func_4643(var_1_object);
					if(!var_352_bool) //@nz
						var_343_bool = true;
				}
				if(var_343_bool != 0) {
					func_1378(var_36_bool, "Neutral");
					var_0_object->SetMessage(5491); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(5492, 6052, 6051); //@t
					var_0_object->AddReply(5505, 6052, 6066); //@t
					return 0;
				}
				bool var_381_bool;
				func_4619(var_1_object);
				if(var_381_bool != 0) {
					func_1378(var_36_bool, "Neutral");
					var_0_object->SetMessage(5486); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(5522, 6719, 6086); //@t
					var_0_object->AddReply(6083, 6719, 6713); //@t
					var_0_object->AddReply(5488, 6714, 6047); //@t
					return 0;
				}
				func_1378(var_36_bool, "Neutral");
				var_0_object->SetMessage(5521); //@t
				var_0_object->ClearReplies(); //@t
				bool var_400_bool = false;
				bool var_401_bool;
				func_4631(var_1_object);
				if(var_401_bool != 0) {
					bool var_407_bool;
					func_4964(var_1_object);
					if(var_407_bool != 0)
						var_400_bool = true;
				}
				if(var_400_bool != 0)
					var_0_object->AddReply(9151, 6068, 10032); //@t
				bool var_416_bool = false;
				bool var_417_bool = false;
				bool var_418_bool;
				func_4667(var_1_object);
				if(var_418_bool != 0) {
					bool var_424_bool;
					func_4655(var_1_object);
					if(!var_424_bool) //@nz
						var_417_bool = true;
				}
				if(var_417_bool != 0) {
					bool var_431_bool;
					func_4679(var_431_bool, var_1_object);
					if(var_431_bool != 0)
						var_416_bool = true;
				}
				if(var_416_bool != 0)
					var_0_object->AddReply(6292, 6945, 6944); //@t
				bool var_443_bool = false;
				bool var_444_bool;
				func_4655(var_1_object);
				if(var_444_bool != 0) {
					bool var_446_bool;
					func_4700(var_1_object);
					if(var_446_bool != 0)
						var_443_bool = true;
				}
				if(var_443_bool != 0)
					var_0_object->AddReply(6111, 10029, 6748); //@t
				bool var_455_bool = false;
				bool var_456_bool;
				func_4940(var_1_object);
				if(var_456_bool != 0) {
					bool var_462_bool;
					func_4712(var_1_object);
					if(var_462_bool != 0)
						var_455_bool = true;
				}
				if(var_455_bool != 0)
					var_0_object->AddReply(8011, 8851, 8834); //@t
				bool var_471_bool = false;
				bool var_472_bool;
				func_4904(var_1_object);
				if(var_472_bool != 0) {
					bool var_478_bool;
					func_4724(var_1_object);
					if(var_478_bool != 0)
						var_471_bool = true;
				}
				if(var_471_bool != 0)
					var_0_object->AddReply(8012, 8852, 8835); //@t
				bool var_487_bool = false;
				bool var_488_bool;
				func_4952(var_1_object);
				if(var_488_bool != 0) {
					bool var_494_bool;
					func_4736(var_1_object);
					if(var_494_bool != 0)
						var_487_bool = true;
				}
				if(var_487_bool != 0)
					var_0_object->AddReply(8023, 8856, 8846); //@t
				bool var_503_bool = false;
				bool var_504_bool;
				func_4892(var_1_object);
				if(var_504_bool != 0) {
					bool var_510_bool;
					func_4748(var_1_object);
					if(var_510_bool != 0)
						var_503_bool = true;
				}
				if(var_503_bool != 0)
					var_0_object->AddReply(8024, 8855, 8847); //@t
				bool var_519_bool = false;
				bool var_520_bool;
				func_4880(var_1_object);
				if(var_520_bool != 0) {
					bool var_526_bool;
					func_4760(var_1_object);
					if(var_526_bool != 0)
						var_519_bool = true;
				}
				if(var_519_bool != 0)
					var_0_object->AddReply(8030, 8854, 8853); //@t
				var_0_object->AddReply(8716, -1, 9553); //@t
				return 0;
			}
			if(var_35_string == 8854) {
				func_1378(var_36_bool, "Neutral");
				var_0_object->SetMessage(8031); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8715, -1, 9552); //@t
				return 0;
			}
			if(var_35_string == 8855) {
				func_1378(var_36_bool, "Neutral");
				var_0_object->SetMessage(8032); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8714, -1, 9551); //@t
				return 0;
			}
			if(var_35_string == 8856) {
				func_1378(var_36_bool, "Neutral");
				var_0_object->SetMessage(8033); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8713, -1, 9550); //@t
				return 0;
			}
			if(var_35_string == 8852) {
				func_1378(var_36_bool, "Neutral");
				var_0_object->SetMessage(8029); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8712, -1, 9549); //@t
				return 0;
			}
			if(var_35_string == 8851) {
				func_1378(var_36_bool, "Neutral");
				var_0_object->SetMessage(8028); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8711, -1, 9548); //@t
				return 0;
			}
			if(var_35_string == 10029) {
				func_1378(var_36_bool, "Neutral");
				var_0_object->SetMessage(9148); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9149, -1, 10030); //@t
				var_0_object->AddReply(9150, -1, 10031); //@t
				return 0;
			}
			if(var_35_string == 6945) {
				func_1378(var_36_bool, "Neutral");
				var_0_object->SetMessage(6293); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5489, -1, 6048); //@t
				var_0_object->AddReply(6294, -1, 6946); //@t
				return 0;
			}
			if(var_35_string == 6068) {
				func_1378(var_36_bool, "Neutral");
				var_0_object->SetMessage(5506); //@t
				var_0_object->ClearReplies(); //@t
				bool var_597_bool;
				func_4964(var_1_object);
				if(var_597_bool != 0)
					var_0_object->AddReply(5507, 6070, 6069); //@t
				var_0_object->AddReply(5520, -1, 6084); //@t
				return 0;
			}
			if(var_35_string == 6070) {
				func_1378(var_36_bool, "Neutral");
				var_0_object->SetMessage(5508); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5509, 6072, 6071); //@t
				var_0_object->AddReply(5514, 6077, 6076); //@t
				return 0;
			}
			if(var_35_string == 6077) {
				func_1378(var_36_bool, "Neutral");
				var_0_object->SetMessage(5515); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5516, 6079, 6078); //@t
				return 0;
			}
			if(var_35_string == 6079) {
				func_1378(var_36_bool, "Neutral");
				var_0_object->SetMessage(5517); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5518, 6072, 6080); //@t
				var_0_object->AddReply(5519, 6072, 6082); //@t
				return 0;
			}
			if(var_35_string == 6072) {
				func_1378(var_36_bool, "Neutral");
				var_0_object->SetMessage(5510); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5511, -1, 6073); //@t
				var_0_object->AddReply(5512, -1, 6074); //@t
				var_0_object->AddReply(5513, -1, 6075); //@t
				return 0;
			}
			if(var_35_string == 6714) {
				func_1378(var_36_bool, "Neutral");
				var_0_object->SetMessage(6084); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6085, 6717, 6715); //@t
				var_0_object->AddReply(6086, 6719, 6716); //@t
				return 0;
			}
			if(var_35_string == 6717) {
				func_1378(var_36_bool, "Neutral");
				var_0_object->SetMessage(6087); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6088, 6719, 6718); //@t
				return 0;
			}
			if(var_35_string == 6719) {
				func_1378(var_36_bool, "Neutral");
				var_0_object->SetMessage(6089); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6090, 6725, 6720); //@t
				var_0_object->AddReply(6091, 6725, 6721); //@t
				return 0;
			}
			if(var_35_string == 6725) {
				object var_674_object; object var_675_object;
				var_674_object = var_1_object;
				var_675_object = var_0_object;
				func_4395();
				object var_678_object; object var_679_object;
				var_678_object = var_1_object;
				var_679_object = var_0_object;
				func_4389();
				func_1378(var_36_bool, "Neutral");
				var_0_object->SetMessage(6092); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6095, 6730, 6729); //@t
				var_0_object->AddReply(6093, 6728, 6727); //@t
				return 0;
			}
			if(var_35_string == 6728) {
				object var_692_object; object var_693_object;
				var_692_object = var_1_object;
				var_693_object = var_0_object;
				func_4395();
				func_1378(var_36_bool, "Neutral");
				var_0_object->SetMessage(6094); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6097, 6732, 6731); //@t
				var_0_object->AddReply(6102, 6730, 6736); //@t
				return 0;
			}
			if(var_35_string == 6732) {
				object var_704_object; object var_705_object;
				var_704_object = var_1_object;
				var_705_object = var_0_object;
				func_4485();
				func_1378(var_36_bool, "Neutral");
				var_0_object->SetMessage(6098); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6099, 6734, 6733); //@t
				var_0_object->AddReply(6103, 6730, 6738); //@t
				return 0;
			}
			if(var_35_string == 6734) {
				func_1378(var_36_bool, "Neutral");
				var_0_object->SetMessage(6100); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6101, 6730, 6735); //@t
				return 0;
			}
			if(var_35_string == 6730) {
				func_1378(var_36_bool, "Neutral");
				var_0_object->SetMessage(6096); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6104, 6745, 6741); //@t
				var_0_object->AddReply(6105, 6743, 6742); //@t
				return 0;
			}
			if(var_35_string == 6743) {
				func_1378(var_36_bool, "Neutral");
				var_0_object->SetMessage(6106); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6107, -1, 6744); //@t
				return 0;
			}
			if(var_35_string == 6745) {
				object var_742_object; object var_743_object;
				var_742_object = var_1_object;
				var_743_object = var_0_object;
				func_4578();
				func_1378(var_36_bool, "Neutral");
				var_0_object->SetMessage(6108); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6109, -1, 6746); //@t
				var_0_object->AddReply(6110, -1, 6747); //@t
				return 0;
			}
			if(var_35_string == 6052) {
				func_1378(var_36_bool, "Neutral");
				var_0_object->SetMessage(5493); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5494, 6054, 6053); //@t
				var_0_object->AddReply(5504, 6054, 6064); //@t
				var_0_object->AddReply(5523, 6088, 6087); //@t
				return 0;
			}
			if(var_35_string == 6088) {
				func_1378(var_36_bool, "Neutral");
				var_0_object->SetMessage(5524); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5525, -1, 6089); //@t
				return 0;
			}
			if(var_35_string == 6054) {
				func_1378(var_36_bool, "Neutral");
				var_0_object->SetMessage(5495); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5496, 6056, 6055); //@t
				var_0_object->AddReply(5503, 6058, 6062); //@t
				return 0;
			}
			if(var_35_string == 6056) {
				func_1378(var_36_bool, "Neutral");
				var_0_object->SetMessage(5497); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5498, 6058, 6057); //@t
				var_0_object->AddReply(5502, -1, 6061); //@t
				return 0;
			}
			if(var_35_string == 6058) {
				func_1378(var_36_bool, "Neutral");
				var_0_object->SetMessage(5499); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5500, -1, 6059); //@t
				var_0_object->AddReply(5501, -1, 6060); //@t
				return 0;
			}
			var_3_string = true;
			bool var_804_bool;
			func_4236(var_804_bool);
			if(var_804_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x573";
	
	}

}


task task_8
{
}


task task_9
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, int var_20_int, int var_21_int, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool)
	{
		if(1 != 0) {
			func_4115();
			if(var_35_string == 10246) {
				func_2660(var_36_bool, "Neutral");
				var_0_object->SetMessage(9330); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9331, 10248, 10247); //@t
				var_0_object->AddReply(9340, 10248, 10258); //@t
				var_0_object->AddReply(9341, 10248, 10260); //@t
				return 0;
			EMIT "PushEmpty(string)";
			EMIT "Stack[-1] = \"Neutral\" // @poff=0";
			EMIT "Call 0xa64";
			EMIT "Pop(1)";
			EMIT "Push((int) 9323)";
			EMIT "@@@ SetMessage(Stack[-1]); Obj=0 // @poff=77";
			EMIT "Pop(1)";
			EMIT "@@@ ClearReplies(); Obj=0 // @poff=88";
			EMIT "Pop(0)";
			EMIT "Push((int) 9324)";
			EMIT "Push((int) 10239)";
			EMIT "Push((int) 10238)";
			EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
			EMIT "Pop(3)";
			EMIT "Push((int) 9328)";
			EMIT "Push((int) 10239)";
			EMIT "Push((int) 10242)";
			EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
			EMIT "Pop(3)";
			EMIT "Push((int) 9329)";
			EMIT "Push((int) 10239)";
			EMIT "Push((int) 10244)";
			EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
			EMIT "Pop(3)";
			EMIT "Return(); Pop(0)";
			}
			if(var_35_string == 10239) {
				func_2660(var_36_bool, "Neutral");
				var_0_object->SetMessage(9325); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9326, -1, 10240); //@t
				var_0_object->AddReply(9327, -1, 10241); //@t
				return 0;
			}
			if(var_35_string == 10248) {
				func_2660(var_36_bool, "Neutral");
				var_0_object->SetMessage(9332); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9333, 10250, 10249); //@t
				var_0_object->AddReply(9338, 10250, 10254); //@t
				var_0_object->AddReply(9339, 10250, 10256); //@t
				return 0;
			}
			if(var_35_string == 10250) {
				func_2660(var_36_bool, "Neutral");
				var_0_object->SetMessage(9334); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9335, -1, 10251); //@t
				var_0_object->AddReply(9336, -1, 10252); //@t
				var_0_object->AddReply(9337, -1, 10253); //@t
				return 0;
			}
			var_3_string = true;
			bool var_102_bool;
			func_4236(var_102_bool);
			if(var_102_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xa75";
	
	}

}


task task_10
{
}


task task_11
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, int var_25_int, int var_26_int, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool)
	{
		if(1 != 0) {
			func_4115();
			if(var_36_bool == 10945) {
				object var_41_object = var_1_object;
				func_4590(var_0_object);
				object var_60_object; object var_61_object;
				var_60_object = var_1_object;
				var_61_object = var_0_object;
				func_4334();
			}
			if(var_36_bool == 10946) {
				object var_66_object = var_1_object;
				func_4590(var_0_object);
				object var_68_object; object var_69_object;
				var_68_object = var_1_object;
				var_69_object = var_0_object;
				func_4334();
			}
			if(var_35_string == 10936) {
				bool var_72_bool = false;
				bool var_73_bool;
				func_4916(var_1_object);
				if(var_73_bool != 0) {
					bool var_81_bool;
					func_4772(var_1_object);
					if(!var_81_bool) //@nz
						var_72_bool = true;
				}
				if(var_72_bool != 0) {
					object var_88_object; object var_89_object;
					var_88_object = var_1_object;
					var_89_object = var_0_object;
					func_4584();
					func_2993(var_36_bool, "Neutral");
					var_0_object->SetMessage(9926); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(9927, 10938, 10937); //@t
					var_0_object->AddReply(9940, 10954, 10953); //@t
					return 0;
				}
				bool var_114_bool;
				func_4690(var_114_bool, var_1_object);
				if(var_114_bool != 0) {
					func_2993(var_36_bool, "Neutral");
					var_0_object->SetMessage(10178); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(10186, 11233, 11232); //@t
					var_0_object->AddReply(10464, 11233, 11537); //@t
					return 0;
				}
			}
			if(var_35_string == 11233) {
				func_2993(var_36_bool, "Neutral");
				var_0_object->SetMessage(10187); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10179, 11226, 11225); //@t
				var_0_object->AddReply(10463, 11226, 11536); //@t
				return 0;
			}
			if(var_35_string == 11226) {
				func_2993(var_36_bool, "Neutral");
				var_0_object->SetMessage(10180); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10465, 11541, 11540); //@t
				var_0_object->AddReply(10470, 11228, 11547); //@t
				return 0;
			}
			if(var_35_string == 11541) {
				func_2993(var_36_bool, "Neutral");
				var_0_object->SetMessage(10466); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10181, 11228, 11227); //@t
				var_0_object->AddReply(10467, 11228, 11542); //@t
				var_0_object->AddReply(10468, 11228, 11543); //@t
				return 0;
			}
			if(var_35_string == 11228) {
				func_2993(var_36_bool, "Neutral");
				var_0_object->SetMessage(10182); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10183, 11230, 11229); //@t
				return 0;
			}
			if(var_35_string == 11230) {
				func_2993(var_36_bool, "Neutral");
				var_0_object->SetMessage(10184); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10185, 11234, 11231); //@t
				var_0_object->AddReply(10469, -1, 11546); //@t
				return 0;
			}
			if(var_35_string == 11234) {
				func_2993(var_36_bool, "Neutral");
				var_0_object->SetMessage(10188); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10189, -1, 11235); //@t
				var_0_object->AddReply(10471, -1, 11549); //@t
				var_0_object->AddReply(10472, -1, 11550); //@t
				return 0;
			}
			if(var_35_string == 10954) {
				func_2993(var_36_bool, "Neutral");
				var_0_object->SetMessage(9941); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9942, 10956, 10955); //@t
				var_0_object->AddReply(9949, 10938, 10965); //@t
				return 0;
			}
			if(var_35_string == 10956) {
				func_2993(var_36_bool, "Neutral");
				var_0_object->SetMessage(9943); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9944, 10958, 10957); //@t
				var_0_object->AddReply(9948, 10938, 10963); //@t
				return 0;
			}
			if(var_35_string == 10958) {
				func_2993(var_36_bool, "Neutral");
				var_0_object->SetMessage(9945); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9946, 10938, 10959); //@t
				var_0_object->AddReply(9947, 10938, 10961); //@t
				return 0;
			}
			if(var_35_string == 10938) {
				func_2993(var_36_bool, "Neutral");
				var_0_object->SetMessage(9928); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9929, 10940, 10939); //@t
				var_0_object->AddReply(9939, 10942, 10951); //@t
				return 0;
			}
			if(var_35_string == 10940) {
				func_2993(var_36_bool, "Neutral");
				var_0_object->SetMessage(9930); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9931, 10942, 10941); //@t
				var_0_object->AddReply(9938, 10942, 10949); //@t
				return 0;
			}
			if(var_35_string == 10942) {
				func_2993(var_36_bool, "Neutral");
				var_0_object->SetMessage(9932); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9933, 10944, 10943); //@t
				var_0_object->AddReply(9937, 10944, 10947); //@t
				return 0;
			}
			if(var_35_string == 10944) {
				func_2993(var_36_bool, "Neutral");
				var_0_object->SetMessage(9934); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9935, -1, 10945); //@t
				var_0_object->AddReply(9936, -1, 10946); //@t
				return 0;
			}
			var_3_string = true;
			bool var_259_bool;
			func_4236(var_259_bool);
			if(var_259_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xbc2";
	
	}

}


task task_12
{
}


task task_13
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, int var_30_int, int var_31_int, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool)
	{
		if(1 != 0) {
			func_4115();
			if(var_36_bool == 12392) {
				object var_41_object; object var_42_object;
				var_41_object = var_1_object;
				var_42_object = var_0_object;
				func_4601();
			}
			if(var_35_string == 12391) {
				func_3552(var_36_bool, "Neutral");
				var_0_object->SetMessage(11203); //@t
				var_0_object->ClearReplies(); //@t
				bool var_63_bool;
				func_4928(var_1_object);
				if(var_63_bool != 0)
					var_0_object->AddReply(11204, 12393, 12392); //@t
				var_0_object->AddReply(15336, -1, 16559); //@t
				return 0;
			}
			if(var_35_string == 12393) {
				func_3552(var_36_bool, "Neutral");
				var_0_object->SetMessage(11205); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11206, 12395, 12394); //@t
				return 0;
			}
			if(var_35_string == 12395) {
				func_3552(var_36_bool, "Neutral");
				var_0_object->SetMessage(11207); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11208, -1, 12396); //@t
				var_0_object->AddReply(11209, -1, 12397); //@t
				return 0;
			}
			var_3_string = true;
			bool var_94_bool;
			func_4236(var_94_bool);
			if(var_94_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xdf1";
	
	}

}


task task_14
{
}


task task_15
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, int var_35_int, int var_36_int)
	{
		if(1 != 0) {
			func_4115();
			if(var_36_int == 12849) {
				object var_41_object; object var_42_object;
				var_41_object = var_1_object;
				var_42_object = var_0_object;
				func_4491();
				object var_86_object = var_1_object;
				func_4469(var_0_object);
			}
			if(var_35_int == 12840) {
				func_3795(var_36_int, "Neutral");
				var_0_object->SetMessage(11641); //@t
				var_0_object->ClearReplies(); //@t
				bool var_130_bool;
				func_4784(var_1_object);
				if(var_130_bool != 0)
					var_0_object->AddReply(11642, 12842, 12841); //@t
				var_0_object->AddReply(11651, 12851, 12850); //@t
				var_0_object->AddReply(11660, -1, 12859); //@t
				return 0;
			}
			if(var_35_int == 12851) {
				func_3795(var_36_int, "Neutral");
				var_0_object->SetMessage(11652); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11653, 12853, 12852); //@t
				return 0;
			}
			if(var_35_int == 12853) {
				func_3795(var_36_int, "Neutral");
				var_0_object->SetMessage(11654); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11655, 12855, 12854); //@t
				return 0;
			}
			if(var_35_int == 12855) {
				func_3795(var_36_int, "Neutral");
				var_0_object->SetMessage(11656); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11657, 12857, 12856); //@t
				return 0;
			}
			if(var_35_int == 12857) {
				func_3795(var_36_int, "Neutral");
				var_0_object->SetMessage(11658); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11659, -1, 12858); //@t
				return 0;
			}
			if(var_35_int == 12842) {
				func_3795(var_36_int, "Neutral");
				var_0_object->SetMessage(11643); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11644, 12844, 12843); //@t
				return 0;
			}
			if(var_35_int == 12844) {
				func_3795(var_36_int, "Neutral");
				var_0_object->SetMessage(11645); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11646, 12846, 12845); //@t
				return 0;
			}
			if(var_35_int == 12846) {
				func_3795(var_36_int, "Neutral");
				var_0_object->SetMessage(11647); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11648, 12848, 12847); //@t
				return 0;
			}
			if(var_35_int == 12848) {
				func_3795(var_36_int, "Neutral");
				var_0_object->SetMessage(11649); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11650, -1, 12849); //@t
				return 0;
			}
			var_3_string = true;
			bool var_203_bool;
			func_4236(var_203_bool);
			if(var_203_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xee4";
	
	}

}


void func_0(void)
{
	@Hold();
}


void func_4097(string var_40_string)
{
	@Trace("playing " + var_40_string);
	float var_43_float;
	float var_44_float;
	@lshGetAnimTimes(var_40_string, var_43_float, var_44_float);
	@lshPlayAnimation(var_43_float, var_44_float);
	@Trace("start: " + var_43_float);
	@Trace("end: " + var_44_float);
}


void func_5121(void)
{
	@Trace("Adding diary entry");
	object var_101_object;
	@CreateDiaryEntry(var_101_object, 43, 2, 12125);
	bool var_106_bool; object var_107_object;
	var_101_object = var_107_object;
	func_4992(var_106_bool, var_107_object, -1);
}
EMIT "Stack[-1] = 0";


// @pe
void func_4868(bool var_191_bool)
{
	int var_193_int;
	func_4132(var_193_int, "ood6Katerina3");
	if(var_193_int == 0) {
		var_191_bool = true;
		return 0;
	}
	var_191_bool = false;
}


// @pe
void func_4619(bool var_381_bool)
{
	int var_383_int;
	func_4132(var_383_int, "ood1Katerina2");
	if(var_383_int == 0) {
		var_381_bool = true;
		return 0;
	}
	var_381_bool = false;
}


// @pe
void func_2572(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_397_object, object var_398_object)
{
	var_0_object = var_398_object;
	var_1_object = var_397_object;
	var_3_object = false;
	if(1 != 0) {
		func_2660(var_398_object, "Neutral");
		var_0_object->SetMessage(9330); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(9331, 10248, 10247); //@t
		var_0_object->AddReply(9340, 10248, 10258); //@t
		var_0_object->AddReply(9341, 10248, 10260); //@t
		goto Label_2630;
	EMIT "PushEmpty(string)";
	EMIT "Stack[-1] = \"Neutral\" // @poff=0";
	EMIT "Call 0xa64";
	EMIT "Pop(1)";
	EMIT "Push((int) 9323)";
	EMIT "@@@ SetMessage(Stack[-1]); Obj=0 // @poff=77";
	EMIT "Pop(1)";
	EMIT "@@@ ClearReplies(); Obj=0 // @poff=88";
	EMIT "Pop(0)";
	EMIT "Push((int) 9324)";
	EMIT "Push((int) 10239)";
	EMIT "Push((int) 10238)";
	EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
	EMIT "Pop(3)";
	EMIT "Push((int) 9328)";
	EMIT "Push((int) 10239)";
	EMIT "Push((int) 10242)";
	EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
	EMIT "Pop(3)";
	EMIT "Push((int) 9329)";
	EMIT "Push((int) 10239)";
	EMIT "Push((int) 10244)";
	EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
	EMIT "Pop(3)";
	EMIT "GOTO 0xa46";
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xa10";
	}
Label_2630:
	bool var_419_bool;
	func_4236(var_419_bool);
	if(var_419_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_4097(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_2659;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_2659:
		return 0;

	}
	
}


void func_1035(object var_0_object, int var_157_int, object var_158_object)
{
	var_0_object = var_158_object;
	bool var_168_bool; object var_169_object;
	var_158_object = var_169_object;
	func_4037(var_168_bool, var_169_object);
	if(!var_168_bool) { //@nz
		var_157_int = -2;
		return 8;
	}
	object var_164_object;
	@CreateDialog(var_164_object);
	int var_171_int;
	func_4232(var_171_int);
	var_164_object->SetNPCName(var_171_int);
	string var_172_string;
	func_4234(var_172_string);
	var_164_object->SetPhoto(var_172_string);
	int var_173_int;
	func_5088(var_173_int);
	var_164_object->SetPlayerName(var_173_int);
	bool var_165_bool;
	@IsOverrideActive(var_165_bool);
	if(var_165_bool != 0) {
		var_157_int = -2;
		return 8;
	}
	@DoDialog(var_164_object);
	object var_175_object; object var_176_object;
	var_158_object = var_175_object;
	var_164_object = var_176_object;
	TaskCall(7);
	func_1098(var_177_object, var_178_object, var_179_string, var_180_bool, var_175_object, var_176_object);
	TaskReturn();
	bool var_167_bool;
	var_164_object->IsDialogEnd(var_167_bool);
	
	for(;;) {
		var_375_bool = !var_167_bool; //@nz
		if(var_375_bool == 0) goto Label_1087;
		@sync();
		var_164_object->IsDialogEnd(var_167_bool);
	}
	
Label_1087:
	object var_376_object;
	var_158_object = var_376_object;
	func_4093();
	@StopDialog(var_164_object);
	var_164_object->GetReturnValue(-1);
	int var_166_int = var_157_int;
}
EMIT "Stack[-4] = 0";


void func_2827(object var_0_object, int var_431_int, object var_432_object)
{
	var_0_object = var_432_object;
	bool var_442_bool; object var_443_object;
	var_432_object = var_443_object;
	func_4037(var_442_bool, var_443_object);
	if(!var_442_bool) { //@nz
		var_431_int = -2;
		return 8;
	}
	object var_438_object;
	@CreateDialog(var_438_object);
	int var_445_int;
	func_4232(var_445_int);
	var_438_object->SetNPCName(var_445_int);
	string var_446_string;
	func_4234(var_446_string);
	var_438_object->SetPhoto(var_446_string);
	int var_447_int;
	func_5088(var_447_int);
	var_438_object->SetPlayerName(var_447_int);
	bool var_439_bool;
	@IsOverrideActive(var_439_bool);
	if(var_439_bool != 0) {
		var_431_int = -2;
		return 8;
	}
	@DoDialog(var_438_object);
	object var_449_object; object var_450_object;
	var_432_object = var_449_object;
	var_438_object = var_450_object;
	TaskCall(11);
	func_2890(var_451_object, var_452_object, var_453_string, var_454_bool, var_449_object, var_450_object);
	TaskReturn();
	bool var_441_bool;
	var_438_object->IsDialogEnd(var_441_bool);
	
	for(;;) {
		var_506_bool = !var_441_bool; //@nz
		if(var_506_bool == 0) goto Label_2879;
		@sync();
		var_438_object->IsDialogEnd(var_441_bool);
	}
	
Label_2879:
	object var_507_object;
	var_432_object = var_507_object;
	func_4093();
	@StopDialog(var_438_object);
	var_438_object->GetReturnValue(-1);
	int var_440_int = var_431_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_4880(bool var_520_bool)
{
	int var_522_int;
	func_4132(var_522_int, "KnowGeorg");
	if(var_522_int == 1)
		var_520_bool = true;
	var_520_bool = false;
}


void func_5137(void)
{
	@Trace("Adding diary entry");
	object var_216_object;
	@CreateDiaryEntry(var_216_object, 47, 2, 12129);
	bool var_221_bool; object var_222_object;
	var_216_object = var_222_object;
	func_4992(var_221_bool, var_222_object, 43);
}
EMIT "Stack[-1] = 0";


void func_4115(void)
{
	bool var_38_bool;
	func_4236(var_38_bool);
	if(var_38_bool != 0)
		@lshStopSpeech();
}


// @pe
void func_4631(bool var_401_bool)
{
	int var_403_int;
	func_4132(var_403_int, "ood1Katerina3");
	if(var_403_int == 0) {
		var_401_bool = true;
		return 0;
	}
	var_401_bool = false;
}


void func_4122(cvector var_75_cvector, cvector var_76_cvector)
{
	float var_79_float = sqrt(var_76_cvector | var_76_cvector);
	if(var_79_float < 0.000001)
		var_75_cvector = [0.0, 0.0, 0.0];
	var_75_cvector = var_76_cvector / var_79_float;
}


// @pe
void func_4892(bool var_504_bool)
{
	int var_506_int;
	func_4132(var_506_int, "KnowLaska");
	if(var_506_int == 1)
		var_504_bool = true;
	var_504_bool = false;
}


void func_5153(void)
{
	@Trace("Adding diary entry");
	object var_272_object;
	@CreateDiaryEntry(var_272_object, 48, 2, 12130);
	bool var_277_bool; object var_278_object;
	var_272_object = var_278_object;
	func_4992(var_277_bool, var_278_object, 43);
}
EMIT "Stack[-1] = 0";


// @pe
void func_4643(bool var_352_bool)
{
	int var_354_int;
	func_4132(var_354_int, "d1q01");
	if(var_354_int == 0) {
		var_352_bool = true;
		return 0;
	}
	var_352_bool = false;
}


void func_4132(int var_132_int, string var_133_string)
{
	int var_135_int;
	@GetVariable(var_133_string, var_135_int);
	var_135_int = var_132_int;
}


// @pe
void func_4389(void)
{
	@SetVariable("KnowZemlja", 1);
}


// @pe
void func_4904(bool var_472_bool)
{
	int var_474_int;
	func_4132(var_474_int, "KnowMaria");
	if(var_474_int == 1)
		var_472_bool = true;
	var_472_bool = false;
}


void func_4137(object var_118_object, string var_119_string)
{
	object var_122_object;
	@GetMainOutdoorScene(var_122_object);
	object var_123_object;
	@AddBlankActor(var_123_object, var_122_object, var_119_string, (var_119_string + ".bin"));
	var_123_object = var_118_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_4395(void)
{
	@SetVariable("KnowZastroiki", 1);
}


// @pe
void func_4655(bool var_424_bool)
{
	int var_426_int;
	func_4132(var_426_int, "d1q04");
	if(var_426_int == 0) {
		var_424_bool = true;
		return 0;
	}
	var_424_bool = false;
}


void func_5169(void)
{
	@Trace("Adding diary entry");
	object var_110_object;
	@CreateDiaryEntry(var_110_object, 44, 2, 12126);
	bool var_115_bool; object var_116_object;
	var_110_object = var_116_object;
	func_4992(var_115_bool, var_116_object, 43);
}
EMIT "Stack[-1] = 0";


void func_49(object var_0_object, int var_39_int, object var_40_object)
{
	var_0_object = var_40_object;
	bool var_50_bool; object var_51_object;
	var_40_object = var_51_object;
	func_4037(var_50_bool, var_51_object);
	if(!var_50_bool) { //@nz
		var_39_int = -2;
		return 8;
	}
	object var_46_object;
	@CreateDialog(var_46_object);
	int var_91_int;
	func_4232(var_91_int);
	var_46_object->SetNPCName(var_91_int);
	string var_92_string;
	func_4234(var_92_string);
	var_46_object->SetPhoto(var_92_string);
	int var_93_int;
	func_5088(var_93_int);
	var_46_object->SetPlayerName(var_93_int);
	bool var_47_bool;
	@IsOverrideActive(var_47_bool);
	if(var_47_bool != 0) {
		var_39_int = -2;
		return 8;
	}
	@DoDialog(var_46_object);
	object var_102_object; object var_103_object;
	var_40_object = var_102_object;
	var_46_object = var_103_object;
	TaskCall(3);
	func_112(var_104_object, var_105_object, var_106_string, var_107_bool, var_102_object, var_103_object);
	TaskReturn();
	bool var_49_bool;
	var_46_object->IsDialogEnd(var_49_bool);
	
	for(;;) {
		var_146_bool = !var_49_bool; //@nz
		if(var_146_bool == 0) goto Label_101;
		@sync();
		var_46_object->IsDialogEnd(var_49_bool);
	}
	
Label_101:
	object var_147_object;
	var_40_object = var_147_object;
	func_4093();
	@StopDialog(var_46_object);
	var_46_object->GetReturnValue(-1);
	int var_48_int = var_39_int;
}
EMIT "Stack[-4] = 0";


void func_4401(void)
{
	object var_130_object;
	func_5038(var_130_object);
	object var_129_object;
	var_130_object = var_129_object;
	float var_141_float;
	func_4203(var_141_float);
	var_129_object->AddMark("d1q04KaterinaGotoMishka", "pt_map_mishka", 0, 8643, var_141_float);
}
EMIT "Stack[-1] = 0";


void func_4148(object var_49_object, object var_50_object, int var_51_int)
{
	int var_55_int;
	var_50_object->GetItemID(var_55_int);
	int var_56_int;
	@GetInvItemProperty(var_56_int, var_55_int, "Category");
	bool var_57_bool;
	var_49_object->AddItem(var_57_bool, var_50_object, var_56_int, var_51_int);
	if(!var_57_bool) //@nz
		var_49_object->DropItems(var_50_object, var_51_int);
}


// @pe
void func_4916(bool var_73_bool)
{
	int var_75_int;
	func_4132(var_75_int, "ood3Katerina1");
	if(var_75_int == 0) {
		var_73_bool = true;
		return 0;
	}
	var_73_bool = false;
}


// @pe
void func_4667(bool var_418_bool)
{
	int var_420_int;
	func_4132(var_420_int, "ood1Katerina4");
	if(var_420_int == 0) {
		var_418_bool = true;
		return 0;
	}
	var_418_bool = false;
}


void func_317(object var_0_object, int var_623_int, object var_624_object)
{
	var_0_object = var_624_object;
	bool var_634_bool; object var_635_object;
	var_624_object = var_635_object;
	func_4037(var_634_bool, var_635_object);
	if(!var_634_bool) { //@nz
		var_623_int = -2;
		return 8;
	}
	object var_630_object;
	@CreateDialog(var_630_object);
	int var_637_int;
	func_4232(var_637_int);
	var_630_object->SetNPCName(var_637_int);
	string var_638_string;
	func_4234(var_638_string);
	var_630_object->SetPhoto(var_638_string);
	int var_639_int;
	func_5088(var_639_int);
	var_630_object->SetPlayerName(var_639_int);
	bool var_631_bool;
	@IsOverrideActive(var_631_bool);
	if(var_631_bool != 0) {
		var_623_int = -2;
		return 8;
	}
	@DoDialog(var_630_object);
	object var_641_object; object var_642_object;
	var_624_object = var_641_object;
	var_630_object = var_642_object;
	TaskCall(5);
	func_380(var_643_object, var_644_object, var_645_string, var_646_bool, var_641_object, var_642_object);
	TaskReturn();
	bool var_633_bool;
	var_630_object->IsDialogEnd(var_633_bool);
	
	for(;;) {
		var_723_bool = !var_633_bool; //@nz
		if(var_723_bool == 0) goto Label_369;
		@sync();
		var_630_object->IsDialogEnd(var_633_bool);
	}
	
Label_369:
	object var_724_object;
	var_624_object = var_724_object;
	func_4093();
	@StopDialog(var_630_object);
	var_630_object->GetReturnValue(-1);
	int var_632_int = var_623_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_4928(bool var_63_bool)
{
	int var_65_int;
	func_4132(var_65_int, "ood4Katerina1");
	if(var_65_int == 0) {
		var_63_bool = true;
		return 0;
	}
	var_63_bool = false;
}


void func_5185(void)
{
	@Trace("Adding diary entry");
	object var_62_object;
	@CreateDiaryEntry(var_62_object, 142, 1, 15342);
	bool var_67_bool; object var_68_object;
	var_62_object = var_68_object;
	func_4992(var_67_bool, var_68_object, 139);
}
EMIT "Stack[-1] = 0";


void func_4161(object var_44_object, string var_45_string, int var_46_int)
{
	object var_48_object;
	@CreateInvItem(var_48_object);
	var_48_object->SetItemName(var_45_string);
	object var_49_object; object var_50_object; int var_51_int;
	var_44_object = var_49_object;
	var_48_object = var_50_object;
	var_46_int = var_51_int;
	func_4148(var_49_object, var_50_object, var_51_int);
}
EMIT "Stack[-1] = 0";


// @pe
void func_4417(object var_145_object)
{
	object var_149_object;
	func_5038(var_149_object);
	object var_146_object;
	var_149_object = var_146_object;
	func_5055(var_146_object, "pt_map_mishka", (float)2);
	object var_169_object;
	func_5038(var_169_object);
	var_145_object->ShowMap(var_169_object);
}


// @pe
void func_4679(bool var_431_bool, object var_432_object)
{
	object var_434_object;
	var_432_object = var_434_object;
	bool var_433_bool;
	func_4174(var_433_bool, var_434_object, "powder");
	if(var_433_bool != 0) {
		var_431_bool = true;
		return 0;
	}
	var_431_bool = false;
}


// @pe
void func_1098(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_175_object, object var_176_object)
{
	var_0_object = var_176_object;
	var_1_object = var_175_object;
	var_3_object = false;
	if(1 != 0) {
		bool var_182_bool = false;
		bool var_183_bool;
		func_4607(var_1_object);
		if(var_183_bool != 0) {
			bool var_191_bool;
			func_4643(var_1_object);
			if(!var_191_bool) //@nz
				var_182_bool = true;
		}
		if(var_182_bool != 0) {
			func_1378(var_176_object, "Neutral");
			var_0_object->SetMessage(5491); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(5492, 6052, 6051); //@t
			var_0_object->AddReply(5505, 6052, 6066); //@t
		} else {
					bool var_218_bool;
					func_4619(var_1_object);
					if(var_218_bool == 0) goto Label_1169;
					func_1378(var_176_object, "Neutral");
					var_0_object->SetMessage(5486); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(5522, 6719, 6086); //@t
					var_0_object->AddReply(6083, 6719, 6713); //@t
					var_0_object->AddReply(5488, 6714, 6047); //@t
		}
	}
Label_1348:
	for(;;) {
		bool var_210_bool;
		func_4236(var_210_bool);
		if(var_210_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_object != 0) {
				} else {
					func_4097(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_object != 0) {
					goto Label_1377;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_1377:
			return 0;

		}

	}
	
Label_1169:
	func_1378(var_176_object, "Neutral");
	var_0_object->SetMessage(5521); //@t
	var_0_object->ClearReplies(); //@t
	bool var_237_bool = false;
	bool var_238_bool;
	func_4631(var_1_object);
	if(var_238_bool != 0) {
		bool var_244_bool;
		func_4964(var_1_object);
		if(var_244_bool != 0)
			var_237_bool = true;
	}
	if(var_237_bool != 0)
		var_0_object->AddReply(9151, 6068, 10032); //@t
	bool var_253_bool = false;
	bool var_254_bool = false;
	bool var_255_bool;
	func_4667(var_1_object);
	if(var_255_bool != 0) {
		bool var_261_bool;
		func_4655(var_1_object);
		if(!var_261_bool) //@nz
			var_254_bool = true;
	}
	if(var_254_bool != 0) {
		bool var_268_bool;
		func_4679(var_268_bool, var_1_object);
		if(var_268_bool != 0)
			var_253_bool = true;
	}
	if(var_253_bool != 0)
		var_0_object->AddReply(6292, 6945, 6944); //@t
	bool var_280_bool = false;
	bool var_281_bool;
	func_4655(var_1_object);
	if(var_281_bool != 0) {
		bool var_283_bool;
		func_4700(var_1_object);
		if(var_283_bool != 0)
			var_280_bool = true;
	}
	if(var_280_bool != 0)
		var_0_object->AddReply(6111, 10029, 6748); //@t
	bool var_292_bool = false;
	bool var_293_bool;
	func_4940(var_1_object);
	if(var_293_bool != 0) {
		bool var_299_bool;
		func_4712(var_1_object);
		if(var_299_bool != 0)
			var_292_bool = true;
	}
	if(var_292_bool != 0)
		var_0_object->AddReply(8011, 8851, 8834); //@t
	bool var_308_bool = false;
	bool var_309_bool;
	func_4904(var_1_object);
	if(var_309_bool != 0) {
		bool var_315_bool;
		func_4724(var_1_object);
		if(var_315_bool != 0)
			var_308_bool = true;
	}
	if(var_308_bool != 0)
		var_0_object->AddReply(8012, 8852, 8835); //@t
	bool var_324_bool = false;
	bool var_325_bool;
	func_4952(var_1_object);
	if(var_325_bool != 0) {
		bool var_331_bool;
		func_4736(var_1_object);
		if(var_331_bool != 0)
			var_324_bool = true;
	}
	if(var_324_bool != 0)
		var_0_object->AddReply(8023, 8856, 8846); //@t
	bool var_340_bool = false;
	bool var_341_bool;
	func_4892(var_1_object);
	if(var_341_bool != 0) {
		bool var_347_bool;
		func_4748(var_1_object);
		if(var_347_bool != 0)
			var_340_bool = true;
	}
	if(var_340_bool != 0)
		var_0_object->AddReply(8024, 8855, 8847); //@t
	bool var_356_bool = false;
	bool var_357_bool;
	func_4880(var_1_object);
	if(var_357_bool != 0) {
		bool var_363_bool;
		func_4760(var_1_object);
		if(var_363_bool != 0)
			var_356_bool = true;
	}
	if(var_356_bool != 0)
		var_0_object->AddReply(8030, 8854, 8853); //@t
	var_0_object->AddReply(8716, -1, 9553); //@t
	goto Label_1348;
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x44e";


// @pe
void func_2890(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_449_object, object var_450_object)
{
	var_0_object = var_450_object;
	var_1_object = var_449_object;
	var_3_object = false;
	if(1 != 0) {
		bool var_456_bool = false;
		bool var_457_bool;
		func_4916(var_1_object);
		if(var_457_bool != 0) {
			bool var_463_bool;
			func_4772(var_1_object);
			if(!var_463_bool) //@nz
				var_456_bool = true;
		}
		if(var_456_bool != 0) {
			object var_470_object; object var_471_object;
			var_470_object = var_1_object;
			var_471_object = var_0_object;
			func_4584();
			func_2993(var_450_object, "Neutral");
			var_0_object->SetMessage(9926); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(9927, 10938, 10937); //@t
			var_0_object->AddReply(9940, 10954, 10953); //@t
		} else {
					bool var_494_bool;
					func_4690(var_494_bool, var_1_object);
					if(var_494_bool == 0) goto Label_2961;
					func_2993(var_450_object, "Neutral");
					var_0_object->SetMessage(10178); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(10186, 11233, 11232); //@t
					var_0_object->AddReply(10464, 11233, 11537); //@t
		}
	}
	for(;;) {
		bool var_486_bool;
		func_4236(var_486_bool);
		if(var_486_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_object != 0) {
				} else {
					func_4097(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_object != 0) {
					goto Label_2992;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_2992:
			return 0;

		}

	}
	
Label_2961:
}
EMIT "GOTO 0xb4e";


// @pe
void func_4940(bool var_456_bool)
{
	int var_458_int;
	func_4132(var_458_int, "KnowOspina");
	if(var_458_int == 1)
		var_456_bool = true;
	var_456_bool = false;
}


void func_4174(bool var_433_bool, object var_434_object, string var_435_string)
{
	int var_438_int;
	@GetInvItemByName(var_438_int, var_435_string);
	bool var_439_bool;
	var_434_object->HasItem(var_438_int, var_439_bool);
	var_439_bool = var_433_bool;
}


void func_3664(object var_0_object, int var_565_int, object var_566_object)
{
	var_0_object = var_566_object;
	bool var_576_bool; object var_577_object;
	var_566_object = var_577_object;
	func_4037(var_576_bool, var_577_object);
	if(!var_576_bool) { //@nz
		var_565_int = -2;
		return 8;
	}
	object var_572_object;
	@CreateDialog(var_572_object);
	int var_579_int;
	func_4232(var_579_int);
	var_572_object->SetNPCName(var_579_int);
	string var_580_string;
	func_4234(var_580_string);
	var_572_object->SetPhoto(var_580_string);
	int var_581_int;
	func_5088(var_581_int);
	var_572_object->SetPlayerName(var_581_int);
	bool var_573_bool;
	@IsOverrideActive(var_573_bool);
	if(var_573_bool != 0) {
		var_565_int = -2;
		return 8;
	}
	@DoDialog(var_572_object);
	object var_583_object; object var_584_object;
	var_566_object = var_583_object;
	var_572_object = var_584_object;
	TaskCall(15);
	func_3727(var_585_object, var_586_object, var_587_string, var_588_bool, var_583_object, var_584_object);
	TaskReturn();
	bool var_575_bool;
	var_572_object->IsDialogEnd(var_575_bool);
	
	for(;;) {
		var_619_bool = !var_575_bool; //@nz
		if(var_619_bool == 0) goto Label_3716;
		@sync();
		var_572_object->IsDialogEnd(var_575_bool);
	}
	
Label_3716:
	object var_620_object;
	var_566_object = var_620_object;
	func_4093();
	@StopDialog(var_572_object);
	var_572_object->GetReturnValue(-1);
	int var_574_int = var_565_int;
}
EMIT "Stack[-4] = 0";


void func_5201(void)
{
	@Trace("Adding diary entry");
	object var_89_object;
	@CreateDiaryEntry(var_89_object, 123, 1, 13746);
	bool var_94_bool; object var_95_object;
	var_89_object = var_95_object;
	func_4992(var_94_bool, var_95_object, 111);
}
EMIT "Stack[-1] = 0";


// @pe
void func_4690(bool var_114_bool, object var_115_object)
{
	object var_117_object;
	var_115_object = var_117_object;
	func_4976(var_117_object);
	bool var_116_bool;
	if(var_116_bool != 0) {
		var_114_bool = true;
		return 0;
	}
	var_114_bool = false;
}


// @pe
void func_4433(void)
{
	@SetVariable("ood1Katerina5", 1);
}


void func_4181(bool var_242_bool, object var_243_object, string var_244_string)
{
	int var_248_int;
	@GetInvItemByName(var_248_int, var_244_string);
	int var_249_int;
	@GetInvItemProperty(var_249_int, var_248_int, "Category");
	bool var_250_bool;
	var_243_object->RemoveItemByType(var_250_bool, var_248_int, var_249_int);
	var_250_bool = var_242_bool;
}


// @pe
void func_4439(void)
{
	@SetVariable("ood1Katerina6", 1);
}


// @pe
void func_4952(bool var_488_bool)
{
	int var_490_int;
	func_4132(var_490_int, "KnowKapella");
	if(var_490_int == 1)
		var_488_bool = true;
	var_488_bool = false;
}


// @pe
void func_4700(bool var_446_bool)
{
	int var_448_int;
	func_4132(var_448_int, "ood1Katerina5");
	if(var_448_int == 0) {
		var_446_bool = true;
		return 0;
	}
	var_446_bool = false;
}


// @pe
void func_4445(void)
{
	@SetVariable("ood1Katerina7", 1);
}


void func_4191(bool var_236_bool, string var_237_string, string var_238_string)
{
	object var_240_object;
	@FindActor(var_240_object, var_237_string);
	if(var_240_object == null)
		var_236_bool = false;
	@Trigger(var_240_object, var_238_string);
	var_236_bool = true;
}
EMIT "Stack[-1] = 0";


void func_5217(void)
{
	var_35_bool = GlobalVars[1];
	GlobalVars[1] = false;
}


// @pe
void func_1378(object var_2_object, string var_359_string)
{
	bool var_360_bool;
	func_4236(var_360_bool);
	if(!var_360_bool) //@nz
		return 0;
	if(var_359_string == var_2_object)
		return 0;
	string var_363_string;
	func_4097(var_363_string);
	var_2_object = var_363_string;
}


// @pe
void func_4451(void)
{
	@SetVariable("ood1Katerina8", 1);
}


// @pe
void func_2660(object var_2_object, string var_41_string)
{
	bool var_42_bool;
	func_4236(var_42_bool);
	if(!var_42_bool) //@nz
		return 0;
	if(var_41_string == var_2_object)
		return 0;
	string var_45_string;
	func_4097(var_45_string);
	var_2_object = var_45_string;
}


// @pe
void func_5221(object var_36_object)
{
	var_37_bool = GlobalVars[1];
	if(!var_37_bool) { //@nz
		int var_39_int; object var_40_object;
		var_36_object = var_40_object;
		TaskCall(2);
		func_49(var_41_object, var_39_int, var_40_object);
		TaskReturn();
		var_148_bool = GlobalVars[1];
		GlobalVars[1] = true;
	}
	bool var_149_bool;
	func_4217(var_149_bool, 1);
	if(var_149_bool != 0) {
		int var_157_int; object var_158_object;
		var_36_object = var_158_object;
		TaskCall(6);
		func_1035(var_159_object, var_157_int, var_158_object);
		TaskReturn();
		return 0;
	}
	bool var_377_bool;
	func_4217(var_377_bool, 2);
	if(var_377_bool != 0) {
		int var_379_int; object var_380_object;
		var_36_object = var_380_object;
		TaskCall(8);
		func_2509(var_381_object, var_379_int, var_380_object);
		TaskReturn();
		return 0;
	}
	bool var_429_bool;
	func_4217(var_429_bool, 3);
	if(var_429_bool != 0) {
		int var_431_int; object var_432_object;
		var_36_object = var_432_object;
		TaskCall(10);
		func_2827(var_433_object, var_431_int, var_432_object);
		TaskReturn();
		return 0;
	}
	bool var_508_bool;
	func_4217(var_508_bool, 4);
	if(var_508_bool != 0) {
		int var_510_int; object var_511_object;
		var_36_object = var_511_object;
		TaskCall(12);
		func_3426(var_512_object, var_510_int, var_511_object);
		TaskReturn();
		return 0;
	}
	bool var_563_bool;
	func_4217(var_563_bool, 5);
	if(var_563_bool != 0) {
		int var_565_int; object var_566_object;
		var_36_object = var_566_object;
		TaskCall(14);
		func_3664(var_567_object, var_565_int, var_566_object);
		TaskReturn();
		return 0;
	}
	bool var_621_bool;
	func_4217(var_621_bool, 6);
	if(var_621_bool != 0) {
		int var_623_int; object var_624_object;
		var_36_object = var_624_object;
		TaskCall(4);
		func_317(var_625_object, var_623_int, var_624_object);
		TaskReturn();
		return 0;
	}
	bool var_725_bool;
	func_4223(var_725_bool);
}


// @pe
void func_4964(bool var_407_bool)
{
	int var_409_int;
	func_4132(var_409_int, "KnowPredictions");
	if(var_409_int == 1)
		var_407_bool = true;
	var_407_bool = false;
}


void func_3426(object var_0_object, int var_510_int, object var_511_object)
{
	var_0_object = var_511_object;
	bool var_521_bool; object var_522_object;
	var_511_object = var_522_object;
	func_4037(var_521_bool, var_522_object);
	if(!var_521_bool) { //@nz
		var_510_int = -2;
		return 8;
	}
	object var_517_object;
	@CreateDialog(var_517_object);
	int var_524_int;
	func_4232(var_524_int);
	var_517_object->SetNPCName(var_524_int);
	string var_525_string;
	func_4234(var_525_string);
	var_517_object->SetPhoto(var_525_string);
	int var_526_int;
	func_5088(var_526_int);
	var_517_object->SetPlayerName(var_526_int);
	bool var_518_bool;
	@IsOverrideActive(var_518_bool);
	if(var_518_bool != 0) {
		var_510_int = -2;
		return 8;
	}
	@DoDialog(var_517_object);
	object var_528_object; object var_529_object;
	var_511_object = var_528_object;
	var_517_object = var_529_object;
	TaskCall(13);
	func_3489(var_530_object, var_531_object, var_532_string, var_533_bool, var_528_object, var_529_object);
	TaskReturn();
	bool var_520_bool;
	var_517_object->IsDialogEnd(var_520_bool);
	
	for(;;) {
		var_561_bool = !var_520_bool; //@nz
		if(var_561_bool == 0) goto Label_3478;
		@sync();
		var_517_object->IsDialogEnd(var_520_bool);
	}
	
Label_3478:
	object var_562_object;
	var_511_object = var_562_object;
	func_4093();
	@StopDialog(var_517_object);
	var_517_object->GetReturnValue(-1);
	int var_519_int = var_510_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_4712(bool var_462_bool)
{
	int var_464_int;
	func_4132(var_464_int, "ood1Katerina6");
	if(var_464_int == 0) {
		var_462_bool = true;
		return 0;
	}
	var_462_bool = false;
}


// @pe
void func_4457(void)
{
	@SetVariable("ood1Katerina9", 1);
}


void func_4203(float var_58_float)
{
	float var_60_float;
	@GetGameTime(var_60_float);
	var_60_float = var_58_float;
}


// @pe
void func_4463(void)
{
	@SetVariable("ood1Katerina10", 1);
}


// @pe
void func_112(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_102_object, object var_103_object)
{
	var_0_object = var_103_object;
	var_3_object = false;
	if(1 != 0) {
		object var_109_object; object var_110_object;
		var_109_object = var_102_object;
		var_110_object = var_0_object;
		func_4256();
		func_180(var_103_object, "Neutral");
		var_0_object->SetMessage(295); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(296, 350, 347); //@t
		var_0_object->AddReply(297, 350, 348); //@t
		var_0_object->AddReply(298, 350, 349); //@t
		goto Label_150;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x74";
	}
Label_150:
	bool var_138_bool;
	func_4236(var_138_bool);
	if(var_138_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_4097(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_179;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_179:
		return 0;

	}
	
}


void func_4208(int var_151_int)
{
	float var_153_float;
	@GetGameTime(var_153_float);
	var_151_int = 1 + (var_153_float / 24);
}


// @pe
void func_4976(bool var_116_bool)
{
	var_116_bool = false;
}


void func_4979(object var_76_object)
{
	object var_78_object;
	@GetDiaryRoot(var_78_object);
	if(!var_78_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_76_object = false;
	}
	var_78_object = var_76_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_4724(bool var_478_bool)
{
	int var_480_int;
	func_4132(var_480_int, "ood1Katerina7");
	if(var_480_int == 0) {
		var_478_bool = true;
		return 0;
	}
	var_478_bool = false;
}


// @pe
void func_4469(object var_87_object)
{
	object var_91_object;
	func_5038(var_91_object);
	object var_88_object;
	var_91_object = var_88_object;
	func_5055(var_88_object, "pt_map_lara", (float)2);
	object var_111_object;
	func_5038(var_111_object);
	var_87_object->ShowMap(var_111_object);
}


// @pe
void func_4217(bool var_149_bool, int var_150_int)
{
	int var_151_int;
	func_4208(var_151_int);
	var_149_bool = var_151_int == var_150_int;
}


// @pe
void func_380(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_641_object, object var_642_object)
{
	var_0_object = var_642_object;
	var_1_object = var_641_object;
	var_3_object = false;
	if(1 != 0) {
		func_508(var_642_object, "Neutral");
		var_0_object->SetMessage(12770); //@t
		var_0_object->ClearReplies(); //@t
		bool var_654_bool = false;
		bool var_655_bool;
		func_4820(var_1_object);
		if(var_655_bool != 0) {
			bool var_661_bool;
			func_4796(var_1_object);
			if(var_661_bool != 0)
				var_654_bool = true;
		}
		if(var_654_bool != 0)
			var_0_object->AddReply(12771, 3726, 13970); //@t
		bool var_670_bool = false;
		bool var_671_bool;
		func_4832(var_1_object);
		if(var_671_bool != 0) {
			bool var_677_bool;
			func_4808(var_1_object);
			if(var_677_bool != 0)
				var_670_bool = true;
		}
		if(var_670_bool != 0)
			var_0_object->AddReply(12772, 13972, 13971); //@t
		bool var_686_bool = true;
		bool var_687_bool = false;
		bool var_688_bool;
		func_4844(var_1_object);
		if(var_688_bool != 0) {
			bool var_694_bool;
			func_4868(var_1_object);
			if(var_694_bool != 0)
				var_687_bool = true;
		}
		if(var_687_bool != 1) {
			bool var_700_bool = false;
			bool var_701_bool;
			func_4856(var_1_object);
			if(var_701_bool != 0) {
				bool var_707_bool;
				func_4868(var_1_object);
				if(var_707_bool != 0)
					var_700_bool = true;
			}
			if(var_700_bool != 1)
				var_686_bool = false;
		}
		if(var_686_bool != 0)
			var_0_object->AddReply(12791, 13991, 13990); //@t
		var_0_object->AddReply(12790, -1, 13989); //@t
		goto Label_478;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x180";
	}
Label_478:
	bool var_715_bool;
	func_4236(var_715_bool);
	if(var_715_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_4097(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_507;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_507:
		return 0;

	}
	
}


void func_4223(bool var_725_bool)
{
	func_4097("No");
	bool var_727_bool;
	@lshWaitForAnimEnd(var_727_bool);
	var_727_bool = var_725_bool;
}


// @pe
void func_4736(bool var_494_bool)
{
	int var_496_int;
	func_4132(var_496_int, "ood1Katerina8");
	if(var_496_int == 0) {
		var_494_bool = true;
		return 0;
	}
	var_494_bool = false;
}


void func_4992(bool var_67_bool, object var_68_object, int var_69_int)
{
	object var_76_object;
	func_4979(var_76_object);
	object var_73_object;
	var_76_object = var_73_object;
	object var_74_object;
	var_73_object->Find(var_69_int, var_74_object);
	if(!var_74_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_69_int);
		var_67_bool = false;
	}
	var_74_object->AddChild(var_68_object);
	@SetVariable("player_diary", 1);
	int var_75_int;
	var_68_object->GetCategory(var_75_int);
	@SetDiarySection(var_75_int);
	var_67_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


// @pe
void func_4485(void)
{
	@SetVariable("KnowRubin", 1);
}


void func_4232(int var_91_int)
{
	var_91_int = 2864;
}


void func_4234(string var_92_string)
{
	var_92_string = "ui/NPC_Black.png";
}


void func_4491(void)
{
	@SetVariable("d5q01", 4);
	object var_47_object;
	func_5038(var_47_object);
	object var_44_object;
	var_47_object = var_44_object;
	float var_58_float;
	func_4203(var_58_float);
	var_44_object->AddMark("d5q01KaterinaGotoLara", "pt_map_lara", 1, 11959, var_58_float);
	func_5185();
}
EMIT "Stack[-1] = 0";


void func_4236(bool var_38_bool)
{
	var_38_bool = true;
}


// @pe
void func_4748(bool var_510_bool)
{
	int var_512_int;
	func_4132(var_512_int, "ood1Katerina9");
	if(var_512_int == 0) {
		var_510_bool = true;
		return 0;
	}
	var_510_bool = false;
}


// @pe
void func_4238(void)
{
	@SetVariable("ood1Katerina1", 1);
}


// @pe
void func_3727(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_583_object, object var_584_object)
{
	var_0_object = var_584_object;
	var_3_object = false;
	if(1 != 0) {
		func_3795(var_584_object, "Neutral");
		var_0_object->SetMessage(11641); //@t
		var_0_object->ClearReplies(); //@t
		bool var_596_bool;
		func_4784(var_583_object);
		if(var_596_bool != 0)
			var_0_object->AddReply(11642, 12842, 12841); //@t
		var_0_object->AddReply(11651, 12851, 12850); //@t
		var_0_object->AddReply(11660, -1, 12859); //@t
		goto Label_3765;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xe93";
	}
Label_3765:
	bool var_611_bool;
	func_4236(var_611_bool);
	if(var_611_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_4097(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_3794;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_3794:
		return 0;

	}
	
}


// @pe
void func_4244(void)
{
	@SetVariable("ood1Katerina2", 1);
}


// @pe
void func_4760(bool var_526_bool)
{
	int var_528_int;
	func_4132(var_528_int, "ood1Katerina10");
	if(var_528_int == 0) {
		var_526_bool = true;
		return 0;
	}
	var_526_bool = false;
}


// @pe
void func_4250(void)
{
	@SetVariable("ood1Katerina3", 1);
}


void func_5021(bool var_224_bool, int var_225_int)
{
	object var_230_object;
	func_4979(var_230_object);
	object var_228_object;
	var_230_object = var_228_object;
	object var_229_object;
	var_228_object->Find(var_225_int, var_229_object);
	if(!var_229_object) //@nz
		var_224_bool = false;
	var_229_object->Remove();
	var_224_bool = true;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_4256(void)
{
	@SetVariable("KnowKaterina", 1);
}


// @pe
void func_3489(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_528_object, object var_529_object)
{
	var_0_object = var_529_object;
	var_3_object = false;
	if(1 != 0) {
		func_3552(var_529_object, "Neutral");
		var_0_object->SetMessage(11203); //@t
		var_0_object->ClearReplies(); //@t
		bool var_541_bool;
		func_4928(var_528_object);
		if(var_541_bool != 0)
			var_0_object->AddReply(11204, 12393, 12392); //@t
		var_0_object->AddReply(15336, -1, 16559); //@t
		goto Label_3522;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xda5";
	}
Label_3522:
	bool var_553_bool;
	func_4236(var_553_bool);
	if(var_553_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_4097(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_3551;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_3551:
		return 0;

	}
	
}


// @pe
void func_4514(void)
{
	@SetVariable("d1q01KaterinaUHave1day", 1);
	func_5105();
}


// @pe
void func_4772(bool var_81_bool)
{
	int var_83_int;
	func_4132(var_83_int, "d3q01");
	if(var_83_int == 0) {
		var_81_bool = true;
		return 0;
	}
	var_81_bool = false;
}


// @pe
void func_4262(void)
{
	func_5121();
	func_5169();
	object var_118_object;
	func_4137(var_118_object, "quest_d1_04");
}


// @pe
void func_4523(void)
{
	@SetVariable("ood6Katerina1", 1);
}


void func_5038(object var_47_object)
{
	object var_50_object; object var_51_object;
	@GetMainOutdoorScene(var_50_object);
	if(var_50_object == null) {
		@Trace("Can't find main outdoor scene");
		var_51_object = null;
		var_51_object = var_47_object;
	}
	var_50_object->GetMap(var_51_object);
	var_51_object = var_47_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_4784(bool var_130_bool)
{
	int var_132_int;
	func_4132(var_132_int, "d5q01");
	if(var_132_int == 3)
		var_130_bool = true;
	var_130_bool = false;
}


// @pe
void func_4529(void)
{
	@SetVariable("ood6Katerina2", 1);
}


// @pe
void func_4274(void)
{
	@SetVariable("ood1Katerina4", 1);
}


// @pe
void func_2993(object var_2_object, string var_92_string)
{
	bool var_93_bool;
	func_4236(var_93_bool);
	if(!var_93_bool) //@nz
		return 0;
	if(var_92_string == var_2_object)
		return 0;
	string var_96_string;
	func_4097(var_96_string);
	var_2_object = var_96_string;
}


// @pe
void func_180(object var_2_object, string var_45_string)
{
	bool var_46_bool;
	func_4236(var_46_bool);
	if(!var_46_bool) //@nz
		return 0;
	if(var_45_string == var_2_object)
		return 0;
	string var_49_string;
	func_4097(var_49_string);
	var_2_object = var_49_string;
}


void func_4020(bool var_36_bool, object var_37_object)
{
	cvector var_42_cvector;
	var_37_object->GetPosition(var_42_cvector);
	cvector var_43_cvector;
	@GetPosition(var_43_cvector);
	cvector var_44_cvector = var_42_cvector - var_43_cvector;
	var_46_float = GetByIndex(var_44_cvector, 0);
	var_47_float = GetByIndex(var_44_cvector, 2);
	bool var_45_bool;
	@Rotate(var_46_float, var_47_float, var_45_bool);
	var_45_bool = var_36_bool;
}


void func_4535(void)
{
	@SetVariable("d6q01", 2);
	object var_69_object;
	func_5038(var_69_object);
	object var_66_object;
	var_69_object = var_66_object;
	float var_80_float;
	func_4203(var_80_float);
	var_66_object->AddMark("d6q01KaterinaGotoLaska", "pt_map_laska", 1, 15398, var_80_float);
	float var_87_float;
	func_4203(var_87_float);
	var_66_object->AddMark("d6q01KaterinagotoLaskaSelf", "pt_map_katerina", 1, 15399, var_87_float);
	func_5201();
	bool var_113_bool;
	func_4191(var_113_bool, "quest_d6_01", "saburov_klara_remove");
}
EMIT "Stack[-1] = 0";


void func_4280(object var_202_object)
{
	object var_208_object;
	func_5038(var_208_object);
	object var_206_object;
	var_208_object = var_206_object;
	object var_207_object;
	var_206_object->FindMark(var_207_object, "d1q04KaterinaGotoMishka");
	if(var_207_object != 0)
		var_207_object->Remove();
	var_206_object->FindMark(var_207_object, "d1q04Spi4kaGotoPowderHouse");
	if(var_207_object != 0)
		var_207_object->Remove();
	var_206_object->FindMark(var_207_object, "d1q04MishkaGotoSpi4ka");
	if(var_207_object != 0)
		var_207_object->Remove();
	func_5137();
	bool var_224_bool;
	func_5021(var_224_bool, 44);
	bool var_232_bool;
	func_5021(var_232_bool, 45);
	bool var_234_bool;
	func_5021(var_234_bool, 46);
	bool var_236_bool;
	func_4191(var_236_bool, "quest_d1_04", "completed");
	bool var_242_bool; object var_243_object;
	var_202_object = var_243_object;
	func_4181(var_242_bool, var_243_object, "powder");
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_4796(bool var_158_bool)
{
	int var_160_int;
	func_4132(var_160_int, "d6q01");
	if(var_160_int == 1)
		var_158_bool = true;
	var_158_bool = false;
}


void func_5055(object var_88_object, string var_89_string, float var_90_float)
{
	object var_98_object;
	@GetMainOutdoorScene(var_98_object);
	if(var_98_object == null) {
		@Trace("Can't find main outdoor scene");
		return 8;
	}
	cvector var_96_cvector;
	cvector var_97_cvector;
	bool var_99_bool;
	var_98_object->GetLocator(var_89_string, var_99_bool, var_96_cvector, var_97_cvector);
	if(!var_99_bool) //@nz
		@Trace(("Warning: outdoor scene locator " + var_89_string) + " doesnt exist");
	var_98_object->GetMap(var_88_object);
	if(var_88_object == null) {
		@Trace("Can't find map");
		return 8;
	}
	var_109_float = GetByIndex(var_96_cvector, 0);
	var_110_float = GetByIndex(var_96_cvector, 2);
	var_88_object->SetMapParams(var_109_float, var_110_float, var_90_float);
}
EMIT "Stack[-2] = 0";


void func_4032(bool var_36_bool)
{
	bool var_38_bool;
	@IsLoaded(var_38_bool);
	var_38_bool = var_36_bool;
}


void func_4037(bool var_50_bool, object var_51_object)
{
	cvector var_61_cvector;
	var_51_object->GetPosition(var_61_cvector);
	float var_60_float;
	var_51_object->GetEyesHeight(var_60_float);
	var_68_float = GetByIndex(var_61_cvector, 1);
	SetByIndex(var_61_cvector, 1) = (var_68_float + var_60_float);
	cvector var_62_cvector;
	@GetPosition(var_62_cvector);
	@GetEyesHeight(var_60_float);
	var_69_float = GetByIndex(var_62_cvector, 1);
	SetByIndex(var_62_cvector, 1) = (var_69_float + var_60_float);
	cvector var_63_cvector = var_61_cvector - var_62_cvector;
	var_70_float = GetByIndex(var_63_cvector, 1);
	SetByIndex(var_63_cvector, 1) = (float)0;
	var_72_float = sqrt(var_63_cvector | var_63_cvector);
	var_63_cvector /= var_72_float;
	cvector var_64_cvector = -var_63_cvector;
	cvector var_75_cvector;
	func_4122(var_75_cvector, (var_64_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_65_cvector = ((var_63_cvector * 70) + (var_75_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_67_bool;
	@IsOverrideActive(var_67_bool);
	if(var_67_bool != 0)
		var_50_bool = false;
	@StopWorld();
	@CameraTransit((var_62_cvector + var_65_cvector), var_64_cvector);
	var_88_float = GetByIndex(var_65_cvector, 0);
	var_89_float = GetByIndex(var_65_cvector, 2);
	@Rotate(var_88_float, var_89_float);
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_50_bool = true;
}


// @pe
void func_4808(bool var_174_bool)
{
	int var_176_int;
	func_4132(var_176_int, "d6q01KnowKillerIsKlara");
	if(var_176_int == 1)
		var_174_bool = true;
	var_174_bool = false;
}


void func_2509(object var_0_object, int var_379_int, object var_380_object)
{
	var_0_object = var_380_object;
	bool var_390_bool; object var_391_object;
	var_380_object = var_391_object;
	func_4037(var_390_bool, var_391_object);
	if(!var_390_bool) { //@nz
		var_379_int = -2;
		return 8;
	}
	object var_386_object;
	@CreateDialog(var_386_object);
	int var_393_int;
	func_4232(var_393_int);
	var_386_object->SetNPCName(var_393_int);
	string var_394_string;
	func_4234(var_394_string);
	var_386_object->SetPhoto(var_394_string);
	int var_395_int;
	func_5088(var_395_int);
	var_386_object->SetPlayerName(var_395_int);
	bool var_387_bool;
	@IsOverrideActive(var_387_bool);
	if(var_387_bool != 0) {
		var_379_int = -2;
		return 8;
	}
	@DoDialog(var_386_object);
	object var_397_object; object var_398_object;
	var_380_object = var_397_object;
	var_386_object = var_398_object;
	TaskCall(9);
	func_2572(var_399_object, var_400_object, var_401_string, var_402_bool, var_397_object, var_398_object);
	TaskReturn();
	bool var_389_bool;
	var_386_object->IsDialogEnd(var_389_bool);
	
	for(;;) {
		var_427_bool = !var_389_bool; //@nz
		if(var_427_bool == 0) goto Label_2561;
		@sync();
		var_386_object->IsDialogEnd(var_389_bool);
	}
	
Label_2561:
	object var_428_object;
	var_380_object = var_428_object;
	func_4093();
	@StopDialog(var_386_object);
	var_386_object->GetReturnValue(-1);
	int var_388_int = var_379_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_3795(object var_2_object, string var_114_string)
{
	bool var_115_bool;
	func_4236(var_115_bool);
	if(!var_115_bool) //@nz
		return 0;
	if(var_114_string == var_2_object)
		return 0;
	string var_118_string;
	func_4097(var_118_string);
	var_2_object = var_118_string;
}


// @pe
void func_4820(bool var_150_bool)
{
	int var_152_int;
	func_4132(var_152_int, "ood6Katerina1");
	if(var_152_int == 0) {
		var_150_bool = true;
		return 0;
	}
	var_150_bool = false;
}


// @pe
void func_4572(void)
{
	@SetVariable("ood6Katerina3", 1);
}


// @pe
void func_4832(bool var_168_bool)
{
	int var_170_int;
	func_4132(var_170_int, "ood6Katerina2");
	if(var_170_int == 0) {
		var_168_bool = true;
		return 0;
	}
	var_168_bool = false;
}


void func_5088(int var_93_int)
{
	int var_95_int;
	@GetVariable("player", var_95_int);
	if(var_95_int == 0) {
		var_93_int = 200001;
		return 2;
	EMIT "GOTO 0x13ef";
	}
	if(var_95_int == 1) {
		var_93_int = 200002;
		return 2;
	}
	var_93_int = 200003;
}


// @pe
void func_3552(object var_2_object, string var_47_string)
{
	bool var_48_bool;
	func_4236(var_48_bool);
	if(!var_48_bool) //@nz
		return 0;
	if(var_47_string == var_2_object)
		return 0;
	string var_51_string;
	func_4097(var_51_string);
	var_2_object = var_51_string;
}


// @pe
void func_4578(void)
{
	@SetVariable("KnowMishka", 1);
}


// @pe
void func_4584(void)
{
	@SetVariable("ood3Katerina1", 1);
}


// @pe
void func_4844(bool var_185_bool)
{
	int var_187_int;
	func_4132(var_187_int, "d6q01");
	if(var_187_int == 4)
		var_185_bool = true;
	var_185_bool = false;
}


// @pe
void func_4334(void)
{
	@TriggerWorld("playsound", "giveitem");
}


// @pe
void func_4590(object var_41_object)
{
	@Trace("drapery is given");
	object var_44_object;
	var_41_object = var_44_object;
	func_4161(var_44_object, "drapery", 1);
}


void func_5105(void)
{
	@Trace("Adding diary entry");
	object var_50_object;
	@CreateDiaryEntry(var_50_object, 32, 1, 12114);
	bool var_55_bool; object var_56_object;
	var_50_object = var_56_object;
	func_4992(var_55_bool, var_56_object, 2);
}
EMIT "Stack[-1] = 0";


void func_4340(void)
{
	object var_264_object;
	func_5038(var_264_object);
	object var_262_object;
	var_264_object = var_262_object;
	object var_263_object;
	var_262_object->FindMark(var_263_object, "d1q04KaterinaGotoMishka");
	if(var_263_object != 0)
		var_263_object->Remove();
	var_262_object->FindMark(var_263_object, "d1q04MishkaGotoSpi4ka");
	if(var_263_object != 0)
		var_263_object->Remove();
	var_262_object->FindMark(var_263_object, "d1q04Spi4kaGotoPowderHouse");
	if(var_263_object != 0)
		var_263_object->Remove();
	func_5153();
	bool var_280_bool;
	func_5021(var_280_bool, 44);
	bool var_282_bool;
	func_5021(var_282_bool, 45);
	bool var_284_bool;
	func_5021(var_284_bool, 46);
	bool var_286_bool;
	func_4191(var_286_bool, "quest_d1_04", "failed");
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_4856(bool var_198_bool)
{
	int var_200_int;
	func_4132(var_200_int, "d6q01");
	if(var_200_int == 3)
		var_198_bool = true;
	var_198_bool = false;
}


// @pe
void func_4601(void)
{
	@SetVariable("ood4Katerina1", 1);
}


// @pe
void func_508(object var_2_object, string var_133_string)
{
	bool var_134_bool;
	func_4236(var_134_bool);
	if(!var_134_bool) //@nz
		return 0;
	if(var_133_string == var_2_object)
		return 0;
	string var_137_string;
	func_4097(var_137_string);
	var_2_object = var_137_string;
}


// @pe
void func_4093(void)
{
	@CameraSwitchToNormal();
}


// @pe
void func_4607(bool var_344_bool)
{
	int var_346_int;
	func_4132(var_346_int, "ood1Katerina1");
	if(var_346_int == 0) {
		var_344_bool = true;
		return 0;
	}
	var_344_bool = false;
}


