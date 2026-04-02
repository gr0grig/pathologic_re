// @GLOBALS: 0:string:,1:object:,2:bool:

task task_0
{
	void OnLoad(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, object var_31_object, object var_32_object, object var_33_object, string var_34_string, bool var_35_bool, float var_36_float, float var_37_float, int var_38_int)
	{
		@StopGroup0();
		@sync();
	}

}


task task_1
{
	void OnUnload(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, object var_31_object, object var_32_object, object var_33_object, string var_34_string, bool var_35_bool, float var_36_float, float var_37_float, int var_38_int)
	{
		var_0_bool = true;
		func_145();
		func_3718();
		TaskCall(0);
		func_0();
		TaskReturn();
	}

	void OnUse(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_4_object, string var_5_string, bool var_6_bool, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, float var_37_float, float var_38_float, int var_39_int)
	{
		bool var_41_bool;
		@IsOverrideActive(var_41_bool);
		if(!var_41_bool) { //@nz
			func_145();
			disable OnUse;
			bool var_43_bool; object var_44_object;
			var_39_int = var_44_object;
			func_3252(var_43_bool, var_44_object);
			enable OnUse;
			object var_57_object;
			var_39_int = var_57_object;
			func_4352(var_57_object);
			var_0_bool = false;
		}
	}

		void OnCollision(bool var_0_bool, int var_1_int, object var_2_object, object var_3_object, object var_4_object, string var_5_string, bool var_6_bool, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, float var_37_float, float var_38_float, int var_39_int, object var_40_object, object var_41_object, object var_61_object)
		{
		bool var_63_bool;
		@IsPlayerActor(var_61_object, var_63_bool);
		if(var_63_bool != 0) {
			func_145();
			object var_65_object;
			var_61_object = var_65_object;
			TaskCall(2);
			func_148(var_65_object);
			TaskReturn();
			var_0_bool = false;
			@SetTimer(20, 10.0);
		}
		}

	void OnTimer(bool var_0_bool, int var_1_int, object var_2_object, object var_3_object, object var_4_object, string var_5_string, bool var_6_bool, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, float var_37_float, float var_38_float, int var_39_int)
	{
		object var_41_object;
		if(var_39_int == 20) {
			@KillTimer(20);
		} else {
			if(!(var_39_int == 21)) goto Label_144;
			if(true == 0) goto Label_144;
			@FindActor(var_41_object, "player");
			bool var_49_bool = false;
			if(var_41_object != 0) {
				float var_51_float; object var_52_object;
				var_41_object = var_52_object;
				func_3193(var_51_float, var_52_object);
				if(var_51_float <= 62500.0)
					var_49_bool = true;
			}
			if(var_49_bool != 0) {
				object var_61_object;
				var_41_object = var_61_object;
				func_89();
			}
			var_41_object = null;
		}
	Label_144:
	
	}

}


task task_2
{
	// @pe
	void OnUnload(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, object var_31_object, object var_32_object, object var_33_object, string var_34_string, bool var_35_bool, float var_36_float, float var_37_float, int var_38_int)
	{
		func_193();
		func_3718();
		TaskCall(0);
		func_0();
		TaskReturn();
	}

	void OnUse(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_4_object, string var_5_string, bool var_6_bool, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, float var_37_float, float var_38_float, int var_39_int)
	{
		bool var_41_bool;
		@IsOverrideActive(var_41_bool);
		if(!var_41_bool) { //@nz
			func_193();
			disable OnUse;
			bool var_43_bool; object var_44_object;
			var_39_int = var_44_object;
			func_3252(var_43_bool, var_44_object);
			enable OnUse;
			object var_57_object;
			var_39_int = var_57_object;
			func_4352(var_57_object);
		}
	}

}


task task_3
{
	// @pe
	void OnUnload(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, object var_31_object, object var_32_object, object var_33_object, string var_34_string, bool var_35_bool, float var_36_float, float var_37_float, int var_38_int)
	{
		func_3718();
		TaskCall(0);
		func_0();
		TaskReturn();
	}

}


task task_4
{
}


task task_5
{
	// @pe
	void event_11(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, int var_6_int, int var_7_int, object var_8_object, object var_9_object, object var_10_object, string var_11_string, bool var_12_bool, object var_13_object, object var_14_object, object var_15_object, string var_16_string, bool var_17_bool, object var_18_object, object var_19_object, object var_20_object, string var_21_string, bool var_22_bool, object var_23_object, object var_24_object, object var_25_object, string var_26_string, bool var_27_bool, object var_28_object, object var_29_object, object var_30_object, string var_31_string, bool var_32_bool, object var_33_object, object var_34_object, object var_35_object, string var_36_string, bool var_37_bool, float var_38_float, float var_39_float, int var_40_int)
	{
		if(1 != 0) {
			func_3528();
			if(var_40_int == 26708) {
				object var_45_object; object var_46_object;
				var_45_object = var_1_object;
				var_46_object = var_0_bool;
				func_3765();
				object var_96_object = var_1_object;
				func_3903(var_0_bool);
			}
			if(var_40_int == 26610) {
				object var_124_object; object var_125_object;
				var_124_object = var_1_object;
				var_125_object = var_0_bool;
				func_3736();
				object var_144_object = var_1_object;
				func_3919(var_0_bool);
			}
			if(var_40_int == 26712) {
				object var_153_object; object var_154_object;
				var_153_object = var_1_object;
				var_154_object = var_0_bool;
				func_3765();
				object var_155_object = var_1_object;
				func_3903(var_0_bool);
			}
			if(var_40_int == 26740) {
				object var_159_object; object var_160_object;
				var_159_object = var_1_object;
				var_160_object = var_0_bool;
				func_3791();
			}
			if(var_40_int == 26739) {
				object var_165_object = var_1_object;
				func_3797(var_0_bool);
				object var_183_object = var_1_object;
				func_3887(var_0_bool);
				object var_204_object; object var_205_object;
				var_204_object = var_1_object;
				var_205_object = var_0_bool;
				func_3897();
			}
			if(var_40_int == 26751) {
				object var_210_object; object var_211_object;
				var_210_object = var_1_object;
				var_211_object = var_0_bool;
				func_3814();
				object var_222_object = var_1_object;
				func_3729(var_0_bool);
			}
			if(var_40_int == 26748) {
				object var_264_object; object var_265_object;
				var_264_object = var_1_object;
				var_265_object = var_0_bool;
				func_3823();
				object var_276_object = var_1_object;
				func_3867(var_0_bool);
				object var_281_object = var_1_object;
				func_3935(var_0_bool);
				object var_286_object; object var_287_object;
				var_286_object = var_1_object;
				var_287_object = var_0_bool;
				func_3897();
			}
			if(var_40_int == 26746) {
				object var_290_object; object var_291_object;
				var_290_object = var_1_object;
				var_291_object = var_0_bool;
				func_3832();
				object var_302_object; object var_303_object;
				var_302_object = var_1_object;
				var_303_object = var_0_bool;
				func_3897();
				object var_304_object = var_1_object;
				func_3877(var_0_bool);
			}
			if(var_39_float == 26705) {
				bool var_311_bool = false;
				bool var_312_bool;
				func_3954(var_1_object);
				if(var_312_bool != 0) {
					bool var_320_bool;
					func_3942(var_1_object);
					if(!var_320_bool) //@nz
						var_311_bool = true;
				}
				if(var_311_bool != 0) {
					object var_327_object; object var_328_object;
					var_327_object = var_1_object;
					var_328_object = var_0_bool;
					func_3759();
					func_559(var_40_int, "Neutral");
					var_0_bool->SetMessage(525337); //@t
					var_0_bool->ClearReplies(); //@t
					var_0_bool->AddReply(525338, 26707, 26706); //@t
					var_0_bool->AddReply(539465, -1, 41388); //@t
					return 0;
				}
				func_559(var_40_int, "Neutral");
				var_0_bool->SetMessage(525237); //@t
				var_0_bool->ClearReplies(); //@t
				bool var_352_bool;
				func_3942(var_1_object);
				if(var_352_bool != 0)
					var_0_bool->AddReply(525238, 26607, 26606); //@t
				bool var_357_bool = false;
				bool var_358_bool;
				func_3966(var_1_object);
				if(var_358_bool != 0) {
					bool var_364_bool;
					func_3954(var_1_object);
					if(!var_364_bool) //@nz
						var_357_bool = true;
				}
				if(var_357_bool != 0)
					var_0_bool->AddReply(525342, 26711, 26710); //@t
				bool var_370_bool = false;
				bool var_371_bool;
				func_3978(var_1_object);
				if(var_371_bool != 0) {
					bool var_377_bool;
					func_4012(var_1_object);
					if(var_377_bool != 0)
						var_370_bool = true;
				}
				if(var_370_bool != 0)
					var_0_bool->AddReply(525372, 26741, 26740); //@t
				bool var_386_bool = false;
				bool var_387_bool;
				func_4002(var_387_bool, var_1_object);
				if(var_387_bool != 0) {
					bool var_399_bool;
					func_4024(var_1_object);
					if(var_399_bool != 0)
						var_386_bool = true;
				}
				if(var_386_bool != 0)
					var_0_bool->AddReply(525369, 26738, 26737); //@t
				bool var_408_bool = false;
				bool var_409_bool;
				func_4002(var_409_bool, var_1_object);
				if(!var_409_bool) { //@nz
					bool var_412_bool;
					func_4024(var_1_object);
					if(var_412_bool != 0)
						var_408_bool = true;
				}
				if(var_408_bool != 0)
					var_0_bool->AddReply(525381, 26750, 26749); //@t
				bool var_417_bool;
				func_3990(var_1_object);
				if(var_417_bool != 0)
					var_0_bool->AddReply(525375, 26744, 26743); //@t
				var_0_bool->AddReply(525243, -1, 26611); //@t
				var_0_bool->AddReply(529207, -1, 30658); //@t
				return 0;
			}
			if(var_39_float == 26744) {
				func_559(var_40_int, "Neutral");
				var_0_bool->SetMessage(525376); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(525377, 26747, 26745); //@t
				var_0_bool->AddReply(525378, -1, 26746); //@t
				return 0;
			}
			if(var_39_float == 26747) {
				func_559(var_40_int, "Neutral");
				var_0_bool->SetMessage(525379); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(525380, -1, 26748); //@t
				return 0;
			}
			if(var_39_float == 26750) {
				func_559(var_40_int, "Neutral");
				var_0_bool->SetMessage(525382); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(525383, -1, 26751); //@t
				return 0;
			}
			if(var_39_float == 26738) {
				func_559(var_40_int, "Neutral");
				var_0_bool->SetMessage(525370); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(525371, -1, 26739); //@t
				return 0;
			}
			if(var_39_float == 26741) {
				func_559(var_40_int, "Neutral");
				var_0_bool->SetMessage(525373); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(525374, -1, 26742); //@t
				return 0;
			}
			if(var_39_float == 26711) {
				func_559(var_40_int, "Neutral");
				var_0_bool->SetMessage(525343); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(525344, -1, 26712); //@t
				return 0;
			}
			if(var_39_float == 26607) {
				func_559(var_40_int, "Neutral");
				var_0_bool->SetMessage(525239); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(529208, 30660, 30659); //@t
				var_0_bool->AddReply(529212, 30660, 30663); //@t
				return 0;
			}
			if(var_39_float == 30660) {
				func_559(var_40_int, "Neutral");
				var_0_bool->SetMessage(529209); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(529210, 30662, 30661); //@t
				return 0;
			}
			if(var_39_float == 30662) {
				func_559(var_40_int, "Neutral");
				var_0_bool->SetMessage(529211); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(525240, 26609, 26608); //@t
				return 0;
			}
			if(var_39_float == 26609) {
				func_559(var_40_int, "Neutral");
				var_0_bool->SetMessage(525241); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(525242, -1, 26610); //@t
				return 0;
			}
			if(var_39_float == 26707) {
				func_559(var_40_int, "Neutral");
				var_0_bool->SetMessage(525339); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(525340, -1, 26708); //@t
				var_0_bool->AddReply(525341, -1, 26709); //@t
				return 0;
			}
			var_3_object = true;
			bool var_518_bool;
			func_3727(var_518_bool);
			if(var_518_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x246";
	
	}

}


task task_6
{
}


task task_7
{
	// @pe
	void event_11(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, int var_11_int, int var_12_int, object var_13_object, object var_14_object, object var_15_object, string var_16_string, bool var_17_bool, object var_18_object, object var_19_object, object var_20_object, string var_21_string, bool var_22_bool, object var_23_object, object var_24_object, object var_25_object, string var_26_string, bool var_27_bool, object var_28_object, object var_29_object, object var_30_object, string var_31_string, bool var_32_bool, object var_33_object, object var_34_object, object var_35_object, string var_36_string, bool var_37_bool, float var_38_float, float var_39_float, int var_40_int)
	{
		if(1 != 0) {
			func_3528();
			if(var_40_int == 26783) {
				object var_45_object; object var_46_object;
				var_45_object = var_1_object;
				var_46_object = var_0_bool;
				func_3841();
			}
			if(var_39_float == 26782) {
				func_1246(var_40_int, "Neutral");
				var_0_bool->SetMessage(525414); //@t
				var_0_bool->ClearReplies(); //@t
				bool var_64_bool = false;
				bool var_65_bool;
				func_4036(var_1_object);
				if(var_65_bool != 0) {
					bool var_73_bool;
					func_4048(var_1_object);
					if(var_73_bool != 0)
						var_64_bool = true;
				}
				if(var_64_bool != 0)
					var_0_bool->AddReply(525415, 42567, 26783); //@t
				var_0_bool->AddReply(525418, -1, 26786); //@t
				return 0;
			}
			if(var_39_float == 42567) {
				func_1246(var_40_int, "Neutral");
				var_0_bool->SetMessage(540558); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(540559, 26784, 42568); //@t
				var_0_bool->AddReply(540560, 40922, 42569); //@t
				return 0;
			}
			if(var_39_float == 26784) {
				func_1246(var_40_int, "Neutral");
				var_0_bool->SetMessage(525416); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(525417, 40922, 26785); //@t
				var_0_bool->AddReply(540561, 40924, 42571); //@t
				return 0;
			}
			if(var_39_float == 40922) {
				func_1246(var_40_int, "Neutral");
				var_0_bool->SetMessage(538982); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(538983, 40924, 40923); //@t
				return 0;
			}
			if(var_39_float == 40924) {
				func_1246(var_40_int, "Neutral");
				var_0_bool->SetMessage(538984); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(538985, 40926, 40925); //@t
				var_0_bool->AddReply(538988, 40929, 40928); //@t
				return 0;
			}
			if(var_39_float == 40929) {
				func_1246(var_40_int, "Neutral");
				var_0_bool->SetMessage(538989); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(540565, 42578, 42577); //@t
				var_0_bool->AddReply(538990, 40931, 40930); //@t
				return 0;
			}
			if(var_39_float == 40931) {
				func_1246(var_40_int, "Neutral");
				var_0_bool->SetMessage(538991); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(538992, -1, 40932); //@t
				var_0_bool->AddReply(540575, -1, 42589); //@t
				return 0;
			}
			if(var_39_float == 40926) {
				func_1246(var_40_int, "Neutral");
				var_0_bool->SetMessage(538986); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(538987, 42573, 40927); //@t
				return 0;
			}
			if(var_39_float == 42573) {
				func_1246(var_40_int, "Neutral");
				var_0_bool->SetMessage(540562); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(540563, 40929, 42574); //@t
				var_0_bool->AddReply(540564, 42578, 42576); //@t
				return 0;
			}
			if(var_39_float == 42578) {
				func_1246(var_40_int, "Neutral");
				var_0_bool->SetMessage(540566); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(540592, 42607, 42606); //@t
				return 0;
			}
			if(var_39_float == 42607) {
				func_1246(var_40_int, "Neutral");
				var_0_bool->SetMessage(540593); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(540594, 42609, 42608); //@t
				var_0_bool->AddReply(540601, -1, 42615); //@t
				return 0;
			}
			if(var_39_float == 42609) {
				func_1246(var_40_int, "Neutral");
				var_0_bool->SetMessage(540595); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(540596, 42611, 42610); //@t
				return 0;
			}
			if(var_39_float == 42611) {
				func_1246(var_40_int, "Neutral");
				var_0_bool->SetMessage(540597); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(540600, -1, 42614); //@t
				return 0;
			}
			var_3_object = true;
			bool var_190_bool;
			func_3727(var_190_bool);
			if(var_190_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x4f5";
	
	}

}


task task_8
{
}


task task_9
{
	// @pe
	void event_11(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, int var_16_int, int var_17_int, object var_18_object, object var_19_object, object var_20_object, string var_21_string, bool var_22_bool, object var_23_object, object var_24_object, object var_25_object, string var_26_string, bool var_27_bool, object var_28_object, object var_29_object, object var_30_object, string var_31_string, bool var_32_bool, object var_33_object, object var_34_object, object var_35_object, string var_36_string, bool var_37_bool, float var_38_float, float var_39_float, int var_40_int)
	{
		if(1 != 0) {
			func_3528();
			if(var_39_float == 26869) {
				func_1722(var_40_int, "Neutral");
				var_0_bool->SetMessage(525513); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(525514, 30738, 26870); //@t
				var_0_bool->AddReply(529284, 30738, 30737); //@t
				return 0;
			}
			if(var_39_float == 30738) {
				func_1722(var_40_int, "Neutral");
				var_0_bool->SetMessage(529285); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(529286, -1, 30740); //@t
				var_0_bool->AddReply(529287, -1, 30741); //@t
				return 0;
			}
			var_3_object = true;
			bool var_74_bool;
			func_3727(var_74_bool);
			if(var_74_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x6d1";
	
	}

}


task task_10
{
}


task task_11
{
	// @pe
	void event_11(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, int var_21_int, int var_22_int, object var_23_object, object var_24_object, object var_25_object, string var_26_string, bool var_27_bool, object var_28_object, object var_29_object, object var_30_object, string var_31_string, bool var_32_bool, object var_33_object, object var_34_object, object var_35_object, string var_36_string, bool var_37_bool, float var_38_float, float var_39_float, int var_40_int)
	{
		if(1 != 0) {
			func_3528();
			if(var_40_int == 27141) {
				object var_45_object; object var_46_object;
				var_45_object = var_1_object;
				var_46_object = var_0_bool;
				func_3847();
			}
			if(var_40_int == 27143) {
				object var_51_object; object var_52_object;
				var_51_object = var_1_object;
				var_52_object = var_0_bool;
				func_3853();
			}
			if(var_39_float == 27140) {
				func_1972(var_40_int, "Neutral");
				var_0_bool->SetMessage(525841); //@t
				var_0_bool->ClearReplies(); //@t
				bool var_91_bool = false;
				bool var_92_bool;
				func_4060(var_1_object);
				if(var_92_bool != 0) {
					bool var_100_bool;
					func_4072(var_1_object);
					if(var_100_bool != 0)
						var_91_bool = true;
				}
				if(var_91_bool != 0)
					var_0_bool->AddReply(525842, 30544, 27141); //@t
				var_0_bool->AddReply(525845, 30542, 27144); //@t
				var_0_bool->AddReply(529095, -1, 30540); //@t
				var_0_bool->AddReply(529096, -1, 30541); //@t
				return 0;
			}
			if(var_39_float == 30542) {
				func_1972(var_40_int, "Neutral");
				var_0_bool->SetMessage(529097); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(529098, -1, 30543); //@t
				return 0;
			}
			if(var_39_float == 30544) {
				func_1972(var_40_int, "Neutral");
				var_0_bool->SetMessage(529099); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(529100, 30546, 30545); //@t
				return 0;
			}
			if(var_39_float == 30546) {
				func_1972(var_40_int, "Neutral");
				var_0_bool->SetMessage(529101); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(529102, 27142, 30547); //@t
				return 0;
			}
			if(var_39_float == 27142) {
				func_1972(var_40_int, "Neutral");
				var_0_bool->SetMessage(525843); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(529103, 30549, 30548); //@t
				return 0;
			}
			if(var_39_float == 30549) {
				func_1972(var_40_int, "Neutral");
				var_0_bool->SetMessage(529104); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(529105, 30551, 30550); //@t
				var_0_bool->AddReply(539587, 41533, 41532); //@t
				return 0;
			}
			if(var_39_float == 41533) {
				func_1972(var_40_int, "Neutral");
				var_0_bool->SetMessage(539588); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(539589, 30551, 41534); //@t
				return 0;
			}
			if(var_39_float == 30551) {
				func_1972(var_40_int, "Neutral");
				var_0_bool->SetMessage(529106); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(525844, -1, 27143); //@t
				return 0;
			}
			var_3_object = true;
			bool var_170_bool;
			func_3727(var_170_bool);
			if(var_170_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x7cb";
	
	}

}


task task_12
{
}


task task_13
{
	// @pe
	void event_11(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, int var_26_int, int var_27_int, object var_28_object, object var_29_object, object var_30_object, string var_31_string, bool var_32_bool, object var_33_object, object var_34_object, object var_35_object, string var_36_string, bool var_37_bool, float var_38_float, float var_39_float, int var_40_int)
	{
		if(1 != 0) {
			func_3528();
			if(var_40_int == 28018) {
				object var_45_object; object var_46_object;
				var_45_object = var_1_object;
				var_46_object = var_0_bool;
				func_3858();
			}
			if(var_39_float == 28015) {
				func_2366(var_40_int, "Neutral");
				var_0_bool->SetMessage(526738); //@t
				var_0_bool->ClearReplies(); //@t
				bool var_87_bool;
				func_4096(var_1_object);
				if(var_87_bool != 0)
					var_0_bool->AddReply(526739, 28017, 28016); //@t
				bool var_98_bool;
				func_4084(var_1_object);
				if(var_98_bool != 0)
					var_0_bool->AddReply(528763, 30180, 30179); //@t
				var_0_bool->AddReply(526742, -1, 28019); //@t
				var_0_bool->AddReply(528847, -1, 30265); //@t
				return 0;
			}
			if(var_39_float == 30180) {
				func_2366(var_40_int, "Neutral");
				var_0_bool->SetMessage(528764); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(528765, -1, 30181); //@t
				return 0;
			}
			if(var_39_float == 28017) {
				func_2366(var_40_int, "Neutral");
				var_0_bool->SetMessage(526740); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(528841, 30260, 30259); //@t
				var_0_bool->AddReply(528848, 30267, 30266); //@t
				return 0;
			}
			if(var_39_float == 30267) {
				func_2366(var_40_int, "Neutral");
				var_0_bool->SetMessage(528849); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(528850, 30262, 30268); //@t
				var_0_bool->AddReply(528851, 30262, 30269); //@t
				return 0;
			}
			if(var_39_float == 30260) {
				func_2366(var_40_int, "Neutral");
				var_0_bool->SetMessage(528842); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(528843, 30262, 30261); //@t
				return 0;
			}
			if(var_39_float == 30262) {
				func_2366(var_40_int, "Neutral");
				var_0_bool->SetMessage(528844); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(528845, 30264, 30263); //@t
				return 0;
			}
			if(var_39_float == 30264) {
				func_2366(var_40_int, "Neutral");
				var_0_bool->SetMessage(528846); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(526741, -1, 28018); //@t
				return 0;
			}
			var_3_object = true;
			bool var_161_bool;
			func_3727(var_161_bool);
			if(var_161_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x955";
	
	}

}


task task_14
{
}


task task_15
{
	// @pe
	void event_11(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, int var_31_int, int var_32_int, object var_33_object, object var_34_object, object var_35_object, string var_36_string, bool var_37_bool, float var_38_float, float var_39_float, int var_40_int)
	{
		if(1 != 0) {
			func_3528();
			if(var_39_float == 36906) {
				func_2720(var_40_int, "Neutral");
				var_0_bool->SetMessage(535231); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(535232, 36953, 36907); //@t
				var_0_bool->AddReply(535233, -1, 36908); //@t
				var_0_bool->AddReply(535280, -1, 36956); //@t
				return 0;
			}
			if(var_39_float == 36953) {
				func_2720(var_40_int, "Neutral");
				var_0_bool->SetMessage(535277); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(535278, 36957, 36954); //@t
				var_0_bool->AddReply(535279, 36957, 36955); //@t
				return 0;
			}
			if(var_39_float == 36957) {
				func_2720(var_40_int, "Neutral");
				var_0_bool->SetMessage(535281); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(535282, -1, 36958); //@t
				var_0_bool->AddReply(535283, -1, 36959); //@t
				return 0;
			}
			var_3_object = true;
			bool var_87_bool;
			func_3727(var_87_bool);
			if(var_87_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xab7";
	
	}

}


task task_16
{
}


task task_17
{
	// @pe
	void event_11(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, object var_31_object, object var_32_object, object var_33_object, string var_34_string, bool var_35_bool, int var_36_int, int var_37_int, float var_38_float, float var_39_float, int var_40_int)
	{
		if(1 != 0) {
			func_3528();
			if(var_39_float == 42554) {
				func_2974(var_40_int, "Neutral");
				var_0_bool->SetMessage(540545); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(540546, -1, 42555); //@t
				var_0_bool->AddReply(540798, -1, 42847); //@t
				return 0;
			}
			var_3_object = true;
			bool var_64_bool;
			func_3727(var_64_bool);
			if(var_64_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xbb5";
	
	}

}


maintask task_18
{
	void init(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, object var_31_object, object var_32_object, object var_33_object, string var_34_string, bool var_35_bool, float var_36_float, float var_37_float, int var_38_int)
	{
		var_39_bool = GlobalVars[2];
		GlobalVars[2] = false;
		func_3045(var_36_float, var_37_float, var_38_int);
	}

	// @pe
	void OnUnload(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, object var_31_object, object var_32_object, object var_33_object, string var_34_string, bool var_35_bool, float var_36_float, float var_37_float, int var_38_int)
	{
		func_3718();
		TaskCall(0);
		func_0();
		TaskReturn();
	}

	void OnUse(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, object var_31_object, object var_32_object, object var_33_object, string var_34_string, bool var_35_bool, float var_36_float, float var_37_float, int var_38_int, object var_39_object)
	{
		bool var_41_bool;
		@IsOverrideActive(var_41_bool);
		if(!var_41_bool) { //@nz
			disable OnUse;
			bool var_43_bool; object var_44_object;
			var_39_object = var_44_object;
			func_3252(var_43_bool, var_44_object);
			enable OnUse;
			object var_57_object;
			var_39_object = var_57_object;
			func_4352(var_57_object);
		}
	}

}


void OnUnload(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, object var_31_object, object var_32_object, object var_33_object, string var_34_string, bool var_35_bool, float var_36_float, float var_37_float, int var_38_int)
{
}


void func_0(void)
{
	
Label_0:
	@Hold();
	bool var_81_bool;
	func_3272(var_81_bool);
	if(!var_81_bool) goto Label_0; //@nz
}


// @pe
void func_4096(bool var_625_bool)
{
	int var_627_int;
	func_3580(var_627_int, "k6q02");
	if(var_627_int == 2)
		var_625_bool = true;
	var_625_bool = false;
}


void func_3585(int var_199_int, int var_200_int)
{
	object var_202_object;
	@CreateIntVector(var_202_object);
	var_202_object->add(var_199_int);
	var_202_object->add(var_200_int);
	@SendWorldWndMessage(3, var_202_object);
}
EMIT "Stack[-1] = 0";


// @pe
void func_4352(object var_57_object)
{
	var_58_bool = GlobalVars[2];
	if(!var_58_bool) { //@nz
		int var_60_int; object var_61_object;
		var_57_object = var_61_object;
		TaskCall(8);
		func_1583(var_62_object, var_60_int, var_61_object);
		TaskReturn();
		var_273_bool = GlobalVars[2];
		GlobalVars[2] = true;
	}
	bool var_274_bool;
	func_3675(var_274_bool, 2);
	if(var_274_bool != 0) {
		int var_277_int; object var_278_object;
		var_57_object = var_278_object;
		TaskCall(4);
		func_282(var_279_object, var_277_int, var_278_object);
		TaskReturn();
		return 0;
	}
	bool var_435_bool;
	func_3675(var_435_bool, 3);
	if(var_435_bool != 0) {
		int var_437_int; object var_438_object;
		var_57_object = var_438_object;
		TaskCall(6);
		func_1093(var_439_object, var_437_int, var_438_object);
		TaskReturn();
		return 0;
	}
	bool var_506_bool;
	func_3675(var_506_bool, 5);
	if(var_506_bool != 0) {
		int var_508_int; object var_509_object;
		var_57_object = var_509_object;
		TaskCall(10);
		func_1809(var_510_object, var_508_int, var_509_object);
		TaskReturn();
		return 0;
	}
	bool var_583_bool;
	func_3675(var_583_bool, 6);
	if(var_583_bool != 0) {
		int var_585_int; object var_586_object;
		var_57_object = var_586_object;
		TaskCall(12);
		func_2207(var_587_object, var_585_int, var_586_object);
		TaskReturn();
		return 0;
	}
	bool var_659_bool;
	func_3675(var_659_bool, 12);
	if(var_659_bool != 0) {
		int var_661_int; object var_662_object;
		var_57_object = var_662_object;
		TaskCall(14);
		func_2576(var_663_object, var_661_int, var_662_object);
		TaskReturn();
		return 0;
	}
	int var_720_int; object var_721_object;
	var_57_object = var_721_object;
	TaskCall(16);
	func_2835(var_722_object, var_720_int, var_721_object);
	TaskReturn();
}


// @pe
void func_256(string var_174_string, string var_175_string, int var_176_int)
{
	if(var_176_int == 0) {
	} else {
		var_174_string += var_176_int;
	}
	
}


// @pe
void func_3841(void)
{
	@SetVariable("ook3MladVlad1", 1);
}


// @pe
void func_3847(void)
{
	@SetVariable("ook5MladVlad1", 1);
}


void func_264(int var_167_int, string var_168_string)
{
	int var_171_int; bool var_172_bool;
	var_171_int = 0;
	
	for(;;) {
		string var_174_string; string var_175_string; int var_176_int;
		var_168_string = var_175_string;
		var_171_int = var_176_int;
		func_256(var_174_string, var_175_string, var_176_int);
		@HasAnimation(var_172_bool, "all", var_174_string);
		if(!var_172_bool) //@nz
			break;
		var_171_int += 1;
	}
	var_171_int = var_167_int;
}


void func_4108(bool var_390_bool, object var_391_object)
{
	int var_393_int;
	var_391_object->GetItemCountOfType(var_393_int, "alpha_pills");
	if(var_393_int < 4) {
		var_390_bool = false;
		return 2;
	}
	var_391_object->GetItemCountOfType(var_393_int, "beta_pills");
	if(var_393_int < 4) {
		var_390_bool = false;
		return 2;
	}
	var_390_bool = true;
}


void func_13(bool var_0_bool, bool var_122_bool, cvector var_123_cvector, cvector var_124_cvector)
{
	var_0_bool = true;
	@SetTimer(21, 0.5);
	
Label_19:
	for(;;) {
		bool var_130_bool; cvector var_131_cvector;
		var_123_cvector = var_131_cvector;
		func_3242(var_130_bool, var_131_cvector);
		var_140_bool = !var_130_bool; //@nz
		if(var_140_bool == 0) goto Label_26;
	}
	
Label_26:
	bool var_127_bool;
	@MovePoint(var_123_cvector, false, var_127_bool);
	if(var_127_bool != 0) {
	} else {
		goto Label_19;
	}
	@KillTimer(20);
	@KillTimer(21);
	var_0_bool = false;
	@WaitForAnimEnd(var_127_bool);
	if(!var_127_bool) { //@nz
		var_122_bool = false;
		return 2;
	}
	var_146_float = GetByIndex(var_124_cvector, 0);
	var_147_float = GetByIndex(var_124_cvector, 2);
	@Rotate(var_146_float, var_147_float, var_127_bool);
	if(!var_127_bool) { //@nz
		var_122_bool = false;
		return 2;
	}
	var_122_bool = true;
	
}


void func_3597(object var_186_object, int var_187_int)
{
	int var_189_int;
	object var_190_object;
	var_186_object = var_190_object;
	int var_192_int;
	func_3235(var_190_object, "money", var_192_int);
	if(var_192_int > 0) {
		@GetInvItemByName(var_189_int, "Money");
		int var_199_int; int var_200_int;
		var_189_int = var_199_int;
		var_187_int = var_200_int;
		func_3585(var_199_int, var_200_int);
	}
}


// @pe
void func_3853(void)
{
	func_4218();
}


void func_2576(bool var_0_bool, int var_661_int, object var_662_object)
{
	var_0_bool = var_662_object;
	bool var_672_bool; object var_673_object;
	object var_674_object;
	func_3535(var_674_object);
	var_674_object = var_673_object;
	func_3362(var_672_bool, var_673_object);
	bool var_675_bool; object var_676_object;
	var_662_object = var_676_object;
	func_3277(var_675_bool, var_676_object, 70.0);
	if(!var_675_bool) { //@nz
		var_661_int = -2;
		return 8;
	}
	object var_668_object;
	@CreateDialog(var_668_object);
	int var_679_int;
	func_3721(var_679_int);
	var_668_object->SetNPCName(var_679_int);
	int var_680_int;
	func_3719(var_680_int);
	var_668_object->SetNPCDescription(var_680_int);
	string var_681_string;
	func_3723(var_681_string);
	var_668_object->SetPhoto(var_681_string);
	string var_682_string;
	func_3725(var_682_string);
	var_668_object->SetPhoto2(var_682_string);
	int var_683_int;
	func_4335(var_683_int);
	var_668_object->SetPlayerName(var_683_int);
	bool var_669_bool;
	@IsOverrideActive(var_669_bool);
	if(var_669_bool != 0) {
		var_661_int = -2;
		return 8;
	}
	@DoDialog(var_668_object);
	object var_685_object; object var_686_object;
	var_662_object = var_685_object;
	var_668_object = var_686_object;
	TaskCall(15);
	func_2657(var_687_object, var_688_object, var_689_string, var_690_bool, var_685_object, var_686_object);
	TaskReturn();
	bool var_671_bool;
	var_668_object->IsDialogEnd(var_671_bool);
	
	for(;;) {
		var_718_bool = !var_671_bool; //@nz
		if(var_718_bool == 0) goto Label_2646;
		@sync();
		var_668_object->IsDialogEnd(var_671_bool);
	}
	
Label_2646:
	object var_719_object;
	var_662_object = var_719_object;
	func_3345();
	@StopDialog(var_668_object);
	var_668_object->GetReturnValue(-1);
	int var_670_int = var_661_int;
}
EMIT "Stack[-4] = 0";


void func_3345(void)
{
	bool var_268_bool;
	@CameraSwitchToNormal();
	bool var_269_bool;
	func_3727(var_269_bool);
	if(var_269_bool != 0) {
	} else {
		@HasAnimationTrack(var_268_bool, "head");
		if(var_268_bool == 0) goto Label_3361;
		@UnlookAsync("head");
	}
Label_3361:
	
}


// @pe
void func_3858(void)
{
	@SetVariable("k6q02", 3);
	func_4231();
}


void func_1809(bool var_0_bool, int var_508_int, object var_509_object)
{
	var_0_bool = var_509_object;
	bool var_519_bool; object var_520_object;
	object var_521_object;
	func_3535(var_521_object);
	var_521_object = var_520_object;
	func_3362(var_519_bool, var_520_object);
	bool var_522_bool; object var_523_object;
	var_509_object = var_523_object;
	func_3277(var_522_bool, var_523_object, 70.0);
	if(!var_522_bool) { //@nz
		var_508_int = -2;
		return 8;
	}
	object var_515_object;
	@CreateDialog(var_515_object);
	int var_526_int;
	func_3721(var_526_int);
	var_515_object->SetNPCName(var_526_int);
	int var_527_int;
	func_3719(var_527_int);
	var_515_object->SetNPCDescription(var_527_int);
	string var_528_string;
	func_3723(var_528_string);
	var_515_object->SetPhoto(var_528_string);
	string var_529_string;
	func_3725(var_529_string);
	var_515_object->SetPhoto2(var_529_string);
	int var_530_int;
	func_4335(var_530_int);
	var_515_object->SetPlayerName(var_530_int);
	bool var_516_bool;
	@IsOverrideActive(var_516_bool);
	if(var_516_bool != 0) {
		var_508_int = -2;
		return 8;
	}
	@DoDialog(var_515_object);
	object var_532_object; object var_533_object;
	var_509_object = var_532_object;
	var_515_object = var_533_object;
	TaskCall(11);
	func_1890(var_534_object, var_535_object, var_536_string, var_537_bool, var_532_object, var_533_object);
	TaskReturn();
	bool var_518_bool;
	var_515_object->IsDialogEnd(var_518_bool);
	
	for(;;) {
		var_581_bool = !var_518_bool; //@nz
		if(var_581_bool == 0) goto Label_1879;
		@sync();
		var_515_object->IsDialogEnd(var_518_bool);
	}
	
Label_1879:
	object var_582_object;
	var_509_object = var_582_object;
	func_3345();
	@StopDialog(var_515_object);
	var_515_object->GetReturnValue(-1);
	int var_517_int = var_508_int;
}
EMIT "Stack[-4] = 0";


void func_2835(bool var_0_bool, int var_720_int, object var_721_object)
{
	var_0_bool = var_721_object;
	bool var_731_bool; object var_732_object;
	object var_733_object;
	func_3535(var_733_object);
	var_733_object = var_732_object;
	func_3362(var_731_bool, var_732_object);
	bool var_734_bool; object var_735_object;
	var_721_object = var_735_object;
	func_3277(var_734_bool, var_735_object, 70.0);
	if(!var_734_bool) { //@nz
		var_720_int = -2;
		return 8;
	}
	object var_727_object;
	@CreateDialog(var_727_object);
	int var_738_int;
	func_3721(var_738_int);
	var_727_object->SetNPCName(var_738_int);
	int var_739_int;
	func_3719(var_739_int);
	var_727_object->SetNPCDescription(var_739_int);
	string var_740_string;
	func_3723(var_740_string);
	var_727_object->SetPhoto(var_740_string);
	string var_741_string;
	func_3725(var_741_string);
	var_727_object->SetPhoto2(var_741_string);
	int var_742_int;
	func_4335(var_742_int);
	var_727_object->SetPlayerName(var_742_int);
	bool var_728_bool;
	@IsOverrideActive(var_728_bool);
	if(var_728_bool != 0) {
		var_720_int = -2;
		return 8;
	}
	@DoDialog(var_727_object);
	object var_744_object; object var_745_object;
	var_721_object = var_744_object;
	var_727_object = var_745_object;
	TaskCall(17);
	func_2916(var_746_object, var_747_object, var_748_string, var_749_bool, var_744_object, var_745_object);
	TaskReturn();
	bool var_730_bool;
	var_727_object->IsDialogEnd(var_730_bool);
	
	for(;;) {
		var_774_bool = !var_730_bool; //@nz
		if(var_774_bool == 0) goto Label_2905;
		@sync();
		var_727_object->IsDialogEnd(var_730_bool);
	}
	
Label_2905:
	object var_775_object;
	var_721_object = var_775_object;
	func_3345();
	@StopDialog(var_727_object);
	var_727_object->GetReturnValue(-1);
	int var_729_int = var_720_int;
}
EMIT "Stack[-4] = 0";


void func_282(bool var_0_bool, int var_277_int, object var_278_object)
{
	var_0_bool = var_278_object;
	bool var_288_bool; object var_289_object;
	object var_290_object;
	func_3535(var_290_object);
	var_290_object = var_289_object;
	func_3362(var_288_bool, var_289_object);
	bool var_291_bool; object var_292_object;
	var_278_object = var_292_object;
	func_3277(var_291_bool, var_292_object, 70.0);
	if(!var_291_bool) { //@nz
		var_277_int = -2;
		return 8;
	}
	object var_284_object;
	@CreateDialog(var_284_object);
	int var_295_int;
	func_3721(var_295_int);
	var_284_object->SetNPCName(var_295_int);
	int var_296_int;
	func_3719(var_296_int);
	var_284_object->SetNPCDescription(var_296_int);
	string var_297_string;
	func_3723(var_297_string);
	var_284_object->SetPhoto(var_297_string);
	string var_298_string;
	func_3725(var_298_string);
	var_284_object->SetPhoto2(var_298_string);
	int var_299_int;
	func_4335(var_299_int);
	var_284_object->SetPlayerName(var_299_int);
	bool var_285_bool;
	@IsOverrideActive(var_285_bool);
	if(var_285_bool != 0) {
		var_277_int = -2;
		return 8;
	}
	@DoDialog(var_284_object);
	object var_301_object; object var_302_object;
	var_278_object = var_301_object;
	var_284_object = var_302_object;
	TaskCall(5);
	func_363(var_303_object, var_304_object, var_305_string, var_306_bool, var_301_object, var_302_object);
	TaskReturn();
	bool var_287_bool;
	var_284_object->IsDialogEnd(var_287_bool);
	
	for(;;) {
		var_433_bool = !var_287_bool; //@nz
		if(var_433_bool == 0) goto Label_352;
		@sync();
		var_284_object->IsDialogEnd(var_287_bool);
	}
	
Label_352:
	object var_434_object;
	var_278_object = var_434_object;
	func_3345();
	@StopDialog(var_284_object);
	var_284_object->GetReturnValue(-1);
	int var_286_int = var_277_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_3867(object var_276_object)
{
	@Trace("money1000 is given");
	object var_279_object;
	var_276_object = var_279_object;
	func_3597(var_279_object, 1000);
}


void func_4127(void)
{
	object var_137_object;
	@CreateDiaryEntry(var_137_object, 463, 1, 527779);
	bool var_141_bool; object var_142_object;
	var_137_object = var_142_object;
	func_4257(var_141_bool, var_142_object, 461);
}
EMIT "Stack[-1] = 0";


// @pe
void func_3616(bool var_224_bool, object var_225_object, float var_226_float)
{
	if(!var_225_object) { //@nz
		var_224_bool = false;
		return 0;
	}
	if(var_226_float > 0) {
		@SendWorldWndMessage(8);
	} else if(var_226_float < 0) {
			@SendWorldWndMessage(9);
	}
	for(;;) {
		float var_231_float;
		var_226_float = var_231_float;
		func_3651(var_231_float);
		bool var_235_bool; object var_236_object; float var_238_float;
		var_225_object = var_236_object;
		var_226_float = var_238_float;
		func_3213(var_235_bool, var_236_object, "reputation", var_238_float, (float)0, (float)1);
		var_224_bool = true;
		return 0;

	}
	
	var_224_bool = false;
}


void func_3362(bool var_71_bool, object var_72_object)
{
	int var_78_int; int var_79_int;
	@GetVariable("voice_common", var_78_int);
	if(var_78_int != 0) {
		bool var_82_bool; object var_83_object;
		var_72_object = var_83_object;
		func_3420(var_82_bool, var_83_object);
		if(!var_82_bool) { //@nz
			bool var_113_bool; object var_114_object;
			var_72_object = var_114_object;
			func_3457(var_113_bool, var_114_object);
			if(!var_113_bool) { //@nz
				var_71_bool = false;
				return 4;
			}
		}
		@irand(var_79_int, 2);
		if(var_79_int != 0)
			@SetVariable("voice_common", ((var_78_int + 1) % 3));
		else
			@SetVariable("voice_common", 0);
		bool var_158_bool; object var_159_object;
		var_72_object = var_159_object;
		func_3457(var_158_bool, var_159_object);
		if(!var_158_bool) { //@nz
			bool var_161_bool; object var_162_object;
			var_72_object = var_162_object;
			func_3420(var_161_bool, var_162_object);
			if(!var_161_bool) { //@nz
				var_71_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_3418;
	
Label_3418:
	var_71_bool = true;
	
}


// @pe
void func_3877(object var_304_object)
{
	@Trace("money100 is given");
	object var_307_object;
	var_304_object = var_307_object;
	func_3597(var_307_object, 100);
}


void func_4140(void)
{
	object var_66_object;
	@CreateDiaryEntry(var_66_object, 507, 2, 529706);
	bool var_70_bool; object var_71_object;
	var_66_object = var_71_object;
	func_4257(var_70_bool, var_71_object, -1);
}
EMIT "Stack[-1] = 0";


// @pe
void func_559(object var_2_object, string var_328_string)
{
	bool var_329_bool;
	func_3727(var_329_bool);
	if(!var_329_bool) //@nz
		return 0;
	if(var_328_string == var_2_object)
		return 0;
	string var_332_string; bool var_333_bool;
	var_328_string = var_332_string;
	if(var_328_string == "")
		var_333_bool = false;
	else
		var_333_bool = true;
	func_3507(var_332_string, var_333_bool);
	var_2_object = var_328_string;
	
}


void func_1583(bool var_0_bool, int var_60_int, object var_61_object)
{
	var_0_bool = var_61_object;
	bool var_71_bool; object var_72_object;
	object var_73_object;
	func_3535(var_73_object);
	var_73_object = var_72_object;
	func_3362(var_71_bool, var_72_object);
	bool var_166_bool; object var_167_object;
	var_61_object = var_167_object;
	func_3277(var_166_bool, var_167_object, 70.0);
	if(!var_166_bool) { //@nz
		var_60_int = -2;
		return 8;
	}
	object var_67_object;
	@CreateDialog(var_67_object);
	int var_213_int;
	func_3721(var_213_int);
	var_67_object->SetNPCName(var_213_int);
	int var_214_int;
	func_3719(var_214_int);
	var_67_object->SetNPCDescription(var_214_int);
	string var_215_string;
	func_3723(var_215_string);
	var_67_object->SetPhoto(var_215_string);
	string var_216_string;
	func_3725(var_216_string);
	var_67_object->SetPhoto2(var_216_string);
	int var_217_int;
	func_4335(var_217_int);
	var_67_object->SetPlayerName(var_217_int);
	bool var_68_bool;
	@IsOverrideActive(var_68_bool);
	if(var_68_bool != 0) {
		var_60_int = -2;
		return 8;
	}
	@DoDialog(var_67_object);
	object var_226_object; object var_227_object;
	var_61_object = var_226_object;
	var_67_object = var_227_object;
	TaskCall(9);
	func_1664(var_228_object, var_229_object, var_230_string, var_231_bool, var_226_object, var_227_object);
	TaskReturn();
	bool var_70_bool;
	var_67_object->IsDialogEnd(var_70_bool);
	
	for(;;) {
		var_265_bool = !var_70_bool; //@nz
		if(var_265_bool == 0) goto Label_1653;
		@sync();
		var_67_object->IsDialogEnd(var_70_bool);
	}
	
Label_1653:
	object var_266_object;
	var_61_object = var_266_object;
	func_3345();
	@StopDialog(var_67_object);
	var_67_object->GetReturnValue(-1);
	int var_69_int = var_60_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_3887(object var_183_object)
{
	@Trace("money500 is given");
	object var_186_object;
	var_183_object = var_186_object;
	func_3597(var_186_object, 500);
}


void func_4153(void)
{
	object var_172_object;
	@CreateDiaryEntry(var_172_object, 513, 2, 529712);
	bool var_176_bool; object var_177_object;
	var_172_object = var_177_object;
	func_4257(var_176_bool, var_177_object, 507);
}
EMIT "Stack[-1] = 0";


// @pe
void func_3897(void)
{
	@TriggerWorld("playsound", "givemoney");
}


void func_3133(void)
{
	string var_64_string;
	@GetProperty("loc", var_64_string);
	var_66_string = GlobalVars[0];
	var_64_string = var_66_string;
	GlobalVars[0] = var_66_string;
}


// @pe
void func_2366(object var_2_object, string var_616_string)
{
	bool var_617_bool;
	func_3727(var_617_bool);
	if(!var_617_bool) //@nz
		return 0;
	if(var_616_string == var_2_object)
		return 0;
	string var_620_string; bool var_621_bool;
	var_616_string = var_620_string;
	if(var_616_string == "")
		var_621_bool = false;
	else
		var_621_bool = true;
	func_3507(var_620_string, var_621_bool);
	var_2_object = var_616_string;
	
}


// @pe
void func_3903(object var_97_object)
{
	object var_101_object;
	func_4285(var_101_object);
	object var_98_object;
	var_101_object = var_98_object;
	func_4302(var_98_object, "pt_map_anna", (float)2);
	object var_121_object;
	func_4285(var_121_object);
	var_97_object->ShowMap(var_121_object);
}


void func_3651(float var_231_float)
{
	object var_233_object;
	@CreateFloatVector(var_233_object);
	var_233_object->add(var_231_float);
	@SendWorldWndMessage(16, var_233_object);
}
EMIT "Stack[-1] = 0";


void func_3141(bool var_0_bool, object var_1_object)
{
	cvector var_85_cvector;
	@GetAnimationOffset(var_85_cvector, "all", "walk_stopl");
	cvector var_86_cvector;
	@GetAnimationOffset(var_86_cvector, "all", "walk_stopr");
	var_91_float = GetByIndex(var_85_cvector, 2);
	var_92_float = GetByIndex(var_86_cvector, 2);
	float var_95_float;
	var_97_float = GetByIndex(var_85_cvector, 2);
	func_3551(var_95_float, (var_97_float - ((var_91_float + var_92_float) / 2.0)));
	var_1_object = var_95_float + 40;
}


void func_4166(void)
{
	object var_215_object;
	@CreateDiaryEntry(var_215_object, 514, 2, 529713);
	bool var_219_bool; object var_220_object;
	var_215_object = var_220_object;
	func_4257(var_219_bool, var_220_object, 507);
}
EMIT "Stack[-1] = 0";


void func_1093(bool var_0_bool, int var_437_int, object var_438_object)
{
	var_0_bool = var_438_object;
	bool var_448_bool; object var_449_object;
	object var_450_object;
	func_3535(var_450_object);
	var_450_object = var_449_object;
	func_3362(var_448_bool, var_449_object);
	bool var_451_bool; object var_452_object;
	var_438_object = var_452_object;
	func_3277(var_451_bool, var_452_object, 70.0);
	if(!var_451_bool) { //@nz
		var_437_int = -2;
		return 8;
	}
	object var_444_object;
	@CreateDialog(var_444_object);
	int var_455_int;
	func_3721(var_455_int);
	var_444_object->SetNPCName(var_455_int);
	int var_456_int;
	func_3719(var_456_int);
	var_444_object->SetNPCDescription(var_456_int);
	string var_457_string;
	func_3723(var_457_string);
	var_444_object->SetPhoto(var_457_string);
	string var_458_string;
	func_3725(var_458_string);
	var_444_object->SetPhoto2(var_458_string);
	int var_459_int;
	func_4335(var_459_int);
	var_444_object->SetPlayerName(var_459_int);
	bool var_445_bool;
	@IsOverrideActive(var_445_bool);
	if(var_445_bool != 0) {
		var_437_int = -2;
		return 8;
	}
	@DoDialog(var_444_object);
	object var_461_object; object var_462_object;
	var_438_object = var_461_object;
	var_444_object = var_462_object;
	TaskCall(7);
	func_1174(var_463_object, var_464_object, var_465_string, var_466_bool, var_461_object, var_462_object);
	TaskReturn();
	bool var_447_bool;
	var_444_object->IsDialogEnd(var_447_bool);
	
	for(;;) {
		var_504_bool = !var_447_bool; //@nz
		if(var_504_bool == 0) goto Label_1163;
		@sync();
		var_444_object->IsDialogEnd(var_447_bool);
	}
	
Label_1163:
	object var_505_object;
	var_438_object = var_505_object;
	func_3345();
	@StopDialog(var_444_object);
	var_444_object->GetReturnValue(-1);
	int var_446_int = var_437_int;
}
EMIT "Stack[-4] = 0";


void func_3661(float var_62_float)
{
	float var_64_float;
	@GetGameTime(var_64_float);
	var_64_float = var_62_float;
}


// @pe
void func_3919(object var_145_object)
{
	object var_149_object;
	func_4285(var_149_object);
	object var_146_object;
	var_149_object = var_146_object;
	func_4302(var_146_object, "pt_map_bigvlad", (float)2);
	object var_150_object;
	func_4285(var_150_object);
	var_145_object->ShowMap(var_150_object);
}


void func_3666(int var_126_int)
{
	float var_128_float;
	@GetGameTime(var_128_float);
	var_126_int = 1 + (var_128_float / 24);
}


void func_4179(void)
{
	object var_269_object;
	@CreateDiaryEntry(var_269_object, 515, 2, 529714);
	bool var_273_bool; object var_274_object;
	var_269_object = var_274_object;
	func_4257(var_273_bool, var_274_object, 507);
}
EMIT "Stack[-1] = 0";


// @pe
void func_3675(bool var_274_bool, int var_275_int)
{
	int var_276_int;
	func_3666(var_276_int);
	var_274_bool = var_276_int == var_275_int;
}


void func_3420(bool var_82_bool, object var_83_object)
{
	string var_89_string; bool var_91_bool; int var_92_int; string var_93_string;
	var_89_string = "c";
	int var_90_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_83_object->HasProperty((var_89_string + (var_90_int + 1)), var_91_bool);
			if(!var_91_bool) { //@nz
			} else {
				var_90_int += 1;
			}
		}
		if(!var_90_int) { //@nz
			var_82_bool = false;
			return 10;
		}
		var_92_int = 0;
		if(var_90_int > 1)
			@irand(var_92_int, var_90_int);
		var_83_object->GetProperty((var_89_string + (var_92_int + 1)), var_93_string);
		bool var_105_bool; string var_106_string;
		var_93_string = var_106_string;
		func_3513(var_105_bool, var_106_string);
		var_105_bool = var_82_bool;
		return 10;

	}
}


// @pe
void func_3935(object var_281_object)
{
	object var_284_object;
	var_281_object = var_284_object;
	bool var_283_bool;
	func_3616(var_283_bool, var_284_object, 0.1);
}


void func_4192(void)
{
	object var_295_object;
	@CreateDiaryEntry(var_295_object, 516, 2, 529715);
	bool var_299_bool; object var_300_object;
	var_295_object = var_300_object;
	func_4257(var_299_bool, var_300_object, 507);
}
EMIT "Stack[-1] = 0";


void func_3681(string var_191_string, int var_192_int)
{
	string var_194_string = "idle";
	if(var_192_int != 0)
		var_194_string += var_192_int;
	var_194_string = var_191_string;
}


// @pe
void func_2657(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_685_object, object var_686_object)
{
	var_0_bool = var_686_object;
	var_1_object = var_685_object;
	var_3_object = false;
	if(1 != 0) {
		func_2720(var_686_object, "Neutral");
		var_0_bool->SetMessage(535231); //@t
		var_0_bool->ClearReplies(); //@t
		var_0_bool->AddReply(535232, 36953, 36907); //@t
		var_0_bool->AddReply(535233, -1, 36908); //@t
		var_0_bool->AddReply(535280, -1, 36956); //@t
		goto Label_2690;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xa65";
	}
Label_2690:
	bool var_710_bool;
	func_3727(var_710_bool);
	if(var_710_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_3500(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_2719;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_2719:
		return 0;

	}
	
}


// @pe
void func_1890(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_532_object, object var_533_object)
{
	var_0_bool = var_533_object;
	var_1_object = var_532_object;
	var_3_object = false;
	if(1 != 0) {
		func_1972(var_533_object, "Neutral");
		var_0_bool->SetMessage(525841); //@t
		var_0_bool->ClearReplies(); //@t
		bool var_548_bool = false;
		bool var_549_bool;
		func_4060(var_1_object);
		if(var_549_bool != 0) {
			bool var_555_bool;
			func_4072(var_1_object);
			if(var_555_bool != 0)
				var_548_bool = true;
		}
		if(var_548_bool != 0)
			var_0_bool->AddReply(525842, 30544, 27141); //@t
		var_0_bool->AddReply(525845, 30542, 27144); //@t
		var_0_bool->AddReply(529095, -1, 30540); //@t
		var_0_bool->AddReply(529096, -1, 30541); //@t
		goto Label_1942;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x766";
	}
Label_1942:
	bool var_573_bool;
	func_3727(var_573_bool);
	if(var_573_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_3500(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_1971;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_1971:
		return 0;

	}
	
}


// @pe
void func_2916(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_744_object, object var_745_object)
{
	var_0_bool = var_745_object;
	var_1_object = var_744_object;
	var_3_object = false;
	if(1 != 0) {
		func_2974(var_745_object, "Neutral");
		var_0_bool->SetMessage(540545); //@t
		var_0_bool->ClearReplies(); //@t
		var_0_bool->AddReply(540546, -1, 42555); //@t
		var_0_bool->AddReply(540798, -1, 42847); //@t
		goto Label_2944;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xb68";
	}
Label_2944:
	bool var_766_bool;
	func_3727(var_766_bool);
	if(var_766_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_3500(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_2973;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_2973:
		return 0;

	}
	
}


// @pe
void func_3942(bool var_317_bool)
{
	int var_319_int;
	func_3580(var_319_int, "k2q01");
	if(var_319_int == 1)
		var_317_bool = true;
	var_317_bool = false;
}


void func_3688(int var_185_int)
{
	int var_188_int; bool var_189_bool;
	var_188_int = 0;
	
	for(;;) {
		string var_191_string; int var_192_int;
		var_188_int = var_192_int;
		func_3681(var_191_string, var_192_int);
		@HasAnimation(var_189_bool, "all", var_191_string);
		if(!var_189_bool) //@nz
			break;
		var_188_int += 1;
	}
	var_188_int = var_185_int;
}


// @pe
void func_363(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_301_object, object var_302_object)
{
	var_0_bool = var_302_object;
	var_1_object = var_301_object;
	var_3_object = false;
	if(1 != 0) {
		bool var_308_bool = false;
		bool var_309_bool;
		func_3954(var_1_object);
		if(var_309_bool != 0) {
			bool var_317_bool;
			func_3942(var_1_object);
			if(!var_317_bool) //@nz
				var_308_bool = true;
		}
		if(var_308_bool != 0) {
			object var_324_object; object var_325_object;
			var_324_object = var_1_object;
			var_325_object = var_0_bool;
			func_3759();
			func_559(var_302_object, "Neutral");
			var_0_bool->SetMessage(525337); //@t
			var_0_bool->ClearReplies(); //@t
			var_0_bool->AddReply(525338, 26707, 26706); //@t
			var_0_bool->AddReply(539465, -1, 41388); //@t
		} else {
					func_559(var_302_object, "Neutral");
					var_0_bool->SetMessage(525237); //@t
					var_0_bool->ClearReplies(); //@t
					bool var_353_bool;
					func_3942(var_1_object);
					if(var_353_bool != 0)
						var_0_bool->AddReply(525238, 26607, 26606); //@t
					bool var_358_bool = false;
					bool var_359_bool;
					func_3966(var_1_object);
					if(var_359_bool != 0) {
						bool var_365_bool;
						func_3954(var_1_object);
						if(!var_365_bool) //@nz
							var_358_bool = true;
					}
					if(var_358_bool != 0)
						var_0_bool->AddReply(525342, 26711, 26710); //@t
					bool var_371_bool = false;
					bool var_372_bool;
					func_3978(var_1_object);
					if(var_372_bool != 0) {
						bool var_378_bool;
						func_4012(var_1_object);
						if(var_378_bool != 0)
							var_371_bool = true;
					}
					if(var_371_bool != 0)
						var_0_bool->AddReply(525372, 26741, 26740); //@t
					bool var_387_bool = false;
					bool var_388_bool;
					func_4002(var_388_bool, var_1_object);
					if(var_388_bool != 0) {
						bool var_400_bool;
						func_4024(var_1_object);
						if(var_400_bool != 0)
							var_387_bool = true;
					}
					if(var_387_bool != 0)
						var_0_bool->AddReply(525369, 26738, 26737); //@t
					bool var_409_bool = false;
					bool var_410_bool;
					func_4002(var_410_bool, var_1_object);
					if(!var_410_bool) { //@nz
						bool var_413_bool;
						func_4024(var_1_object);
						if(var_413_bool != 0)
							var_409_bool = true;
					}
					if(var_409_bool != 0)
						var_0_bool->AddReply(525381, 26750, 26749); //@t
					bool var_418_bool;
					func_3990(var_1_object);
					if(var_418_bool != 0)
						var_0_bool->AddReply(525375, 26744, 26743); //@t
					var_0_bool->AddReply(525243, -1, 26611); //@t
					var_0_bool->AddReply(529207, -1, 30658); //@t
		}
	}
	for(;;) {
		bool var_343_bool;
		func_3727(var_343_bool);
		if(var_343_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_object != 0) {
				} else {
					func_3500(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_object != 0) {
					goto Label_558;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_558:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x16f";


void func_4205(void)
{
	object var_89_object;
	@CreateDiaryEntry(var_89_object, 508, 2, 529707);
	bool var_93_bool; object var_94_object;
	var_89_object = var_94_object;
	func_4257(var_93_bool, var_94_object, 507);
}
EMIT "Stack[-1] = 0";


// @pe
void func_3954(bool var_309_bool)
{
	int var_311_int;
	func_3580(var_311_int, "ook2MladVlad1");
	if(var_311_int == 0) {
		var_309_bool = true;
		return 0;
	}
	var_309_bool = false;
}


void func_3188(cvector var_103_cvector)
{
	cvector var_105_cvector;
	@GetPosition(var_105_cvector);
	var_105_cvector = var_103_cvector;
}


// @pe
void func_3705(string var_67_string, int var_68_int)
{
	if(var_68_int == 0) {
		var_72_string = GlobalVars[0];
		var_67_string = "pt_" + var_72_string;
	} else {
		var_74_string = GlobalVars[0];
		var_67_string = ("pt_" + var_74_string) + var_68_int;
	}
	
}


void func_3193(float var_51_float, object var_52_object)
{
	cvector var_56_cvector;
	@GetPosition(var_56_cvector);
	cvector var_57_cvector;
	var_52_object->GetPosition(var_57_cvector);
	var_51_float = (var_57_cvector - var_56_cvector) | (var_57_cvector - var_56_cvector);
}


void func_4218(void)
{
	object var_54_object;
	@CreateDiaryEntry(var_54_object, 392, 1, 525885);
	bool var_58_bool; object var_59_object;
	var_54_object = var_59_object;
	func_4257(var_58_bool, var_59_object, 390);
}
EMIT "Stack[-1] = 0";


// @pe
void func_3966(bool var_359_bool)
{
	int var_361_int;
	func_3580(var_361_int, "k2q04");
	if(var_361_int == 0) {
		var_359_bool = true;
		return 0;
	}
	var_359_bool = false;
}


// @pe
void func_1664(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_226_object, object var_227_object)
{
	var_0_bool = var_227_object;
	var_1_object = var_226_object;
	var_3_object = false;
	if(1 != 0) {
		func_1722(var_227_object, "Neutral");
		var_0_bool->SetMessage(525513); //@t
		var_0_bool->ClearReplies(); //@t
		var_0_bool->AddReply(525514, 30738, 26870); //@t
		var_0_bool->AddReply(529284, 30738, 30737); //@t
		goto Label_1692;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x684";
	}
Label_1692:
	bool var_252_bool;
	func_3727(var_252_bool);
	if(var_252_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_3500(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_1721;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_1721:
		return 0;

	}
	
}


void func_3201(bool var_243_bool, object var_244_object, string var_245_string)
{
	var_250_bool = IsFuncExist(var_244_object, "HasProperty", 2);
	if(!var_250_bool) { //@nz
		var_243_bool = false;
		return 2;
	}
	bool var_247_bool;
	var_244_object->HasProperty(var_245_string, var_247_bool);
	var_247_bool = var_243_bool;
}


void func_3457(bool var_113_bool, object var_114_object)
{
	bool var_122_bool; int var_123_int; string var_124_string;
	int var_126_int;
	func_3666(var_126_int);
	string var_120_string = ("d" + var_126_int) + "m";
	int var_121_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_114_object->HasProperty((var_120_string + (var_121_int + 1)), var_122_bool);
			if(!var_122_bool) { //@nz
			} else {
				var_121_int += 1;
			}
		}
		if(!var_121_int) { //@nz
			var_113_bool = false;
			return 10;
		}
		var_123_int = 0;
		if(var_121_int > 1)
			@irand(var_123_int, var_121_int);
		var_114_object->GetProperty((var_120_string + (var_123_int + 1)), var_124_string);
		bool var_145_bool; string var_146_string;
		var_124_string = var_146_string;
		func_3513(var_145_bool, var_146_string);
		var_145_bool = var_113_bool;
		return 10;

	}
}


void func_3719(int var_214_int)
{
	var_214_int = 515547;
}


void func_4231(void)
{
	object var_50_object;
	@CreateDiaryEntry(var_50_object, 503, 2, 528769);
	bool var_54_bool; object var_55_object;
	var_50_object = var_55_object;
	func_4257(var_54_bool, var_55_object, 500);
}
EMIT "Stack[-1] = 0";


void func_3721(int var_213_int)
{
	var_213_int = 502872;
}


// @pe
void func_3978(bool var_372_bool)
{
	int var_374_int;
	func_3580(var_374_int, "k2q04");
	if(var_374_int == 2)
		var_372_bool = true;
	var_372_bool = false;
}


void func_3723(string var_215_string)
{
	var_215_string = "ui/NPC_MladVlad.png";
}


void func_3725(string var_216_string)
{
	var_216_string = "ui/NPC_MladVlad_b.png";
}


void func_3213(bool var_235_bool, object var_236_object, string var_237_string, float var_238_float, float var_239_float, float var_240_float)
{
	object var_244_object;
	var_236_object = var_244_object;
	string var_245_string;
	var_237_string = var_245_string;
	bool var_243_bool;
	func_3201(var_243_bool, var_244_object, var_245_string);
	if(!var_243_bool) //@nz
		var_235_bool = false;
	float var_242_float;
	var_236_object->GetProperty(var_237_string, var_242_float);
	float var_253_float; float var_255_float; float var_256_float;
	var_239_float = var_255_float;
	var_240_float = var_256_float;
	func_3559(var_253_float, (var_242_float + var_238_float), var_255_float, var_256_float);
	var_236_object->SetProperty(var_237_string, var_253_float);
	var_235_bool = true;
}


void func_3727(bool var_109_bool)
{
	var_109_bool = true;
}


void func_145(void)
{
	@Stop();
}


// @pe
void func_3729(object var_222_object)
{
	object var_225_object;
	var_222_object = var_225_object;
	bool var_224_bool;
	func_3616(var_224_bool, var_225_object, -0.05);
}


void func_148(object var_65_object)
{
	bool var_67_bool;
	@WaitForAnimEnd(var_67_bool);
	if(!var_67_bool) { //@nz
	}
	object var_69_object;
	var_65_object = var_69_object;
	func_3261(var_69_object);
	@Sleep(6);
}


void func_4244(object var_63_object)
{
	object var_65_object;
	@GetDiaryRoot(var_65_object);
	if(!var_65_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_63_object = false;
	}
	var_65_object = var_63_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_1174(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_461_object, object var_462_object)
{
	var_0_bool = var_462_object;
	var_1_object = var_461_object;
	var_3_object = false;
	if(1 != 0) {
		func_1246(var_462_object, "Neutral");
		var_0_bool->SetMessage(525414); //@t
		var_0_bool->ClearReplies(); //@t
		bool var_477_bool = false;
		bool var_478_bool;
		func_4036(var_1_object);
		if(var_478_bool != 0) {
			bool var_484_bool;
			func_4048(var_1_object);
			if(var_484_bool != 0)
				var_477_bool = true;
		}
		if(var_477_bool != 0)
			var_0_bool->AddReply(525415, 42567, 26783); //@t
		var_0_bool->AddReply(525418, -1, 26786); //@t
		goto Label_1216;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x49a";
	}
Label_1216:
	bool var_496_bool;
	func_3727(var_496_bool);
	if(var_496_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_3500(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_1245;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_1245:
		return 0;

	}
	
}


// @pe
void func_3990(bool var_418_bool)
{
	int var_420_int;
	func_3580(var_420_int, "k2q04");
	if(var_420_int == 3)
		var_418_bool = true;
	var_418_bool = false;
}


void func_3736(void)
{
	@SetVariable("k2q01", 2);
	object var_130_object;
	func_4285(var_130_object);
	object var_127_object;
	var_130_object = var_127_object;
	float var_135_float;
	func_3661(var_135_float);
	var_127_object->AddMark("k2q01MladVladGotoBigVlad", "pt_map_bigvlad", 1, 539374, var_135_float);
	func_4127();
}
EMIT "Stack[-1] = 0";


// @pe
void func_2974(object var_2_object, string var_751_string)
{
	bool var_752_bool;
	func_3727(var_752_bool);
	if(!var_752_bool) //@nz
		return 0;
	if(var_751_string == var_2_object)
		return 0;
	string var_755_string; bool var_756_bool;
	var_751_string = var_755_string;
	if(var_751_string == "")
		var_756_bool = false;
	else
		var_756_bool = true;
	func_3507(var_755_string, var_756_bool);
	var_2_object = var_751_string;
	
}


void func_2207(bool var_0_bool, int var_585_int, object var_586_object)
{
	var_0_bool = var_586_object;
	bool var_596_bool; object var_597_object;
	object var_598_object;
	func_3535(var_598_object);
	var_598_object = var_597_object;
	func_3362(var_596_bool, var_597_object);
	bool var_599_bool; object var_600_object;
	var_586_object = var_600_object;
	func_3277(var_599_bool, var_600_object, 70.0);
	if(!var_599_bool) { //@nz
		var_585_int = -2;
		return 8;
	}
	object var_592_object;
	@CreateDialog(var_592_object);
	int var_603_int;
	func_3721(var_603_int);
	var_592_object->SetNPCName(var_603_int);
	int var_604_int;
	func_3719(var_604_int);
	var_592_object->SetNPCDescription(var_604_int);
	string var_605_string;
	func_3723(var_605_string);
	var_592_object->SetPhoto(var_605_string);
	string var_606_string;
	func_3725(var_606_string);
	var_592_object->SetPhoto2(var_606_string);
	int var_607_int;
	func_4335(var_607_int);
	var_592_object->SetPlayerName(var_607_int);
	bool var_593_bool;
	@IsOverrideActive(var_593_bool);
	if(var_593_bool != 0) {
		var_585_int = -2;
		return 8;
	}
	@DoDialog(var_592_object);
	object var_609_object; object var_610_object;
	var_586_object = var_609_object;
	var_592_object = var_610_object;
	TaskCall(13);
	func_2288(var_611_object, var_612_object, var_613_string, var_614_bool, var_609_object, var_610_object);
	TaskReturn();
	bool var_595_bool;
	var_592_object->IsDialogEnd(var_595_bool);
	
	for(;;) {
		var_657_bool = !var_595_bool; //@nz
		if(var_657_bool == 0) goto Label_2277;
		@sync();
		var_592_object->IsDialogEnd(var_595_bool);
	}
	
Label_2277:
	object var_658_object;
	var_586_object = var_658_object;
	func_3345();
	@StopDialog(var_592_object);
	var_592_object->GetReturnValue(-1);
	int var_594_int = var_585_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_2720(object var_2_object, string var_692_string)
{
	bool var_693_bool;
	func_3727(var_693_bool);
	if(!var_693_bool) //@nz
		return 0;
	if(var_692_string == var_2_object)
		return 0;
	string var_696_string; bool var_697_bool;
	var_692_string = var_696_string;
	if(var_692_string == "")
		var_697_bool = false;
	else
		var_697_bool = true;
	func_3507(var_696_string, var_697_bool);
	var_2_object = var_692_string;
	
}


void func_4257(bool var_54_bool, object var_55_object, int var_56_int)
{
	object var_63_object;
	func_4244(var_63_object);
	object var_60_object;
	var_63_object = var_60_object;
	object var_61_object;
	var_60_object->Find(var_56_int, var_61_object);
	if(!var_61_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_56_int);
		var_54_bool = false;
	}
	var_61_object->AddChild(var_55_object);
	@SendWorldWndMessage(7);
	int var_62_int;
	var_55_object->GetCategory(var_62_int);
	@SetDiarySection(var_62_int);
	var_54_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


// @pe
void func_4002(bool var_388_bool, object var_389_object)
{
	object var_391_object;
	var_389_object = var_391_object;
	bool var_390_bool;
	func_4108(var_390_bool, var_391_object);
	if(var_390_bool != 0) {
		var_388_bool = true;
		return 0;
	}
	var_388_bool = false;
}


void func_3235(object var_190_object, string var_191_string, int var_192_int)
{
	int var_194_int;
	var_190_object->GetProperty(var_191_string, var_194_int);
	var_190_object->SetProperty(var_191_string, (var_194_int + var_192_int));
}


void func_3242(bool var_130_bool, cvector var_131_cvector)
{
	cvector var_135_cvector;
	@GetPosition(var_135_cvector);
	cvector var_136_cvector = var_131_cvector - var_135_cvector;
	var_138_float = GetByIndex(var_136_cvector, 0);
	var_139_float = GetByIndex(var_136_cvector, 2);
	bool var_137_bool;
	@Rotate(var_138_float, var_139_float, var_137_bool);
	var_137_bool = var_130_bool;
}


// @pe
void func_4012(bool var_378_bool)
{
	int var_380_int;
	func_3580(var_380_int, "ook2MladVlad2");
	if(var_380_int == 0) {
		var_378_bool = true;
		return 0;
	}
	var_378_bool = false;
}


void func_3500(string var_254_string)
{
	float var_257_float; float var_258_float;
	@lshGetAnimTimes(var_254_string, var_257_float, var_258_float);
	@lshPlayAnimation(var_257_float, var_258_float, false);
}


// @pe
void func_3759(void)
{
	@SetVariable("ook2MladVlad1", 1);
}


void func_3507(string var_237_string, bool var_238_bool)
{
	float var_243_float; float var_244_float;
	@lshGetAnimTimes(var_237_string, var_243_float, var_244_float);
	@lshPlayAnimation(var_243_float, var_244_float, var_238_bool);
}


void func_3252(bool var_43_bool, object var_44_object)
{
	cvector var_46_cvector;
	var_44_object->GetPosition(var_46_cvector);
	bool var_47_bool; cvector var_48_cvector;
	var_46_cvector = var_48_cvector;
	func_3242(var_47_bool, var_48_cvector);
	var_47_bool = var_43_bool;
}


void func_3765(void)
{
	@SetVariable("k2q04", 1);
	object var_51_object;
	func_4285(var_51_object);
	object var_48_object;
	var_51_object = var_48_object;
	float var_62_float;
	func_3661(var_62_float);
	var_48_object->AddMark("k2q04MladVladGotoAnna", "pt_map_anna", 0, 508645, var_62_float);
	func_4140();
	func_4205();
}
EMIT "Stack[-1] = 0";


// @pe
void func_1972(object var_2_object, string var_539_string)
{
	bool var_540_bool;
	func_3727(var_540_bool);
	if(!var_540_bool) //@nz
		return 0;
	if(var_539_string == var_2_object)
		return 0;
	string var_543_string; bool var_544_bool;
	var_539_string = var_543_string;
	if(var_539_string == "")
		var_544_bool = false;
	else
		var_544_bool = true;
	func_3507(var_543_string, var_544_bool);
	var_2_object = var_539_string;
	
}


// @pe
void func_4024(bool var_400_bool)
{
	int var_402_int;
	func_3580(var_402_int, "k2q04");
	if(var_402_int == 9)
		var_400_bool = true;
	var_400_bool = false;
}


void func_3513(bool var_105_bool, string var_106_string)
{
	bool var_108_bool;
	bool var_109_bool;
	func_3727(var_109_bool);
	if(var_109_bool != 0) {
		@lshHasSpeech(var_108_bool, var_106_string);
		if(var_108_bool != 0) {
			@lshPlaySpeech(var_106_string);
			var_105_bool = true;
		}
	}
	var_105_bool = false;
}


// @pe
void func_1722(object var_2_object, string var_233_string)
{
	bool var_234_bool;
	func_3727(var_234_bool);
	if(!var_234_bool) //@nz
		return 0;
	if(var_233_string == var_2_object)
		return 0;
	string var_237_string; bool var_238_bool;
	var_233_string = var_237_string;
	if(var_233_string == "")
		var_238_bool = false;
	else
		var_238_bool = true;
	func_3507(var_237_string, var_238_bool);
	var_2_object = var_233_string;
	
}


void func_3261(object var_69_object)
{
	cvector var_73_cvector;
	var_69_object->GetPosition(var_73_cvector);
	cvector var_74_cvector;
	@GetPosition(var_74_cvector);
	cvector var_75_cvector = var_73_cvector - var_74_cvector;
	var_76_float = GetByIndex(var_75_cvector, 0);
	var_77_float = GetByIndex(var_75_cvector, 2);
	@RotateAsync(var_76_float, var_77_float);
}


void func_4285(object var_51_object)
{
	object var_54_object; object var_55_object;
	@GetMainOutdoorScene(var_54_object);
	if(var_54_object == null) {
		@Trace("Can't find main outdoor scene");
		var_55_object = null;
		var_55_object = var_51_object;
	}
	var_54_object->GetMap(var_55_object);
	var_55_object = var_51_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_193(void)
{
	@StopGroup0();
	@StopAnimation();
}


// @pe
void func_4036(bool var_478_bool)
{
	int var_480_int;
	func_3580(var_480_int, "k3q01");
	if(var_480_int == 2)
		var_478_bool = true;
	var_478_bool = false;
}


void func_198(int var_149_int)
{
	string var_157_string; string var_159_string; int var_160_int; int var_161_int; int var_162_int; int var_163_int;
	if(var_149_int != 0)
		var_157_string = "ptidle" + var_149_int;
	else
		var_157_string = "ptidle";
	bool var_158_bool;
	@HasProperty(var_157_string, var_158_bool);
	if(var_158_bool != 0) {
		@GetProperty(var_157_string, var_159_string);
		int var_167_int; string var_168_string;
		var_159_string = var_168_string;
		func_264(var_167_int, var_168_string);
		var_167_int = var_160_int;
		@irand(var_161_int, var_160_int);
		string var_182_string; string var_183_string; int var_184_int;
		var_159_string = var_183_string;
		var_161_int = var_184_int;
		func_256(var_182_string, var_183_string, var_184_int);
		@PlayAnimation("all", var_182_string);
		@WaitForAnimEnd();
	} else {
		int var_185_int;
		func_3688(var_185_int);
		var_185_int = var_162_int;
		if(var_162_int == 0) goto Label_246;
		@irand(var_163_int, var_162_int);
		string var_200_string; int var_201_int;
		var_163_int = var_201_int;
		func_3681(var_200_string, var_201_int);
		@PlayAnimation("all", var_200_string);
		@WaitForAnimEnd();

	}
Label_246:
	
}


void func_3272(bool var_77_bool)
{
	bool var_79_bool;
	@IsLoaded(var_79_bool);
	var_79_bool = var_77_bool;
}


void func_3528(void)
{
	bool var_42_bool;
	func_3727(var_42_bool);
	if(var_42_bool != 0)
		@lshStopSpeech();
}


void func_3277(bool var_166_bool, object var_167_object, float var_168_float)
{
	cvector var_179_cvector; bool var_186_bool;
	var_167_object->GetPosition(var_179_cvector);
	float var_178_float;
	var_167_object->GetEyesHeight(var_178_float);
	var_187_float = GetByIndex(var_179_cvector, 1);
	SetByIndex(var_179_cvector, 1) = (var_187_float + var_178_float);
	cvector var_180_cvector;
	@GetPosition(var_180_cvector);
	@GetEyesHeight(var_178_float);
	var_188_float = GetByIndex(var_180_cvector, 1);
	SetByIndex(var_180_cvector, 1) = (var_188_float + var_178_float);
	cvector var_181_cvector = var_179_cvector - var_180_cvector;
	var_189_float = GetByIndex(var_181_cvector, 1);
	SetByIndex(var_181_cvector, 1) = (float)0;
	var_191_float = sqrt(var_181_cvector | var_181_cvector);
	var_181_cvector /= var_191_float;
	cvector var_182_cvector = -var_181_cvector;
	cvector var_193_cvector;
	func_3541(var_193_cvector, (var_182_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_183_cvector = ((var_181_cvector * var_168_float) + (var_193_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_185_bool;
	@IsOverrideActive(var_185_bool);
	if(var_185_bool != 0)
		var_166_bool = false;
	@StopWorld();
	@CameraTransit((var_180_cvector + var_183_cvector), var_182_cvector);
	var_206_float = GetByIndex(var_183_cvector, 0);
	var_207_float = GetByIndex(var_183_cvector, 2);
	@Rotate(var_206_float, var_207_float);
	bool var_208_bool;
	func_3727(var_208_bool);
	if(var_208_bool != 0) {
	} else {
		@HasAnimationTrack(var_186_bool, "head");
		if(var_186_bool == 0) goto Label_3339;
		@LookAsyncCamera("head");
	}
Label_3339:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_166_bool = true;
	
}


void func_4302(object var_98_object, string var_99_string, float var_100_float)
{
	object var_108_object;
	@GetMainOutdoorScene(var_108_object);
	if(var_108_object == null) {
		@Trace("Can't find main outdoor scene");
		return 8;
	}
	cvector var_106_cvector;
	cvector var_107_cvector;
	bool var_109_bool;
	var_108_object->GetLocator(var_99_string, var_109_bool, var_106_cvector, var_107_cvector);
	if(!var_109_bool) //@nz
		@Trace(("Warning: outdoor scene locator " + var_99_string) + " doesnt exist");
	var_108_object->GetMap(var_98_object);
	if(var_98_object == null) {
		@Trace("Can't find map");
		return 8;
	}
	var_119_float = GetByIndex(var_106_cvector, 0);
	var_120_float = GetByIndex(var_106_cvector, 2);
	var_98_object->SetMapParams(var_119_float, var_120_float, var_100_float);
}
EMIT "Stack[-2] = 0";


// @pe
void func_3791(void)
{
	@SetVariable("ook2MladVlad2", 1);
}


void func_3535(object var_73_object)
{
	object var_75_object;
	@self(var_75_object);
	var_75_object = var_73_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_4048(bool var_484_bool)
{
	int var_486_int;
	func_3580(var_486_int, "ook3MladVlad1");
	if(var_486_int == 0) {
		var_484_bool = true;
		return 0;
	}
	var_484_bool = false;
}


void func_3797(object var_165_object)
{
	@SetVariable("k2q04", 1000);
	func_4153();
	int var_168_int;
	var_165_object->RemoveItemByType(var_168_int, "alpha_pills", 4);
	var_165_object->RemoveItemByType(var_168_int, "beta_pills", 4);
}


void func_3541(cvector var_193_cvector, cvector var_194_cvector)
{
	float var_197_float = sqrt(var_194_cvector | var_194_cvector);
	if(var_197_float < 0.000001)
		var_193_cvector = [0.0, 0.0, 0.0];
	var_193_cvector = var_194_cvector / var_197_float;
}


// @pe
void func_4060(bool var_549_bool)
{
	int var_551_int;
	func_3580(var_551_int, "k5q01");
	if(var_551_int == 1)
		var_549_bool = true;
	var_549_bool = false;
}


// @pe
void func_1246(object var_2_object, string var_468_string)
{
	bool var_469_bool;
	func_3727(var_469_bool);
	if(!var_469_bool) //@nz
		return 0;
	if(var_468_string == var_2_object)
		return 0;
	string var_472_string; bool var_473_bool;
	var_468_string = var_472_string;
	if(var_468_string == "")
		var_473_bool = false;
	else
		var_473_bool = true;
	func_3507(var_472_string, var_473_bool);
	var_2_object = var_468_string;
	
}


// @pe
void func_3551(float var_95_float, float var_96_float)
{
	if(var_96_float < 0)
		var_95_float = -var_96_float;
	else
		var_96_float = var_95_float;
	
}


void func_3045(bool var_0_bool, object var_1_object, object var_2_object)
{
	bool var_52_bool; int var_53_int; bool var_54_bool; cvector var_55_cvector; cvector var_56_cvector; cvector var_57_cvector; float var_58_float; cvector var_59_cvector; bool var_60_bool; cvector var_61_cvector;
	@SensePlayerOnly(true);
	func_3133();
	object var_51_object;
	@GetScene(var_51_object);
	var_2_object = 0;
	
	for(;;) {
		string var_67_string;
		func_3705(var_67_string, var_2_object);
		var_51_object->GetLocator(var_67_string, var_52_bool);
		if(!var_52_bool) { //@nz
		} else {
		}
		bool var_77_bool;
		func_3272(var_77_bool);
		if(!var_77_bool) { //@nz
			TaskCall(0);
			func_0();
			TaskReturn();
		}
		func_3141(var_60_bool, var_61_cvector);

		for(;;) {
			@irand(var_53_int, (var_2_object + 1));
			string var_101_string; int var_102_int;
			var_53_int = var_102_int;
			func_3705(var_101_string, var_102_int);
			var_51_object->GetLocator(var_101_string, var_54_bool, var_55_cvector, var_56_cvector);
			cvector var_103_cvector;
			func_3188(var_103_cvector);
			var_57_cvector = var_55_cvector - var_103_cvector;
			float var_106_float; cvector var_107_cvector;
			var_57_cvector = var_107_cvector;
			func_3570(var_106_float, var_107_cvector);
			if(var_106_float > var_1_object) {
				@GetHeight(var_58_float);
				var_116_float = GetByIndex(var_59_cvector, 1);
				SetByIndex(var_59_cvector, 1) = (var_116_float + var_58_float);
				@CanReachByPF(var_60_bool, var_59_cvector);
				if(var_60_bool != 0) {
					var_119_float = sqrt(var_57_cvector | var_57_cvector);
					var_61_cvector = var_59_cvector - (var_57_cvector * (var_0_bool / var_119_float));
					bool var_122_bool; cvector var_123_cvector; cvector var_124_cvector;
					var_61_cvector = var_123_cvector;
					var_56_cvector = var_124_cvector;
					TaskCall(1);
					func_13(var_125_bool, var_122_bool, var_123_cvector, var_124_cvector);
					TaskReturn();
					if(var_125_bool != 0) {
						int var_149_int;
						var_53_int = var_149_int;
						TaskCall(3);
						func_198(var_149_int);
						TaskReturn();
					}
				}
			}
			@Sleep(1);
		}

	}
}
EMIT "Return(); Pop(22)";
EMIT "Stack[-11] = 0";


// @pe
void func_3814(void)
{
	@SetVariable("k2q04", 1000);
	func_4166();
}


// @pe
void func_3559(float var_253_float, float var_254_float, float var_255_float, float var_256_float)
{
	if(var_254_float < var_255_float) {
		var_255_float = var_253_float;
		return 0;
	}
	if(var_254_float > var_256_float) {
		var_256_float = var_253_float;
		return 0;
	}
	var_254_float = var_253_float;
}


// @pe
void func_4072(bool var_555_bool)
{
	int var_557_int;
	func_3580(var_557_int, "ook5MladVlad1");
	if(var_557_int == 0) {
		var_555_bool = true;
		return 0;
	}
	var_555_bool = false;
}


void func_4335(int var_217_int)
{
	int var_219_int;
	@GetVariable("branch", var_219_int);
	if(var_219_int == 0) {
		var_217_int = 1;
		return 2;
	EMIT "GOTO 0x10fe";
	}
	if(var_219_int == 1) {
		var_217_int = 2;
		return 2;
	}
	var_217_int = 3;
}


// @pe
void func_3823(void)
{
	@SetVariable("k2q04", 1000);
	func_4179();
}


// @pe
void func_2288(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_609_object, object var_610_object)
{
	var_0_bool = var_610_object;
	var_1_object = var_609_object;
	var_3_object = false;
	if(1 != 0) {
		func_2366(var_610_object, "Neutral");
		var_0_bool->SetMessage(526738); //@t
		var_0_bool->ClearReplies(); //@t
		bool var_625_bool;
		func_4096(var_1_object);
		if(var_625_bool != 0)
			var_0_bool->AddReply(526739, 28017, 28016); //@t
		bool var_634_bool;
		func_4084(var_1_object);
		if(var_634_bool != 0)
			var_0_bool->AddReply(528763, 30180, 30179); //@t
		var_0_bool->AddReply(526742, -1, 28019); //@t
		var_0_bool->AddReply(528847, -1, 30265); //@t
		goto Label_2336;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x8f4";
	}
Label_2336:
	bool var_649_bool;
	func_3727(var_649_bool);
	if(var_649_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_3500(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_2365;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_2365:
		return 0;

	}
	
}


// @pe
void func_3570(float var_106_float, cvector var_107_cvector)
{
	var_108_float = GetByIndex(var_107_cvector, 0);
	var_109_float = GetByIndex(var_107_cvector, 0);
	var_111_float = GetByIndex(var_107_cvector, 2);
	var_112_float = GetByIndex(var_107_cvector, 2);
	var_106_float = sqrt((var_108_float * var_109_float) + (var_111_float * var_112_float));
}


// @pe
void func_4084(bool var_634_bool)
{
	int var_636_int;
	func_3580(var_636_int, "k6q01");
	if(var_636_int == 1)
		var_634_bool = true;
	var_634_bool = false;
}


// @pe
void func_3832(void)
{
	@SetVariable("k2q04", 1000);
	func_4192();
}


void func_3580(int var_311_int, string var_312_string)
{
	int var_314_int;
	@GetVariable(var_312_string, var_314_int);
	var_314_int = var_311_int;
}


