// @GLOBALS: 0:string:,1:object:,2:bool:,3:bool:

task task_0
{
	void OnLoad(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, object var_31_object, object var_32_object, object var_33_object, string var_34_string, bool var_35_bool, object var_36_object, object var_37_object, object var_38_object, string var_39_string, bool var_40_bool, object var_41_object, object var_42_object, object var_43_object, string var_44_string, bool var_45_bool, float var_46_float, float var_47_float, int var_48_int)
	{
		@StopGroup0();
		@sync();
	}

}


task task_1
{
	void OnUnload(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, object var_31_object, object var_32_object, object var_33_object, string var_34_string, bool var_35_bool, object var_36_object, object var_37_object, object var_38_object, string var_39_string, bool var_40_bool, object var_41_object, object var_42_object, object var_43_object, string var_44_string, bool var_45_bool, float var_46_float, float var_47_float, int var_48_int)
	{
		var_0_bool = true;
		func_145();
		func_5177();
		TaskCall(0);
		func_0();
		TaskReturn();
	}

	void OnUse(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_4_object, string var_5_string, bool var_6_bool, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool, object var_42_object, object var_43_object, object var_44_object, string var_45_string, bool var_46_bool, float var_47_float, float var_48_float, int var_49_int)
	{
		bool var_51_bool;
		@IsOverrideActive(var_51_bool);
		if(!var_51_bool) { //@nz
			func_145();
			disable OnUse;
			bool var_53_bool; object var_54_object;
			var_49_int = var_54_object;
			func_4653(var_53_bool, var_54_object);
			enable OnUse;
			object var_67_object;
			var_49_int = var_67_object;
			func_5880(var_67_object);
			var_0_bool = false;
		}
	}

		void OnCollision(bool var_0_bool, int var_1_int, object var_2_object, object var_3_object, object var_4_object, string var_5_string, bool var_6_bool, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool, object var_42_object, object var_43_object, object var_44_object, string var_45_string, bool var_46_bool, float var_47_float, float var_48_float, int var_49_int, object var_50_object, object var_51_object, object var_71_object)
		{
		bool var_73_bool;
		@IsPlayerActor(var_71_object, var_73_bool);
		if(var_73_bool != 0) {
			func_145();
			object var_75_object;
			var_71_object = var_75_object;
			TaskCall(2);
			func_148(var_75_object);
			TaskReturn();
			var_0_bool = false;
			@SetTimer(20, 10.0);
		}
		}

	void OnTimer(bool var_0_bool, int var_1_int, object var_2_object, object var_3_object, object var_4_object, string var_5_string, bool var_6_bool, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool, object var_42_object, object var_43_object, object var_44_object, string var_45_string, bool var_46_bool, float var_47_float, float var_48_float, int var_49_int)
	{
		object var_51_object;
		if(var_49_int == 20) {
			@KillTimer(20);
		} else {
			if(!(var_49_int == 21)) goto Label_144;
			if(true == 0) goto Label_144;
			@FindActor(var_51_object, "player");
			bool var_59_bool = false;
			if(var_51_object != 0) {
				float var_61_float; object var_62_object;
				var_51_object = var_62_object;
				func_4621(var_61_float, var_62_object);
				if(var_61_float <= 62500.0)
					var_59_bool = true;
			}
			if(var_59_bool != 0) {
				object var_71_object;
				var_51_object = var_71_object;
				func_89();
			}
			var_51_object = null;
		}
	Label_144:
	
	}

}


task task_2
{
	// @pe
	void OnUnload(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, object var_31_object, object var_32_object, object var_33_object, string var_34_string, bool var_35_bool, object var_36_object, object var_37_object, object var_38_object, string var_39_string, bool var_40_bool, object var_41_object, object var_42_object, object var_43_object, string var_44_string, bool var_45_bool, float var_46_float, float var_47_float, int var_48_int)
	{
		func_193();
		func_5177();
		TaskCall(0);
		func_0();
		TaskReturn();
	}

	void OnUse(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_4_object, string var_5_string, bool var_6_bool, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool, object var_42_object, object var_43_object, object var_44_object, string var_45_string, bool var_46_bool, float var_47_float, float var_48_float, int var_49_int)
	{
		bool var_51_bool;
		@IsOverrideActive(var_51_bool);
		if(!var_51_bool) { //@nz
			func_193();
			disable OnUse;
			bool var_53_bool; object var_54_object;
			var_49_int = var_54_object;
			func_4653(var_53_bool, var_54_object);
			enable OnUse;
			object var_67_object;
			var_49_int = var_67_object;
			func_5880(var_67_object);
		}
	}

}


task task_3
{
	// @pe
	void OnUnload(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, object var_31_object, object var_32_object, object var_33_object, string var_34_string, bool var_35_bool, object var_36_object, object var_37_object, object var_38_object, string var_39_string, bool var_40_bool, object var_41_object, object var_42_object, object var_43_object, string var_44_string, bool var_45_bool, float var_46_float, float var_47_float, int var_48_int)
	{
		func_5177();
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
	void event_11(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, int var_6_int, int var_7_int, object var_8_object, object var_9_object, object var_10_object, string var_11_string, bool var_12_bool, object var_13_object, object var_14_object, object var_15_object, string var_16_string, bool var_17_bool, object var_18_object, object var_19_object, object var_20_object, string var_21_string, bool var_22_bool, object var_23_object, object var_24_object, object var_25_object, string var_26_string, bool var_27_bool, object var_28_object, object var_29_object, object var_30_object, string var_31_string, bool var_32_bool, object var_33_object, object var_34_object, object var_35_object, string var_36_string, bool var_37_bool, object var_38_object, object var_39_object, object var_40_object, string var_41_string, bool var_42_bool, object var_43_object, object var_44_object, object var_45_object, string var_46_string, bool var_47_bool, float var_48_float, float var_49_float, int var_50_int)
	{
		if(1 != 0) {
			func_4929();
			if(var_49_float == 36906) {
				func_426(var_50_int, "Neutral");
				var_0_bool->SetMessage(535231); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(535232, 36953, 36907); //@t
				var_0_bool->AddReply(535233, -1, 36908); //@t
				var_0_bool->AddReply(535280, -1, 36956); //@t
				return 0;
			}
			if(var_49_float == 36953) {
				func_426(var_50_int, "Neutral");
				var_0_bool->SetMessage(535277); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(535278, 36957, 36954); //@t
				var_0_bool->AddReply(535279, 36957, 36955); //@t
				return 0;
			}
			if(var_49_float == 36957) {
				func_426(var_50_int, "Neutral");
				var_0_bool->SetMessage(535281); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(535282, -1, 36958); //@t
				var_0_bool->AddReply(535283, -1, 36959); //@t
				return 0;
			}
			var_3_object = true;
			bool var_97_bool;
			func_5186(var_97_bool);
			if(var_97_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x1c1";
	
	}

}


task task_6
{
}


task task_7
{
	// @pe
	void event_11(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, int var_11_int, int var_12_int, object var_13_object, object var_14_object, object var_15_object, string var_16_string, bool var_17_bool, object var_18_object, object var_19_object, object var_20_object, string var_21_string, bool var_22_bool, object var_23_object, object var_24_object, object var_25_object, string var_26_string, bool var_27_bool, object var_28_object, object var_29_object, object var_30_object, string var_31_string, bool var_32_bool, object var_33_object, object var_34_object, object var_35_object, string var_36_string, bool var_37_bool, object var_38_object, object var_39_object, object var_40_object, string var_41_string, bool var_42_bool, object var_43_object, object var_44_object, object var_45_object, string var_46_string, bool var_47_bool, float var_48_float, float var_49_float, int var_50_int)
	{
		if(1 != 0) {
			func_4929();
			if(var_50_int == 21076) {
				object var_55_object; object var_56_object;
				var_55_object = var_1_object;
				var_56_object = var_0_bool;
				func_5226();
			}
			if(var_50_int == 21082) {
				object var_61_object; object var_62_object;
				var_61_object = var_1_object;
				var_62_object = var_0_bool;
				func_5210();
				object var_79_object; object var_80_object;
				var_79_object = var_1_object;
				var_80_object = var_0_bool;
				func_5508();
			}
			if(var_50_int == 21085) {
				object var_85_object; object var_86_object;
				var_85_object = var_1_object;
				var_86_object = var_0_bool;
				func_5210();
				object var_87_object; object var_88_object;
				var_87_object = var_1_object;
				var_88_object = var_0_bool;
				func_5508();
			}
			if(var_49_float == 21224) {
				bool var_91_bool;
				func_5585(var_1_object);
				if(var_91_bool != 0) {
					func_740(var_50_int, "Neutral");
					var_0_bool->SetMessage(520042); //@t
					var_0_bool->ClearReplies(); //@t
					var_0_bool->AddReply(520043, 21227, 21225); //@t
					var_0_bool->AddReply(520044, -1, 21226); //@t
					return 0;
				}
				bool var_118_bool;
				func_5597(var_1_object);
				if(var_118_bool != 0) {
					object var_124_object; object var_125_object;
					var_124_object = var_1_object;
					var_125_object = var_0_bool;
					func_5204();
					func_740(var_50_int, "Neutral");
					var_0_bool->SetMessage(519876); //@t
					var_0_bool->ClearReplies(); //@t
					var_0_bool->AddReply(519877, 21042, 21041); //@t
					var_0_bool->AddReply(519905, 21042, 21073); //@t
					return 0;
				}
				func_740(var_50_int, "Neutral");
				var_0_bool->SetMessage(519906); //@t
				var_0_bool->ClearReplies(); //@t
				bool var_138_bool;
				func_5609(var_1_object);
				if(var_138_bool != 0)
					var_0_bool->AddReply(519907, 21077, 21076); //@t
				var_0_bool->AddReply(519917, -1, 21086); //@t
				return 0;
			}
			if(var_49_float == 21077) {
				func_740(var_50_int, "Neutral");
				var_0_bool->SetMessage(519908); //@t
				var_0_bool->ClearReplies(); //@t
				bool var_154_bool;
				func_5573(var_1_object);
				if(!var_154_bool) //@nz
					var_0_bool->AddReply(519909, 21079, 21078); //@t
				bool var_164_bool;
				func_5573(var_1_object);
				if(var_164_bool != 0)
					var_0_bool->AddReply(519914, 21084, 21083); //@t
				return 0;
			}
			if(var_49_float == 21084) {
				func_740(var_50_int, "Neutral");
				var_0_bool->SetMessage(519915); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(519916, -1, 21085); //@t
				return 0;
			}
			if(var_49_float == 21079) {
				func_740(var_50_int, "Neutral");
				var_0_bool->SetMessage(519910); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(519911, 21081, 21080); //@t
				return 0;
			}
			if(var_49_float == 21081) {
				func_740(var_50_int, "Neutral");
				var_0_bool->SetMessage(519912); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(519913, -1, 21082); //@t
				return 0;
			}
			if(var_49_float == 21042) {
				func_740(var_50_int, "Neutral");
				var_0_bool->SetMessage(519878); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(519879, 21044, 21043); //@t
				var_0_bool->AddReply(519902, 21070, 21069); //@t
				return 0;
			}
			if(var_49_float == 21070) {
				func_740(var_50_int, "Neutral");
				var_0_bool->SetMessage(519903); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(519904, 21044, 21071); //@t
				return 0;
			}
			if(var_49_float == 21044) {
				func_740(var_50_int, "Neutral");
				var_0_bool->SetMessage(519880); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(519881, 21046, 21045); //@t
				var_0_bool->AddReply(519897, 21064, 21063); //@t
				return 0;
			}
			if(var_49_float == 21064) {
				func_740(var_50_int, "Neutral");
				var_0_bool->SetMessage(519898); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(519899, 21066, 21065); //@t
				return 0;
			}
			if(var_49_float == 21066) {
				func_740(var_50_int, "Neutral");
				var_0_bool->SetMessage(519900); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(519901, 21046, 21067); //@t
				return 0;
			}
			if(var_49_float == 21046) {
				func_740(var_50_int, "Neutral");
				var_0_bool->SetMessage(519882); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(519883, 21048, 21047); //@t
				var_0_bool->AddReply(519896, 21048, 21061); //@t
				return 0;
			}
			if(var_49_float == 21048) {
				func_740(var_50_int, "Neutral");
				var_0_bool->SetMessage(519884); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(519885, 21050, 21049); //@t
				var_0_bool->AddReply(519893, 21058, 21057); //@t
				return 0;
			}
			if(var_49_float == 21058) {
				func_740(var_50_int, "Neutral");
				var_0_bool->SetMessage(519894); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(519895, 21052, 21059); //@t
				return 0;
			}
			if(var_49_float == 21050) {
				func_740(var_50_int, "Neutral");
				var_0_bool->SetMessage(519886); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(519887, 21052, 21051); //@t
				return 0;
			}
			if(var_49_float == 21052) {
				func_740(var_50_int, "Neutral");
				var_0_bool->SetMessage(519888); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(519889, 21054, 21053); //@t
				return 0;
			}
			if(var_49_float == 21054) {
				func_740(var_50_int, "Neutral");
				var_0_bool->SetMessage(519890); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(519891, -1, 21055); //@t
				var_0_bool->AddReply(519892, -1, 21056); //@t
				return 0;
			}
			if(var_49_float == 21227) {
				func_740(var_50_int, "Neutral");
				var_0_bool->SetMessage(520045); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(520046, -1, 21228); //@t
				return 0;
			}
			var_3_object = true;
			bool var_289_bool;
			func_5186(var_289_bool);
			if(var_289_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x2fb";
	
	}

}


task task_8
{
}


task task_9
{
	// @pe
	void event_11(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, int var_16_int, int var_17_int, object var_18_object, object var_19_object, object var_20_object, string var_21_string, bool var_22_bool, object var_23_object, object var_24_object, object var_25_object, string var_26_string, bool var_27_bool, object var_28_object, object var_29_object, object var_30_object, string var_31_string, bool var_32_bool, object var_33_object, object var_34_object, object var_35_object, string var_36_string, bool var_37_bool, object var_38_object, object var_39_object, object var_40_object, string var_41_string, bool var_42_bool, object var_43_object, object var_44_object, object var_45_object, string var_46_string, bool var_47_bool, float var_48_float, float var_49_float, int var_50_int)
	{
		if(1 != 0) {
			func_4929();
			if(var_50_int == 21192) {
				object var_55_object; object var_56_object;
				var_55_object = var_1_object;
				var_56_object = var_0_bool;
				func_5232();
				object var_75_object = var_1_object;
				func_5188(var_0_bool);
				object var_101_object; object var_102_object;
				var_101_object = var_1_object;
				var_102_object = var_0_bool;
				func_5252();
			}
			if(var_50_int == 21193) {
				object var_115_object; object var_116_object;
				var_115_object = var_1_object;
				var_116_object = var_0_bool;
				func_5232();
				object var_117_object = var_1_object;
				func_5188(var_0_bool);
				object var_119_object; object var_120_object;
				var_119_object = var_1_object;
				var_120_object = var_0_bool;
				func_5252();
			}
			if(var_50_int == 21194) {
				object var_123_object; object var_124_object;
				var_123_object = var_1_object;
				var_124_object = var_0_bool;
				func_5232();
				object var_125_object = var_1_object;
				func_5188(var_0_bool);
				object var_127_object; object var_128_object;
				var_127_object = var_1_object;
				var_128_object = var_0_bool;
				func_5252();
			}
			if(var_50_int == 21204) {
				object var_131_object; object var_132_object;
				var_131_object = var_1_object;
				var_132_object = var_0_bool;
				func_5259();
			}
			if(var_50_int == 21212) {
				object var_137_object; object var_138_object;
				var_137_object = var_1_object;
				var_138_object = var_0_bool;
				func_5265();
				object var_165_object; object var_166_object;
				var_165_object = var_1_object;
				var_166_object = var_0_bool;
				func_5508();
			}
			if(var_50_int == 21213) {
				object var_171_object; object var_172_object;
				var_171_object = var_1_object;
				var_172_object = var_0_bool;
				func_5265();
				object var_173_object; object var_174_object;
				var_173_object = var_1_object;
				var_174_object = var_0_bool;
				func_5508();
			}
			if(var_49_float == 21181) {
				bool var_177_bool;
				func_5621(var_1_object);
				if(!var_177_bool) { //@nz
					object var_184_object; object var_185_object;
					var_184_object = var_1_object;
					var_185_object = var_0_bool;
					func_5435();
					func_1411(var_50_int, "Neutral");
					var_0_bool->SetMessage(520000); //@t
					var_0_bool->ClearReplies(); //@t
					var_0_bool->AddReply(520001, 21183, 21182); //@t
					var_0_bool->AddReply(520017, 21183, 21199); //@t
					return 0;
				}
				func_1411(var_50_int, "Neutral");
				var_0_bool->SetMessage(520019); //@t
				var_0_bool->ClearReplies(); //@t
				bool var_213_bool = false;
				bool var_214_bool;
				func_5633(var_1_object);
				if(var_214_bool != 0) {
					bool var_220_bool;
					func_5621(var_1_object);
					if(var_220_bool != 0)
						var_213_bool = true;
				}
				if(var_213_bool != 0)
					var_0_bool->AddReply(520020, 21205, 21204); //@t
				var_0_bool->AddReply(520030, -1, 21214); //@t
				return 0;
			}
			if(var_49_float == 21205) {
				func_1411(var_50_int, "Neutral");
				var_0_bool->SetMessage(520021); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(520022, 21207, 21206); //@t
				var_0_bool->AddReply(527733, 29085, 29084); //@t
				return 0;
			}
			if(var_49_float == 29085) {
				func_1411(var_50_int, "Neutral");
				var_0_bool->SetMessage(527734); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(520029, -1, 21213); //@t
				return 0;
			}
			if(var_49_float == 21207) {
				func_1411(var_50_int, "Neutral");
				var_0_bool->SetMessage(520023); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(520024, 21209, 21208); //@t
				return 0;
			}
			if(var_49_float == 21209) {
				func_1411(var_50_int, "Neutral");
				var_0_bool->SetMessage(520025); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(520026, 21211, 21210); //@t
				var_0_bool->AddReply(527735, 29087, 29086); //@t
				return 0;
			}
			if(var_49_float == 29087) {
				func_1411(var_50_int, "Neutral");
				var_0_bool->SetMessage(527736); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(527737, 21211, 29088); //@t
				return 0;
			}
			if(var_49_float == 21211) {
				func_1411(var_50_int, "Neutral");
				var_0_bool->SetMessage(520027); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(520028, -1, 21212); //@t
				return 0;
			}
			if(var_49_float == 21183) {
				func_1411(var_50_int, "Neutral");
				var_0_bool->SetMessage(520002); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(520003, 21185, 21184); //@t
				var_0_bool->AddReply(527725, 29074, 29073); //@t
				return 0;
			}
			if(var_49_float == 29074) {
				func_1411(var_50_int, "Neutral");
				var_0_bool->SetMessage(527726); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(527727, 21185, 29075); //@t
				return 0;
			}
			if(var_49_float == 21185) {
				func_1411(var_50_int, "Neutral");
				var_0_bool->SetMessage(520004); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(520005, 21187, 21186); //@t
				var_0_bool->AddReply(520015, 21187, 21196); //@t
				return 0;
			}
			if(var_49_float == 21187) {
				func_1411(var_50_int, "Neutral");
				var_0_bool->SetMessage(520006); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(520007, 21189, 21188); //@t
				var_0_bool->AddReply(527728, 29079, 29078); //@t
				return 0;
			}
			if(var_49_float == 29079) {
				func_1411(var_50_int, "Neutral");
				var_0_bool->SetMessage(527729); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(527730, 29081, 29080); //@t
				return 0;
			}
			if(var_49_float == 29081) {
				func_1411(var_50_int, "Neutral");
				var_0_bool->SetMessage(527731); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(527732, 21189, 29082); //@t
				return 0;
			}
			if(var_49_float == 21189) {
				func_1411(var_50_int, "Neutral");
				var_0_bool->SetMessage(520008); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(520009, 21191, 21190); //@t
				var_0_bool->AddReply(520013, -1, 21194); //@t
				return 0;
			}
			if(var_49_float == 21191) {
				func_1411(var_50_int, "Neutral");
				var_0_bool->SetMessage(520010); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(520011, -1, 21192); //@t
				var_0_bool->AddReply(520012, -1, 21193); //@t
				return 0;
			}
			var_3_object = true;
			bool var_347_bool;
			func_5186(var_347_bool);
			if(var_347_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x59a";
	
	}

}


task task_10
{
}


task task_11
{
	// @pe
	void event_11(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, int var_21_int, int var_22_int, object var_23_object, object var_24_object, object var_25_object, string var_26_string, bool var_27_bool, object var_28_object, object var_29_object, object var_30_object, string var_31_string, bool var_32_bool, object var_33_object, object var_34_object, object var_35_object, string var_36_string, bool var_37_bool, object var_38_object, object var_39_object, object var_40_object, string var_41_string, bool var_42_bool, object var_43_object, object var_44_object, object var_45_object, string var_46_string, bool var_47_bool, float var_48_float, float var_49_float, int var_50_int)
	{
		if(1 != 0) {
			func_4929();
			if(var_50_int == 21333) {
				object var_55_object = var_1_object;
				func_5362(var_0_bool);
				object var_79_object; object var_80_object;
				var_79_object = var_1_object;
				var_80_object = var_0_bool;
				func_5458();
				object var_83_object; object var_84_object;
				var_83_object = var_1_object;
				var_84_object = var_0_bool;
				func_5316();
			}
			if(var_50_int == 21335) {
				object var_137_object = var_1_object;
				func_5362(var_0_bool);
				object var_139_object; object var_140_object;
				var_139_object = var_1_object;
				var_140_object = var_0_bool;
				func_5458();
				object var_141_object; object var_142_object;
				var_141_object = var_1_object;
				var_142_object = var_0_bool;
				func_5316();
			}
			if(var_50_int == 21349) {
				object var_145_object = var_1_object;
				func_5352(var_0_bool);
				object var_163_object; object var_164_object;
				var_163_object = var_1_object;
				var_164_object = var_0_bool;
				func_5452();
				object var_167_object = var_1_object;
				func_5362(var_0_bool);
				object var_169_object; object var_170_object;
				var_169_object = var_1_object;
				var_170_object = var_0_bool;
				func_5316();
				object var_171_object = var_1_object;
				func_5442(var_0_bool);
			}
			if(var_50_int == 21350) {
				object var_178_object = var_1_object;
				func_5362(var_0_bool);
				object var_180_object; object var_181_object;
				var_180_object = var_1_object;
				var_181_object = var_0_bool;
				func_5458();
				object var_182_object; object var_183_object;
				var_182_object = var_1_object;
				var_183_object = var_0_bool;
				func_5316();
			}
			if(var_50_int == 21361) {
				object var_186_object; object var_187_object;
				var_186_object = var_1_object;
				var_187_object = var_0_bool;
				func_5342();
				object var_199_object = var_1_object;
				func_5470(var_0_bool);
				object var_204_object = var_1_object;
				func_5480(var_0_bool);
				object var_210_object = var_1_object;
				func_5491(var_0_bool);
				object var_216_object; object var_217_object;
				var_216_object = var_1_object;
				var_217_object = var_0_bool;
				func_5458();
			}
			if(var_49_float == 21322) {
				bool var_220_bool;
				func_5645(var_1_object);
				if(var_220_bool != 0) {
					object var_228_object; object var_229_object;
					var_228_object = var_1_object;
					var_229_object = var_0_bool;
					func_5310();
					object var_232_object; object var_233_object;
					var_232_object = var_1_object;
					var_233_object = var_0_bool;
					func_5464();
					func_2079(var_50_int, "Rage");
					var_0_bool->SetMessage(520138); //@t
					var_0_bool->ClearReplies(); //@t
					var_0_bool->AddReply(520139, 21324, 21323); //@t
					return 0;
				}
				func_2079(var_50_int, "Rage");
				var_0_bool->SetMessage(520157); //@t
				var_0_bool->ClearReplies(); //@t
				bool var_254_bool;
				func_5657(var_1_object);
				if(var_254_bool != 0)
					var_0_bool->AddReply(520158, 21346, 21345); //@t
				bool var_263_bool;
				func_5669(var_1_object);
				if(var_263_bool != 0)
					var_0_bool->AddReply(520164, 21352, 21351); //@t
				var_0_bool->AddReply(520180, -1, 21370); //@t
				return 0;
			}
			if(var_49_float == 21352) {
				func_2079(var_50_int, "Neutral");
				var_0_bool->SetMessage(520165); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(520166, 21354, 21353); //@t
				var_0_bool->AddReply(520179, 21354, 21368); //@t
				return 0;
			}
			if(var_49_float == 21354) {
				func_2079(var_50_int, "Neutral");
				var_0_bool->SetMessage(520167); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(520168, 21356, 21355); //@t
				var_0_bool->AddReply(520178, 21360, 21366); //@t
				return 0;
			}
			if(var_49_float == 21356) {
				func_2079(var_50_int, "Fear");
				var_0_bool->SetMessage(520169); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(520170, 21358, 21357); //@t
				return 0;
			}
			if(var_49_float == 21358) {
				func_2079(var_50_int, "Neutral");
				var_0_bool->SetMessage(520171); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(520172, 21360, 21359); //@t
				var_0_bool->AddReply(520175, 21363, 21362); //@t
				return 0;
			}
			if(var_49_float == 21363) {
				func_2079(var_50_int, "Sly");
				var_0_bool->SetMessage(520176); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(520177, 21360, 21364); //@t
				return 0;
			}
			if(var_49_float == 21360) {
				func_2079(var_50_int, "Neutral");
				var_0_bool->SetMessage(520173); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(520174, -1, 21361); //@t
				return 0;
			}
			if(var_49_float == 21346) {
				func_2079(var_50_int, "Sly");
				var_0_bool->SetMessage(520159); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(520160, 21348, 21347); //@t
				var_0_bool->AddReply(520163, -1, 21350); //@t
				return 0;
			}
			if(var_49_float == 21348) {
				func_2079(var_50_int, "Neutral");
				var_0_bool->SetMessage(520161); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(520162, -1, 21349); //@t
				return 0;
			}
			if(var_49_float == 21324) {
				func_2079(var_50_int, "Neutral");
				var_0_bool->SetMessage(520140); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(520141, 21326, 21325); //@t
				var_0_bool->AddReply(520154, 21341, 21340); //@t
				return 0;
			}
			if(var_49_float == 21341) {
				func_2079(var_50_int, "Neutral");
				var_0_bool->SetMessage(520155); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(520156, 21326, 21342); //@t
				return 0;
			}
			if(var_49_float == 21326) {
				var_0_bool->SetMessage(520142); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(520143, 21328, 21327); //@t
				var_0_bool->AddReply(520153, 21330, 21338); //@t
				return 0;
			}
			if(var_49_float == 21328) {
				func_2079(var_50_int, "Neutral");
				var_0_bool->SetMessage(520144); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(520145, 21330, 21329); //@t
				var_0_bool->AddReply(520152, 21330, 21336); //@t
				return 0;
			}
			if(var_49_float == 21330) {
				func_2079(var_50_int, "Sly");
				var_0_bool->SetMessage(520146); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(520147, 21332, 21331); //@t
				var_0_bool->AddReply(520151, -1, 21335); //@t
				return 0;
			}
			if(var_49_float == 21332) {
				func_2079(var_50_int, "Neutral");
				var_0_bool->SetMessage(520148); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(520149, -1, 21333); //@t
				var_0_bool->AddReply(520150, -1, 21334); //@t
				return 0;
			}
			var_3_object = true;
			bool var_399_bool;
			func_5186(var_399_bool);
			if(var_399_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x836";
	
	}

}


task task_12
{
}


task task_13
{
	// @pe
	void event_11(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, int var_26_int, int var_27_int, object var_28_object, object var_29_object, object var_30_object, string var_31_string, bool var_32_bool, object var_33_object, object var_34_object, object var_35_object, string var_36_string, bool var_37_bool, object var_38_object, object var_39_object, object var_40_object, string var_41_string, bool var_42_bool, object var_43_object, object var_44_object, object var_45_object, string var_46_string, bool var_47_bool, float var_48_float, float var_49_float, int var_50_int)
	{
		if(1 != 0) {
			func_4929();
			if(var_49_float == 21982) {
				func_2730(var_50_int, "Neutral");
				var_0_bool->SetMessage(520768); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(520769, 21984, 21983); //@t
				var_0_bool->AddReply(520772, 21987, 21986); //@t
				return 0;
			}
			if(var_49_float == 21987) {
				func_2730(var_50_int, "Neutral");
				var_0_bool->SetMessage(520773); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(520774, -1, 21988); //@t
				return 0;
			}
			if(var_49_float == 21984) {
				func_2730(var_50_int, "Neutral");
				var_0_bool->SetMessage(520770); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(520771, -1, 21985); //@t
				return 0;
			}
			var_3_object = true;
			bool var_88_bool;
			func_5186(var_88_bool);
			if(var_88_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xac1";
	
	}

}


task task_14
{
}


task task_15
{
	// @pe
	void event_11(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, int var_31_int, int var_32_int, object var_33_object, object var_34_object, object var_35_object, string var_36_string, bool var_37_bool, object var_38_object, object var_39_object, object var_40_object, string var_41_string, bool var_42_bool, object var_43_object, object var_44_object, object var_45_object, string var_46_string, bool var_47_bool, float var_48_float, float var_49_float, int var_50_int)
	{
		if(1 != 0) {
			func_4929();
			if(var_50_int == 22403) {
				object var_55_object; object var_56_object;
				var_55_object = var_1_object;
				var_56_object = var_0_bool;
				func_5373();
			}
			if(var_49_float == 22399) {
				func_2969(var_50_int, "Neutral");
				var_0_bool->SetMessage(521202); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(521203, 22402, 22400); //@t
				var_0_bool->AddReply(521204, -1, 22401); //@t
				return 0;
			}
			if(var_49_float == 22402) {
				func_2969(var_50_int, "Neutral");
				var_0_bool->SetMessage(521205); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(528423, 29808, 29806); //@t
				var_0_bool->AddReply(528424, 29808, 29807); //@t
				return 0;
			}
			if(var_49_float == 29808) {
				func_2969(var_50_int, "Neutral");
				var_0_bool->SetMessage(528425); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(521206, -1, 22403); //@t
				return 0;
			}
			var_3_object = true;
			bool var_119_bool;
			func_5186(var_119_bool);
			if(var_119_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xbb0";
	
	}

}


task task_16
{
}


task task_17
{
	// @pe
	void event_11(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, object var_31_object, object var_32_object, object var_33_object, string var_34_string, bool var_35_bool, int var_36_int, int var_37_int, object var_38_object, object var_39_object, object var_40_object, string var_41_string, bool var_42_bool, object var_43_object, object var_44_object, object var_45_object, string var_46_string, bool var_47_bool, float var_48_float, float var_49_float, int var_50_int)
	{
		if(1 != 0) {
			func_4929();
			if(var_50_int == 22637) {
				object var_55_object; object var_56_object;
				var_55_object = var_1_object;
				var_56_object = var_0_bool;
				func_5384();
			}
			if(var_50_int == 22643) {
				object var_100_object; object var_101_object;
				var_100_object = var_1_object;
				var_101_object = var_0_bool;
				func_5384();
			}
			if(var_50_int == 22646) {
				object var_104_object = var_1_object;
				func_5400(var_0_bool);
				object var_124_object; object var_125_object;
				var_124_object = var_1_object;
				var_125_object = var_0_bool;
				func_5502();
				object var_128_object = var_1_object;
				func_5352(var_0_bool);
				object var_149_object; object var_150_object;
				var_149_object = var_1_object;
				var_150_object = var_0_bool;
				func_5452();
			}
			if(var_50_int == 25069) {
				object var_155_object = var_1_object;
				func_5400(var_0_bool);
			}
			if(var_49_float == 22634) {
				bool var_159_bool;
				func_5514(var_1_object);
				if(var_159_bool != 0) {
					object var_167_object; object var_168_object;
					var_167_object = var_1_object;
					var_168_object = var_0_bool;
					func_5414();
					func_3281(var_50_int, "Neutral");
					var_0_bool->SetMessage(521469); //@t
					var_0_bool->ClearReplies(); //@t
					var_0_bool->AddReply(523789, 25055, 25054); //@t
					var_0_bool->AddReply(523804, 25055, 25070); //@t
					return 0;
				}
				func_3281(var_50_int, "Neutral");
				var_0_bool->SetMessage(521474); //@t
				var_0_bool->ClearReplies(); //@t
				bool var_192_bool;
				func_5526(var_1_object);
				if(var_192_bool != 0)
					var_0_bool->AddReply(521475, 22642, 22640); //@t
				bool var_201_bool = false;
				bool var_202_bool;
				func_5526(var_1_object);
				if(!var_202_bool) { //@nz
					bool var_205_bool;
					func_5538(var_205_bool, var_1_object);
					if(var_205_bool != 0)
						var_201_bool = true;
				}
				if(var_201_bool != 0)
					var_0_bool->AddReply(521479, 22645, 22644); //@t
				var_0_bool->AddReply(523837, 25111, 25110); //@t
				var_0_bool->AddReply(521476, -1, 22641); //@t
				return 0;
			}
			if(var_49_float == 25111) {
				func_3281(var_50_int, "Neutral");
				var_0_bool->SetMessage(523838); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(523839, 25113, 25112); //@t
				return 0;
			}
			if(var_49_float == 25113) {
				func_3281(var_50_int, "Neutral");
				var_0_bool->SetMessage(523840); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(523841, 25115, 25114); //@t
				return 0;
			}
			if(var_49_float == 25115) {
				func_3281(var_50_int, "Neutral");
				var_0_bool->SetMessage(523842); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(523843, 25117, 25116); //@t
				return 0;
			}
			if(var_49_float == 25117) {
				func_3281(var_50_int, "Neutral");
				var_0_bool->SetMessage(523844); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(523845, -1, 25118); //@t
				return 0;
			}
			if(var_49_float == 22645) {
				func_3281(var_50_int, "Neutral");
				var_0_bool->SetMessage(521480); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(523798, 25065, 25063); //@t
				var_0_bool->AddReply(523799, 25066, 25064); //@t
				return 0;
			}
			if(var_49_float == 25066) {
				func_3281(var_50_int, "Neutral");
				var_0_bool->SetMessage(523801); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(523802, 25065, 25067); //@t
				return 0;
			}
			if(var_49_float == 25065) {
				func_3281(var_50_int, "Neutral");
				var_0_bool->SetMessage(523800); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(521481, -1, 22646); //@t
				var_0_bool->AddReply(523803, -1, 25069); //@t
				return 0;
			}
			if(var_49_float == 22642) {
				func_3281(var_50_int, "Neutral");
				var_0_bool->SetMessage(521477); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(521478, -1, 22643); //@t
				return 0;
			}
			if(var_49_float == 25055) {
				func_3281(var_50_int, "Neutral");
				var_0_bool->SetMessage(523790); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(523791, 25057, 25056); //@t
				var_0_bool->AddReply(523805, 25057, 25072); //@t
				return 0;
			}
			if(var_49_float == 25057) {
				func_3281(var_50_int, "Neutral");
				var_0_bool->SetMessage(523792); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(523793, 25059, 25058); //@t
				var_0_bool->AddReply(523797, 25059, 25062); //@t
				return 0;
			}
			if(var_49_float == 25059) {
				func_3281(var_50_int, "Neutral");
				var_0_bool->SetMessage(523794); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(523795, 25075, 25060); //@t
				var_0_bool->AddReply(523810, 25080, 25079); //@t
				return 0;
			}
			if(var_49_float == 25080) {
				func_3281(var_50_int, "Neutral");
				var_0_bool->SetMessage(523811); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(523812, 25075, 25081); //@t
				return 0;
			}
			if(var_49_float == 25075) {
				func_3281(var_50_int, "Neutral");
				var_0_bool->SetMessage(523806); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(523807, 25077, 25076); //@t
				return 0;
			}
			if(var_49_float == 25077) {
				func_3281(var_50_int, "Neutral");
				var_0_bool->SetMessage(523808); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(523809, 22636, 25078); //@t
				return 0;
			}
			if(var_49_float == 22636) {
				func_3281(var_50_int, "Neutral");
				var_0_bool->SetMessage(521471); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(523813, 25084, 25083); //@t
				var_0_bool->AddReply(523815, 25084, 25085); //@t
				return 0;
			}
			if(var_49_float == 25084) {
				func_3281(var_50_int, "Neutral");
				var_0_bool->SetMessage(523814); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(521472, -1, 22637); //@t
				var_0_bool->AddReply(521473, -1, 22638); //@t
				return 0;
			}
			var_3_object = true;
			bool var_356_bool;
			func_5186(var_356_bool);
			if(var_356_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xce8";
	
	}

}


task task_18
{
}


task task_19
{
	// @pe
	void event_11(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, object var_31_object, object var_32_object, object var_33_object, string var_34_string, bool var_35_bool, object var_36_object, object var_37_object, object var_38_object, string var_39_string, bool var_40_bool, int var_41_int, int var_42_int, object var_43_object, object var_44_object, object var_45_object, string var_46_string, bool var_47_bool, float var_48_float, float var_49_float, int var_50_int)
	{
		if(1 != 0) {
			func_4929();
			if(var_50_int == 24800) {
				object var_55_object; object var_56_object;
				var_55_object = var_1_object;
				var_56_object = var_0_bool;
				func_5429();
			}
			if(var_50_int == 23247) {
				object var_61_object; object var_62_object;
				var_61_object = var_1_object;
				var_62_object = var_0_bool;
				func_5420();
			}
			if(var_49_float == 23248) {
				func_3924(var_50_int, "Neutral");
				var_0_bool->SetMessage(522079); //@t
				var_0_bool->ClearReplies(); //@t
				bool var_103_bool;
				func_5561(var_1_object);
				if(var_103_bool != 0)
					var_0_bool->AddReply(523566, 24801, 24800); //@t
				var_0_bool->AddReply(523569, 24804, 24803); //@t
				var_0_bool->AddReply(522080, -1, 23249); //@t
				return 0;
			}
			if(var_49_float == 24804) {
				func_3924(var_50_int, "Neutral");
				var_0_bool->SetMessage(523570); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(523571, 24807, 24805); //@t
				var_0_bool->AddReply(523572, -1, 24806); //@t
				return 0;
			}
			if(var_49_float == 24807) {
				func_3924(var_50_int, "Neutral");
				var_0_bool->SetMessage(523573); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(523574, 24809, 24808); //@t
				var_0_bool->AddReply(523576, 24811, 24810); //@t
				return 0;
			}
			if(var_49_float == 24811) {
				func_3924(var_50_int, "Neutral");
				var_0_bool->SetMessage(523577); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(523578, 24809, 24812); //@t
				return 0;
			}
			if(var_49_float == 24809) {
				func_3924(var_50_int, "Neutral");
				var_0_bool->SetMessage(523575); //@t
				var_0_bool->ClearReplies(); //@t
				bool var_151_bool;
				func_5549(var_1_object);
				if(!var_151_bool) //@nz
					var_0_bool->AddReply(522078, -1, 23247); //@t
				bool var_161_bool;
				func_5549(var_1_object);
				if(var_161_bool != 0)
					var_0_bool->AddReply(522087, 24814, 23256); //@t
				return 0;
			}
			if(var_49_float == 24814) {
				func_3924(var_50_int, "Neutral");
				var_0_bool->SetMessage(523580); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(523582, 24819, 24817); //@t
				var_0_bool->AddReply(523583, -1, 24818); //@t
				return 0;
			}
			if(var_49_float == 24819) {
				func_3924(var_50_int, "Neutral");
				var_0_bool->SetMessage(523584); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(523585, -1, 24820); //@t
				var_0_bool->AddReply(523586, -1, 24821); //@t
				return 0;
			}
			if(var_49_float == 24801) {
				func_3924(var_50_int, "Neutral");
				var_0_bool->SetMessage(523567); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(523568, 24822, 24802); //@t
				return 0;
			}
			if(var_49_float == 24822) {
				func_3924(var_50_int, "Neutral");
				var_0_bool->SetMessage(523587); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(523588, 24824, 24823); //@t
				var_0_bool->AddReply(523595, -1, 24830); //@t
				return 0;
			}
			if(var_49_float == 24824) {
				func_3924(var_50_int, "Neutral");
				var_0_bool->SetMessage(523589); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(523590, 24826, 24825); //@t
				return 0;
			}
			if(var_49_float == 24826) {
				func_3924(var_50_int, "Neutral");
				var_0_bool->SetMessage(523591); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(523592, 24828, 24827); //@t
				var_0_bool->AddReply(523594, -1, 24829); //@t
				return 0;
			}
			if(var_49_float == 24828) {
				func_3924(var_50_int, "Neutral");
				var_0_bool->SetMessage(523593); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(523596, -1, 24831); //@t
				var_0_bool->AddReply(523597, -1, 24832); //@t
				return 0;
			}
			var_3_object = true;
			bool var_230_bool;
			func_5186(var_230_bool);
			if(var_230_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xf6b";
	
	}

}


task task_20
{
}


task task_21
{
	// @pe
	void event_11(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, object var_31_object, object var_32_object, object var_33_object, string var_34_string, bool var_35_bool, object var_36_object, object var_37_object, object var_38_object, string var_39_string, bool var_40_bool, object var_41_object, object var_42_object, object var_43_object, string var_44_string, bool var_45_bool, int var_46_int, int var_47_int, float var_48_float, float var_49_float, int var_50_int)
	{
		if(1 != 0) {
			func_4929();
			if(var_49_float == 42563) {
				func_4402(var_50_int, "Neutral");
				var_0_bool->SetMessage(540554); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(540555, -1, 42564); //@t
				var_0_bool->AddReply(540794, -1, 42843); //@t
				return 0;
			}
			var_3_object = true;
			bool var_74_bool;
			func_5186(var_74_bool);
			if(var_74_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x1149";
	
	}

}


maintask task_22
{
	void init(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, object var_31_object, object var_32_object, object var_33_object, string var_34_string, bool var_35_bool, object var_36_object, object var_37_object, object var_38_object, string var_39_string, bool var_40_bool, object var_41_object, object var_42_object, object var_43_object, string var_44_string, bool var_45_bool, float var_46_float, float var_47_float, int var_48_int)
	{
		var_49_bool = GlobalVars[2];
		GlobalVars[2] = false;
		func_4473(var_46_float, var_47_float, var_48_int);
	}

	// @pe
	void OnUnload(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, object var_31_object, object var_32_object, object var_33_object, string var_34_string, bool var_35_bool, object var_36_object, object var_37_object, object var_38_object, string var_39_string, bool var_40_bool, object var_41_object, object var_42_object, object var_43_object, string var_44_string, bool var_45_bool, float var_46_float, float var_47_float, int var_48_int)
	{
		func_5177();
		TaskCall(0);
		func_0();
		TaskReturn();
	}

	void OnUse(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, object var_31_object, object var_32_object, object var_33_object, string var_34_string, bool var_35_bool, object var_36_object, object var_37_object, object var_38_object, string var_39_string, bool var_40_bool, object var_41_object, object var_42_object, object var_43_object, string var_44_string, bool var_45_bool, float var_46_float, float var_47_float, int var_48_int, object var_49_object)
	{
		bool var_51_bool;
		@IsOverrideActive(var_51_bool);
		if(!var_51_bool) { //@nz
			disable OnUse;
			bool var_53_bool; object var_54_object;
			var_49_object = var_54_object;
			func_4653(var_53_bool, var_54_object);
			enable OnUse;
			object var_67_object;
			var_49_object = var_67_object;
			func_5880(var_67_object);
		}
	}

}


void OnUnload(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, object var_31_object, object var_32_object, object var_33_object, string var_34_string, bool var_35_bool, object var_36_object, object var_37_object, object var_38_object, string var_39_string, bool var_40_bool, object var_41_object, object var_42_object, object var_43_object, string var_44_string, bool var_45_bool, float var_46_float, float var_47_float, int var_48_int)
{
}


void func_0(void)
{
	
Label_0:
	@Hold();
	bool var_91_bool;
	func_4673(var_91_bool);
	if(!var_91_bool) goto Label_0; //@nz
}


// @pe
void func_5633(bool var_457_bool)
{
	int var_459_int;
	func_4970(var_459_int, "oob2MladVlad1");
	if(var_459_int == 0) {
		var_457_bool = true;
		return 0;
	}
	var_457_bool = false;
}


void func_5120(float var_72_float)
{
	float var_74_float;
	@GetGameTime(var_74_float);
	var_74_float = var_72_float;
}


void func_5125(int var_136_int)
{
	float var_138_float;
	@GetGameTime(var_138_float);
	var_136_int = 1 + (var_138_float / 24);
}


void func_4616(cvector var_113_cvector)
{
	cvector var_115_cvector;
	@GetPosition(var_115_cvector);
	var_115_cvector = var_113_cvector;
}


void func_3082(bool var_0_bool, int var_625_int, object var_626_object)
{
	var_0_bool = var_626_object;
	bool var_636_bool; object var_637_object;
	object var_638_object;
	func_4936(var_638_object);
	var_638_object = var_637_object;
	func_4763(var_636_bool, var_637_object);
	bool var_639_bool; object var_640_object;
	var_626_object = var_640_object;
	func_4678(var_639_bool, var_640_object, 70.0);
	if(!var_639_bool) { //@nz
		var_625_int = -2;
		return 8;
	}
	object var_632_object;
	@CreateDialog(var_632_object);
	int var_643_int;
	func_5180(var_643_int);
	var_632_object->SetNPCName(var_643_int);
	int var_644_int;
	func_5178(var_644_int);
	var_632_object->SetNPCDescription(var_644_int);
	string var_645_string;
	func_5182(var_645_string);
	var_632_object->SetPhoto(var_645_string);
	string var_646_string;
	func_5184(var_646_string);
	var_632_object->SetPhoto2(var_646_string);
	int var_647_int;
	func_5863(var_647_int);
	var_632_object->SetPlayerName(var_647_int);
	bool var_633_bool;
	@IsOverrideActive(var_633_bool);
	if(var_633_bool != 0) {
		var_625_int = -2;
		return 8;
	}
	@DoDialog(var_632_object);
	object var_649_object; object var_650_object;
	var_626_object = var_649_object;
	var_632_object = var_650_object;
	TaskCall(17);
	func_3163(var_651_object, var_652_object, var_653_string, var_654_bool, var_649_object, var_650_object);
	TaskReturn();
	bool var_635_bool;
	var_632_object->IsDialogEnd(var_635_bool);
	
	for(;;) {
		var_722_bool = !var_635_bool; //@nz
		if(var_722_bool == 0) goto Label_3152;
		@sync();
		var_632_object->IsDialogEnd(var_635_bool);
	}
	
Label_3152:
	object var_723_object;
	var_626_object = var_723_object;
	func_4746();
	@StopDialog(var_632_object);
	var_632_object->GetReturnValue(-1);
	int var_634_int = var_625_int;
}
EMIT "Stack[-4] = 0";


void func_4621(float var_61_float, object var_62_object)
{
	cvector var_66_cvector;
	@GetPosition(var_66_cvector);
	cvector var_67_cvector;
	var_62_object->GetPosition(var_67_cvector);
	var_61_float = (var_67_cvector - var_66_cvector) | (var_67_cvector - var_66_cvector);
}


// @pe
void func_5645(bool var_506_bool)
{
	int var_508_int;
	func_4970(var_508_int, "oob5MladVlad1");
	if(var_508_int == 0) {
		var_506_bool = true;
		return 0;
	}
	var_506_bool = false;
}


void func_13(bool var_0_bool, bool var_132_bool, cvector var_133_cvector, cvector var_134_cvector)
{
	var_0_bool = true;
	@SetTimer(21, 0.5);
	
Label_19:
	for(;;) {
		bool var_140_bool; cvector var_141_cvector;
		var_133_cvector = var_141_cvector;
		func_4643(var_140_bool, var_141_cvector);
		var_150_bool = !var_140_bool; //@nz
		if(var_150_bool == 0) goto Label_26;
	}
	
Label_26:
	bool var_137_bool;
	@MovePoint(var_133_cvector, false, var_137_bool);
	if(var_137_bool != 0) {
	} else {
		goto Label_19;
	}
	@KillTimer(20);
	@KillTimer(21);
	var_0_bool = false;
	@WaitForAnimEnd(var_137_bool);
	if(!var_137_bool) { //@nz
		var_132_bool = false;
		return 2;
	}
	var_156_float = GetByIndex(var_134_cvector, 0);
	var_157_float = GetByIndex(var_134_cvector, 2);
	@Rotate(var_156_float, var_157_float, var_137_bool);
	if(!var_137_bool) { //@nz
		var_132_bool = false;
		return 2;
	}
	var_132_bool = true;
	
}


// @pe
void func_5134(bool var_284_bool, int var_285_int)
{
	int var_286_int;
	func_5125(var_286_int);
	var_284_bool = var_286_int == var_285_int;
}


void func_5140(string var_201_string, int var_202_int)
{
	string var_204_string = "idle";
	if(var_202_int != 0)
		var_204_string += var_202_int;
	var_204_string = var_201_string;
}


void func_4629(object var_60_object)
{
	object var_62_object;
	@FindActor(var_62_object, "player");
	var_62_object = var_60_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_5657(bool var_542_bool)
{
	int var_544_int;
	func_4970(var_544_int, "b5q02");
	if(var_544_int == 0) {
		var_542_bool = true;
		return 0;
	}
	var_542_bool = false;
}


void func_5147(int var_195_int)
{
	int var_198_int; bool var_199_bool;
	var_198_int = 0;
	
	for(;;) {
		string var_201_string; int var_202_int;
		var_198_int = var_202_int;
		func_5140(var_201_string, var_202_int);
		@HasAnimation(var_199_bool, "all", var_201_string);
		if(!var_199_bool) //@nz
			break;
		var_198_int += 1;
	}
	var_198_int = var_195_int;
}


void func_4636(object var_135_object, string var_136_string, int var_137_int)
{
	int var_139_int;
	var_135_object->GetProperty(var_136_string, var_139_int);
	var_135_object->SetProperty(var_136_string, (var_139_int + var_137_int));
}


void func_541(bool var_0_bool, int var_287_int, object var_288_object)
{
	var_0_bool = var_288_object;
	bool var_298_bool; object var_299_object;
	object var_300_object;
	func_4936(var_300_object);
	var_300_object = var_299_object;
	func_4763(var_298_bool, var_299_object);
	bool var_301_bool; object var_302_object;
	var_288_object = var_302_object;
	func_4678(var_301_bool, var_302_object, 70.0);
	if(!var_301_bool) { //@nz
		var_287_int = -2;
		return 8;
	}
	object var_294_object;
	@CreateDialog(var_294_object);
	int var_305_int;
	func_5180(var_305_int);
	var_294_object->SetNPCName(var_305_int);
	int var_306_int;
	func_5178(var_306_int);
	var_294_object->SetNPCDescription(var_306_int);
	string var_307_string;
	func_5182(var_307_string);
	var_294_object->SetPhoto(var_307_string);
	string var_308_string;
	func_5184(var_308_string);
	var_294_object->SetPhoto2(var_308_string);
	int var_309_int;
	func_5863(var_309_int);
	var_294_object->SetPlayerName(var_309_int);
	bool var_295_bool;
	@IsOverrideActive(var_295_bool);
	if(var_295_bool != 0) {
		var_287_int = -2;
		return 8;
	}
	@DoDialog(var_294_object);
	object var_311_object; object var_312_object;
	var_288_object = var_311_object;
	var_294_object = var_312_object;
	TaskCall(7);
	func_622(var_313_object, var_314_object, var_315_string, var_316_bool, var_311_object, var_312_object);
	TaskReturn();
	bool var_297_bool;
	var_294_object->IsDialogEnd(var_297_bool);
	
	for(;;) {
		var_381_bool = !var_297_bool; //@nz
		if(var_381_bool == 0) goto Label_611;
		@sync();
		var_294_object->IsDialogEnd(var_297_bool);
	}
	
Label_611:
	object var_382_object;
	var_288_object = var_382_object;
	func_4746();
	@StopDialog(var_294_object);
	var_294_object->GetReturnValue(-1);
	int var_296_int = var_287_int;
}
EMIT "Stack[-4] = 0";


void func_2591(bool var_0_bool, int var_70_int, object var_71_object)
{
	var_0_bool = var_71_object;
	bool var_81_bool; object var_82_object;
	object var_83_object;
	func_4936(var_83_object);
	var_83_object = var_82_object;
	func_4763(var_81_bool, var_82_object);
	bool var_176_bool; object var_177_object;
	var_71_object = var_177_object;
	func_4678(var_176_bool, var_177_object, 70.0);
	if(!var_176_bool) { //@nz
		var_70_int = -2;
		return 8;
	}
	object var_77_object;
	@CreateDialog(var_77_object);
	int var_223_int;
	func_5180(var_223_int);
	var_77_object->SetNPCName(var_223_int);
	int var_224_int;
	func_5178(var_224_int);
	var_77_object->SetNPCDescription(var_224_int);
	string var_225_string;
	func_5182(var_225_string);
	var_77_object->SetPhoto(var_225_string);
	string var_226_string;
	func_5184(var_226_string);
	var_77_object->SetPhoto2(var_226_string);
	int var_227_int;
	func_5863(var_227_int);
	var_77_object->SetPlayerName(var_227_int);
	bool var_78_bool;
	@IsOverrideActive(var_78_bool);
	if(var_78_bool != 0) {
		var_70_int = -2;
		return 8;
	}
	@DoDialog(var_77_object);
	object var_236_object; object var_237_object;
	var_71_object = var_236_object;
	var_77_object = var_237_object;
	TaskCall(13);
	func_2672(var_238_object, var_239_object, var_240_string, var_241_bool, var_236_object, var_237_object);
	TaskReturn();
	bool var_80_bool;
	var_77_object->IsDialogEnd(var_80_bool);
	
	for(;;) {
		var_275_bool = !var_80_bool; //@nz
		if(var_275_bool == 0) goto Label_2661;
		@sync();
		var_77_object->IsDialogEnd(var_80_bool);
	}
	
Label_2661:
	object var_276_object;
	var_71_object = var_276_object;
	func_4746();
	@StopDialog(var_77_object);
	var_77_object->GetReturnValue(-1);
	int var_79_int = var_70_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_2079(object var_2_object, string var_520_string)
{
	bool var_521_bool;
	func_5186(var_521_bool);
	if(!var_521_bool) //@nz
		return 0;
	if(var_520_string == var_2_object)
		return 0;
	string var_524_string; bool var_525_bool;
	var_520_string = var_524_string;
	if(var_520_string == "")
		var_525_bool = false;
	else
		var_525_bool = true;
	func_4908(var_524_string, var_525_bool);
	var_2_object = var_520_string;
	
}


void func_4643(bool var_140_bool, cvector var_141_cvector)
{
	cvector var_145_cvector;
	@GetPosition(var_145_cvector);
	cvector var_146_cvector = var_141_cvector - var_145_cvector;
	var_148_float = GetByIndex(var_146_cvector, 0);
	var_149_float = GetByIndex(var_146_cvector, 2);
	bool var_147_bool;
	@Rotate(var_148_float, var_149_float, var_147_bool);
	var_147_bool = var_140_bool;
}


// @pe
void func_5669(bool var_551_bool)
{
	int var_553_int;
	func_4970(var_553_int, "b5q02");
	if(var_553_int == 2)
		var_551_bool = true;
	var_551_bool = false;
}


// @pe
void func_5164(string var_77_string, int var_78_int)
{
	if(var_78_int == 0) {
		var_82_string = GlobalVars[0];
		var_77_string = "pt_" + var_82_string;
	} else {
		var_84_string = GlobalVars[0];
		var_77_string = ("pt_" + var_84_string) + var_78_int;
	}
	
}


void func_4653(bool var_53_bool, object var_54_object)
{
	cvector var_56_cvector;
	var_54_object->GetPosition(var_56_cvector);
	bool var_57_bool; cvector var_58_cvector;
	var_56_cvector = var_58_cvector;
	func_4643(var_57_bool, var_58_cvector);
	var_57_bool = var_53_bool;
}


void func_5681(void)
{
	object var_66_object;
	@CreateDiaryEntry(var_66_object, 315, 1, 522057);
	bool var_70_bool; object var_71_object;
	var_66_object = var_71_object;
	func_5785(var_70_bool, var_71_object, 313);
}
EMIT "Stack[-1] = 0";


void func_4662(object var_79_object)
{
	cvector var_83_cvector;
	var_79_object->GetPosition(var_83_cvector);
	cvector var_84_cvector;
	@GetPosition(var_84_cvector);
	cvector var_85_cvector = var_83_cvector - var_84_cvector;
	var_86_float = GetByIndex(var_85_cvector, 0);
	var_87_float = GetByIndex(var_85_cvector, 2);
	@RotateAsync(var_86_float, var_87_float);
}


void func_5178(int var_224_int)
{
	var_224_int = 515547;
}


void func_5180(int var_223_int)
{
	var_223_int = 502872;
}


void func_5182(string var_225_string)
{
	var_225_string = "ui/NPC_MladVlad.png";
}


void func_5694(void)
{
	object var_88_object;
	@CreateDiaryEntry(var_88_object, 249, 2, 520665);
	bool var_92_bool; object var_93_object;
	var_88_object = var_93_object;
	func_5785(var_92_bool, var_93_object, -1);
}
EMIT "Stack[-1] = 0";


void func_5184(string var_226_string)
{
	var_226_string = "ui/NPC_MladVlad_b.png";
}


void func_4673(bool var_87_bool)
{
	bool var_89_bool;
	@IsLoaded(var_89_bool);
	var_89_bool = var_87_bool;
}


void func_5186(bool var_119_bool)
{
	var_119_bool = true;
}


// @pe
void func_5188(object var_76_object)
{
	object var_80_object;
	func_5813(var_80_object);
	object var_77_object;
	var_80_object = var_77_object;
	func_5830(var_77_object, "pt_map_burah_home", (float)2);
	object var_100_object;
	func_5813(var_100_object);
	var_76_object->ShowMap(var_100_object);
}


void func_4678(bool var_176_bool, object var_177_object, float var_178_float)
{
	cvector var_189_cvector; bool var_196_bool;
	var_177_object->GetPosition(var_189_cvector);
	float var_188_float;
	var_177_object->GetEyesHeight(var_188_float);
	var_197_float = GetByIndex(var_189_cvector, 1);
	SetByIndex(var_189_cvector, 1) = (var_197_float + var_188_float);
	cvector var_190_cvector;
	@GetPosition(var_190_cvector);
	@GetEyesHeight(var_188_float);
	var_198_float = GetByIndex(var_190_cvector, 1);
	SetByIndex(var_190_cvector, 1) = (var_198_float + var_188_float);
	cvector var_191_cvector = var_189_cvector - var_190_cvector;
	var_199_float = GetByIndex(var_191_cvector, 1);
	SetByIndex(var_191_cvector, 1) = (float)0;
	var_201_float = sqrt(var_191_cvector | var_191_cvector);
	var_191_cvector /= var_201_float;
	cvector var_192_cvector = -var_191_cvector;
	cvector var_203_cvector;
	func_4942(var_203_cvector, (var_192_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_193_cvector = ((var_191_cvector * var_178_float) + (var_203_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_195_bool;
	@IsOverrideActive(var_195_bool);
	if(var_195_bool != 0)
		var_176_bool = false;
	@StopWorld();
	@CameraTransit((var_190_cvector + var_193_cvector), var_192_cvector);
	var_216_float = GetByIndex(var_193_cvector, 0);
	var_217_float = GetByIndex(var_193_cvector, 2);
	@Rotate(var_216_float, var_217_float);
	bool var_218_bool;
	func_5186(var_218_bool);
	if(var_218_bool != 0) {
	} else {
		@HasAnimationTrack(var_196_bool, "head");
		if(var_196_bool == 0) goto Label_4740;
		@LookAsyncCamera("head");
	}
Label_4740:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_176_bool = true;
	
}


void func_5707(void)
{
	object var_189_object;
	@CreateDiaryEntry(var_189_object, 252, 2, 520668);
	bool var_193_bool; object var_194_object;
	var_189_object = var_194_object;
	func_5785(var_193_bool, var_194_object, 249);
}
EMIT "Stack[-1] = 0";


// @pe
void func_5204(void)
{
	@SetVariable("oob1MladVlad1", 1);
}


void func_5720(void)
{
	object var_111_object;
	@CreateDiaryEntry(var_111_object, 250, 2, 520666);
	bool var_115_bool; object var_116_object;
	var_111_object = var_116_object;
	func_5785(var_115_bool, var_116_object, 249);
}
EMIT "Stack[-1] = 0";


void func_5210(void)
{
	object var_65_object;
	func_5813(var_65_object);
	object var_64_object;
	var_65_object = var_64_object;
	float var_76_float;
	func_5120(var_76_float);
	var_64_object->AddMark("b1MladVladGotoGrif", "pt_map_grif", 3, 520047, var_76_float);
}
EMIT "Stack[-1] = 0";


// @pe
void func_3163(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_649_object, object var_650_object)
{
	var_0_bool = var_650_object;
	var_1_object = var_649_object;
	var_3_object = false;
	if(1 != 0) {
		bool var_656_bool;
		func_5514(var_1_object);
		if(var_656_bool != 0) {
			object var_662_object; object var_663_object;
			var_662_object = var_1_object;
			var_663_object = var_0_bool;
			func_5414();
			func_3281(var_650_object, "Neutral");
			var_0_bool->SetMessage(521469); //@t
			var_0_bool->ClearReplies(); //@t
			var_0_bool->AddReply(523789, 25055, 25054); //@t
			var_0_bool->AddReply(523804, 25055, 25070); //@t
		} else {
					func_3281(var_650_object, "Neutral");
					var_0_bool->SetMessage(521474); //@t
					var_0_bool->ClearReplies(); //@t
					bool var_691_bool;
					func_5526(var_1_object);
					if(var_691_bool != 0)
						var_0_bool->AddReply(521475, 22642, 22640); //@t
					bool var_700_bool = false;
					bool var_701_bool;
					func_5526(var_1_object);
					if(!var_701_bool) { //@nz
						bool var_704_bool;
						func_5538(var_704_bool, var_1_object);
						if(var_704_bool != 0)
							var_700_bool = true;
					}
					if(var_700_bool != 0)
						var_0_bool->AddReply(521479, 22645, 22644); //@t
					var_0_bool->AddReply(523837, 25111, 25110); //@t
					var_0_bool->AddReply(521476, -1, 22641); //@t
		}
	}
	for(;;) {
		bool var_681_bool;
		func_5186(var_681_bool);
		if(var_681_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_object != 0) {
				} else {
					func_4901(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_object != 0) {
					goto Label_3280;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_3280:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0xc5f";


void func_5733(void)
{
	object var_60_object;
	@CreateDiaryEntry(var_60_object, 293, 2, 521491);
	bool var_64_bool; object var_65_object;
	var_60_object = var_65_object;
	func_5785(var_64_bool, var_65_object, -1);
}
EMIT "Stack[-1] = 0";


// @pe
void func_5226(void)
{
	@SetVariable("oob1MladVlad2", 1);
}


// @pe
void func_622(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_311_object, object var_312_object)
{
	var_0_bool = var_312_object;
	var_1_object = var_311_object;
	var_3_object = false;
	if(1 != 0) {
		bool var_318_bool;
		func_5585(var_1_object);
		if(var_318_bool != 0) {
			func_740(var_312_object, "Neutral");
			var_0_bool->SetMessage(520042); //@t
			var_0_bool->ClearReplies(); //@t
			var_0_bool->AddReply(520043, 21227, 21225); //@t
			var_0_bool->AddReply(520044, -1, 21226); //@t
		} else {
					bool var_349_bool;
					func_5597(var_1_object);
					if(var_349_bool == 0) goto Label_683;
					object var_355_object; object var_356_object;
					var_355_object = var_1_object;
					var_356_object = var_0_bool;
					func_5204();
					func_740(var_312_object, "Neutral");
					var_0_bool->SetMessage(519876); //@t
					var_0_bool->ClearReplies(); //@t
					var_0_bool->AddReply(519877, 21042, 21041); //@t
					var_0_bool->AddReply(519905, 21042, 21073); //@t
		}
	}
Label_710:
	for(;;) {
		bool var_341_bool;
		func_5186(var_341_bool);
		if(var_341_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_object != 0) {
				} else {
					func_4901(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_object != 0) {
					goto Label_739;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_739:
			return 0;

		}

	}
	
Label_683:
	func_740(var_312_object, "Neutral");
	var_0_bool->SetMessage(519906); //@t
	var_0_bool->ClearReplies(); //@t
	bool var_369_bool;
	func_5609(var_1_object);
	if(var_369_bool != 0)
		var_0_bool->AddReply(519907, 21077, 21076); //@t
	var_0_bool->AddReply(519917, -1, 21086); //@t
	goto Label_710;
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x272";


void func_5232(void)
{
	@SetVariable("b2MladVladBurahHomeTalk", 1);
	object var_61_object;
	func_5813(var_61_object);
	object var_58_object;
	var_61_object = var_58_object;
	float var_72_float;
	func_5120(var_72_float);
	var_58_object->AddMark("b2BurahHome", "pt_map_burah_home", 3, 520460, var_72_float);
}
EMIT "Stack[-1] = 0";


// @pe
void func_2672(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_236_object, object var_237_object)
{
	var_0_bool = var_237_object;
	var_1_object = var_236_object;
	var_3_object = false;
	if(1 != 0) {
		func_2730(var_237_object, "Neutral");
		var_0_bool->SetMessage(520768); //@t
		var_0_bool->ClearReplies(); //@t
		var_0_bool->AddReply(520769, 21984, 21983); //@t
		var_0_bool->AddReply(520772, 21987, 21986); //@t
		goto Label_2700;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xa74";
	}
Label_2700:
	bool var_262_bool;
	func_5186(var_262_bool);
	if(var_262_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_4901(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_2729;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_2729:
		return 0;

	}
	
}


void func_5746(void)
{
	object var_109_object;
	@CreateDiaryEntry(var_109_object, 296, 2, 521494);
	bool var_113_bool; object var_114_object;
	var_109_object = var_114_object;
	func_5785(var_113_bool, var_114_object, 293);
}
EMIT "Stack[-1] = 0";


void func_5759(void)
{
	object var_83_object;
	@CreateDiaryEntry(var_83_object, 294, 2, 521492);
	bool var_87_bool; object var_88_object;
	var_83_object = var_88_object;
	func_5785(var_87_bool, var_88_object, 293);
}
EMIT "Stack[-1] = 0";


// @pe
void func_5252(void)
{
	func_4997("burah_home@door1", false);
}


void func_4746(void)
{
	bool var_278_bool;
	@CameraSwitchToNormal();
	bool var_279_bool;
	func_5186(var_279_bool);
	if(var_279_bool != 0) {
	} else {
		@HasAnimationTrack(var_278_bool, "head");
		if(var_278_bool == 0) goto Label_4762;
		@UnlookAsync("head");
	}
Label_4762:
	
}


// @pe
void func_5259(void)
{
	@SetVariable("oob2MladVlad1", 1);
}


void func_5772(object var_79_object)
{
	object var_81_object;
	@GetDiaryRoot(var_81_object);
	if(!var_81_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_79_object = false;
	}
	var_81_object = var_79_object;
}
EMIT "Stack[-1] = 0";


void func_145(void)
{
	@Stop();
}


void func_5265(void)
{
	object var_140_object;
	int var_141_int;
	func_4970(var_141_int, "b2TravnikMark");
	if(var_141_int == 0) {
		@SetVariable("b2TravnikMark", 1);
		object var_149_object;
		func_5813(var_149_object);
		var_149_object = var_140_object;
		float var_154_float;
		func_5120(var_154_float);
		var_140_object->AddMark("b2Travnik1", "pt_map_gatherer1", 3, 520463, var_154_float);
		float var_159_float;
		func_5120(var_159_float);
		var_140_object->AddMark("b2Travnik2", "pt_map_gatherer2", 3, 520464, var_159_float);
		float var_164_float;
		func_5120(var_164_float);
		var_140_object->AddMark("b2Travnik3", "pt_map_gatherer3", 3, 520465, var_164_float);
		var_140_object = null;
	}
}


void func_148(object var_75_object)
{
	bool var_77_bool;
	@WaitForAnimEnd(var_77_bool);
	if(!var_77_bool) { //@nz
	}
	object var_79_object;
	var_75_object = var_79_object;
	func_4662(var_79_object);
	@Sleep(6);
}


void func_5785(bool var_70_bool, object var_71_object, int var_72_int)
{
	object var_79_object;
	func_5772(var_79_object);
	object var_76_object;
	var_79_object = var_76_object;
	object var_77_object;
	var_76_object->Find(var_72_int, var_77_object);
	if(!var_77_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_72_int);
		var_70_bool = false;
	}
	var_77_object->AddChild(var_71_object);
	@SendWorldWndMessage(7);
	int var_78_int;
	var_71_object->GetCategory(var_78_int);
	@SetDiarySection(var_78_int);
	var_70_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


void func_4763(bool var_81_bool, object var_82_object)
{
	int var_88_int; int var_89_int;
	@GetVariable("voice_common", var_88_int);
	if(var_88_int != 0) {
		bool var_92_bool; object var_93_object;
		var_82_object = var_93_object;
		func_4821(var_92_bool, var_93_object);
		if(!var_92_bool) { //@nz
			bool var_123_bool; object var_124_object;
			var_82_object = var_124_object;
			func_4858(var_123_bool, var_124_object);
			if(!var_123_bool) { //@nz
				var_81_bool = false;
				return 4;
			}
		}
		@irand(var_89_int, 2);
		if(var_89_int != 0)
			@SetVariable("voice_common", ((var_88_int + 1) % 3));
		else
			@SetVariable("voice_common", 0);
		bool var_168_bool; object var_169_object;
		var_82_object = var_169_object;
		func_4858(var_168_bool, var_169_object);
		if(!var_168_bool) { //@nz
			bool var_171_bool; object var_172_object;
			var_82_object = var_172_object;
			func_4821(var_171_bool, var_172_object);
			if(!var_171_bool) { //@nz
				var_81_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_4819;
	
Label_4819:
	var_81_bool = true;
	
}


void func_4263(bool var_0_bool, int var_856_int, object var_857_object)
{
	var_0_bool = var_857_object;
	bool var_867_bool; object var_868_object;
	object var_869_object;
	func_4936(var_869_object);
	var_869_object = var_868_object;
	func_4763(var_867_bool, var_868_object);
	bool var_870_bool; object var_871_object;
	var_857_object = var_871_object;
	func_4678(var_870_bool, var_871_object, 70.0);
	if(!var_870_bool) { //@nz
		var_856_int = -2;
		return 8;
	}
	object var_863_object;
	@CreateDialog(var_863_object);
	int var_874_int;
	func_5180(var_874_int);
	var_863_object->SetNPCName(var_874_int);
	int var_875_int;
	func_5178(var_875_int);
	var_863_object->SetNPCDescription(var_875_int);
	string var_876_string;
	func_5182(var_876_string);
	var_863_object->SetPhoto(var_876_string);
	string var_877_string;
	func_5184(var_877_string);
	var_863_object->SetPhoto2(var_877_string);
	int var_878_int;
	func_5863(var_878_int);
	var_863_object->SetPlayerName(var_878_int);
	bool var_864_bool;
	@IsOverrideActive(var_864_bool);
	if(var_864_bool != 0) {
		var_856_int = -2;
		return 8;
	}
	@DoDialog(var_863_object);
	object var_880_object; object var_881_object;
	var_857_object = var_880_object;
	var_863_object = var_881_object;
	TaskCall(21);
	func_4344(var_882_object, var_883_object, var_884_string, var_885_bool, var_880_object, var_881_object);
	TaskReturn();
	bool var_866_bool;
	var_863_object->IsDialogEnd(var_866_bool);
	
	for(;;) {
		var_910_bool = !var_866_bool; //@nz
		if(var_910_bool == 0) goto Label_4333;
		@sync();
		var_863_object->IsDialogEnd(var_866_bool);
	}
	
Label_4333:
	object var_911_object;
	var_857_object = var_911_object;
	func_4746();
	@StopDialog(var_863_object);
	var_863_object->GetReturnValue(-1);
	int var_865_int = var_856_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_2730(object var_2_object, string var_243_string)
{
	bool var_244_bool;
	func_5186(var_244_bool);
	if(!var_244_bool) //@nz
		return 0;
	if(var_243_string == var_2_object)
		return 0;
	string var_247_string; bool var_248_bool;
	var_243_string = var_247_string;
	if(var_243_string == "")
		var_248_bool = false;
	else
		var_248_bool = true;
	func_4908(var_247_string, var_248_bool);
	var_2_object = var_243_string;
	
}


void func_5813(object var_61_object)
{
	object var_64_object; object var_65_object;
	@GetMainOutdoorScene(var_64_object);
	if(var_64_object == null) {
		@Trace("Can't find main outdoor scene");
		var_65_object = null;
		var_65_object = var_61_object;
	}
	var_64_object->GetMap(var_65_object);
	var_65_object = var_61_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_5310(void)
{
	@SetVariable("oob5MladVlad1", 1);
}


void func_3775(bool var_0_bool, int var_726_int, object var_727_object)
{
	var_0_bool = var_727_object;
	bool var_737_bool; object var_738_object;
	object var_739_object;
	func_4936(var_739_object);
	var_739_object = var_738_object;
	func_4763(var_737_bool, var_738_object);
	bool var_740_bool; object var_741_object;
	var_727_object = var_741_object;
	func_4678(var_740_bool, var_741_object, 70.0);
	if(!var_740_bool) { //@nz
		var_726_int = -2;
		return 8;
	}
	object var_733_object;
	@CreateDialog(var_733_object);
	int var_744_int;
	func_5180(var_744_int);
	var_733_object->SetNPCName(var_744_int);
	int var_745_int;
	func_5178(var_745_int);
	var_733_object->SetNPCDescription(var_745_int);
	string var_746_string;
	func_5182(var_746_string);
	var_733_object->SetPhoto(var_746_string);
	string var_747_string;
	func_5184(var_747_string);
	var_733_object->SetPhoto2(var_747_string);
	int var_748_int;
	func_5863(var_748_int);
	var_733_object->SetPlayerName(var_748_int);
	bool var_734_bool;
	@IsOverrideActive(var_734_bool);
	if(var_734_bool != 0) {
		var_726_int = -2;
		return 8;
	}
	@DoDialog(var_733_object);
	object var_750_object; object var_751_object;
	var_727_object = var_750_object;
	var_733_object = var_751_object;
	TaskCall(19);
	func_3856(var_752_object, var_753_object, var_754_string, var_755_bool, var_750_object, var_751_object);
	TaskReturn();
	bool var_736_bool;
	var_733_object->IsDialogEnd(var_736_bool);
	
	for(;;) {
		var_789_bool = !var_736_bool; //@nz
		if(var_789_bool == 0) goto Label_3845;
		@sync();
		var_733_object->IsDialogEnd(var_736_bool);
	}
	
Label_3845:
	object var_790_object;
	var_727_object = var_790_object;
	func_4746();
	@StopDialog(var_733_object);
	var_733_object->GetReturnValue(-1);
	int var_735_int = var_726_int;
}
EMIT "Stack[-4] = 0";


void func_193(void)
{
	@StopGroup0();
	@StopAnimation();
}


// @pe
void func_5316(void)
{
	@SetVariable("b5q02", 1);
	func_5694();
	func_5720();
	object var_118_object;
	func_4975(var_118_object, "quest_b5_02");
	bool var_126_bool;
	func_5084(var_126_bool, "quest_b5_02", "place_prophet");
	bool var_132_bool;
	func_5084(var_132_bool, "quest_b5_02", "maze_start");
}


void func_198(int var_159_int)
{
	string var_167_string; string var_169_string; int var_170_int; int var_171_int; int var_172_int; int var_173_int;
	if(var_159_int != 0)
		var_167_string = "ptidle" + var_159_int;
	else
		var_167_string = "ptidle";
	bool var_168_bool;
	@HasProperty(var_167_string, var_168_bool);
	if(var_168_bool != 0) {
		@GetProperty(var_167_string, var_169_string);
		int var_177_int; string var_178_string;
		var_169_string = var_178_string;
		func_264(var_177_int, var_178_string);
		var_177_int = var_170_int;
		@irand(var_171_int, var_170_int);
		string var_192_string; string var_193_string; int var_194_int;
		var_169_string = var_193_string;
		var_171_int = var_194_int;
		func_256(var_192_string, var_193_string, var_194_int);
		@PlayAnimation("all", var_192_string);
		@WaitForAnimEnd();
	} else {
		int var_195_int;
		func_5147(var_195_int);
		var_195_int = var_172_int;
		if(var_172_int == 0) goto Label_246;
		@irand(var_173_int, var_172_int);
		string var_210_string; int var_211_int;
		var_173_int = var_211_int;
		func_5140(var_210_string, var_211_int);
		@PlayAnimation("all", var_210_string);
		@WaitForAnimEnd();

	}
Label_246:
	
}


void func_5830(object var_77_object, string var_78_string, float var_79_float)
{
	object var_87_object;
	@GetMainOutdoorScene(var_87_object);
	if(var_87_object == null) {
		@Trace("Can't find main outdoor scene");
		return 8;
	}
	cvector var_85_cvector;
	cvector var_86_cvector;
	bool var_88_bool;
	var_87_object->GetLocator(var_78_string, var_88_bool, var_85_cvector, var_86_cvector);
	if(!var_88_bool) //@nz
		@Trace(("Warning: outdoor scene locator " + var_78_string) + " doesnt exist");
	var_87_object->GetMap(var_77_object);
	if(var_77_object == null) {
		@Trace("Can't find map");
		return 8;
	}
	var_98_float = GetByIndex(var_85_cvector, 0);
	var_99_float = GetByIndex(var_85_cvector, 2);
	var_77_object->SetMapParams(var_98_float, var_99_float, var_79_float);
}
EMIT "Stack[-2] = 0";


void func_1227(bool var_0_bool, int var_385_int, object var_386_object)
{
	var_0_bool = var_386_object;
	bool var_396_bool; object var_397_object;
	object var_398_object;
	func_4936(var_398_object);
	var_398_object = var_397_object;
	func_4763(var_396_bool, var_397_object);
	bool var_399_bool; object var_400_object;
	var_386_object = var_400_object;
	func_4678(var_399_bool, var_400_object, 70.0);
	if(!var_399_bool) { //@nz
		var_385_int = -2;
		return 8;
	}
	object var_392_object;
	@CreateDialog(var_392_object);
	int var_403_int;
	func_5180(var_403_int);
	var_392_object->SetNPCName(var_403_int);
	int var_404_int;
	func_5178(var_404_int);
	var_392_object->SetNPCDescription(var_404_int);
	string var_405_string;
	func_5182(var_405_string);
	var_392_object->SetPhoto(var_405_string);
	string var_406_string;
	func_5184(var_406_string);
	var_392_object->SetPhoto2(var_406_string);
	int var_407_int;
	func_5863(var_407_int);
	var_392_object->SetPlayerName(var_407_int);
	bool var_393_bool;
	@IsOverrideActive(var_393_bool);
	if(var_393_bool != 0) {
		var_385_int = -2;
		return 8;
	}
	@DoDialog(var_392_object);
	object var_409_object; object var_410_object;
	var_386_object = var_409_object;
	var_392_object = var_410_object;
	TaskCall(9);
	func_1308(var_411_object, var_412_object, var_413_string, var_414_bool, var_409_object, var_410_object);
	TaskReturn();
	bool var_395_bool;
	var_392_object->IsDialogEnd(var_395_bool);
	
	for(;;) {
		var_471_bool = !var_395_bool; //@nz
		if(var_471_bool == 0) goto Label_1297;
		@sync();
		var_392_object->IsDialogEnd(var_395_bool);
	}
	
Label_1297:
	object var_472_object;
	var_386_object = var_472_object;
	func_4746();
	@StopDialog(var_392_object);
	var_392_object->GetReturnValue(-1);
	int var_394_int = var_385_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_3281(object var_2_object, string var_666_string)
{
	bool var_667_bool;
	func_5186(var_667_bool);
	if(!var_667_bool) //@nz
		return 0;
	if(var_666_string == var_2_object)
		return 0;
	string var_670_string; bool var_671_bool;
	var_666_string = var_670_string;
	if(var_666_string == "")
		var_671_bool = false;
	else
		var_671_bool = true;
	func_4908(var_670_string, var_671_bool);
	var_2_object = var_666_string;
	
}


void func_4821(bool var_92_bool, object var_93_object)
{
	string var_99_string; bool var_101_bool; int var_102_int; string var_103_string;
	var_99_string = "c";
	int var_100_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_93_object->HasProperty((var_99_string + (var_100_int + 1)), var_101_bool);
			if(!var_101_bool) { //@nz
			} else {
				var_100_int += 1;
			}
		}
		if(!var_100_int) { //@nz
			var_92_bool = false;
			return 10;
		}
		var_102_int = 0;
		if(var_100_int > 1)
			@irand(var_102_int, var_100_int);
		var_93_object->GetProperty((var_99_string + (var_102_int + 1)), var_103_string);
		bool var_115_bool; string var_116_string;
		var_103_string = var_116_string;
		func_4914(var_115_bool, var_116_string);
		var_115_bool = var_92_bool;
		return 10;

	}
}


// @pe
void func_5342(void)
{
	func_5707();
	bool var_196_bool;
	func_5084(var_196_bool, "quest_b5_02", "completed");
}


// @pe
void func_740(object var_2_object, string var_326_string)
{
	bool var_327_bool;
	func_5186(var_327_bool);
	if(!var_327_bool) //@nz
		return 0;
	if(var_326_string == var_2_object)
		return 0;
	string var_330_string; bool var_331_bool;
	var_326_string = var_330_string;
	if(var_326_string == "")
		var_331_bool = false;
	else
		var_331_bool = true;
	func_4908(var_330_string, var_331_bool);
	var_2_object = var_326_string;
	
}


void func_5863(int var_227_int)
{
	int var_229_int;
	@GetVariable("branch", var_229_int);
	if(var_229_int == 0) {
		var_227_int = 1;
		return 2;
	EMIT "GOTO 0x16f6";
	}
	if(var_229_int == 1) {
		var_227_int = 2;
		return 2;
	}
	var_227_int = 3;
}


// @pe
void func_5352(object var_128_object)
{
	@Trace("money 4000 is given");
	object var_131_object;
	var_128_object = var_131_object;
	func_5026(var_131_object, 4000);
}


// @pe
void func_5362(object var_55_object)
{
	@Trace("kerosene50 is given");
	object var_58_object;
	var_55_object = var_58_object;
	func_5064(var_58_object, "kerosene", 50);
}


// @pe
void func_4344(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_880_object, object var_881_object)
{
	var_0_bool = var_881_object;
	var_1_object = var_880_object;
	var_3_object = false;
	if(1 != 0) {
		func_4402(var_881_object, "Neutral");
		var_0_bool->SetMessage(540554); //@t
		var_0_bool->ClearReplies(); //@t
		var_0_bool->AddReply(540555, -1, 42564); //@t
		var_0_bool->AddReply(540794, -1, 42843); //@t
		goto Label_4372;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x10fc";
	}
Label_4372:
	bool var_902_bool;
	func_5186(var_902_bool);
	if(var_902_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_4901(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_4401;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_4401:
		return 0;

	}
	
}


// @pe
void func_5880(object var_67_object)
{
	var_68_bool = GlobalVars[2];
	if(!var_68_bool) { //@nz
		int var_70_int; object var_71_object;
		var_67_object = var_71_object;
		TaskCall(12);
		func_2591(var_72_object, var_70_int, var_71_object);
		TaskReturn();
		var_283_bool = GlobalVars[2];
		GlobalVars[2] = true;
	}
	bool var_284_bool;
	func_5134(var_284_bool, 1);
	if(var_284_bool != 0) {
		int var_287_int; object var_288_object;
		var_67_object = var_288_object;
		TaskCall(6);
		func_541(var_289_object, var_287_int, var_288_object);
		TaskReturn();
		return 0;
	}
	bool var_383_bool;
	func_5134(var_383_bool, 2);
	if(var_383_bool != 0) {
		int var_385_int; object var_386_object;
		var_67_object = var_386_object;
		TaskCall(8);
		func_1227(var_387_object, var_385_int, var_386_object);
		TaskReturn();
		return 0;
	}
	bool var_473_bool;
	func_5134(var_473_bool, 5);
	if(var_473_bool != 0) {
		int var_475_int; object var_476_object;
		var_67_object = var_476_object;
		TaskCall(10);
		func_1895(var_477_object, var_475_int, var_476_object);
		TaskReturn();
		return 0;
	}
	bool var_565_bool;
	func_5134(var_565_bool, 6);
	if(var_565_bool != 0) {
		int var_567_int; object var_568_object;
		var_67_object = var_568_object;
		TaskCall(14);
		func_2830(var_569_object, var_567_int, var_568_object);
		TaskReturn();
		return 0;
	}
	bool var_623_bool;
	func_5134(var_623_bool, 8);
	if(var_623_bool != 0) {
		int var_625_int; object var_626_object;
		var_67_object = var_626_object;
		TaskCall(16);
		func_3082(var_627_object, var_625_int, var_626_object);
		TaskReturn();
		return 0;
	}
	bool var_724_bool;
	func_5134(var_724_bool, 11);
	if(var_724_bool != 0) {
		int var_726_int; object var_727_object;
		var_67_object = var_727_object;
		TaskCall(18);
		func_3775(var_728_object, var_726_int, var_727_object);
		TaskReturn();
		return 0;
	}
	bool var_791_bool = false;
	bool var_792_bool;
	func_5134(var_792_bool, 12);
	if(var_792_bool != 0) {
		var_794_bool = GlobalVars[3];
		if(!var_794_bool) //@nz
			var_791_bool = true;
	}
	if(var_791_bool != 0) {
		int var_796_int; object var_797_object;
		var_67_object = var_797_object;
		TaskCall(4);
		func_282(var_798_object, var_796_int, var_797_object);
		TaskReturn();
		var_855_bool = GlobalVars[3];
		GlobalVars[3] = true;
		return 0;
	}
	int var_856_int; object var_857_object;
	var_67_object = var_857_object;
	TaskCall(20);
	func_4263(var_858_object, var_856_int, var_857_object);
	TaskReturn();
}


void func_4858(bool var_123_bool, object var_124_object)
{
	bool var_132_bool; int var_133_int; string var_134_string;
	int var_136_int;
	func_5125(var_136_int);
	string var_130_string = ("d" + var_136_int) + "m";
	int var_131_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_124_object->HasProperty((var_130_string + (var_131_int + 1)), var_132_bool);
			if(!var_132_bool) { //@nz
			} else {
				var_131_int += 1;
			}
		}
		if(!var_131_int) { //@nz
			var_123_bool = false;
			return 10;
		}
		var_133_int = 0;
		if(var_131_int > 1)
			@irand(var_133_int, var_131_int);
		var_124_object->GetProperty((var_130_string + (var_133_int + 1)), var_134_string);
		bool var_155_bool; string var_156_string;
		var_134_string = var_156_string;
		func_4914(var_155_bool, var_156_string);
		var_155_bool = var_123_bool;
		return 10;

	}
}


// @pe
void func_5373(void)
{
	object var_60_object;
	func_4629(var_60_object);
	object var_57_object;
	var_60_object = var_57_object;
	func_5096(var_57_object, "house_vlad", "pt_maze_start");
}


// @pe
void func_256(string var_184_string, string var_185_string, int var_186_int)
{
	if(var_186_int == 0) {
	} else {
		var_184_string += var_186_int;
	}
	
}


void func_264(int var_177_int, string var_178_string)
{
	int var_181_int; bool var_182_bool;
	var_181_int = 0;
	
	for(;;) {
		string var_184_string; string var_185_string; int var_186_int;
		var_178_string = var_185_string;
		var_181_int = var_186_int;
		func_256(var_184_string, var_185_string, var_186_int);
		@HasAnimation(var_182_bool, "all", var_184_string);
		if(!var_182_bool) //@nz
			break;
		var_181_int += 1;
	}
	var_181_int = var_177_int;
}


// @pe
void func_5384(void)
{
	@SetVariable("b8q02", 1);
	func_5733();
	func_5759();
	object var_90_object;
	func_4986(var_90_object, "quest_b8_02");
}


void func_2830(bool var_0_bool, int var_567_int, object var_568_object)
{
	var_0_bool = var_568_object;
	bool var_578_bool; object var_579_object;
	object var_580_object;
	func_4936(var_580_object);
	var_580_object = var_579_object;
	func_4763(var_578_bool, var_579_object);
	bool var_581_bool; object var_582_object;
	var_568_object = var_582_object;
	func_4678(var_581_bool, var_582_object, 70.0);
	if(!var_581_bool) { //@nz
		var_567_int = -2;
		return 8;
	}
	object var_574_object;
	@CreateDialog(var_574_object);
	int var_585_int;
	func_5180(var_585_int);
	var_574_object->SetNPCName(var_585_int);
	int var_586_int;
	func_5178(var_586_int);
	var_574_object->SetNPCDescription(var_586_int);
	string var_587_string;
	func_5182(var_587_string);
	var_574_object->SetPhoto(var_587_string);
	string var_588_string;
	func_5184(var_588_string);
	var_574_object->SetPhoto2(var_588_string);
	int var_589_int;
	func_5863(var_589_int);
	var_574_object->SetPlayerName(var_589_int);
	bool var_575_bool;
	@IsOverrideActive(var_575_bool);
	if(var_575_bool != 0) {
		var_567_int = -2;
		return 8;
	}
	@DoDialog(var_574_object);
	object var_591_object; object var_592_object;
	var_568_object = var_591_object;
	var_574_object = var_592_object;
	TaskCall(15);
	func_2911(var_593_object, var_594_object, var_595_string, var_596_bool, var_591_object, var_592_object);
	TaskReturn();
	bool var_577_bool;
	var_574_object->IsDialogEnd(var_577_bool);
	
	for(;;) {
		var_621_bool = !var_577_bool; //@nz
		if(var_621_bool == 0) goto Label_2900;
		@sync();
		var_574_object->IsDialogEnd(var_577_bool);
	}
	
Label_2900:
	object var_622_object;
	var_568_object = var_622_object;
	func_4746();
	@StopDialog(var_574_object);
	var_574_object->GetReturnValue(-1);
	int var_576_int = var_567_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_3856(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_750_object, object var_751_object)
{
	var_0_bool = var_751_object;
	var_3_object = false;
	if(1 != 0) {
		func_3924(var_751_object, "Neutral");
		var_0_bool->SetMessage(522079); //@t
		var_0_bool->ClearReplies(); //@t
		bool var_766_bool;
		func_5561(var_750_object);
		if(var_766_bool != 0)
			var_0_bool->AddReply(523566, 24801, 24800); //@t
		var_0_bool->AddReply(523569, 24804, 24803); //@t
		var_0_bool->AddReply(522080, -1, 23249); //@t
		goto Label_3894;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xf14";
	}
Label_3894:
	bool var_781_bool;
	func_5186(var_781_bool);
	if(var_781_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_4901(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_3923;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_3923:
		return 0;

	}
	
}


void func_5400(object var_104_object)
{
	func_5746();
	bool var_116_bool;
	func_5084(var_116_bool, "quest_b8_02", "completed");
	int var_107_int;
	var_104_object->RemoveItemByType(var_107_int, "b8q02_book", 1);
}


void func_282(bool var_0_bool, int var_796_int, object var_797_object)
{
	var_0_bool = var_797_object;
	bool var_807_bool; object var_808_object;
	object var_809_object;
	func_4936(var_809_object);
	var_809_object = var_808_object;
	func_4763(var_807_bool, var_808_object);
	bool var_810_bool; object var_811_object;
	var_797_object = var_811_object;
	func_4678(var_810_bool, var_811_object, 70.0);
	if(!var_810_bool) { //@nz
		var_796_int = -2;
		return 8;
	}
	object var_803_object;
	@CreateDialog(var_803_object);
	int var_814_int;
	func_5180(var_814_int);
	var_803_object->SetNPCName(var_814_int);
	int var_815_int;
	func_5178(var_815_int);
	var_803_object->SetNPCDescription(var_815_int);
	string var_816_string;
	func_5182(var_816_string);
	var_803_object->SetPhoto(var_816_string);
	string var_817_string;
	func_5184(var_817_string);
	var_803_object->SetPhoto2(var_817_string);
	int var_818_int;
	func_5863(var_818_int);
	var_803_object->SetPlayerName(var_818_int);
	bool var_804_bool;
	@IsOverrideActive(var_804_bool);
	if(var_804_bool != 0) {
		var_796_int = -2;
		return 8;
	}
	@DoDialog(var_803_object);
	object var_820_object; object var_821_object;
	var_797_object = var_820_object;
	var_803_object = var_821_object;
	TaskCall(5);
	func_363(var_822_object, var_823_object, var_824_string, var_825_bool, var_820_object, var_821_object);
	TaskReturn();
	bool var_806_bool;
	var_803_object->IsDialogEnd(var_806_bool);
	
	for(;;) {
		var_853_bool = !var_806_bool; //@nz
		if(var_853_bool == 0) goto Label_352;
		@sync();
		var_803_object->IsDialogEnd(var_806_bool);
	}
	
Label_352:
	object var_854_object;
	var_797_object = var_854_object;
	func_4746();
	@StopDialog(var_803_object);
	var_803_object->GetReturnValue(-1);
	int var_805_int = var_796_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_1308(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_409_object, object var_410_object)
{
	var_0_bool = var_410_object;
	var_1_object = var_409_object;
	var_3_object = false;
	if(1 != 0) {
		bool var_416_bool;
		func_5621(var_1_object);
		if(!var_416_bool) { //@nz
			object var_423_object; object var_424_object;
			var_423_object = var_1_object;
			var_424_object = var_0_bool;
			func_5435();
			func_1411(var_410_object, "Neutral");
			var_0_bool->SetMessage(520000); //@t
			var_0_bool->ClearReplies(); //@t
			var_0_bool->AddReply(520001, 21183, 21182); //@t
			var_0_bool->AddReply(520017, 21183, 21199); //@t
		} else {
					func_1411(var_410_object, "Neutral");
					var_0_bool->SetMessage(520019); //@t
					var_0_bool->ClearReplies(); //@t
					bool var_456_bool = false;
					bool var_457_bool;
					func_5633(var_1_object);
					if(var_457_bool != 0) {
						bool var_463_bool;
						func_5621(var_1_object);
						if(var_463_bool != 0)
							var_456_bool = true;
					}
					if(var_456_bool != 0)
						var_0_bool->AddReply(520020, 21205, 21204); //@t
					var_0_bool->AddReply(520030, -1, 21214); //@t
		}
	}
	for(;;) {
		bool var_446_bool;
		func_5186(var_446_bool);
		if(var_446_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_object != 0) {
				} else {
					func_4901(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_object != 0) {
					goto Label_1410;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_1410:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x520";


void func_4901(string var_264_string)
{
	float var_267_float; float var_268_float;
	@lshGetAnimTimes(var_264_string, var_267_float, var_268_float);
	@lshPlayAnimation(var_267_float, var_268_float, false);
}


// @pe
void func_5414(void)
{
	@SetVariable("oob8MladVlad1", 1);
}


void func_4908(string var_247_string, bool var_248_bool)
{
	float var_253_float; float var_254_float;
	@lshGetAnimTimes(var_247_string, var_253_float, var_254_float);
	@lshPlayAnimation(var_253_float, var_254_float, var_248_bool);
}


// @pe
void func_5420(void)
{
	@SetVariable("b11q01KnowWhoKilled", 1);
	func_5681();
}


// @pe
void func_4402(object var_2_object, string var_887_string)
{
	bool var_888_bool;
	func_5186(var_888_bool);
	if(!var_888_bool) //@nz
		return 0;
	if(var_887_string == var_2_object)
		return 0;
	string var_891_string; bool var_892_bool;
	var_887_string = var_891_string;
	if(var_887_string == "")
		var_892_bool = false;
	else
		var_892_bool = true;
	func_4908(var_891_string, var_892_bool);
	var_2_object = var_887_string;
	
}


void func_4914(bool var_115_bool, string var_116_string)
{
	bool var_118_bool;
	bool var_119_bool;
	func_5186(var_119_bool);
	if(var_119_bool != 0) {
		@lshHasSpeech(var_118_bool, var_116_string);
		if(var_118_bool != 0) {
			@lshPlaySpeech(var_116_string);
			var_115_bool = true;
		}
	}
	var_115_bool = false;
}


// @pe
void func_5429(void)
{
	@SetVariable("oob11MladVlad1", 1);
}


// @pe
void func_5435(void)
{
	bool var_425_bool;
	func_5084(var_425_bool, "quest_b2_01", "place_mladvlad");
}


void func_4929(void)
{
	bool var_52_bool;
	func_5186(var_52_bool);
	if(var_52_bool != 0)
		@lshStopSpeech();
}


// @pe
void func_5442(object var_171_object)
{
	@Trace("money10000 is given");
	object var_174_object;
	var_171_object = var_174_object;
	func_5026(var_174_object, 10000);
}


void func_4936(object var_83_object)
{
	object var_85_object;
	@self(var_85_object);
	var_85_object = var_83_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_5452(void)
{
	@TriggerWorld("playsound", "givemoney");
}


void func_4942(cvector var_203_cvector, cvector var_204_cvector)
{
	float var_207_float = sqrt(var_204_cvector | var_204_cvector);
	if(var_207_float < 0.000001)
		var_203_cvector = [0.0, 0.0, 0.0];
	var_203_cvector = var_204_cvector / var_207_float;
}


// @pe
void func_5458(void)
{
	@TriggerWorld("playsound", "giveitem");
}


// @pe
void func_3924(object var_2_object, string var_757_string)
{
	bool var_758_bool;
	func_5186(var_758_bool);
	if(!var_758_bool) //@nz
		return 0;
	if(var_757_string == var_2_object)
		return 0;
	string var_761_string; bool var_762_bool;
	var_757_string = var_761_string;
	if(var_757_string == "")
		var_762_bool = false;
	else
		var_762_bool = true;
	func_4908(var_761_string, var_762_bool);
	var_2_object = var_757_string;
	
}


// @pe
void func_5464(void)
{
	@SetVariable("b5MladVladVisit", 1);
}


// @pe
void func_4952(float var_105_float, float var_106_float)
{
	if(var_106_float < 0)
		var_105_float = -var_106_float;
	else
		var_106_float = var_105_float;
	
}


// @pe
void func_5470(object var_199_object)
{
	@Trace("money 7000 is given");
	object var_202_object;
	var_199_object = var_202_object;
	func_5026(var_202_object, 7000);
}


// @pe
void func_2911(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_591_object, object var_592_object)
{
	var_0_bool = var_592_object;
	var_1_object = var_591_object;
	var_3_object = false;
	if(1 != 0) {
		func_2969(var_592_object, "Neutral");
		var_0_bool->SetMessage(521202); //@t
		var_0_bool->ClearReplies(); //@t
		var_0_bool->AddReply(521203, 22402, 22400); //@t
		var_0_bool->AddReply(521204, -1, 22401); //@t
		goto Label_2939;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xb63";
	}
Label_2939:
	bool var_613_bool;
	func_5186(var_613_bool);
	if(var_613_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_4901(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_2968;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_2968:
		return 0;

	}
	
}


// @pe
void func_4960(float var_116_float, cvector var_117_cvector)
{
	var_118_float = GetByIndex(var_117_cvector, 0);
	var_119_float = GetByIndex(var_117_cvector, 0);
	var_121_float = GetByIndex(var_117_cvector, 2);
	var_122_float = GetByIndex(var_117_cvector, 2);
	var_116_float = sqrt((var_118_float * var_119_float) + (var_121_float * var_122_float));
}


void func_1895(bool var_0_bool, int var_475_int, object var_476_object)
{
	var_0_bool = var_476_object;
	bool var_486_bool; object var_487_object;
	object var_488_object;
	func_4936(var_488_object);
	var_488_object = var_487_object;
	func_4763(var_486_bool, var_487_object);
	bool var_489_bool; object var_490_object;
	var_476_object = var_490_object;
	func_4678(var_489_bool, var_490_object, 70.0);
	if(!var_489_bool) { //@nz
		var_475_int = -2;
		return 8;
	}
	object var_482_object;
	@CreateDialog(var_482_object);
	int var_493_int;
	func_5180(var_493_int);
	var_482_object->SetNPCName(var_493_int);
	int var_494_int;
	func_5178(var_494_int);
	var_482_object->SetNPCDescription(var_494_int);
	string var_495_string;
	func_5182(var_495_string);
	var_482_object->SetPhoto(var_495_string);
	string var_496_string;
	func_5184(var_496_string);
	var_482_object->SetPhoto2(var_496_string);
	int var_497_int;
	func_5863(var_497_int);
	var_482_object->SetPlayerName(var_497_int);
	bool var_483_bool;
	@IsOverrideActive(var_483_bool);
	if(var_483_bool != 0) {
		var_475_int = -2;
		return 8;
	}
	@DoDialog(var_482_object);
	object var_499_object; object var_500_object;
	var_476_object = var_499_object;
	var_482_object = var_500_object;
	TaskCall(11);
	func_1976(var_501_object, var_502_object, var_503_string, var_504_bool, var_499_object, var_500_object);
	TaskReturn();
	bool var_485_bool;
	var_482_object->IsDialogEnd(var_485_bool);
	
	for(;;) {
		var_563_bool = !var_485_bool; //@nz
		if(var_563_bool == 0) goto Label_1965;
		@sync();
		var_482_object->IsDialogEnd(var_485_bool);
	}
	
Label_1965:
	object var_564_object;
	var_476_object = var_564_object;
	func_4746();
	@StopDialog(var_482_object);
	var_482_object->GetReturnValue(-1);
	int var_484_int = var_475_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_5480(object var_204_object)
{
	@Trace("recipe2 is given");
	object var_207_object;
	var_204_object = var_207_object;
	func_5064(var_207_object, "recipe2", 1);
}


void func_4970(int var_320_int, string var_321_string)
{
	int var_323_int;
	@GetVariable(var_321_string, var_323_int);
	var_323_int = var_320_int;
}


// @pe
void func_363(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_820_object, object var_821_object)
{
	var_0_bool = var_821_object;
	var_1_object = var_820_object;
	var_3_object = false;
	if(1 != 0) {
		func_426(var_821_object, "Neutral");
		var_0_bool->SetMessage(535231); //@t
		var_0_bool->ClearReplies(); //@t
		var_0_bool->AddReply(535232, 36953, 36907); //@t
		var_0_bool->AddReply(535233, -1, 36908); //@t
		var_0_bool->AddReply(535280, -1, 36956); //@t
		goto Label_396;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x16f";
	}
Label_396:
	bool var_845_bool;
	func_5186(var_845_bool);
	if(var_845_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_4901(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_425;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_425:
		return 0;

	}
	
}


void func_4975(object var_118_object, string var_119_string)
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
void func_5491(object var_210_object)
{
	@Trace("recipe3 is given");
	object var_213_object;
	var_210_object = var_213_object;
	func_5064(var_213_object, "recipe3", 1);
}


void func_4473(bool var_0_bool, object var_1_object, object var_2_object)
{
	bool var_62_bool; int var_63_int; bool var_64_bool; cvector var_65_cvector; cvector var_66_cvector; cvector var_67_cvector; float var_68_float; cvector var_69_cvector; bool var_70_bool; cvector var_71_cvector;
	@SensePlayerOnly(true);
	func_4561();
	object var_61_object;
	@GetScene(var_61_object);
	var_2_object = 0;
	
	for(;;) {
		string var_77_string;
		func_5164(var_77_string, var_2_object);
		var_61_object->GetLocator(var_77_string, var_62_bool);
		if(!var_62_bool) { //@nz
		} else {
		}
		bool var_87_bool;
		func_4673(var_87_bool);
		if(!var_87_bool) { //@nz
			TaskCall(0);
			func_0();
			TaskReturn();
		}
		func_4569(var_70_bool, var_71_cvector);

		for(;;) {
			@irand(var_63_int, (var_2_object + 1));
			string var_111_string; int var_112_int;
			var_63_int = var_112_int;
			func_5164(var_111_string, var_112_int);
			var_61_object->GetLocator(var_111_string, var_64_bool, var_65_cvector, var_66_cvector);
			cvector var_113_cvector;
			func_4616(var_113_cvector);
			var_67_cvector = var_65_cvector - var_113_cvector;
			float var_116_float; cvector var_117_cvector;
			var_67_cvector = var_117_cvector;
			func_4960(var_116_float, var_117_cvector);
			if(var_116_float > var_1_object) {
				@GetHeight(var_68_float);
				var_126_float = GetByIndex(var_69_cvector, 1);
				SetByIndex(var_69_cvector, 1) = (var_126_float + var_68_float);
				@CanReachByPF(var_70_bool, var_69_cvector);
				if(var_70_bool != 0) {
					var_129_float = sqrt(var_67_cvector | var_67_cvector);
					var_71_cvector = var_69_cvector - (var_67_cvector * (var_0_bool / var_129_float));
					bool var_132_bool; cvector var_133_cvector; cvector var_134_cvector;
					var_71_cvector = var_133_cvector;
					var_66_cvector = var_134_cvector;
					TaskCall(1);
					func_13(var_135_bool, var_132_bool, var_133_cvector, var_134_cvector);
					TaskReturn();
					if(var_135_bool != 0) {
						int var_159_int;
						var_63_int = var_159_int;
						TaskCall(3);
						func_198(var_159_int);
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


void func_4986(object var_90_object, string var_91_string)
{
	object var_94_object;
	@GetMainOutdoorScene(var_94_object);
	object var_95_object;
	@AddBlankActorFromXml(var_95_object, var_94_object, var_91_string, (var_91_string + ".xml"));
	var_95_object = var_90_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_5502(void)
{
	@TriggerWorld("playsound", "giveitem");
}


// @pe
void func_1411(object var_2_object, string var_431_string)
{
	bool var_432_bool;
	func_5186(var_432_bool);
	if(!var_432_bool) //@nz
		return 0;
	if(var_431_string == var_2_object)
		return 0;
	string var_435_string; bool var_436_bool;
	var_431_string = var_435_string;
	if(var_431_string == "")
		var_436_bool = false;
	else
		var_436_bool = true;
	func_4908(var_435_string, var_436_bool);
	var_2_object = var_431_string;
	
}


// @pe
void func_5508(void)
{
	@TriggerWorld("playsound", "mapmark");
}


void func_4997(string var_103_string, bool var_104_bool)
{
	object var_106_object;
	@FindActor(var_106_object, var_103_string);
	if(!var_106_object) //@nz
		@Trace(("Door " + var_103_string) + " not found");
	else
		var_106_object->SetProperty("locked", var_104_bool);
	
}
EMIT "Stack[-1] = 0";


// @pe
void func_5514(bool var_656_bool)
{
	int var_658_int;
	func_4970(var_658_int, "oob8MladVlad1");
	if(var_658_int == 0) {
		var_656_bool = true;
		return 0;
	}
	var_656_bool = false;
}


// @pe
void func_5526(bool var_691_bool)
{
	int var_693_int;
	func_4970(var_693_int, "b8q02");
	if(var_693_int == 0) {
		var_691_bool = true;
		return 0;
	}
	var_691_bool = false;
}


void func_5014(int var_144_int, int var_145_int)
{
	object var_147_object;
	@CreateIntVector(var_147_object);
	var_147_object->add(var_144_int);
	var_147_object->add(var_145_int);
	@SendWorldWndMessage(3, var_147_object);
}
EMIT "Stack[-1] = 0";


// @pe
void func_2969(object var_2_object, string var_598_string)
{
	bool var_599_bool;
	func_5186(var_599_bool);
	if(!var_599_bool) //@nz
		return 0;
	if(var_598_string == var_2_object)
		return 0;
	string var_602_string; bool var_603_bool;
	var_598_string = var_602_string;
	if(var_598_string == "")
		var_603_bool = false;
	else
		var_603_bool = true;
	func_4908(var_602_string, var_603_bool);
	var_2_object = var_598_string;
	
}


// @pe
void func_5538(bool var_704_bool, object var_705_object)
{
	object var_707_object;
	var_705_object = var_707_object;
	bool var_706_bool;
	func_5077(var_706_bool, var_707_object, "b8q02_book");
	if(var_706_bool != 0) {
		var_704_bool = true;
		return 0;
	}
	var_704_bool = false;
}


void func_5026(object var_131_object, int var_132_int)
{
	int var_134_int;
	object var_135_object;
	var_131_object = var_135_object;
	int var_137_int;
	func_4636(var_135_object, "money", var_137_int);
	if(var_137_int > 0) {
		@GetInvItemByName(var_134_int, "Money");
		int var_144_int; int var_145_int;
		var_134_int = var_144_int;
		var_132_int = var_145_int;
		func_5014(var_144_int, var_145_int);
	}
}


// @pe
void func_426(object var_2_object, string var_827_string)
{
	bool var_828_bool;
	func_5186(var_828_bool);
	if(!var_828_bool) //@nz
		return 0;
	if(var_827_string == var_2_object)
		return 0;
	string var_831_string; bool var_832_bool;
	var_827_string = var_831_string;
	if(var_827_string == "")
		var_832_bool = false;
	else
		var_832_bool = true;
	func_4908(var_831_string, var_832_bool);
	var_2_object = var_827_string;
	
}


// @pe
void func_5549(bool var_151_bool)
{
	int var_153_int;
	func_4970(var_153_int, "b11q01");
	if(var_153_int == 1000)
		var_151_bool = true;
	var_151_bool = false;
}


void func_5045(object var_63_object, object var_64_object, int var_65_int)
{
	int var_69_int;
	var_64_object->GetItemID(var_69_int);
	int var_70_int;
	@GetInvItemProperty(var_70_int, var_69_int, "Category");
	bool var_71_bool;
	var_63_object->AddItem(var_71_bool, var_64_object, var_70_int, var_65_int);
	if(!var_71_bool) { //@nz
		var_63_object->DropItems(var_64_object, var_65_int);
	} else {
		int var_74_int; int var_75_int;
		var_69_int = var_74_int;
		var_65_int = var_75_int;
		func_5014(var_74_int, var_75_int);
	}
	
}


// @pe
void func_1976(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_499_object, object var_500_object)
{
	var_0_bool = var_500_object;
	var_1_object = var_499_object;
	var_3_object = false;
	if(1 != 0) {
		bool var_506_bool;
		func_5645(var_1_object);
		if(var_506_bool != 0) {
			object var_512_object; object var_513_object;
			var_512_object = var_1_object;
			var_513_object = var_0_bool;
			func_5310();
			object var_516_object; object var_517_object;
			var_516_object = var_1_object;
			var_517_object = var_0_bool;
			func_5464();
			func_2079(var_500_object, "Rage");
			var_0_bool->SetMessage(520138); //@t
			var_0_bool->ClearReplies(); //@t
			var_0_bool->AddReply(520139, 21324, 21323); //@t
		} else {
					func_2079(var_500_object, "Rage");
					var_0_bool->SetMessage(520157); //@t
					var_0_bool->ClearReplies(); //@t
					bool var_542_bool;
					func_5657(var_1_object);
					if(var_542_bool != 0)
						var_0_bool->AddReply(520158, 21346, 21345); //@t
					bool var_551_bool;
					func_5669(var_1_object);
					if(var_551_bool != 0)
						var_0_bool->AddReply(520164, 21352, 21351); //@t
					var_0_bool->AddReply(520180, -1, 21370); //@t
		}
	}
	for(;;) {
		bool var_532_bool;
		func_5186(var_532_bool);
		if(var_532_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_object != 0) {
				} else {
					func_4901(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_object != 0) {
					goto Label_2078;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_2078:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x7bc";


// @pe
void func_5561(bool var_766_bool)
{
	int var_768_int;
	func_4970(var_768_int, "oob11MladVlad1");
	if(var_768_int == 0) {
		var_766_bool = true;
		return 0;
	}
	var_766_bool = false;
}


// @pe
void func_5573(bool var_154_bool)
{
	int var_156_int;
	func_4970(var_156_int, "KnowGrif");
	if(var_156_int == 1)
		var_154_bool = true;
	var_154_bool = false;
}


void func_5064(object var_58_object, string var_59_string, int var_60_int)
{
	object var_62_object;
	@CreateInvItem(var_62_object);
	var_62_object->SetItemName(var_59_string);
	object var_63_object; object var_64_object; int var_65_int;
	var_58_object = var_63_object;
	var_62_object = var_64_object;
	var_60_int = var_65_int;
	func_5045(var_63_object, var_64_object, var_65_int);
}
EMIT "Stack[-1] = 0";


// @pe
void func_5585(bool var_318_bool)
{
	int var_320_int;
	func_4970(var_320_int, "b1q01");
	if(var_320_int == 0) {
		var_318_bool = true;
		return 0;
	}
	var_318_bool = false;
}


void func_4561(void)
{
	string var_74_string;
	@GetProperty("loc", var_74_string);
	var_76_string = GlobalVars[0];
	var_74_string = var_76_string;
	GlobalVars[0] = var_76_string;
}


void func_5077(bool var_706_bool, object var_707_object, string var_708_string)
{
	int var_711_int;
	@GetInvItemByName(var_711_int, var_708_string);
	bool var_712_bool;
	var_707_object->HasItem(var_711_int, var_712_bool);
	var_712_bool = var_706_bool;
}


void func_4569(bool var_0_bool, object var_1_object)
{
	cvector var_95_cvector;
	@GetAnimationOffset(var_95_cvector, "all", "walk_stopl");
	cvector var_96_cvector;
	@GetAnimationOffset(var_96_cvector, "all", "walk_stopr");
	var_101_float = GetByIndex(var_95_cvector, 2);
	var_102_float = GetByIndex(var_96_cvector, 2);
	float var_105_float;
	var_107_float = GetByIndex(var_95_cvector, 2);
	func_4952(var_105_float, (var_107_float - ((var_101_float + var_102_float) / 2.0)));
	var_1_object = var_105_float + 40;
}


void func_5084(bool var_425_bool, string var_426_string, string var_427_string)
{
	object var_429_object;
	@FindActor(var_429_object, var_426_string);
	if(var_429_object == null)
		var_425_bool = false;
	@Trigger(var_429_object, var_427_string);
	var_425_bool = true;
}
EMIT "Stack[-1] = 0";


// @pe
void func_5597(bool var_349_bool)
{
	int var_351_int;
	func_4970(var_351_int, "oob1MladVlad1");
	if(var_351_int == 0) {
		var_349_bool = true;
		return 0;
	}
	var_349_bool = false;
}


void func_5096(object var_57_object, string var_58_string, string var_59_string)
{
	if(!var_57_object) { //@nz
	}
	object var_68_object;
	@GetSceneByName(var_68_object, var_58_string);
	bool var_69_bool;
	cvector var_70_cvector;
	cvector var_71_cvector;
	var_68_object->GetLocator(var_59_string, var_69_bool, var_70_cvector, var_71_cvector);
	if(!var_69_bool) //@nz
		@Trace(((("Teleport location '" + var_59_string) + "' not found in scene '") + var_58_string) + "'");
	else
		@Teleport(var_57_object, var_68_object, var_70_cvector, var_71_cvector);
	
}
EMIT "Stack[-4] = 0";


// @pe
void func_5609(bool var_369_bool)
{
	int var_371_int;
	func_4970(var_371_int, "oob1MladVlad2");
	if(var_371_int == 0) {
		var_369_bool = true;
		return 0;
	}
	var_369_bool = false;
}


// @pe
void func_5621(bool var_416_bool)
{
	int var_418_int;
	func_4970(var_418_int, "b2MladVladBurahHomeTalk");
	if(var_418_int == 1)
		var_416_bool = true;
	var_416_bool = false;
}


