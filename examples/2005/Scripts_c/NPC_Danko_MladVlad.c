// @GLOBALS: 0:string:,1:object:,2:bool:

task task_0
{
	void OnLoad(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, object var_31_object, object var_32_object, object var_33_object, string var_34_string, bool var_35_bool, object var_36_object, object var_37_object, object var_38_object, string var_39_string, bool var_40_bool, object var_41_object, object var_42_object, object var_43_object, string var_44_string, bool var_45_bool, object var_46_object, object var_47_object, object var_48_object, string var_49_string, bool var_50_bool, object var_51_object, object var_52_object, object var_53_object, string var_54_string, bool var_55_bool, object var_56_object, object var_57_object, object var_58_object, string var_59_string, bool var_60_bool, object var_61_object, object var_62_object, object var_63_object, string var_64_string, bool var_65_bool, object var_66_object, object var_67_object, object var_68_object, string var_69_string, bool var_70_bool, float var_71_float, float var_72_float, int var_73_int)
	{
		@StopGroup0();
		@sync();
	}

}


task task_1
{
	void OnUnload(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, object var_31_object, object var_32_object, object var_33_object, string var_34_string, bool var_35_bool, object var_36_object, object var_37_object, object var_38_object, string var_39_string, bool var_40_bool, object var_41_object, object var_42_object, object var_43_object, string var_44_string, bool var_45_bool, object var_46_object, object var_47_object, object var_48_object, string var_49_string, bool var_50_bool, object var_51_object, object var_52_object, object var_53_object, string var_54_string, bool var_55_bool, object var_56_object, object var_57_object, object var_58_object, string var_59_string, bool var_60_bool, object var_61_object, object var_62_object, object var_63_object, string var_64_string, bool var_65_bool, object var_66_object, object var_67_object, object var_68_object, string var_69_string, bool var_70_bool, float var_71_float, float var_72_float, int var_73_int)
	{
		var_0_bool = true;
		func_145();
		func_10424();
		TaskCall(0);
		func_0();
		TaskReturn();
	}

	void OnUse(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_4_object, string var_5_string, bool var_6_bool, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool, object var_42_object, object var_43_object, object var_44_object, string var_45_string, bool var_46_bool, object var_47_object, object var_48_object, object var_49_object, string var_50_string, bool var_51_bool, object var_52_object, object var_53_object, object var_54_object, string var_55_string, bool var_56_bool, object var_57_object, object var_58_object, object var_59_object, string var_60_string, bool var_61_bool, object var_62_object, object var_63_object, object var_64_object, string var_65_string, bool var_66_bool, object var_67_object, object var_68_object, object var_69_object, string var_70_string, bool var_71_bool, float var_72_float, float var_73_float, int var_74_int)
	{
		bool var_76_bool;
		@IsOverrideActive(var_76_bool);
		if(!var_76_bool) { //@nz
			func_145();
			disable OnUse;
			bool var_78_bool; object var_79_object;
			var_74_int = var_79_object;
			func_9892(var_78_bool, var_79_object);
			enable OnUse;
			object var_92_object;
			var_74_int = var_92_object;
			func_12253(var_92_object);
			var_0_bool = false;
		}
	}

		void OnCollision(bool var_0_bool, int var_1_int, object var_2_object, object var_3_object, object var_4_object, string var_5_string, bool var_6_bool, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool, object var_42_object, object var_43_object, object var_44_object, string var_45_string, bool var_46_bool, object var_47_object, object var_48_object, object var_49_object, string var_50_string, bool var_51_bool, object var_52_object, object var_53_object, object var_54_object, string var_55_string, bool var_56_bool, object var_57_object, object var_58_object, object var_59_object, string var_60_string, bool var_61_bool, object var_62_object, object var_63_object, object var_64_object, string var_65_string, bool var_66_bool, object var_67_object, object var_68_object, object var_69_object, string var_70_string, bool var_71_bool, float var_72_float, float var_73_float, int var_74_int, object var_75_object, object var_76_object, object var_96_object)
		{
		bool var_98_bool;
		@IsPlayerActor(var_96_object, var_98_bool);
		if(var_98_bool != 0) {
			func_145();
			object var_100_object;
			var_96_object = var_100_object;
			TaskCall(2);
			func_148(var_100_object);
			TaskReturn();
			var_0_bool = false;
			@SetTimer(20, 10.0);
		}
		}

	void OnTimer(bool var_0_bool, int var_1_int, object var_2_object, object var_3_object, object var_4_object, string var_5_string, bool var_6_bool, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool, object var_42_object, object var_43_object, object var_44_object, string var_45_string, bool var_46_bool, object var_47_object, object var_48_object, object var_49_object, string var_50_string, bool var_51_bool, object var_52_object, object var_53_object, object var_54_object, string var_55_string, bool var_56_bool, object var_57_object, object var_58_object, object var_59_object, string var_60_string, bool var_61_bool, object var_62_object, object var_63_object, object var_64_object, string var_65_string, bool var_66_bool, object var_67_object, object var_68_object, object var_69_object, string var_70_string, bool var_71_bool, float var_72_float, float var_73_float, int var_74_int)
	{
		object var_76_object;
		if(var_74_int == 20) {
			@KillTimer(20);
		} else {
			if(!(var_74_int == 21)) goto Label_144;
			if(true == 0) goto Label_144;
			@FindActor(var_76_object, "player");
			bool var_84_bool = false;
			if(var_76_object != 0) {
				float var_86_float; object var_87_object;
				var_76_object = var_87_object;
				func_9833(var_86_float, var_87_object);
				if(var_86_float <= 62500.0)
					var_84_bool = true;
			}
			if(var_84_bool != 0) {
				object var_96_object;
				var_76_object = var_96_object;
				func_89();
			}
			var_76_object = null;
		}
	Label_144:
	
	}

}


task task_2
{
	// @pe
	void OnUnload(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, object var_31_object, object var_32_object, object var_33_object, string var_34_string, bool var_35_bool, object var_36_object, object var_37_object, object var_38_object, string var_39_string, bool var_40_bool, object var_41_object, object var_42_object, object var_43_object, string var_44_string, bool var_45_bool, object var_46_object, object var_47_object, object var_48_object, string var_49_string, bool var_50_bool, object var_51_object, object var_52_object, object var_53_object, string var_54_string, bool var_55_bool, object var_56_object, object var_57_object, object var_58_object, string var_59_string, bool var_60_bool, object var_61_object, object var_62_object, object var_63_object, string var_64_string, bool var_65_bool, object var_66_object, object var_67_object, object var_68_object, string var_69_string, bool var_70_bool, float var_71_float, float var_72_float, int var_73_int)
	{
		func_193();
		func_10424();
		TaskCall(0);
		func_0();
		TaskReturn();
	}

	void OnUse(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_4_object, string var_5_string, bool var_6_bool, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool, object var_42_object, object var_43_object, object var_44_object, string var_45_string, bool var_46_bool, object var_47_object, object var_48_object, object var_49_object, string var_50_string, bool var_51_bool, object var_52_object, object var_53_object, object var_54_object, string var_55_string, bool var_56_bool, object var_57_object, object var_58_object, object var_59_object, string var_60_string, bool var_61_bool, object var_62_object, object var_63_object, object var_64_object, string var_65_string, bool var_66_bool, object var_67_object, object var_68_object, object var_69_object, string var_70_string, bool var_71_bool, float var_72_float, float var_73_float, int var_74_int)
	{
		bool var_76_bool;
		@IsOverrideActive(var_76_bool);
		if(!var_76_bool) { //@nz
			func_193();
			disable OnUse;
			bool var_78_bool; object var_79_object;
			var_74_int = var_79_object;
			func_9892(var_78_bool, var_79_object);
			enable OnUse;
			object var_92_object;
			var_74_int = var_92_object;
			func_12253(var_92_object);
		}
	}

}


task task_3
{
	// @pe
	void OnUnload(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, object var_31_object, object var_32_object, object var_33_object, string var_34_string, bool var_35_bool, object var_36_object, object var_37_object, object var_38_object, string var_39_string, bool var_40_bool, object var_41_object, object var_42_object, object var_43_object, string var_44_string, bool var_45_bool, object var_46_object, object var_47_object, object var_48_object, string var_49_string, bool var_50_bool, object var_51_object, object var_52_object, object var_53_object, string var_54_string, bool var_55_bool, object var_56_object, object var_57_object, object var_58_object, string var_59_string, bool var_60_bool, object var_61_object, object var_62_object, object var_63_object, string var_64_string, bool var_65_bool, object var_66_object, object var_67_object, object var_68_object, string var_69_string, bool var_70_bool, float var_71_float, float var_72_float, int var_73_int)
	{
		func_10424();
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
	void event_11(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, int var_6_int, int var_7_int, object var_8_object, object var_9_object, object var_10_object, string var_11_string, bool var_12_bool, object var_13_object, object var_14_object, object var_15_object, string var_16_string, bool var_17_bool, object var_18_object, object var_19_object, object var_20_object, string var_21_string, bool var_22_bool, object var_23_object, object var_24_object, object var_25_object, string var_26_string, bool var_27_bool, object var_28_object, object var_29_object, object var_30_object, string var_31_string, bool var_32_bool, object var_33_object, object var_34_object, object var_35_object, string var_36_string, bool var_37_bool, object var_38_object, object var_39_object, object var_40_object, string var_41_string, bool var_42_bool, object var_43_object, object var_44_object, object var_45_object, string var_46_string, bool var_47_bool, object var_48_object, object var_49_object, object var_50_object, string var_51_string, bool var_52_bool, object var_53_object, object var_54_object, object var_55_object, string var_56_string, bool var_57_bool, object var_58_object, object var_59_object, object var_60_object, string var_61_string, bool var_62_bool, object var_63_object, object var_64_object, object var_65_object, string var_66_string, bool var_67_bool, object var_68_object, object var_69_object, object var_70_object, string var_71_string, bool var_72_bool, float var_73_float, float var_74_float, int var_75_int)
	{
		if(1 != 0) {
			func_10168();
			if(var_75_int == 34118) {
				object var_80_object; object var_81_object;
				var_80_object = var_1_object;
				var_81_object = var_0_bool;
				func_10489();
				object var_139_object = var_1_object;
				func_10745(var_0_bool);
			}
			if(var_75_int == 34177) {
				object var_167_object; object var_168_object;
				var_167_object = var_1_object;
				var_168_object = var_0_bool;
				func_10571();
			}
			if(var_75_int == 33363) {
				object var_173_object; object var_174_object;
				var_173_object = var_1_object;
				var_174_object = var_0_bool;
				func_10551();
			}
			if(var_75_int == 33362) {
				object var_193_object; object var_194_object;
				var_193_object = var_1_object;
				var_194_object = var_0_bool;
				func_10551();
			}
			if(var_75_int == 35191) {
				object var_197_object; object var_198_object;
				var_197_object = var_1_object;
				var_198_object = var_0_bool;
				func_10551();
			}
			if(var_75_int == 34176) {
				object var_201_object; object var_202_object;
				var_201_object = var_1_object;
				var_202_object = var_0_bool;
				func_10489();
			}
			if(var_75_int == 34165) {
				object var_205_object; object var_206_object;
				var_205_object = var_1_object;
				var_206_object = var_0_bool;
				func_10577();
			}
			if(var_75_int == 34169) {
				object var_211_object; object var_212_object;
				var_211_object = var_1_object;
				var_212_object = var_0_bool;
				func_10529();
				object var_215_object = var_1_object;
				func_10479(var_0_bool);
			}
			if(var_75_int == 34170) {
				object var_238_object; object var_239_object;
				var_238_object = var_1_object;
				var_239_object = var_0_bool;
				func_10529();
				object var_240_object = var_1_object;
				func_10777(var_0_bool);
			}
			if(var_74_float == 34103) {
				bool var_247_bool = false;
				bool var_248_bool = false;
				bool var_249_bool;
				func_11296(var_1_object);
				if(var_249_bool != 0) {
					bool var_257_bool;
					func_11248(var_1_object);
					if(var_257_bool != 0)
						var_248_bool = true;
				}
				if(var_248_bool != 0) {
					bool var_263_bool;
					func_11812(var_1_object);
					if(var_263_bool != 0)
						var_247_bool = true;
				}
				if(var_247_bool != 0) {
					object var_279_object; object var_280_object;
					var_279_object = var_1_object;
					var_280_object = var_0_bool;
					func_10565();
					func_542(var_75_int, "Neutral");
					var_0_bool->SetMessage(532641); //@t
					var_0_bool->ClearReplies(); //@t
					var_0_bool->AddReply(532642, 34105, 34104); //@t
					var_0_bool->AddReply(532687, 34161, 34160); //@t
					return 0;
				}
				func_542(var_75_int, "Neutral");
				var_0_bool->SetMessage(531953); //@t
				var_0_bool->ClearReplies(); //@t
				bool var_304_bool = false;
				bool var_305_bool;
				func_11308(var_1_object);
				if(var_305_bool != 0) {
					bool var_311_bool;
					func_11812(var_1_object);
					if(var_311_bool != 0)
						var_304_bool = true;
				}
				if(var_304_bool != 0)
					var_0_bool->AddReply(532702, 34178, 34177); //@t
				bool var_316_bool;
				func_11284(var_1_object);
				if(var_316_bool != 0)
					var_0_bool->AddReply(531954, 33359, 33358); //@t
				bool var_325_bool = false;
				bool var_326_bool;
				func_11248(var_1_object);
				if(var_326_bool != 0) {
					bool var_328_bool;
					func_11296(var_1_object);
					if(!var_328_bool) //@nz
						var_325_bool = true;
				}
				if(var_325_bool != 0)
					var_0_bool->AddReply(532699, 34175, 34174); //@t
				bool var_334_bool = false;
				bool var_335_bool = false;
				bool var_336_bool;
				func_11272(var_1_object);
				if(!var_336_bool) { //@nz
					bool var_343_bool;
					func_11320(var_1_object);
					if(var_343_bool != 0)
						var_335_bool = true;
				}
				if(var_335_bool != 0) {
					bool var_349_bool;
					func_11260(var_1_object);
					if(var_349_bool != 0)
						var_334_bool = true;
				}
				if(var_334_bool != 0)
					var_0_bool->AddReply(532691, 34166, 34165); //@t
				var_0_bool->AddReply(531960, -1, 33364); //@t
				return 0;
			}
			if(var_74_float == 34166) {
				func_542(var_75_int, "Neutral");
				var_0_bool->SetMessage(532692); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(532693, 34168, 34167); //@t
				var_0_bool->AddReply(532698, 34168, 34172); //@t
				return 0;
			}
			if(var_74_float == 34168) {
				func_542(var_75_int, "Neutral");
				var_0_bool->SetMessage(532694); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(532695, -1, 34169); //@t
				var_0_bool->AddReply(532696, -1, 34170); //@t
				var_0_bool->AddReply(532697, -1, 34171); //@t
				return 0;
			}
			if(var_74_float == 34175) {
				func_542(var_75_int, "Neutral");
				var_0_bool->SetMessage(532700); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(532701, -1, 34176); //@t
				return 0;
			}
			if(var_74_float == 33359) {
				func_542(var_75_int, "Neutral");
				var_0_bool->SetMessage(531955); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(533638, 35163, 35162); //@t
				var_0_bool->AddReply(533643, 35168, 35167); //@t
				return 0;
			}
			if(var_74_float == 35168) {
				func_542(var_75_int, "Neutral");
				var_0_bool->SetMessage(533644); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(533645, 35170, 35169); //@t
				var_0_bool->AddReply(533647, 35170, 35171); //@t
				return 0;
			}
			if(var_74_float == 35170) {
				func_542(var_75_int, "Neutral");
				var_0_bool->SetMessage(533646); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(533648, 35165, 35173); //@t
				var_0_bool->AddReply(533649, 35165, 35174); //@t
				return 0;
			}
			if(var_74_float == 35163) {
				func_542(var_75_int, "Neutral");
				var_0_bool->SetMessage(533639); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(533640, 35165, 35164); //@t
				return 0;
			}
			if(var_74_float == 35165) {
				func_542(var_75_int, "Neutral");
				var_0_bool->SetMessage(533641); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(533642, 35175, 35166); //@t
				var_0_bool->AddReply(533655, 35183, 35182); //@t
				return 0;
			}
			if(var_74_float == 35183) {
				func_542(var_75_int, "Neutral");
				var_0_bool->SetMessage(533656); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(533657, 35188, 35184); //@t
				var_0_bool->AddReply(533658, 35177, 35185); //@t
				return 0;
			}
			if(var_74_float == 35188) {
				func_542(var_75_int, "Neutral");
				var_0_bool->SetMessage(533659); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(533660, 35177, 35189); //@t
				return 0;
			}
			if(var_74_float == 35175) {
				func_542(var_75_int, "Neutral");
				var_0_bool->SetMessage(533650); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(533651, 35177, 35176); //@t
				var_0_bool->AddReply(533654, 35177, 35179); //@t
				return 0;
			}
			if(var_74_float == 35177) {
				func_542(var_75_int, "Neutral");
				var_0_bool->SetMessage(533652); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(533653, 33361, 35178); //@t
				return 0;
			}
			if(var_74_float == 33361) {
				func_542(var_75_int, "Neutral");
				var_0_bool->SetMessage(531957); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(531959, -1, 33363); //@t
				var_0_bool->AddReply(531958, -1, 33362); //@t
				var_0_bool->AddReply(533661, -1, 35191); //@t
				return 0;
			}
			if(var_74_float == 34178) {
				func_542(var_75_int, "Neutral");
				var_0_bool->SetMessage(532703); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(532704, 34180, 34179); //@t
				var_0_bool->AddReply(533589, 35104, 35107); //@t
				return 0;
			}
			if(var_74_float == 34180) {
				func_542(var_75_int, "Neutral");
				var_0_bool->SetMessage(532705); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(532706, 34182, 34181); //@t
				var_0_bool->AddReply(532712, 34182, 34187); //@t
				var_0_bool->AddReply(533586, 35104, 35103); //@t
				return 0;
			}
			if(var_74_float == 35104) {
				func_542(var_75_int, "Neutral");
				var_0_bool->SetMessage(533587); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(533588, 34182, 35105); //@t
				return 0;
			}
			if(var_74_float == 34182) {
				func_542(var_75_int, "Neutral");
				var_0_bool->SetMessage(532707); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(532708, 34184, 34183); //@t
				return 0;
			}
			if(var_74_float == 34184) {
				func_542(var_75_int, "Neutral");
				var_0_bool->SetMessage(532709); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(532710, -1, 34185); //@t
				var_0_bool->AddReply(532711, -1, 34186); //@t
				return 0;
			}
			if(var_74_float == 34161) {
				func_542(var_75_int, "Neutral");
				var_0_bool->SetMessage(532688); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(532689, 34105, 34162); //@t
				var_0_bool->AddReply(532690, -1, 34164); //@t
				return 0;
			}
			if(var_74_float == 34105) {
				func_542(var_75_int, "Neutral");
				var_0_bool->SetMessage(532643); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(532644, 34107, 34106); //@t
				var_0_bool->AddReply(532680, 34151, 34150); //@t
				var_0_bool->AddReply(532686, 34151, 34158); //@t
				return 0;
			}
			if(var_74_float == 34151) {
				func_542(var_75_int, "Neutral");
				var_0_bool->SetMessage(532681); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(532682, 34107, 34152); //@t
				var_0_bool->AddReply(532683, 34155, 34154); //@t
				return 0;
			}
			if(var_74_float == 34155) {
				func_542(var_75_int, "Neutral");
				var_0_bool->SetMessage(532684); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(532685, 34107, 34156); //@t
				return 0;
			}
			if(var_74_float == 34107) {
				func_542(var_75_int, "Neutral");
				var_0_bool->SetMessage(532645); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(532646, 34109, 34108); //@t
				var_0_bool->AddReply(532677, 34147, 34146); //@t
				return 0;
			}
			if(var_74_float == 34147) {
				func_542(var_75_int, "Neutral");
				var_0_bool->SetMessage(532678); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(532679, 34109, 34148); //@t
				return 0;
			}
			if(var_74_float == 34109) {
				func_542(var_75_int, "Neutral");
				var_0_bool->SetMessage(532647); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(532648, 34111, 34110); //@t
				var_0_bool->AddReply(532674, 34143, 34142); //@t
				return 0;
			}
			if(var_74_float == 34143) {
				func_542(var_75_int, "Neutral");
				var_0_bool->SetMessage(532675); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(532676, 34111, 34144); //@t
				return 0;
			}
			if(var_74_float == 34111) {
				func_542(var_75_int, "Neutral");
				var_0_bool->SetMessage(532649); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(532650, 34113, 34112); //@t
				var_0_bool->AddReply(532667, 34133, 34132); //@t
				return 0;
			}
			if(var_74_float == 34133) {
				func_542(var_75_int, "Neutral");
				var_0_bool->SetMessage(532668); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(532669, 34113, 34134); //@t
				var_0_bool->AddReply(532670, 34137, 34136); //@t
				return 0;
			}
			if(var_74_float == 34137) {
				func_542(var_75_int, "Neutral");
				var_0_bool->SetMessage(532671); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(532672, 34113, 34138); //@t
				var_0_bool->AddReply(532673, 34113, 34140); //@t
				return 0;
			}
			if(var_74_float == 34113) {
				func_542(var_75_int, "Neutral");
				var_0_bool->SetMessage(532651); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(532652, 34115, 34114); //@t
				var_0_bool->AddReply(532663, 34127, 34126); //@t
				return 0;
			}
			if(var_74_float == 34127) {
				func_542(var_75_int, "Neutral");
				var_0_bool->SetMessage(532664); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(532665, 34115, 34128); //@t
				var_0_bool->AddReply(532666, 34117, 34130); //@t
				return 0;
			}
			if(var_74_float == 34115) {
				func_542(var_75_int, "Neutral");
				var_0_bool->SetMessage(532653); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(532654, 34117, 34116); //@t
				var_0_bool->AddReply(532658, 34121, 34120); //@t
				return 0;
			}
			if(var_74_float == 34121) {
				func_542(var_75_int, "Neutral");
				var_0_bool->SetMessage(532659); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(532660, 34117, 34122); //@t
				var_0_bool->AddReply(532662, -1, 34125); //@t
				return 0;
			}
			if(var_74_float == 34117) {
				func_542(var_75_int, "Neutral");
				var_0_bool->SetMessage(532655); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(532656, -1, 34118); //@t
				var_0_bool->AddReply(532657, -1, 34119); //@t
				return 0;
			}
			var_3_object = true;
			bool var_686_bool;
			func_10433(var_686_bool);
			if(var_686_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x235";
	
	}

}


task task_6
{
}


task task_7
{
	// @pe
	void event_11(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, int var_11_int, int var_12_int, object var_13_object, object var_14_object, object var_15_object, string var_16_string, bool var_17_bool, object var_18_object, object var_19_object, object var_20_object, string var_21_string, bool var_22_bool, object var_23_object, object var_24_object, object var_25_object, string var_26_string, bool var_27_bool, object var_28_object, object var_29_object, object var_30_object, string var_31_string, bool var_32_bool, object var_33_object, object var_34_object, object var_35_object, string var_36_string, bool var_37_bool, object var_38_object, object var_39_object, object var_40_object, string var_41_string, bool var_42_bool, object var_43_object, object var_44_object, object var_45_object, string var_46_string, bool var_47_bool, object var_48_object, object var_49_object, object var_50_object, string var_51_string, bool var_52_bool, object var_53_object, object var_54_object, object var_55_object, string var_56_string, bool var_57_bool, object var_58_object, object var_59_object, object var_60_object, string var_61_string, bool var_62_bool, object var_63_object, object var_64_object, object var_65_object, string var_66_string, bool var_67_bool, object var_68_object, object var_69_object, object var_70_object, string var_71_string, bool var_72_bool, float var_73_float, float var_74_float, int var_75_int)
	{
		if(1 != 0) {
			func_10168();
			if(var_74_float == 37363) {
				func_1710(var_75_int, "Neutral");
				var_0_bool->SetMessage(535677); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(535678, 42150, 37364); //@t
				var_0_bool->AddReply(540005, -1, 41976); //@t
				return 0;
			}
			if(var_74_float == 42150) {
				func_1710(var_75_int, "Neutral");
				var_0_bool->SetMessage(540173); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(540174, 42153, 42151); //@t
				var_0_bool->AddReply(540175, 42154, 42152); //@t
				return 0;
			}
			if(var_74_float == 42154) {
				func_1710(var_75_int, "Neutral");
				var_0_bool->SetMessage(540177); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(540181, 42159, 42158); //@t
				return 0;
			}
			if(var_74_float == 42159) {
				func_1710(var_75_int, "Neutral");
				var_0_bool->SetMessage(540182); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(540183, 42161, 42160); //@t
				return 0;
			}
			if(var_74_float == 42153) {
				func_1710(var_75_int, "Neutral");
				var_0_bool->SetMessage(540176); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(540178, 42156, 42155); //@t
				return 0;
			}
			if(var_74_float == 42156) {
				func_1710(var_75_int, "Neutral");
				var_0_bool->SetMessage(540179); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(540180, 42161, 42157); //@t
				return 0;
			}
			if(var_74_float == 42161) {
				func_1710(var_75_int, "Neutral");
				var_0_bool->SetMessage(540184); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(540185, -1, 42163); //@t
				var_0_bool->AddReply(540186, -1, 42164); //@t
				return 0;
			}
			var_3_object = true;
			bool var_147_bool;
			func_10433(var_147_bool);
			if(var_147_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x6c5";
	
	}

}


task task_8
{
}


task task_9
{
	// @pe
	void event_11(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, int var_16_int, int var_17_int, object var_18_object, object var_19_object, object var_20_object, string var_21_string, bool var_22_bool, object var_23_object, object var_24_object, object var_25_object, string var_26_string, bool var_27_bool, object var_28_object, object var_29_object, object var_30_object, string var_31_string, bool var_32_bool, object var_33_object, object var_34_object, object var_35_object, string var_36_string, bool var_37_bool, object var_38_object, object var_39_object, object var_40_object, string var_41_string, bool var_42_bool, object var_43_object, object var_44_object, object var_45_object, string var_46_string, bool var_47_bool, object var_48_object, object var_49_object, object var_50_object, string var_51_string, bool var_52_bool, object var_53_object, object var_54_object, object var_55_object, string var_56_string, bool var_57_bool, object var_58_object, object var_59_object, object var_60_object, string var_61_string, bool var_62_bool, object var_63_object, object var_64_object, object var_65_object, string var_66_string, bool var_67_bool, object var_68_object, object var_69_object, object var_70_object, string var_71_string, bool var_72_bool, float var_73_float, float var_74_float, int var_75_int)
	{
		if(1 != 0) {
			func_10168();
			if(var_74_float == 484) {
				object var_80_object; object var_81_object;
				var_80_object = var_1_object;
				var_81_object = var_0_bool;
				func_11169();
				object var_84_object; object var_85_object;
				var_84_object = var_1_object;
				var_85_object = var_0_bool;
				func_10689();
				func_2036(var_75_int, "Neutral");
				var_0_bool->SetMessage(500416); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(533500, 35031, 35030); //@t
				return 0;
			}
			if(var_74_float == 35031) {
				func_2036(var_75_int, "Neutral");
				var_0_bool->SetMessage(533501); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(500417, 487, 485); //@t
				var_0_bool->AddReply(500418, 9271, 486); //@t
				return 0;
			}
			if(var_74_float == 487) {
				func_2036(var_75_int, "Neutral");
				var_0_bool->SetMessage(500419); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(500420, 9271, 488); //@t
				var_0_bool->AddReply(500422, 9271, 490); //@t
				return 0;
			}
			if(var_74_float == 9271) {
				func_2036(var_75_int, "Neutral");
				var_0_bool->SetMessage(508445); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(508446, -1, 9275); //@t
				var_0_bool->AddReply(508447, -1, 9276); //@t
				return 0;
			}
			var_3_object = true;
			bool var_134_bool;
			func_10433(var_134_bool);
			if(var_134_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x80b";
	
	}

}


task task_10
{
}


task task_11
{
	// @pe
	void event_11(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, int var_21_int, int var_22_int, object var_23_object, object var_24_object, object var_25_object, string var_26_string, bool var_27_bool, object var_28_object, object var_29_object, object var_30_object, string var_31_string, bool var_32_bool, object var_33_object, object var_34_object, object var_35_object, string var_36_string, bool var_37_bool, object var_38_object, object var_39_object, object var_40_object, string var_41_string, bool var_42_bool, object var_43_object, object var_44_object, object var_45_object, string var_46_string, bool var_47_bool, object var_48_object, object var_49_object, object var_50_object, string var_51_string, bool var_52_bool, object var_53_object, object var_54_object, object var_55_object, string var_56_string, bool var_57_bool, object var_58_object, object var_59_object, object var_60_object, string var_61_string, bool var_62_bool, object var_63_object, object var_64_object, object var_65_object, string var_66_string, bool var_67_bool, object var_68_object, object var_69_object, object var_70_object, string var_71_string, bool var_72_bool, float var_73_float, float var_74_float, int var_75_int)
	{
		if(1 != 0) {
			func_10168();
			if(var_75_int == 8297) {
				object var_80_object; object var_81_object;
				var_80_object = var_1_object;
				var_81_object = var_0_bool;
				func_10701();
				object var_84_object; object var_85_object;
				var_84_object = var_1_object;
				var_85_object = var_0_bool;
				func_10529();
				object var_88_object = var_1_object;
				func_10435(var_0_bool);
			}
			if(var_75_int == 8298) {
				object var_111_object; object var_112_object;
				var_111_object = var_1_object;
				var_112_object = var_0_bool;
				func_10701();
				object var_113_object; object var_114_object;
				var_113_object = var_1_object;
				var_114_object = var_0_bool;
				func_10529();
				object var_115_object = var_1_object;
				func_10435(var_0_bool);
			}
			if(var_75_int == 8553) {
				object var_119_object; object var_120_object;
				var_119_object = var_1_object;
				var_120_object = var_0_bool;
				func_10701();
				object var_121_object; object var_122_object;
				var_121_object = var_1_object;
				var_122_object = var_0_bool;
				func_10529();
				object var_123_object = var_1_object;
				func_10435(var_0_bool);
			}
			if(var_75_int == 35526) {
				object var_127_object; object var_128_object;
				var_127_object = var_1_object;
				var_128_object = var_0_bool;
				func_10695();
			}
			if(var_74_float == 7635) {
				func_2337(var_75_int, "Neutral");
				var_0_bool->SetMessage(506929); //@t
				var_0_bool->ClearReplies(); //@t
				bool var_146_bool = false;
				bool var_147_bool;
				func_11404(var_1_object);
				if(var_147_bool != 0) {
					bool var_155_bool;
					func_11380(var_1_object);
					if(var_155_bool != 0)
						var_146_bool = true;
				}
				if(var_146_bool != 0)
					var_0_bool->AddReply(506930, 7637, 7636); //@t
				bool var_164_bool;
				func_11392(var_1_object);
				if(var_164_bool != 0)
					var_0_bool->AddReply(533959, 10443, 35526); //@t
				var_0_bool->AddReply(507746, -1, 8547); //@t
				return 0;
			}
			if(var_74_float == 10443) {
				func_2337(var_75_int, "Neutral");
				var_0_bool->SetMessage(509500); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(509501, 10445, 10444); //@t
				var_0_bool->AddReply(509514, 10458, 10457); //@t
				return 0;
			}
			if(var_74_float == 10458) {
				func_2337(var_75_int, "Neutral");
				var_0_bool->SetMessage(509515); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(509516, 10445, 10459); //@t
				return 0;
			}
			if(var_74_float == 10445) {
				func_2337(var_75_int, "Neutral");
				var_0_bool->SetMessage(509502); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(509503, 10447, 10446); //@t
				var_0_bool->AddReply(509510, -1, 10453); //@t
				var_0_bool->AddReply(509511, 10455, 10454); //@t
				return 0;
			}
			if(var_74_float == 10455) {
				func_2337(var_75_int, "Neutral");
				var_0_bool->SetMessage(509512); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(509513, -1, 10456); //@t
				return 0;
			}
			if(var_74_float == 10447) {
				func_2337(var_75_int, "Neutral");
				var_0_bool->SetMessage(509504); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(509505, 10449, 10448); //@t
				var_0_bool->AddReply(509509, -1, 10452); //@t
				return 0;
			}
			if(var_74_float == 10449) {
				func_2337(var_75_int, "Neutral");
				var_0_bool->SetMessage(509506); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(509507, -1, 10450); //@t
				var_0_bool->AddReply(509508, -1, 10451); //@t
				return 0;
			}
			if(var_74_float == 7637) {
				func_2337(var_75_int, "Neutral");
				var_0_bool->SetMessage(506931); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(506932, 7639, 7638); //@t
				var_0_bool->AddReply(507752, -1, 8553); //@t
				return 0;
			}
			if(var_74_float == 7639) {
				func_2337(var_75_int, "Neutral");
				var_0_bool->SetMessage(506933); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(507753, 8555, 8554); //@t
				return 0;
			}
			if(var_74_float == 8555) {
				func_2337(var_75_int, "Neutral");
				var_0_bool->SetMessage(507754); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(506934, 8296, 7640); //@t
				return 0;
			}
			if(var_74_float == 8296) {
				func_2337(var_75_int, "Neutral");
				var_0_bool->SetMessage(507515); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(507516, -1, 8297); //@t
				var_0_bool->AddReply(507517, -1, 8298); //@t
				return 0;
			}
			var_3_object = true;
			bool var_267_bool;
			func_10433(var_267_bool);
			if(var_267_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x938";
	
	}

}


task task_12
{
}


task task_13
{
	// @pe
	void event_11(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, int var_26_int, int var_27_int, object var_28_object, object var_29_object, object var_30_object, string var_31_string, bool var_32_bool, object var_33_object, object var_34_object, object var_35_object, string var_36_string, bool var_37_bool, object var_38_object, object var_39_object, object var_40_object, string var_41_string, bool var_42_bool, object var_43_object, object var_44_object, object var_45_object, string var_46_string, bool var_47_bool, object var_48_object, object var_49_object, object var_50_object, string var_51_string, bool var_52_bool, object var_53_object, object var_54_object, object var_55_object, string var_56_string, bool var_57_bool, object var_58_object, object var_59_object, object var_60_object, string var_61_string, bool var_62_bool, object var_63_object, object var_64_object, object var_65_object, string var_66_string, bool var_67_bool, object var_68_object, object var_69_object, object var_70_object, string var_71_string, bool var_72_bool, float var_73_float, float var_74_float, int var_75_int)
	{
		if(1 != 0) {
			func_10168();
			if(var_75_int == 11259) {
				object var_80_object; object var_81_object;
				var_80_object = var_1_object;
				var_81_object = var_0_bool;
				func_10787();
			}
			if(var_75_int == 35907) {
				object var_86_object; object var_87_object;
				var_86_object = var_1_object;
				var_87_object = var_0_bool;
				func_10793();
			}
			if(var_75_int == 35908) {
				object var_131_object; object var_132_object;
				var_131_object = var_1_object;
				var_132_object = var_0_bool;
				func_10793();
			}
			if(var_75_int == 11358) {
				object var_135_object; object var_136_object;
				var_135_object = var_1_object;
				var_136_object = var_0_bool;
				func_10473();
			}
			if(var_75_int == 11394) {
				object var_141_object; object var_142_object;
				var_141_object = var_1_object;
				var_142_object = var_0_bool;
				func_10655();
			}
			if(var_75_int == 11404) {
				object var_147_object; object var_148_object;
				var_147_object = var_1_object;
				var_148_object = var_0_bool;
				func_10816();
				object var_165_object = var_1_object;
				func_10624(var_0_bool);
			}
			if(var_75_int == 11407) {
				object var_193_object; object var_194_object;
				var_193_object = var_1_object;
				var_194_object = var_0_bool;
				func_10816();
				object var_195_object = var_1_object;
				func_10624(var_0_bool);
			}
			if(var_75_int == 22116) {
				object var_199_object; object var_200_object;
				var_199_object = var_1_object;
				var_200_object = var_0_bool;
				func_10455();
				object var_212_object; object var_213_object;
				var_212_object = var_1_object;
				var_213_object = var_0_bool;
				func_10739();
				object var_216_object = var_1_object;
				func_10466(var_0_bool);
			}
			if(var_74_float == 11258) {
				func_2923(var_75_int, "Neutral");
				var_0_bool->SetMessage(510212); //@t
				var_0_bool->ClearReplies(); //@t
				bool var_251_bool = false;
				bool var_252_bool;
				func_11428(var_1_object);
				if(var_252_bool != 0) {
					bool var_260_bool;
					func_11440(var_1_object);
					if(var_260_bool != 0)
						var_251_bool = true;
				}
				if(var_251_bool != 0)
					var_0_bool->AddReply(510213, 11260, 11259); //@t
				bool var_269_bool = false;
				bool var_270_bool;
				func_11236(var_1_object);
				if(var_270_bool != 0) {
					bool var_276_bool;
					func_11416(var_1_object);
					if(!var_276_bool) //@nz
						var_269_bool = true;
				}
				if(var_269_bool != 0)
					var_0_bool->AddReply(510302, 11359, 11358); //@t
				bool var_286_bool = true;
				bool var_287_bool = false;
				bool var_288_bool;
				func_11452(var_1_object);
				if(var_288_bool != 0) {
					bool var_294_bool;
					func_11368(var_1_object);
					if(var_294_bool != 0)
						var_287_bool = true;
				}
				if(var_287_bool != 1) {
					bool var_300_bool = false;
					bool var_301_bool;
					func_11464(var_1_object);
					if(var_301_bool != 0) {
						bool var_307_bool;
						func_11368(var_1_object);
						if(var_307_bool != 0)
							var_300_bool = true;
					}
					if(var_300_bool != 1)
						var_286_bool = false;
				}
				if(var_286_bool != 0)
					var_0_bool->AddReply(510334, 11395, 11394); //@t
				bool var_312_bool;
				func_11846(var_312_bool, var_1_object);
				if(!var_312_bool) //@nz
					var_0_bool->AddReply(520897, 22115, 22114); //@t
				var_0_bool->AddReply(520896, -1, 22113); //@t
				return 0;
			}
			if(var_74_float == 22115) {
				func_2923(var_75_int, "Neutral");
				var_0_bool->SetMessage(520898); //@t
				var_0_bool->ClearReplies(); //@t
				bool var_335_bool;
				func_11856(var_335_bool, var_1_object);
				if(var_335_bool != 0)
					var_0_bool->AddReply(520899, -1, 22116); //@t
				var_0_bool->AddReply(520900, -1, 22117); //@t
				return 0;
			}
			if(var_74_float == 11395) {
				func_2923(var_75_int, "Neutral");
				var_0_bool->SetMessage(510335); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(510336, 11399, 11396); //@t
				var_0_bool->AddReply(510337, 11398, 11397); //@t
				return 0;
			}
			if(var_74_float == 11398) {
				func_2923(var_75_int, "Neutral");
				var_0_bool->SetMessage(510338); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(510341, 11402, 11401); //@t
				return 0;
			}
			if(var_74_float == 11399) {
				func_2923(var_75_int, "Neutral");
				var_0_bool->SetMessage(510339); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(510340, 11402, 11400); //@t
				var_0_bool->AddReply(534414, 36040, 36039); //@t
				return 0;
			}
			if(var_74_float == 36040) {
				func_2923(var_75_int, "Neutral");
				var_0_bool->SetMessage(534415); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(534416, 11402, 36041); //@t
				return 0;
			}
			if(var_74_float == 11402) {
				func_2923(var_75_int, "Neutral");
				var_0_bool->SetMessage(510342); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(510343, -1, 11404); //@t
				var_0_bool->AddReply(510344, 11406, 11405); //@t
				return 0;
			}
			if(var_74_float == 11406) {
				func_2923(var_75_int, "Neutral");
				var_0_bool->SetMessage(510345); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(510346, -1, 11407); //@t
				return 0;
			}
			if(var_74_float == 11359) {
				func_2923(var_75_int, "Neutral");
				var_0_bool->SetMessage(510303); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(510304, 11039, 11360); //@t
				return 0;
			}
			if(var_74_float == 11039) {
				func_2923(var_75_int, "Neutral");
				var_0_bool->SetMessage(510017); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(510018, 11041, 11040); //@t
				var_0_bool->AddReply(510028, -1, 11050); //@t
				return 0;
			}
			if(var_74_float == 11041) {
				func_2923(var_75_int, "Neutral");
				var_0_bool->SetMessage(510019); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(510020, 11043, 11042); //@t
				var_0_bool->AddReply(510027, -1, 11049); //@t
				return 0;
			}
			if(var_74_float == 11043) {
				func_2923(var_75_int, "Neutral");
				var_0_bool->SetMessage(510021); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(510022, 11045, 11044); //@t
				var_0_bool->AddReply(510026, -1, 11048); //@t
				return 0;
			}
			if(var_74_float == 11045) {
				func_2923(var_75_int, "Neutral");
				var_0_bool->SetMessage(510023); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(510024, -1, 11046); //@t
				var_0_bool->AddReply(510025, -1, 11047); //@t
				return 0;
			}
			if(var_74_float == 11260) {
				func_2923(var_75_int, "Neutral");
				var_0_bool->SetMessage(510214); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(510305, 11364, 11361); //@t
				var_0_bool->AddReply(510306, 11363, 11362); //@t
				return 0;
			}
			if(var_74_float == 11363) {
				func_2923(var_75_int, "Neutral");
				var_0_bool->SetMessage(510307); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(534368, 11364, 35974); //@t
				var_0_bool->AddReply(534369, 11366, 35975); //@t
				return 0;
			}
			if(var_74_float == 11364) {
				func_2923(var_75_int, "Neutral");
				var_0_bool->SetMessage(510308); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(510309, 11370, 11365); //@t
				var_0_bool->AddReply(510311, 11366, 11367); //@t
				return 0;
			}
			if(var_74_float == 11366) {
				func_2923(var_75_int, "Neutral");
				var_0_bool->SetMessage(510310); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(510312, 35894, 11369); //@t
				var_0_bool->AddReply(534370, 11371, 35978); //@t
				return 0;
			}
			if(var_74_float == 11370) {
				func_2923(var_75_int, "Neutral");
				var_0_bool->SetMessage(510313); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(510315, 11371, 11372); //@t
				return 0;
			}
			if(var_74_float == 11371) {
				func_2923(var_75_int, "Neutral");
				var_0_bool->SetMessage(510314); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(510317, 35894, 11375); //@t
				var_0_bool->AddReply(510323, 35894, 11381); //@t
				return 0;
			}
			if(var_74_float == 35894) {
				func_2923(var_75_int, "Neutral");
				var_0_bool->SetMessage(534299); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(534300, 35896, 35895); //@t
				var_0_bool->AddReply(534317, 35914, 35913); //@t
				return 0;
			}
			if(var_74_float == 35914) {
				func_2923(var_75_int, "Neutral");
				var_0_bool->SetMessage(534318); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(534319, 35902, 35915); //@t
				return 0;
			}
			if(var_74_float == 35896) {
				func_2923(var_75_int, "Neutral");
				var_0_bool->SetMessage(534301); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(534413, 35902, 36037); //@t
				var_0_bool->AddReply(534302, 35898, 35897); //@t
				return 0;
			}
			if(var_74_float == 35898) {
				func_2923(var_75_int, "Neutral");
				var_0_bool->SetMessage(534303); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(534304, 35900, 35899); //@t
				return 0;
			}
			if(var_74_float == 35900) {
				func_2923(var_75_int, "Neutral");
				var_0_bool->SetMessage(534305); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(534306, 35902, 35901); //@t
				return 0;
			}
			if(var_74_float == 35902) {
				func_2923(var_75_int, "Neutral");
				var_0_bool->SetMessage(534307); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(534308, 35904, 35903); //@t
				var_0_bool->AddReply(534314, 35910, 35909); //@t
				return 0;
			}
			if(var_74_float == 35910) {
				func_2923(var_75_int, "Neutral");
				var_0_bool->SetMessage(534315); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(534316, 35906, 35911); //@t
				return 0;
			}
			if(var_74_float == 35904) {
				func_2923(var_75_int, "Neutral");
				var_0_bool->SetMessage(534309); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(534310, 35906, 35905); //@t
				return 0;
			}
			if(var_74_float == 35906) {
				func_2923(var_75_int, "Neutral");
				var_0_bool->SetMessage(534311); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(534312, -1, 35907); //@t
				var_0_bool->AddReply(534313, -1, 35908); //@t
				return 0;
			}
			var_3_object = true;
			bool var_579_bool;
			func_10433(var_579_bool);
			if(var_579_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xb82";
	
	}

}


task task_14
{
}


task task_15
{
	// @pe
	void event_11(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, int var_31_int, int var_32_int, object var_33_object, object var_34_object, object var_35_object, string var_36_string, bool var_37_bool, object var_38_object, object var_39_object, object var_40_object, string var_41_string, bool var_42_bool, object var_43_object, object var_44_object, object var_45_object, string var_46_string, bool var_47_bool, object var_48_object, object var_49_object, object var_50_object, string var_51_string, bool var_52_bool, object var_53_object, object var_54_object, object var_55_object, string var_56_string, bool var_57_bool, object var_58_object, object var_59_object, object var_60_object, string var_61_string, bool var_62_bool, object var_63_object, object var_64_object, object var_65_object, string var_66_string, bool var_67_bool, object var_68_object, object var_69_object, object var_70_object, string var_71_string, bool var_72_bool, float var_73_float, float var_74_float, int var_75_int)
	{
		if(1 != 0) {
			func_10168();
			if(var_75_int == 12610) {
				object var_80_object; object var_81_object;
				var_80_object = var_1_object;
				var_81_object = var_0_bool;
				func_10884();
				object var_84_object; object var_85_object;
				var_84_object = var_1_object;
				var_85_object = var_0_bool;
				func_10890();
				object var_151_object = var_1_object;
				func_10723(var_0_bool);
			}
			if(var_75_int == 12613) {
				object var_179_object; object var_180_object;
				var_179_object = var_1_object;
				var_180_object = var_0_bool;
				func_10884();
				object var_181_object; object var_182_object;
				var_181_object = var_1_object;
				var_182_object = var_0_bool;
				func_10890();
				object var_183_object = var_1_object;
				func_10723(var_0_bool);
			}
			if(var_75_int == 11955) {
				object var_187_object; object var_188_object;
				var_187_object = var_1_object;
				var_188_object = var_0_bool;
				func_10835();
			}
			if(var_75_int == 12243) {
				object var_193_object; object var_194_object;
				var_193_object = var_1_object;
				var_194_object = var_0_bool;
				func_10841();
				object var_213_object; object var_214_object;
				var_213_object = var_1_object;
				var_214_object = var_0_bool;
				func_10864();
				object var_225_object = var_1_object;
				func_10761(var_0_bool);
			}
			if(var_75_int == 12244) {
				object var_234_object; object var_235_object;
				var_234_object = var_1_object;
				var_235_object = var_0_bool;
				func_10841();
				object var_236_object; object var_237_object;
				var_236_object = var_1_object;
				var_237_object = var_0_bool;
				func_10864();
				object var_238_object = var_1_object;
				func_10761(var_0_bool);
			}
			if(var_75_int == 13075) {
				object var_242_object; object var_243_object;
				var_242_object = var_1_object;
				var_243_object = var_0_bool;
				func_10934();
			}
			if(var_75_int == 37888) {
				object var_248_object = var_1_object;
				func_10777(var_0_bool);
				object var_269_object; object var_270_object;
				var_269_object = var_1_object;
				var_270_object = var_0_bool;
				func_10529();
				object var_273_object = var_1_object;
				func_10678(var_0_bool);
			}
			if(var_75_int == 13077) {
				object var_296_object = var_1_object;
				func_10777(var_0_bool);
				object var_298_object; object var_299_object;
				var_298_object = var_1_object;
				var_299_object = var_0_bool;
				func_10529();
				object var_300_object = var_1_object;
				func_10678(var_0_bool);
			}
			if(var_75_int == 22120) {
				object var_304_object; object var_305_object;
				var_304_object = var_1_object;
				var_305_object = var_0_bool;
				func_10739();
				object var_308_object; object var_309_object;
				var_308_object = var_1_object;
				var_309_object = var_0_bool;
				func_10455();
				object var_321_object = var_1_object;
				func_10466(var_0_bool);
			}
			if(var_74_float == 12592) {
				bool var_327_bool = false;
				bool var_328_bool;
				func_11500(var_1_object);
				if(var_328_bool != 0) {
					bool var_336_bool;
					func_11476(var_1_object);
					if(!var_336_bool) //@nz
						var_327_bool = true;
				}
				if(var_327_bool != 0) {
					object var_343_object; object var_344_object;
					var_343_object = var_1_object;
					var_344_object = var_0_bool;
					func_10583();
					func_3947(var_75_int, "Neutral");
					var_0_bool->SetMessage(511395); //@t
					var_0_bool->ClearReplies(); //@t
					var_0_bool->AddReply(511396, 12594, 12593); //@t
					return 0;
				}
				func_3947(var_75_int, "Neutral");
				var_0_bool->SetMessage(510814); //@t
				var_0_bool->ClearReplies(); //@t
				bool var_365_bool = false;
				bool var_366_bool;
				func_11488(var_1_object);
				if(var_366_bool != 0) {
					bool var_372_bool;
					func_11476(var_1_object);
					if(var_372_bool != 0)
						var_365_bool = true;
				}
				if(var_365_bool != 0)
					var_0_bool->AddReply(510815, 11956, 11955); //@t
				bool var_377_bool = false;
				bool var_378_bool;
				func_11524(var_1_object);
				if(var_378_bool != 0) {
					bool var_384_bool;
					func_11512(var_1_object);
					if(var_384_bool != 0)
						var_377_bool = true;
				}
				if(var_377_bool != 0)
					var_0_bool->AddReply(511862, 37886, 13075); //@t
				bool var_393_bool;
				func_11846(var_393_bool, var_1_object);
				if(!var_393_bool) //@nz
					var_0_bool->AddReply(520901, 22119, 22118); //@t
				var_0_bool->AddReply(511408, -1, 12605); //@t
				return 0;
			}
			if(var_74_float == 22119) {
				func_3947(var_75_int, "Neutral");
				var_0_bool->SetMessage(520902); //@t
				var_0_bool->ClearReplies(); //@t
				bool var_416_bool;
				func_11856(var_416_bool, var_1_object);
				if(var_416_bool != 0)
					var_0_bool->AddReply(520903, -1, 22120); //@t
				var_0_bool->AddReply(520904, -1, 22121); //@t
				return 0;
			}
			if(var_74_float == 37886) {
				func_3947(var_75_int, "Neutral");
				var_0_bool->SetMessage(536127); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536128, 13076, 37887); //@t
				var_0_bool->AddReply(511864, -1, 13077); //@t
				return 0;
			}
			if(var_74_float == 13076) {
				func_3947(var_75_int, "Neutral");
				var_0_bool->SetMessage(511863); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536129, -1, 37888); //@t
				return 0;
			}
			if(var_74_float == 11956) {
				func_3947(var_75_int, "Neutral");
				var_0_bool->SetMessage(510816); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(510817, 11958, 11957); //@t
				var_0_bool->AddReply(511019, 12191, 12190); //@t
				return 0;
			}
			if(var_74_float == 12191) {
				func_3947(var_75_int, "Neutral");
				var_0_bool->SetMessage(511020); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(511021, 12193, 12192); //@t
				return 0;
			}
			if(var_74_float == 12193) {
				func_3947(var_75_int, "Neutral");
				var_0_bool->SetMessage(511022); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(511023, 12202, 12194); //@t
				var_0_bool->AddReply(511024, 12196, 12195); //@t
				return 0;
			}
			if(var_74_float == 12196) {
				func_3947(var_75_int, "Neutral");
				var_0_bool->SetMessage(511025); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(511026, 12198, 12197); //@t
				return 0;
			}
			if(var_74_float == 12198) {
				func_3947(var_75_int, "Neutral");
				var_0_bool->SetMessage(511027); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(511029, 12202, 12201); //@t
				return 0;
			}
			if(var_74_float == 12202) {
				func_3947(var_75_int, "Neutral");
				var_0_bool->SetMessage(511030); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(511031, 12205, 12203); //@t
				var_0_bool->AddReply(511032, 12205, 12204); //@t
				return 0;
			}
			if(var_74_float == 12205) {
				func_3947(var_75_int, "Neutral");
				var_0_bool->SetMessage(511033); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(511034, 12208, 12207); //@t
				var_0_bool->AddReply(511037, 12211, 12210); //@t
				return 0;
			}
			if(var_74_float == 12211) {
				func_3947(var_75_int, "Neutral");
				var_0_bool->SetMessage(511038); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(511039, 12213, 12212); //@t
				var_0_bool->AddReply(511054, 12222, 12231); //@t
				return 0;
			}
			if(var_74_float == 12213) {
				func_3947(var_75_int, "Neutral");
				var_0_bool->SetMessage(511040); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(511041, 12215, 12214); //@t
				return 0;
			}
			if(var_74_float == 12215) {
				func_3947(var_75_int, "Neutral");
				var_0_bool->SetMessage(511042); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(511043, 12222, 12216); //@t
				return 0;
			}
			if(var_74_float == 12208) {
				func_3947(var_75_int, "Neutral");
				var_0_bool->SetMessage(511035); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(511036, 12217, 12209); //@t
				return 0;
			}
			if(var_74_float == 12217) {
				func_3947(var_75_int, "Neutral");
				var_0_bool->SetMessage(511044); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(511045, 12222, 12218); //@t
				var_0_bool->AddReply(511046, 12220, 12219); //@t
				return 0;
			}
			if(var_74_float == 12220) {
				func_3947(var_75_int, "Neutral");
				var_0_bool->SetMessage(511047); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(511048, 12222, 12221); //@t
				return 0;
			}
			if(var_74_float == 11958) {
				func_3947(var_75_int, "Neutral");
				var_0_bool->SetMessage(510818); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(510819, 12222, 11959); //@t
				var_0_bool->AddReply(510830, 11971, 11970); //@t
				return 0;
			}
			if(var_74_float == 11971) {
				func_3947(var_75_int, "Neutral");
				var_0_bool->SetMessage(510831); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(510832, 12222, 11972); //@t
				var_0_bool->AddReply(510833, 12227, 11974); //@t
				return 0;
			}
			if(var_74_float == 12227) {
				func_3947(var_75_int, "Neutral");
				var_0_bool->SetMessage(511052); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(511053, 12198, 12228); //@t
				return 0;
			}
			if(var_74_float == 12222) {
				func_3947(var_75_int, "Neutral");
				var_0_bool->SetMessage(511049); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(511050, 12233, 12223); //@t
				var_0_bool->AddReply(511051, 12233, 12224); //@t
				var_0_bool->AddReply(511059, 12240, 12239); //@t
				return 0;
			}
			if(var_74_float == 12240) {
				func_3947(var_75_int, "Neutral");
				var_0_bool->SetMessage(511060); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(511061, 12233, 12241); //@t
				return 0;
			}
			if(var_74_float == 12233) {
				func_3947(var_75_int, "Neutral");
				var_0_bool->SetMessage(511055); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(511056, 12237, 12235); //@t
				var_0_bool->AddReply(511057, 12237, 12236); //@t
				return 0;
			}
			if(var_74_float == 12237) {
				func_3947(var_75_int, "Neutral");
				var_0_bool->SetMessage(511058); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(511062, -1, 12243); //@t
				var_0_bool->AddReply(511063, -1, 12244); //@t
				return 0;
			}
			if(var_74_float == 12594) {
				func_3947(var_75_int, "Neutral");
				var_0_bool->SetMessage(511397); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(511398, 12596, 12595); //@t
				return 0;
			}
			if(var_74_float == 12596) {
				func_3947(var_75_int, "Neutral");
				var_0_bool->SetMessage(511399); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(511400, 12598, 12597); //@t
				var_0_bool->AddReply(536121, 37879, 37878); //@t
				return 0;
			}
			if(var_74_float == 37879) {
				func_3947(var_75_int, "Neutral");
				var_0_bool->SetMessage(536122); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(538494, 40382, 40381); //@t
				var_0_bool->AddReply(538496, 12607, 40383); //@t
				return 0;
			}
			if(var_74_float == 40382) {
				func_3947(var_75_int, "Neutral");
				var_0_bool->SetMessage(538495); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536123, 12607, 37880); //@t
				return 0;
			}
			if(var_74_float == 12598) {
				func_3947(var_75_int, "Neutral");
				var_0_bool->SetMessage(511401); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(511409, 12607, 12606); //@t
				var_0_bool->AddReply(538497, 12607, 40384); //@t
				return 0;
			}
			if(var_74_float == 12607) {
				func_3947(var_75_int, "Neutral");
				var_0_bool->SetMessage(511410); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(511411, 12609, 12608); //@t
				var_0_bool->AddReply(536124, 37884, 37882); //@t
				return 0;
			}
			if(var_74_float == 12609) {
				func_3947(var_75_int, "Neutral");
				var_0_bool->SetMessage(511412); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536125, 37884, 37883); //@t
				return 0;
			}
			if(var_74_float == 37884) {
				func_3947(var_75_int, "Neutral");
				var_0_bool->SetMessage(536126); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(511413, -1, 12610); //@t
				var_0_bool->AddReply(511414, 12612, 12611); //@t
				return 0;
			}
			if(var_74_float == 12612) {
				func_3947(var_75_int, "Neutral");
				var_0_bool->SetMessage(511415); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(511416, -1, 12613); //@t
				return 0;
			}
			var_3_object = true;
			bool var_701_bool;
			func_10433(var_701_bool);
			if(var_701_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xf82";
	
	}

}


task task_16
{
}


task task_17
{
	// @pe
	void event_11(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, object var_31_object, object var_32_object, object var_33_object, string var_34_string, bool var_35_bool, int var_36_int, int var_37_int, object var_38_object, object var_39_object, object var_40_object, string var_41_string, bool var_42_bool, object var_43_object, object var_44_object, object var_45_object, string var_46_string, bool var_47_bool, object var_48_object, object var_49_object, object var_50_object, string var_51_string, bool var_52_bool, object var_53_object, object var_54_object, object var_55_object, string var_56_string, bool var_57_bool, object var_58_object, object var_59_object, object var_60_object, string var_61_string, bool var_62_bool, object var_63_object, object var_64_object, object var_65_object, string var_66_string, bool var_67_bool, object var_68_object, object var_69_object, object var_70_object, string var_71_string, bool var_72_bool, float var_73_float, float var_74_float, int var_75_int)
	{
		if(1 != 0) {
			func_10168();
			if(var_75_int == 12969) {
				object var_80_object; object var_81_object;
				var_80_object = var_1_object;
				var_81_object = var_0_bool;
				func_11175();
			}
			if(var_75_int == 12970) {
				object var_153_object; object var_154_object;
				var_153_object = var_1_object;
				var_154_object = var_0_bool;
				func_11175();
			}
			if(var_75_int == 13743) {
				object var_157_object; object var_158_object;
				var_157_object = var_1_object;
				var_158_object = var_0_bool;
				func_11021();
			}
			if(var_75_int == 13745) {
				object var_163_object; object var_164_object;
				var_163_object = var_1_object;
				var_164_object = var_0_bool;
				func_10529();
				object var_167_object = var_1_object;
				func_10445(var_0_bool);
			}
			if(var_75_int == 13746) {
				object var_190_object; object var_191_object;
				var_190_object = var_1_object;
				var_191_object = var_0_bool;
				func_11027();
			}
			if(var_75_int == 13748) {
				object var_196_object = var_1_object;
				func_11014(var_0_bool);
				object var_236_object; object var_237_object;
				var_236_object = var_1_object;
				var_237_object = var_0_bool;
				func_11033();
			}
			if(var_75_int == 22124) {
				object var_240_object; object var_241_object;
				var_240_object = var_1_object;
				var_241_object = var_0_bool;
				func_10455();
				object var_253_object = var_1_object;
				func_10466(var_0_bool);
				object var_257_object; object var_258_object;
				var_257_object = var_1_object;
				var_258_object = var_0_bool;
				func_10739();
			}
			if(var_74_float == 12947) {
				bool var_263_bool = false;
				bool var_264_bool = false;
				bool var_265_bool;
				func_11656(var_1_object);
				if(var_265_bool != 0) {
					bool var_271_bool;
					func_11596(var_1_object);
					if(!var_271_bool) //@nz
						var_264_bool = true;
				}
				if(var_264_bool != 0) {
					bool var_278_bool;
					func_11608(var_1_object);
					if(!var_278_bool) //@nz
						var_263_bool = true;
				}
				if(var_263_bool != 0) {
					object var_285_object; object var_286_object;
					var_285_object = var_1_object;
					var_286_object = var_0_bool;
					func_11035();
					func_5152(var_75_int, "Neutral");
					var_0_bool->SetMessage(511741); //@t
					var_0_bool->ClearReplies(); //@t
					var_0_bool->AddReply(511743, 12951, 12949); //@t
					var_0_bool->AddReply(511742, 12950, 12948); //@t
					bool var_308_bool;
					func_11584(var_1_object);
					if(!var_308_bool) //@nz
						var_0_bool->AddReply(512586, 13766, 13753); //@t
					return 0;
				}
				func_5152(var_75_int, "Neutral");
				var_0_bool->SetMessage(512573); //@t
				var_0_bool->ClearReplies(); //@t
				bool var_320_bool = false;
				bool var_321_bool;
				func_11620(var_1_object);
				if(var_321_bool != 0) {
					bool var_327_bool;
					func_11632(var_1_object);
					if(var_327_bool != 0)
						var_320_bool = true;
				}
				if(var_320_bool != 0)
					var_0_bool->AddReply(512574, 13744, 13743); //@t
				bool var_336_bool = false;
				bool var_337_bool;
				func_11596(var_1_object);
				if(var_337_bool != 0) {
					bool var_339_bool;
					func_11644(var_1_object);
					if(var_339_bool != 0)
						var_336_bool = true;
				}
				if(var_336_bool != 0)
					var_0_bool->AddReply(512577, 13747, 13746); //@t
				bool var_348_bool;
				func_11846(var_348_bool, var_1_object);
				if(!var_348_bool) //@nz
					var_0_bool->AddReply(520905, 22123, 22122); //@t
				var_0_bool->AddReply(512580, -1, 13749); //@t
				return 0;
			}
			if(var_74_float == 22123) {
				func_5152(var_75_int, "Neutral");
				var_0_bool->SetMessage(520906); //@t
				var_0_bool->ClearReplies(); //@t
				bool var_371_bool;
				func_11856(var_371_bool, var_1_object);
				if(var_371_bool != 0)
					var_0_bool->AddReply(520907, -1, 22124); //@t
				var_0_bool->AddReply(520908, -1, 22125); //@t
				return 0;
			}
			if(var_74_float == 13747) {
				func_5152(var_75_int, "Neutral");
				var_0_bool->SetMessage(512578); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(512598, 13770, 13769); //@t
				var_0_bool->AddReply(512603, 13772, 13775); //@t
				return 0;
			}
			if(var_74_float == 13770) {
				func_5152(var_75_int, "Neutral");
				var_0_bool->SetMessage(512599); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(512600, 13772, 13771); //@t
				var_0_bool->AddReply(512602, 13772, 13773); //@t
				return 0;
			}
			if(var_74_float == 13772) {
				func_5152(var_75_int, "Neutral");
				var_0_bool->SetMessage(512601); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(512579, -1, 13748); //@t
				return 0;
			}
			if(var_74_float == 13744) {
				func_5152(var_75_int, "Neutral");
				var_0_bool->SetMessage(512575); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(512576, -1, 13745); //@t
				var_0_bool->AddReply(515778, 16850, 16849); //@t
				return 0;
			}
			if(var_74_float == 16850) {
				func_5152(var_75_int, "Neutral");
				var_0_bool->SetMessage(515779); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(515780, -1, 16851); //@t
				return 0;
			}
			if(var_74_float == 13766) {
				func_5152(var_75_int, "Neutral");
				var_0_bool->SetMessage(512596); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(512597, 12960, 13767); //@t
				return 0;
			}
			if(var_74_float == 12950) {
				func_5152(var_75_int, "Neutral");
				var_0_bool->SetMessage(511744); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(511746, 12954, 12952); //@t
				return 0;
			}
			if(var_74_float == 12954) {
				func_5152(var_75_int, "Neutral");
				var_0_bool->SetMessage(511748); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(511749, 12951, 12955); //@t
				return 0;
			}
			if(var_74_float == 12951) {
				func_5152(var_75_int, "Neutral");
				var_0_bool->SetMessage(511745); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(511747, 12957, 12953); //@t
				return 0;
			}
			if(var_74_float == 12957) {
				func_5152(var_75_int, "Neutral");
				var_0_bool->SetMessage(511750); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(511751, 12960, 12958); //@t
				var_0_bool->AddReply(511752, -1, 12959); //@t
				return 0;
			}
			if(var_74_float == 12960) {
				func_5152(var_75_int, "Neutral");
				var_0_bool->SetMessage(511753); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(511754, 12964, 12962); //@t
				var_0_bool->AddReply(515777, -1, 16848); //@t
				return 0;
			}
			if(var_74_float == 12964) {
				func_5152(var_75_int, "Neutral");
				var_0_bool->SetMessage(511756); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(511761, -1, 12969); //@t
				var_0_bool->AddReply(511762, -1, 12970); //@t
				return 0;
			}
			var_3_object = true;
			bool var_487_bool;
			func_10433(var_487_bool);
			if(var_487_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x1437";
	
	}

}


task task_18
{
}


task task_19
{
	// @pe
	void event_11(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, object var_31_object, object var_32_object, object var_33_object, string var_34_string, bool var_35_bool, object var_36_object, object var_37_object, object var_38_object, string var_39_string, bool var_40_bool, int var_41_int, int var_42_int, object var_43_object, object var_44_object, object var_45_object, string var_46_string, bool var_47_bool, object var_48_object, object var_49_object, object var_50_object, string var_51_string, bool var_52_bool, object var_53_object, object var_54_object, object var_55_object, string var_56_string, bool var_57_bool, object var_58_object, object var_59_object, object var_60_object, string var_61_string, bool var_62_bool, object var_63_object, object var_64_object, object var_65_object, string var_66_string, bool var_67_bool, object var_68_object, object var_69_object, object var_70_object, string var_71_string, bool var_72_bool, float var_73_float, float var_74_float, int var_75_int)
	{
		if(1 != 0) {
			func_10168();
			if(var_75_int == 13670) {
				object var_80_object; object var_81_object;
				var_80_object = var_1_object;
				var_81_object = var_0_bool;
				func_10980();
				object var_84_object; object var_85_object;
				var_84_object = var_1_object;
				var_85_object = var_0_bool;
				func_10940();
				object var_152_object; object var_153_object;
				var_152_object = var_1_object;
				var_153_object = var_0_bool;
				func_10992();
			}
			if(var_75_int == 13671) {
				object var_158_object; object var_159_object;
				var_158_object = var_1_object;
				var_159_object = var_0_bool;
				func_10980();
				object var_160_object; object var_161_object;
				var_160_object = var_1_object;
				var_161_object = var_0_bool;
				func_10992();
			}
			if(var_75_int == 13692) {
				object var_164_object; object var_165_object;
				var_164_object = var_1_object;
				var_165_object = var_0_bool;
				func_10940();
			}
			if(var_75_int == 13686) {
				object var_168_object; object var_169_object;
				var_168_object = var_1_object;
				var_169_object = var_0_bool;
				func_10986();
			}
			if(var_75_int == 13689) {
				object var_174_object; object var_175_object;
				var_174_object = var_1_object;
				var_175_object = var_0_bool;
				func_10529();
				object var_178_object; object var_179_object;
				var_178_object = var_1_object;
				var_179_object = var_0_bool;
				func_11041();
				object var_201_object = var_1_object;
				func_10519(var_0_bool);
			}
			if(var_75_int == 37901) {
				object var_224_object; object var_225_object;
				var_224_object = var_1_object;
				var_225_object = var_0_bool;
				func_11041();
				object var_226_object = var_1_object;
				func_10519(var_0_bool);
				object var_228_object; object var_229_object;
				var_228_object = var_1_object;
				var_229_object = var_0_bool;
				func_10529();
			}
			if(var_75_int == 13696) {
				object var_232_object; object var_233_object;
				var_232_object = var_1_object;
				var_233_object = var_0_bool;
				func_10998();
			}
			if(var_75_int == 13698) {
				object var_238_object; object var_239_object;
				var_238_object = var_1_object;
				var_239_object = var_0_bool;
				func_11004();
			}
			if(var_75_int == 37902) {
				object var_253_object; object var_254_object;
				var_253_object = var_1_object;
				var_254_object = var_0_bool;
				func_11004();
			}
			if(var_75_int == 22128) {
				object var_257_object; object var_258_object;
				var_257_object = var_1_object;
				var_258_object = var_0_bool;
				func_10739();
				object var_261_object = var_1_object;
				func_10466(var_0_bool);
				object var_265_object; object var_266_object;
				var_265_object = var_1_object;
				var_266_object = var_0_bool;
				func_10455();
			}
			if(var_74_float == 13330) {
				bool var_280_bool;
				func_11548(var_1_object);
				if(var_280_bool != 0) {
					func_5899(var_75_int, "Neutral");
					var_0_bool->SetMessage(512104); //@t
					var_0_bool->ClearReplies(); //@t
					var_0_bool->AddReply(512105, 13334, 13331); //@t
					var_0_bool->AddReply(512106, 13333, 13332); //@t
					return 0;
				}
				func_5899(var_75_int, "Neutral");
				var_0_bool->SetMessage(512515); //@t
				var_0_bool->ClearReplies(); //@t
				bool var_309_bool;
				func_11536(var_1_object);
				if(var_309_bool != 0)
					var_0_bool->AddReply(512520, 13691, 13690); //@t
				bool var_318_bool = false;
				bool var_319_bool;
				func_11560(var_1_object);
				if(var_319_bool != 0) {
					bool var_325_bool;
					func_11668(var_1_object);
					if(var_325_bool != 0)
						var_318_bool = true;
				}
				if(var_318_bool != 0)
					var_0_bool->AddReply(512516, 13688, 13686); //@t
				bool var_334_bool = false;
				bool var_335_bool = false;
				bool var_336_bool;
				func_11572(var_1_object);
				if(var_336_bool != 0) {
					bool var_342_bool;
					func_11680(var_1_object);
					if(var_342_bool != 0)
						var_335_bool = true;
				}
				if(var_335_bool != 0) {
					bool var_348_bool;
					func_11668(var_1_object);
					if(!var_348_bool) //@nz
						var_334_bool = true;
				}
				if(var_334_bool != 0)
					var_0_bool->AddReply(512526, 13697, 13696); //@t
				bool var_354_bool;
				func_11846(var_354_bool, var_1_object);
				if(!var_354_bool) //@nz
					var_0_bool->AddReply(520909, 22127, 22126); //@t
				var_0_bool->AddReply(512517, -1, 13687); //@t
				return 0;
			}
			if(var_74_float == 22127) {
				func_5899(var_75_int, "Neutral");
				var_0_bool->SetMessage(520910); //@t
				var_0_bool->ClearReplies(); //@t
				bool var_377_bool;
				func_11856(var_377_bool, var_1_object);
				if(var_377_bool != 0)
					var_0_bool->AddReply(520911, -1, 22128); //@t
				var_0_bool->AddReply(520912, -1, 22129); //@t
				return 0;
			}
			if(var_74_float == 13697) {
				func_5899(var_75_int, "Neutral");
				var_0_bool->SetMessage(512527); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(512528, -1, 13698); //@t
				var_0_bool->AddReply(536143, -1, 37902); //@t
				return 0;
			}
			if(var_74_float == 13688) {
				func_5899(var_75_int, "Neutral");
				var_0_bool->SetMessage(512518); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(512519, -1, 13689); //@t
				var_0_bool->AddReply(536142, -1, 37901); //@t
				return 0;
			}
			if(var_74_float == 13691) {
				func_5899(var_75_int, "Neutral");
				var_0_bool->SetMessage(512521); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(512522, -1, 13692); //@t
				return 0;
			}
			if(var_74_float == 13333) {
				func_5899(var_75_int, "Neutral");
				var_0_bool->SetMessage(512107); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(512493, 13334, 13662); //@t
				return 0;
			}
			if(var_74_float == 13334) {
				func_5899(var_75_int, "Neutral");
				var_0_bool->SetMessage(512108); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(512109, 13336, 13335); //@t
				return 0;
			}
			if(var_74_float == 13336) {
				func_5899(var_75_int, "Neutral");
				var_0_bool->SetMessage(512110); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(512111, 13338, 13337); //@t
				return 0;
			}
			if(var_74_float == 13338) {
				func_5899(var_75_int, "Neutral");
				var_0_bool->SetMessage(512112); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(512494, 13665, 13664); //@t
				return 0;
			}
			if(var_74_float == 13665) {
				func_5899(var_75_int, "Neutral");
				var_0_bool->SetMessage(512495); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(512496, 13667, 13666); //@t
				return 0;
			}
			if(var_74_float == 13667) {
				func_5899(var_75_int, "Neutral");
				var_0_bool->SetMessage(512497); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(512498, 13669, 13668); //@t
				return 0;
			}
			if(var_74_float == 13669) {
				func_5899(var_75_int, "Neutral");
				var_0_bool->SetMessage(512499); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(512500, -1, 13670); //@t
				var_0_bool->AddReply(512501, -1, 13671); //@t
				return 0;
			}
			var_3_object = true;
			bool var_470_bool;
			func_10433(var_470_bool);
			if(var_470_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x1722";
	
	}

}


task task_20
{
}


task task_21
{
	// @pe
	void event_11(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, object var_31_object, object var_32_object, object var_33_object, string var_34_string, bool var_35_bool, object var_36_object, object var_37_object, object var_38_object, string var_39_string, bool var_40_bool, object var_41_object, object var_42_object, object var_43_object, string var_44_string, bool var_45_bool, int var_46_int, int var_47_int, object var_48_object, object var_49_object, object var_50_object, string var_51_string, bool var_52_bool, object var_53_object, object var_54_object, object var_55_object, string var_56_string, bool var_57_bool, object var_58_object, object var_59_object, object var_60_object, string var_61_string, bool var_62_bool, object var_63_object, object var_64_object, object var_65_object, string var_66_string, bool var_67_bool, object var_68_object, object var_69_object, object var_70_object, string var_71_string, bool var_72_bool, float var_73_float, float var_74_float, int var_75_int)
	{
		if(1 != 0) {
			func_10168();
			if(var_75_int == 34829) {
				object var_80_object; object var_81_object;
				var_80_object = var_1_object;
				var_81_object = var_0_bool;
				func_11153();
			}
			if(var_75_int == 37748) {
				object var_125_object; object var_126_object;
				var_125_object = var_1_object;
				var_126_object = var_0_bool;
				func_11153();
			}
			if(var_75_int == 14856) {
				object var_129_object; object var_130_object;
				var_129_object = var_1_object;
				var_130_object = var_0_bool;
				func_11080();
				object var_133_object; object var_134_object;
				var_133_object = var_1_object;
				var_134_object = var_0_bool;
				func_11217();
				object var_159_object = var_1_object;
				func_10745(var_0_bool);
			}
			if(var_75_int == 14857) {
				object var_187_object; object var_188_object;
				var_187_object = var_1_object;
				var_188_object = var_0_bool;
				func_11080();
				object var_189_object; object var_190_object;
				var_189_object = var_1_object;
				var_190_object = var_0_bool;
				func_11217();
				object var_191_object = var_1_object;
				func_10745(var_0_bool);
			}
			if(var_75_int == 14858) {
				object var_195_object; object var_196_object;
				var_195_object = var_1_object;
				var_196_object = var_0_bool;
				func_11080();
				object var_197_object; object var_198_object;
				var_197_object = var_1_object;
				var_198_object = var_0_bool;
				func_11217();
				object var_199_object = var_1_object;
				func_10745(var_0_bool);
			}
			if(var_75_int == 14839) {
				object var_203_object; object var_204_object;
				var_203_object = var_1_object;
				var_204_object = var_0_bool;
				func_11086();
			}
			if(var_75_int == 40671) {
				object var_209_object; object var_210_object;
				var_209_object = var_1_object;
				var_210_object = var_0_bool;
				func_11092();
				object var_238_object; object var_239_object;
				var_238_object = var_1_object;
				var_239_object = var_0_bool;
				func_10661();
				object var_248_object = var_1_object;
				func_10535(var_0_bool);
			}
			if(var_75_int == 40672) {
				object var_257_object; object var_258_object;
				var_257_object = var_1_object;
				var_258_object = var_0_bool;
				func_11092();
				object var_259_object; object var_260_object;
				var_259_object = var_1_object;
				var_260_object = var_0_bool;
				func_10661();
				object var_261_object = var_1_object;
				func_10535(var_0_bool);
			}
			if(var_75_int == 40667) {
				object var_265_object; object var_266_object;
				var_265_object = var_1_object;
				var_266_object = var_0_bool;
				func_11092();
				object var_267_object; object var_268_object;
				var_267_object = var_1_object;
				var_268_object = var_0_bool;
				func_10661();
				object var_269_object = var_1_object;
				func_10535(var_0_bool);
			}
			if(var_75_int == 14862) {
				object var_273_object; object var_274_object;
				var_273_object = var_1_object;
				var_274_object = var_0_bool;
				func_11129();
			}
			if(var_75_int == 14894) {
				object var_279_object; object var_280_object;
				var_279_object = var_1_object;
				var_280_object = var_0_bool;
				func_11135();
			}
			if(var_75_int == 14873) {
				object var_285_object; object var_286_object;
				var_285_object = var_1_object;
				var_286_object = var_0_bool;
				func_11147();
			}
			if(var_75_int == 14867) {
				object var_291_object; object var_292_object;
				var_291_object = var_1_object;
				var_292_object = var_0_bool;
				func_11141();
			}
			if(var_75_int == 22141) {
				object var_297_object; object var_298_object;
				var_297_object = var_1_object;
				var_298_object = var_0_bool;
				func_10455();
				object var_310_object = var_1_object;
				func_10466(var_0_bool);
				object var_330_object; object var_331_object;
				var_330_object = var_1_object;
				var_331_object = var_0_bool;
				func_10739();
			}
			if(var_75_int == 34843) {
				object var_336_object; object var_337_object;
				var_336_object = var_1_object;
				var_337_object = var_0_bool;
				func_10595();
				object var_356_object = var_1_object;
				func_10707(var_0_bool);
			}
			if(var_74_float == 34828) {
				bool var_365_bool;
				func_11332(var_1_object);
				if(var_365_bool != 0) {
					object var_371_object; object var_372_object;
					var_371_object = var_1_object;
					var_372_object = var_0_bool;
					func_10589();
					object var_375_object; object var_376_object;
					var_375_object = var_1_object;
					var_376_object = var_0_bool;
					func_10618();
					func_6734(var_75_int, "Neutral");
					var_0_bool->SetMessage(533324); //@t
					var_0_bool->ClearReplies(); //@t
					var_0_bool->AddReply(535993, 37724, 37723); //@t
					var_0_bool->AddReply(536001, 37724, 37731); //@t
					return 0;
				}
				func_6734(var_75_int, "Neutral");
				var_0_bool->SetMessage(512410); //@t
				var_0_bool->ClearReplies(); //@t
				bool var_400_bool = false;
				bool var_401_bool = false;
				bool var_402_bool;
				func_11692(var_1_object);
				if(var_402_bool != 0) {
					bool var_408_bool;
					func_11716(var_1_object);
					if(var_408_bool != 0)
						var_401_bool = true;
				}
				if(var_401_bool != 0) {
					bool var_414_bool;
					func_11704(var_1_object);
					if(!var_414_bool) //@nz
						var_400_bool = true;
				}
				if(var_400_bool != 0)
					var_0_bool->AddReply(512412, 13577, 13576); //@t
				bool var_424_bool = false;
				bool var_425_bool;
				func_11704(var_1_object);
				if(var_425_bool != 0) {
					bool var_427_bool;
					func_11728(var_1_object);
					if(var_427_bool != 0)
						var_424_bool = true;
				}
				if(var_424_bool != 0)
					var_0_bool->AddReply(513588, 14840, 14839); //@t
				bool var_436_bool = false;
				bool var_437_bool = false;
				bool var_438_bool = false;
				bool var_439_bool;
				func_11740(var_1_object);
				if(var_439_bool != 0) {
					bool var_445_bool;
					func_11704(var_1_object);
					if(var_445_bool != 0)
						var_438_bool = true;
				}
				if(var_438_bool != 0) {
					bool var_447_bool;
					func_11752(var_1_object);
					if(var_447_bool != 0)
						var_437_bool = true;
				}
				if(var_437_bool != 0) {
					bool var_453_bool;
					func_11788(var_1_object);
					if(!var_453_bool) //@nz
						var_436_bool = true;
				}
				if(var_436_bool != 0)
					var_0_bool->AddReply(513607, 14868, 14862); //@t
				bool var_463_bool = false;
				bool var_464_bool = false;
				bool var_465_bool;
				func_11740(var_1_object);
				if(var_465_bool != 0) {
					bool var_467_bool;
					func_11776(var_1_object);
					if(var_467_bool != 0)
						var_464_bool = true;
				}
				if(var_464_bool != 0) {
					bool var_473_bool;
					func_11800(var_1_object);
					if(!var_473_bool) //@nz
						var_463_bool = true;
				}
				if(var_463_bool != 0)
					var_0_bool->AddReply(513618, 14874, 14873); //@t
				bool var_483_bool = false;
				bool var_484_bool = false;
				bool var_485_bool;
				func_11704(var_1_object);
				if(!var_485_bool) { //@nz
					bool var_488_bool;
					func_11692(var_1_object);
					if(var_488_bool != 0)
						var_484_bool = true;
				}
				if(var_484_bool != 0) {
					bool var_490_bool;
					func_11764(var_1_object);
					if(var_490_bool != 0)
						var_483_bool = true;
				}
				if(var_483_bool != 0)
					var_0_bool->AddReply(513612, 14863, 14867); //@t
				bool var_499_bool;
				func_11846(var_499_bool, var_1_object);
				if(!var_499_bool) //@nz
					var_0_bool->AddReply(520922, 22140, 22139); //@t
				bool var_515_bool;
				func_11344(var_1_object);
				if(var_515_bool != 0)
					var_0_bool->AddReply(533337, 37749, 34841); //@t
				var_0_bool->AddReply(512411, -1, 13575); //@t
				return 0;
			}
			if(var_74_float == 37749) {
				func_6734(var_75_int, "Neutral");
				var_0_bool->SetMessage(536015); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536016, 37751, 37750); //@t
				var_0_bool->AddReply(536021, 37751, 37755); //@t
				return 0;
			}
			if(var_74_float == 37751) {
				func_6734(var_75_int, "Neutral");
				var_0_bool->SetMessage(536017); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536018, 37753, 37752); //@t
				return 0;
			}
			if(var_74_float == 37753) {
				func_6734(var_75_int, "Neutral");
				var_0_bool->SetMessage(536019); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536020, 34842, 37754); //@t
				var_0_bool->AddReply(536024, 37760, 37759); //@t
				return 0;
			}
			if(var_74_float == 37760) {
				func_6734(var_75_int, "Neutral");
				var_0_bool->SetMessage(536025); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536026, 37758, 37761); //@t
				var_0_bool->AddReply(536027, 34842, 37763); //@t
				return 0;
			}
			if(var_74_float == 34842) {
				func_6734(var_75_int, "Neutral");
				var_0_bool->SetMessage(533338); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536022, 37758, 37757); //@t
				var_0_bool->AddReply(536028, -1, 37765); //@t
				return 0;
			}
			if(var_74_float == 37758) {
				func_6734(var_75_int, "Neutral");
				var_0_bool->SetMessage(536023); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(533339, -1, 34843); //@t
				return 0;
			}
			if(var_74_float == 22140) {
				func_6734(var_75_int, "Neutral");
				var_0_bool->SetMessage(520923); //@t
				var_0_bool->ClearReplies(); //@t
				bool var_585_bool;
				func_11856(var_585_bool, var_1_object);
				if(var_585_bool != 0)
					var_0_bool->AddReply(520924, -1, 22141); //@t
				var_0_bool->AddReply(520925, -1, 22142); //@t
				return 0;
			}
			if(var_74_float == 14863) {
				func_6734(var_75_int, "Neutral");
				var_0_bool->SetMessage(513608); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(513609, 14865, 14864); //@t
				return 0;
			}
			if(var_74_float == 14865) {
				func_6734(var_75_int, "Neutral");
				var_0_bool->SetMessage(513610); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(513611, 14869, 14866); //@t
				return 0;
			}
			if(var_74_float == 14869) {
				func_6734(var_75_int, "Neutral");
				var_0_bool->SetMessage(513614); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(513615, 14871, 14870); //@t
				return 0;
			}
			if(var_74_float == 14871) {
				func_6734(var_75_int, "Neutral");
				var_0_bool->SetMessage(513616); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(513617, -1, 14872); //@t
				return 0;
			}
			if(var_74_float == 14874) {
				func_6734(var_75_int, "Neutral");
				var_0_bool->SetMessage(513619); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(513620, 14876, 14875); //@t
				return 0;
			}
			if(var_74_float == 14876) {
				func_6734(var_75_int, "Neutral");
				var_0_bool->SetMessage(513621); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(513623, 14879, 14878); //@t
				var_0_bool->AddReply(513622, -1, 14877); //@t
				return 0;
			}
			if(var_74_float == 14879) {
				func_6734(var_75_int, "Neutral");
				var_0_bool->SetMessage(513624); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(513626, 14882, 14881); //@t
				var_0_bool->AddReply(513625, -1, 14880); //@t
				return 0;
			}
			if(var_74_float == 14882) {
				func_6734(var_75_int, "Neutral");
				var_0_bool->SetMessage(513627); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(513628, -1, 14883); //@t
				return 0;
			}
			if(var_74_float == 14868) {
				func_6734(var_75_int, "Neutral");
				var_0_bool->SetMessage(513613); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(513629, 14885, 14884); //@t
				return 0;
			}
			if(var_74_float == 14885) {
				func_6734(var_75_int, "Neutral");
				var_0_bool->SetMessage(513630); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(513631, 14889, 14886); //@t
				var_0_bool->AddReply(513632, 14888, 14887); //@t
				return 0;
			}
			if(var_74_float == 14888) {
				func_6734(var_75_int, "Neutral");
				var_0_bool->SetMessage(513633); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(513636, 14889, 14891); //@t
				return 0;
			}
			if(var_74_float == 14889) {
				func_6734(var_75_int, "Neutral");
				var_0_bool->SetMessage(513634); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(513635, 14893, 14890); //@t
				return 0;
			}
			if(var_74_float == 14893) {
				func_6734(var_75_int, "Neutral");
				var_0_bool->SetMessage(513637); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(513638, -1, 14894); //@t
				return 0;
			}
			if(var_74_float == 14840) {
				func_6734(var_75_int, "Neutral");
				var_0_bool->SetMessage(513589); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(513591, 14843, 14842); //@t
				var_0_bool->AddReply(513590, 14845, 14841); //@t
				return 0;
			}
			if(var_74_float == 14845) {
				func_6734(var_75_int, "Neutral");
				var_0_bool->SetMessage(513594); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(513595, 14847, 14846); //@t
				return 0;
			}
			if(var_74_float == 14847) {
				func_6734(var_75_int, "Neutral");
				var_0_bool->SetMessage(513596); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(513597, 14843, 14848); //@t
				return 0;
			}
			if(var_74_float == 14843) {
				func_6734(var_75_int, "Neutral");
				var_0_bool->SetMessage(513592); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(513598, 14824, 14850); //@t
				var_0_bool->AddReply(513593, 13583, 14844); //@t
				return 0;
			}
			if(var_74_float == 13583) {
				func_6734(var_75_int, "Neutral");
				var_0_bool->SetMessage(512419); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(512423, 13588, 13587); //@t
				return 0;
			}
			if(var_74_float == 13588) {
				func_6734(var_75_int, "Neutral");
				var_0_bool->SetMessage(512424); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(512425, 13594, 13590); //@t
				var_0_bool->AddReply(512426, 13592, 13591); //@t
				return 0;
			}
			if(var_74_float == 13592) {
				func_6734(var_75_int, "Neutral");
				var_0_bool->SetMessage(512427); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(512430, 13594, 13596); //@t
				return 0;
			}
			if(var_74_float == 13594) {
				func_6734(var_75_int, "Neutral");
				var_0_bool->SetMessage(512428); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(512429, 13599, 13595); //@t
				return 0;
			}
			if(var_74_float == 13599) {
				func_6734(var_75_int, "Neutral");
				var_0_bool->SetMessage(512432); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(512433, 13601, 13600); //@t
				return 0;
			}
			if(var_74_float == 13601) {
				func_6734(var_75_int, "Neutral");
				var_0_bool->SetMessage(512434); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(513581, 14826, 14830); //@t
				var_0_bool->AddReply(512435, 14833, 13602); //@t
				return 0;
			}
			if(var_74_float == 14824) {
				func_6734(var_75_int, "Neutral");
				var_0_bool->SetMessage(513575); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(513576, 14826, 14825); //@t
				return 0;
			}
			if(var_74_float == 14826) {
				func_6734(var_75_int, "Neutral");
				var_0_bool->SetMessage(513577); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(513578, 14828, 14827); //@t
				return 0;
			}
			if(var_74_float == 14828) {
				func_6734(var_75_int, "Neutral");
				var_0_bool->SetMessage(513579); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(513580, 14833, 14829); //@t
				var_0_bool->AddReply(535991, 14837, 37720); //@t
				var_0_bool->AddReply(535992, 14837, 37721); //@t
				return 0;
			}
			if(var_74_float == 14833) {
				func_6734(var_75_int, "Neutral");
				var_0_bool->SetMessage(513582); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(513583, 14835, 14834); //@t
				return 0;
			}
			if(var_74_float == 14835) {
				func_6734(var_75_int, "Neutral");
				var_0_bool->SetMessage(513584); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(513585, 14837, 14836); //@t
				return 0;
			}
			if(var_74_float == 14837) {
				func_6734(var_75_int, "Neutral");
				var_0_bool->SetMessage(513586); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(513587, 40669, 14838); //@t
				var_0_bool->AddReply(538755, -1, 40667); //@t
				return 0;
			}
			if(var_74_float == 40669) {
				func_6734(var_75_int, "Neutral");
				var_0_bool->SetMessage(538756); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(538757, -1, 40671); //@t
				var_0_bool->AddReply(538758, -1, 40672); //@t
				return 0;
			}
			if(var_74_float == 13577) {
				func_6734(var_75_int, "Neutral");
				var_0_bool->SetMessage(512413); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(512420, 13585, 13584); //@t
				var_0_bool->AddReply(512414, 13579, 13578); //@t
				return 0;
			}
			if(var_74_float == 13579) {
				func_6734(var_75_int, "Neutral");
				var_0_bool->SetMessage(512415); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(512416, 13581, 13580); //@t
				return 0;
			}
			if(var_74_float == 13581) {
				func_6734(var_75_int, "Neutral");
				var_0_bool->SetMessage(512417); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(512418, 14853, 13582); //@t
				return 0;
			}
			if(var_74_float == 13585) {
				func_6734(var_75_int, "Neutral");
				var_0_bool->SetMessage(512421); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(513574, 14851, 14823); //@t
				var_0_bool->AddReply(513602, 14853, 14854); //@t
				return 0;
			}
			if(var_74_float == 14851) {
				func_6734(var_75_int, "Neutral");
				var_0_bool->SetMessage(513599); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(513600, 14853, 14852); //@t
				return 0;
			}
			if(var_74_float == 14853) {
				func_6734(var_75_int, "Neutral");
				var_0_bool->SetMessage(513601); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(513603, -1, 14856); //@t
				var_0_bool->AddReply(513604, -1, 14857); //@t
				var_0_bool->AddReply(513605, -1, 14858); //@t
				return 0;
			}
			if(var_74_float == 37724) {
				func_6734(var_75_int, "Neutral");
				var_0_bool->SetMessage(535994); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(535995, 37735, 37725); //@t
				var_0_bool->AddReply(536002, 37726, 37733); //@t
				return 0;
			}
			if(var_74_float == 37735) {
				func_6734(var_75_int, "Neutral");
				var_0_bool->SetMessage(536003); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536005, 37738, 37737); //@t
				var_0_bool->AddReply(536007, 37740, 37739); //@t
				return 0;
			}
			if(var_74_float == 37740) {
				func_6734(var_75_int, "Neutral");
				var_0_bool->SetMessage(536008); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536009, 37726, 37741); //@t
				return 0;
			}
			if(var_74_float == 37738) {
				func_6734(var_75_int, "Neutral");
				var_0_bool->SetMessage(536006); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536004, 37726, 37736); //@t
				var_0_bool->AddReply(536011, 37745, 37744); //@t
				return 0;
			}
			if(var_74_float == 37745) {
				func_6734(var_75_int, "Neutral");
				var_0_bool->SetMessage(536012); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536013, 37726, 37746); //@t
				return 0;
			}
			if(var_74_float == 37726) {
				func_6734(var_75_int, "Neutral");
				var_0_bool->SetMessage(535996); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(535997, 37728, 37727); //@t
				var_0_bool->AddReply(536010, 37728, 37742); //@t
				return 0;
			}
			if(var_74_float == 37728) {
				func_6734(var_75_int, "Neutral");
				var_0_bool->SetMessage(535998); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(535999, 37730, 37729); //@t
				return 0;
			}
			if(var_74_float == 37730) {
				func_6734(var_75_int, "Neutral");
				var_0_bool->SetMessage(536000); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(533325, -1, 34829); //@t
				var_0_bool->AddReply(536014, -1, 37748); //@t
				return 0;
			}
			var_3_object = true;
			bool var_967_bool;
			func_10433(var_967_bool);
			if(var_967_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x1a65";
	
	}

}


task task_22
{
}


task task_23
{
	// @pe
	void event_11(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, object var_31_object, object var_32_object, object var_33_object, string var_34_string, bool var_35_bool, object var_36_object, object var_37_object, object var_38_object, string var_39_string, bool var_40_bool, object var_41_object, object var_42_object, object var_43_object, string var_44_string, bool var_45_bool, object var_46_object, object var_47_object, object var_48_object, string var_49_string, bool var_50_bool, int var_51_int, int var_52_int, object var_53_object, object var_54_object, object var_55_object, string var_56_string, bool var_57_bool, object var_58_object, object var_59_object, object var_60_object, string var_61_string, bool var_62_bool, object var_63_object, object var_64_object, object var_65_object, string var_66_string, bool var_67_bool, object var_68_object, object var_69_object, object var_70_object, string var_71_string, bool var_72_bool, float var_73_float, float var_74_float, int var_75_int)
	{
		if(1 != 0) {
			func_10168();
			if(var_75_int == 22136) {
				object var_80_object; object var_81_object;
				var_80_object = var_1_object;
				var_81_object = var_0_bool;
				func_10455();
				object var_93_object = var_1_object;
				func_10466(var_0_bool);
				object var_113_object; object var_114_object;
				var_113_object = var_1_object;
				var_114_object = var_0_bool;
				func_10739();
			}
			if(var_74_float == 22131) {
				func_8381(var_75_int, "Neutral");
				var_0_bool->SetMessage(520914); //@t
				var_0_bool->ClearReplies(); //@t
				bool var_132_bool;
				func_11846(var_132_bool, var_1_object);
				if(!var_132_bool) //@nz
					var_0_bool->AddReply(520917, 22135, 22134); //@t
				var_0_bool->AddReply(520915, -1, 22132); //@t
				return 0;
			}
			if(var_74_float == 22135) {
				func_8381(var_75_int, "Neutral");
				var_0_bool->SetMessage(520918); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(520919, -1, 22136); //@t
				var_0_bool->AddReply(520920, -1, 22137); //@t
				return 0;
			}
			var_3_object = true;
			bool var_161_bool;
			func_10433(var_161_bool);
			if(var_161_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x20d4";
	
	}

}


task task_24
{
}


task task_25
{
	// @pe
	void event_11(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, object var_31_object, object var_32_object, object var_33_object, string var_34_string, bool var_35_bool, object var_36_object, object var_37_object, object var_38_object, string var_39_string, bool var_40_bool, object var_41_object, object var_42_object, object var_43_object, string var_44_string, bool var_45_bool, object var_46_object, object var_47_object, object var_48_object, string var_49_string, bool var_50_bool, object var_51_object, object var_52_object, object var_53_object, string var_54_string, bool var_55_bool, int var_56_int, int var_57_int, object var_58_object, object var_59_object, object var_60_object, string var_61_string, bool var_62_bool, object var_63_object, object var_64_object, object var_65_object, string var_66_string, bool var_67_bool, object var_68_object, object var_69_object, object var_70_object, string var_71_string, bool var_72_bool, float var_73_float, float var_74_float, int var_75_int)
	{
		if(1 != 0) {
			func_10168();
			if(var_75_int == 22147) {
				object var_80_object; object var_81_object;
				var_80_object = var_1_object;
				var_81_object = var_0_bool;
				func_10739();
				object var_84_object; object var_85_object;
				var_84_object = var_1_object;
				var_85_object = var_0_bool;
				func_10455();
				object var_97_object = var_1_object;
				func_10466(var_0_bool);
			}
			if(var_74_float == 22144) {
				func_8637(var_75_int, "Neutral");
				var_0_bool->SetMessage(520927); //@t
				var_0_bool->ClearReplies(); //@t
				bool var_132_bool;
				func_11846(var_132_bool, var_1_object);
				if(!var_132_bool) //@nz
					var_0_bool->AddReply(520928, 22146, 22145); //@t
				var_0_bool->AddReply(520932, -1, 22149); //@t
				return 0;
			}
			if(var_74_float == 22146) {
				func_8637(var_75_int, "Neutral");
				var_0_bool->SetMessage(520929); //@t
				var_0_bool->ClearReplies(); //@t
				bool var_155_bool;
				func_11856(var_155_bool, var_1_object);
				if(var_155_bool != 0)
					var_0_bool->AddReply(520930, -1, 22147); //@t
				var_0_bool->AddReply(520931, -1, 22148); //@t
				return 0;
			}
			var_3_object = true;
			bool var_169_bool;
			func_10433(var_169_bool);
			if(var_169_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x21d4";
	
	}

}


task task_26
{
}


task task_27
{
	// @pe
	void event_11(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, object var_31_object, object var_32_object, object var_33_object, string var_34_string, bool var_35_bool, object var_36_object, object var_37_object, object var_38_object, string var_39_string, bool var_40_bool, object var_41_object, object var_42_object, object var_43_object, string var_44_string, bool var_45_bool, object var_46_object, object var_47_object, object var_48_object, string var_49_string, bool var_50_bool, object var_51_object, object var_52_object, object var_53_object, string var_54_string, bool var_55_bool, object var_56_object, object var_57_object, object var_58_object, string var_59_string, bool var_60_bool, int var_61_int, int var_62_int, object var_63_object, object var_64_object, object var_65_object, string var_66_string, bool var_67_bool, object var_68_object, object var_69_object, object var_70_object, string var_71_string, bool var_72_bool, float var_73_float, float var_74_float, int var_75_int)
	{
		if(1 != 0) {
			func_10168();
			if(var_75_int == 22154) {
				object var_80_object; object var_81_object;
				var_80_object = var_1_object;
				var_81_object = var_0_bool;
				func_10455();
				object var_93_object = var_1_object;
				func_10466(var_0_bool);
				object var_113_object; object var_114_object;
				var_113_object = var_1_object;
				var_114_object = var_0_bool;
				func_10739();
			}
			if(var_74_float == 22151) {
				func_8898(var_75_int, "Neutral");
				var_0_bool->SetMessage(520934); //@t
				var_0_bool->ClearReplies(); //@t
				bool var_132_bool;
				func_11846(var_132_bool, var_1_object);
				if(!var_132_bool) //@nz
					var_0_bool->AddReply(520935, 22153, 22152); //@t
				var_0_bool->AddReply(520939, -1, 22156); //@t
				return 0;
			}
			if(var_74_float == 22153) {
				func_8898(var_75_int, "Neutral");
				var_0_bool->SetMessage(520936); //@t
				var_0_bool->ClearReplies(); //@t
				bool var_155_bool;
				func_11856(var_155_bool, var_1_object);
				if(var_155_bool != 0)
					var_0_bool->AddReply(520937, -1, 22154); //@t
				var_0_bool->AddReply(520938, -1, 22155); //@t
				return 0;
			}
			var_3_object = true;
			bool var_169_bool;
			func_10433(var_169_bool);
			if(var_169_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x22d9";
	
	}

}


task task_28
{
}


task task_29
{
	// @pe
	void event_11(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, object var_31_object, object var_32_object, object var_33_object, string var_34_string, bool var_35_bool, object var_36_object, object var_37_object, object var_38_object, string var_39_string, bool var_40_bool, object var_41_object, object var_42_object, object var_43_object, string var_44_string, bool var_45_bool, object var_46_object, object var_47_object, object var_48_object, string var_49_string, bool var_50_bool, object var_51_object, object var_52_object, object var_53_object, string var_54_string, bool var_55_bool, object var_56_object, object var_57_object, object var_58_object, string var_59_string, bool var_60_bool, object var_61_object, object var_62_object, object var_63_object, string var_64_string, bool var_65_bool, int var_66_int, int var_67_int, object var_68_object, object var_69_object, object var_70_object, string var_71_string, bool var_72_bool, float var_73_float, float var_74_float, int var_75_int)
	{
		if(1 != 0) {
			func_10168();
			if(var_75_int == 36141) {
				object var_80_object; object var_81_object;
				var_80_object = var_1_object;
				var_81_object = var_0_bool;
				func_10640();
			}
			if(var_75_int == 38456) {
				object var_116_object; object var_117_object;
				var_116_object = var_1_object;
				var_117_object = var_0_bool;
				func_10640();
			}
			if(var_75_int == 22161) {
				object var_120_object; object var_121_object;
				var_120_object = var_1_object;
				var_121_object = var_0_bool;
				func_10739();
				object var_124_object; object var_125_object;
				var_124_object = var_1_object;
				var_125_object = var_0_bool;
				func_10455();
				object var_137_object = var_1_object;
				func_10466(var_0_bool);
			}
			if(var_74_float == 22158) {
				func_9174(var_75_int, "Neutral");
				var_0_bool->SetMessage(520941); //@t
				var_0_bool->ClearReplies(); //@t
				bool var_172_bool;
				func_11356(var_1_object);
				if(var_172_bool != 0)
					var_0_bool->AddReply(534490, 38444, 36135); //@t
				bool var_183_bool;
				func_11846(var_183_bool, var_1_object);
				if(!var_183_bool) //@nz
					var_0_bool->AddReply(520942, 22160, 22159); //@t
				var_0_bool->AddReply(520946, -1, 22163); //@t
				var_0_bool->AddReply(536616, -1, 38443); //@t
				return 0;
			}
			if(var_74_float == 22160) {
				func_9174(var_75_int, "Neutral");
				var_0_bool->SetMessage(520943); //@t
				var_0_bool->ClearReplies(); //@t
				bool var_209_bool;
				func_11856(var_209_bool, var_1_object);
				if(var_209_bool != 0)
					var_0_bool->AddReply(520944, -1, 22161); //@t
				var_0_bool->AddReply(520945, -1, 22162); //@t
				return 0;
			}
			if(var_74_float == 38444) {
				func_9174(var_75_int, "Neutral");
				var_0_bool->SetMessage(536617); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536618, 38446, 38445); //@t
				return 0;
			}
			if(var_74_float == 38446) {
				func_9174(var_75_int, "Neutral");
				var_0_bool->SetMessage(536619); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536620, 36136, 38447); //@t
				return 0;
			}
			if(var_74_float == 36136) {
				func_9174(var_75_int, "Neutral");
				var_0_bool->SetMessage(534491); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(534492, 36138, 36137); //@t
				var_0_bool->AddReply(536621, 38449, 38448); //@t
				return 0;
			}
			if(var_74_float == 38449) {
				func_9174(var_75_int, "Neutral");
				var_0_bool->SetMessage(536622); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536625, 36140, 38452); //@t
				return 0;
			}
			if(var_74_float == 36138) {
				func_9174(var_75_int, "Neutral");
				var_0_bool->SetMessage(534493); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(534494, 36140, 36139); //@t
				var_0_bool->AddReply(536623, 38451, 38450); //@t
				return 0;
			}
			if(var_74_float == 38451) {
				func_9174(var_75_int, "Neutral");
				var_0_bool->SetMessage(536624); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536626, 38455, 38454); //@t
				return 0;
			}
			if(var_74_float == 38455) {
				func_9174(var_75_int, "Neutral");
				var_0_bool->SetMessage(536627); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536628, -1, 38456); //@t
				return 0;
			}
			if(var_74_float == 36140) {
				func_9174(var_75_int, "Neutral");
				var_0_bool->SetMessage(534495); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(534496, -1, 36141); //@t
				return 0;
			}
			var_3_object = true;
			bool var_285_bool;
			func_10433(var_285_bool);
			if(var_285_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x23ed";
	
	}

}


task task_30
{
}


task task_31
{
	// @pe
	void event_11(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, object var_31_object, object var_32_object, object var_33_object, string var_34_string, bool var_35_bool, object var_36_object, object var_37_object, object var_38_object, string var_39_string, bool var_40_bool, object var_41_object, object var_42_object, object var_43_object, string var_44_string, bool var_45_bool, object var_46_object, object var_47_object, object var_48_object, string var_49_string, bool var_50_bool, object var_51_object, object var_52_object, object var_53_object, string var_54_string, bool var_55_bool, object var_56_object, object var_57_object, object var_58_object, string var_59_string, bool var_60_bool, object var_61_object, object var_62_object, object var_63_object, string var_64_string, bool var_65_bool, object var_66_object, object var_67_object, object var_68_object, string var_69_string, bool var_70_bool, int var_71_int, int var_72_int, float var_73_float, float var_74_float, int var_75_int)
	{
		if(1 != 0) {
			func_10168();
			if(var_74_float == 42551) {
				func_9614(var_75_int, "Neutral");
				var_0_bool->SetMessage(540542); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(540543, -1, 42552); //@t
				var_0_bool->AddReply(540796, -1, 42845); //@t
				return 0;
			}
			var_3_object = true;
			bool var_99_bool;
			func_10433(var_99_bool);
			if(var_99_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x25a5";
	
	}

}


maintask task_32
{
	void init(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, object var_31_object, object var_32_object, object var_33_object, string var_34_string, bool var_35_bool, object var_36_object, object var_37_object, object var_38_object, string var_39_string, bool var_40_bool, object var_41_object, object var_42_object, object var_43_object, string var_44_string, bool var_45_bool, object var_46_object, object var_47_object, object var_48_object, string var_49_string, bool var_50_bool, object var_51_object, object var_52_object, object var_53_object, string var_54_string, bool var_55_bool, object var_56_object, object var_57_object, object var_58_object, string var_59_string, bool var_60_bool, object var_61_object, object var_62_object, object var_63_object, string var_64_string, bool var_65_bool, object var_66_object, object var_67_object, object var_68_object, string var_69_string, bool var_70_bool, float var_71_float, float var_72_float, int var_73_int)
	{
		var_74_bool = GlobalVars[2];
		GlobalVars[2] = false;
		func_9685(var_71_float, var_72_float, var_73_int);
	}

	// @pe
	void OnUnload(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, object var_31_object, object var_32_object, object var_33_object, string var_34_string, bool var_35_bool, object var_36_object, object var_37_object, object var_38_object, string var_39_string, bool var_40_bool, object var_41_object, object var_42_object, object var_43_object, string var_44_string, bool var_45_bool, object var_46_object, object var_47_object, object var_48_object, string var_49_string, bool var_50_bool, object var_51_object, object var_52_object, object var_53_object, string var_54_string, bool var_55_bool, object var_56_object, object var_57_object, object var_58_object, string var_59_string, bool var_60_bool, object var_61_object, object var_62_object, object var_63_object, string var_64_string, bool var_65_bool, object var_66_object, object var_67_object, object var_68_object, string var_69_string, bool var_70_bool, float var_71_float, float var_72_float, int var_73_int)
	{
		func_10424();
		TaskCall(0);
		func_0();
		TaskReturn();
	}

	void OnUse(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, object var_31_object, object var_32_object, object var_33_object, string var_34_string, bool var_35_bool, object var_36_object, object var_37_object, object var_38_object, string var_39_string, bool var_40_bool, object var_41_object, object var_42_object, object var_43_object, string var_44_string, bool var_45_bool, object var_46_object, object var_47_object, object var_48_object, string var_49_string, bool var_50_bool, object var_51_object, object var_52_object, object var_53_object, string var_54_string, bool var_55_bool, object var_56_object, object var_57_object, object var_58_object, string var_59_string, bool var_60_bool, object var_61_object, object var_62_object, object var_63_object, string var_64_string, bool var_65_bool, object var_66_object, object var_67_object, object var_68_object, string var_69_string, bool var_70_bool, float var_71_float, float var_72_float, int var_73_int, object var_74_object)
	{
		bool var_76_bool;
		@IsOverrideActive(var_76_bool);
		if(!var_76_bool) { //@nz
			disable OnUse;
			bool var_78_bool; object var_79_object;
			var_74_object = var_79_object;
			func_9892(var_78_bool, var_79_object);
			enable OnUse;
			object var_92_object;
			var_74_object = var_92_object;
			func_12253(var_92_object);
		}
	}

}


void OnUnload(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, object var_31_object, object var_32_object, object var_33_object, string var_34_string, bool var_35_bool, object var_36_object, object var_37_object, object var_38_object, string var_39_string, bool var_40_bool, object var_41_object, object var_42_object, object var_43_object, string var_44_string, bool var_45_bool, object var_46_object, object var_47_object, object var_48_object, string var_49_string, bool var_50_bool, object var_51_object, object var_52_object, object var_53_object, string var_54_string, bool var_55_bool, object var_56_object, object var_57_object, object var_58_object, string var_59_string, bool var_60_bool, object var_61_object, object var_62_object, object var_63_object, string var_64_string, bool var_65_bool, object var_66_object, object var_67_object, object var_68_object, string var_69_string, bool var_70_bool, float var_71_float, float var_72_float, int var_73_int)
{
}


void func_0(void)
{
	
Label_0:
	@Hold();
	bool var_116_bool;
	func_9912(var_116_bool);
	if(!var_116_bool) goto Label_0; //@nz
}


// @pe
void func_11776(bool var_1243_bool)
{
	int var_1245_int;
	func_10220(var_1245_int, "ood8MladVlad5");
	if(var_1245_int == 0) {
		var_1243_bool = true;
		return 0;
	}
	var_1243_bool = false;
}


void func_10247(int var_152_int, int var_153_int)
{
	object var_155_object;
	@CreateIntVector(var_155_object);
	var_155_object->add(var_152_int);
	var_155_object->add(var_153_int);
	@SendWorldWndMessage(3, var_155_object);
}
EMIT "Stack[-1] = 0";


// @pe
void func_11272(bool var_441_bool)
{
	int var_443_int;
	func_10220(var_443_int, "d1q03IsKapella");
	if(var_443_int == 1)
		var_441_bool = true;
	var_441_bool = false;
}


// @pe
void func_10761(object var_226_object)
{
	object var_230_object;
	func_12186(var_230_object);
	object var_227_object;
	var_230_object = var_227_object;
	func_12203(var_227_object, "pt_map_bigvlad", (float)2);
	object var_231_object;
	func_12186(var_231_object);
	var_226_object->ShowMap(var_231_object);
}


// @pe
void func_11788(bool var_1229_bool)
{
	int var_1231_int;
	func_10220(var_1231_int, "d8q01BigVladIsVictim");
	if(var_1231_int == 1)
		var_1229_bool = true;
	var_1229_bool = false;
}


void func_13(bool var_0_bool, bool var_157_bool, cvector var_158_cvector, cvector var_159_cvector)
{
	var_0_bool = true;
	@SetTimer(21, 0.5);
	
Label_19:
	for(;;) {
		bool var_165_bool; cvector var_166_cvector;
		var_158_cvector = var_166_cvector;
		func_9882(var_165_bool, var_166_cvector);
		var_175_bool = !var_165_bool; //@nz
		if(var_175_bool == 0) goto Label_26;
	}
	
Label_26:
	bool var_162_bool;
	@MovePoint(var_158_cvector, false, var_162_bool);
	if(var_162_bool != 0) {
	} else {
		goto Label_19;
	}
	@KillTimer(20);
	@KillTimer(21);
	var_0_bool = false;
	@WaitForAnimEnd(var_162_bool);
	if(!var_162_bool) { //@nz
		var_157_bool = false;
		return 2;
	}
	var_181_float = GetByIndex(var_159_cvector, 0);
	var_182_float = GetByIndex(var_159_cvector, 2);
	@Rotate(var_181_float, var_182_float, var_162_bool);
	if(!var_162_bool) { //@nz
		var_157_bool = false;
		return 2;
	}
	var_157_bool = true;
	
}


void func_10259(object var_139_object, int var_140_int)
{
	int var_142_int;
	object var_143_object;
	var_139_object = var_143_object;
	int var_145_int;
	func_9875(var_143_object, "money", var_145_int);
	if(var_145_int > 0) {
		@GetInvItemByName(var_142_int, "Money");
		int var_152_int; int var_153_int;
		var_142_int = var_152_int;
		var_140_int = var_153_int;
		func_10247(var_152_int, var_153_int);
	}
}


// @pe
void func_11284(bool var_421_bool)
{
	int var_423_int;
	func_10220(var_423_int, "d1q01");
	if(var_423_int == 6)
		var_421_bool = true;
	var_421_bool = false;
}


// @pe
void func_11800(bool var_1249_bool)
{
	int var_1251_int;
	func_10220(var_1251_int, "d8q01MladVladIsVictim");
	if(var_1251_int == 1)
		var_1249_bool = true;
	var_1249_bool = false;
}


// @pe
void func_10777(object var_248_object)
{
	@Trace("money3000 is given");
	object var_251_object;
	var_248_object = var_251_object;
	func_10259(var_251_object, 3000);
}


// @pe
void func_542(object var_2_object, string var_384_string)
{
	bool var_385_bool;
	func_10433(var_385_bool);
	if(!var_385_bool) //@nz
		return 0;
	if(var_384_string == var_2_object)
		return 0;
	string var_388_string; bool var_389_bool;
	var_384_string = var_388_string;
	if(var_384_string == "")
		var_389_bool = false;
	else
		var_389_bool = true;
	func_10147(var_388_string, var_389_bool);
	var_2_object = var_384_string;
	
}


// @pe
void func_11296(bool var_350_bool)
{
	int var_352_int;
	func_10220(var_352_int, "ood1MladVlad1");
	if(var_352_int == 0) {
		var_350_bool = true;
		return 0;
	}
	var_350_bool = false;
}


// @pe
void func_5152(object var_2_object, string var_849_string)
{
	bool var_850_bool;
	func_10433(var_850_bool);
	if(!var_850_bool) //@nz
		return 0;
	if(var_849_string == var_2_object)
		return 0;
	string var_853_string; bool var_854_bool;
	var_849_string = var_853_string;
	if(var_849_string == "")
		var_854_bool = false;
	else
		var_854_bool = true;
	func_10147(var_853_string, var_854_bool);
	var_2_object = var_849_string;
	
}


// @pe
void func_10787(void)
{
	@SetVariable("ood3MladVlad1", 1);
}


// @pe
void func_11812(bool var_364_bool)
{
	bool var_366_bool = true;
	bool var_367_bool = true;
	int var_368_int;
	func_10220(var_368_int, "d1q01");
	var_371_bool = var_368_int != 0;
	if(var_371_bool != 1) {
		int var_372_int;
		func_10220(var_372_int, "d1q01");
		var_375_bool = var_372_int != 1000;
		if(var_375_bool != 1)
			var_367_bool = false;
	}
	if(var_367_bool != 1) {
		int var_376_int;
		func_10220(var_376_int, "d1q01");
		var_379_bool = var_376_int != -1;
		if(var_379_bool != 1)
			var_366_bool = false;
	}
	if(var_366_bool != 0) {
		var_364_bool = true;
		return 0;
	}
	var_364_bool = false;
}


void func_1571(bool var_0_bool, int var_1492_int, object var_1493_object)
{
	var_0_bool = var_1493_object;
	bool var_1503_bool; object var_1504_object;
	object var_1505_object;
	func_10175(var_1505_object);
	var_1505_object = var_1504_object;
	func_10002(var_1503_bool, var_1504_object);
	bool var_1506_bool; object var_1507_object;
	var_1493_object = var_1507_object;
	func_9917(var_1506_bool, var_1507_object, 70.0);
	if(!var_1506_bool) { //@nz
		var_1492_int = -2;
		return 8;
	}
	object var_1499_object;
	@CreateDialog(var_1499_object);
	int var_1510_int;
	func_10427(var_1510_int);
	var_1499_object->SetNPCName(var_1510_int);
	int var_1511_int;
	func_10425(var_1511_int);
	var_1499_object->SetNPCDescription(var_1511_int);
	string var_1512_string;
	func_10429(var_1512_string);
	var_1499_object->SetPhoto(var_1512_string);
	string var_1513_string;
	func_10431(var_1513_string);
	var_1499_object->SetPhoto2(var_1513_string);
	int var_1514_int;
	func_12236(var_1514_int);
	var_1499_object->SetPlayerName(var_1514_int);
	bool var_1500_bool;
	@IsOverrideActive(var_1500_bool);
	if(var_1500_bool != 0) {
		var_1492_int = -2;
		return 8;
	}
	@DoDialog(var_1499_object);
	object var_1516_object; object var_1517_object;
	var_1493_object = var_1516_object;
	var_1499_object = var_1517_object;
	TaskCall(7);
	func_1652(var_1518_object, var_1519_object, var_1520_string, var_1521_bool, var_1516_object, var_1517_object);
	TaskReturn();
	bool var_1502_bool;
	var_1499_object->IsDialogEnd(var_1502_bool);
	
	for(;;) {
		var_1546_bool = !var_1502_bool; //@nz
		if(var_1546_bool == 0) goto Label_1641;
		@sync();
		var_1499_object->IsDialogEnd(var_1502_bool);
	}
	
Label_1641:
	object var_1547_object;
	var_1493_object = var_1547_object;
	func_9985();
	@StopDialog(var_1499_object);
	var_1499_object->GetReturnValue(-1);
	int var_1501_int = var_1492_int;
}
EMIT "Stack[-4] = 0";


void func_10278(object var_281_object, object var_282_object, int var_283_int)
{
	int var_287_int;
	var_282_object->GetItemID(var_287_int);
	int var_288_int;
	@GetInvItemProperty(var_288_int, var_287_int, "Category");
	bool var_289_bool;
	var_281_object->AddItem(var_289_bool, var_282_object, var_288_int, var_283_int);
	if(!var_289_bool) { //@nz
		var_281_object->DropItems(var_282_object, var_283_int);
	} else {
		int var_292_int; int var_293_int;
		var_287_int = var_292_int;
		var_283_int = var_293_int;
		func_10247(var_292_int, var_293_int);
	}
	
}


void func_5671(bool var_0_bool, int var_925_int, object var_926_object)
{
	var_0_bool = var_926_object;
	bool var_936_bool; object var_937_object;
	object var_938_object;
	func_10175(var_938_object);
	var_938_object = var_937_object;
	func_10002(var_936_bool, var_937_object);
	bool var_939_bool; object var_940_object;
	var_926_object = var_940_object;
	func_9917(var_939_bool, var_940_object, 70.0);
	if(!var_939_bool) { //@nz
		var_925_int = -2;
		return 8;
	}
	object var_932_object;
	@CreateDialog(var_932_object);
	int var_943_int;
	func_10427(var_943_int);
	var_932_object->SetNPCName(var_943_int);
	int var_944_int;
	func_10425(var_944_int);
	var_932_object->SetNPCDescription(var_944_int);
	string var_945_string;
	func_10429(var_945_string);
	var_932_object->SetPhoto(var_945_string);
	string var_946_string;
	func_10431(var_946_string);
	var_932_object->SetPhoto2(var_946_string);
	int var_947_int;
	func_12236(var_947_int);
	var_932_object->SetPlayerName(var_947_int);
	bool var_933_bool;
	@IsOverrideActive(var_933_bool);
	if(var_933_bool != 0) {
		var_925_int = -2;
		return 8;
	}
	@DoDialog(var_932_object);
	object var_949_object; object var_950_object;
	var_926_object = var_949_object;
	var_932_object = var_950_object;
	TaskCall(19);
	func_5752(var_951_object, var_952_object, var_953_string, var_954_bool, var_949_object, var_950_object);
	TaskReturn();
	bool var_935_bool;
	var_932_object->IsDialogEnd(var_935_bool);
	
	for(;;) {
		var_1041_bool = !var_935_bool; //@nz
		if(var_1041_bool == 0) goto Label_5741;
		@sync();
		var_932_object->IsDialogEnd(var_935_bool);
	}
	
Label_5741:
	object var_1042_object;
	var_926_object = var_1042_object;
	func_9985();
	@StopDialog(var_932_object);
	var_932_object->GetReturnValue(-1);
	int var_934_int = var_925_int;
}
EMIT "Stack[-4] = 0";


void func_10793(void)
{
	@SetVariable("d3q02", 2);
	object var_92_object;
	func_12186(var_92_object);
	object var_89_object;
	var_92_object = var_89_object;
	float var_103_float;
	func_10367(var_103_float);
	var_89_object->AddMark("d3q02MladVladGotoViktor", "pt_map_viktor", 0, 511384, var_103_float);
	func_11937();
}
EMIT "Stack[-1] = 0";


// @pe
void func_11308(bool var_410_bool)
{
	int var_412_int;
	func_10220(var_412_int, "ood1MladVlad2");
	if(var_412_int == 0) {
		var_410_bool = true;
		return 0;
	}
	var_410_bool = false;
}


void func_9773(void)
{
	string var_99_string;
	@GetProperty("loc", var_99_string);
	var_101_string = GlobalVars[0];
	var_99_string = var_101_string;
	GlobalVars[0] = var_101_string;
}


void func_8236(bool var_0_bool, int var_1045_int, object var_1046_object)
{
	var_0_bool = var_1046_object;
	bool var_1056_bool; object var_1057_object;
	object var_1058_object;
	func_10175(var_1058_object);
	var_1058_object = var_1057_object;
	func_10002(var_1056_bool, var_1057_object);
	bool var_1059_bool; object var_1060_object;
	var_1046_object = var_1060_object;
	func_9917(var_1059_bool, var_1060_object, 70.0);
	if(!var_1059_bool) { //@nz
		var_1045_int = -2;
		return 8;
	}
	object var_1052_object;
	@CreateDialog(var_1052_object);
	int var_1063_int;
	func_10427(var_1063_int);
	var_1052_object->SetNPCName(var_1063_int);
	int var_1064_int;
	func_10425(var_1064_int);
	var_1052_object->SetNPCDescription(var_1064_int);
	string var_1065_string;
	func_10429(var_1065_string);
	var_1052_object->SetPhoto(var_1065_string);
	string var_1066_string;
	func_10431(var_1066_string);
	var_1052_object->SetPhoto2(var_1066_string);
	int var_1067_int;
	func_12236(var_1067_int);
	var_1052_object->SetPlayerName(var_1067_int);
	bool var_1053_bool;
	@IsOverrideActive(var_1053_bool);
	if(var_1053_bool != 0) {
		var_1045_int = -2;
		return 8;
	}
	@DoDialog(var_1052_object);
	object var_1069_object; object var_1070_object;
	var_1046_object = var_1069_object;
	var_1052_object = var_1070_object;
	TaskCall(23);
	func_8317(var_1071_object, var_1072_object, var_1073_string, var_1074_bool, var_1069_object, var_1070_object);
	TaskReturn();
	bool var_1055_bool;
	var_1052_object->IsDialogEnd(var_1055_bool);
	
	for(;;) {
		var_1102_bool = !var_1055_bool; //@nz
		if(var_1102_bool == 0) goto Label_8306;
		@sync();
		var_1052_object->IsDialogEnd(var_1055_bool);
	}
	
Label_8306:
	object var_1103_object;
	var_1046_object = var_1103_object;
	func_9985();
	@StopDialog(var_1052_object);
	var_1052_object->GetReturnValue(-1);
	int var_1054_int = var_1045_int;
}
EMIT "Stack[-4] = 0";


void func_8753(bool var_0_bool, int var_1358_int, object var_1359_object)
{
	var_0_bool = var_1359_object;
	bool var_1369_bool; object var_1370_object;
	object var_1371_object;
	func_10175(var_1371_object);
	var_1371_object = var_1370_object;
	func_10002(var_1369_bool, var_1370_object);
	bool var_1372_bool; object var_1373_object;
	var_1359_object = var_1373_object;
	func_9917(var_1372_bool, var_1373_object, 70.0);
	if(!var_1372_bool) { //@nz
		var_1358_int = -2;
		return 8;
	}
	object var_1365_object;
	@CreateDialog(var_1365_object);
	int var_1376_int;
	func_10427(var_1376_int);
	var_1365_object->SetNPCName(var_1376_int);
	int var_1377_int;
	func_10425(var_1377_int);
	var_1365_object->SetNPCDescription(var_1377_int);
	string var_1378_string;
	func_10429(var_1378_string);
	var_1365_object->SetPhoto(var_1378_string);
	string var_1379_string;
	func_10431(var_1379_string);
	var_1365_object->SetPhoto2(var_1379_string);
	int var_1380_int;
	func_12236(var_1380_int);
	var_1365_object->SetPlayerName(var_1380_int);
	bool var_1366_bool;
	@IsOverrideActive(var_1366_bool);
	if(var_1366_bool != 0) {
		var_1358_int = -2;
		return 8;
	}
	@DoDialog(var_1365_object);
	object var_1382_object; object var_1383_object;
	var_1359_object = var_1382_object;
	var_1365_object = var_1383_object;
	TaskCall(27);
	func_8834(var_1384_object, var_1385_object, var_1386_string, var_1387_bool, var_1382_object, var_1383_object);
	TaskReturn();
	bool var_1368_bool;
	var_1365_object->IsDialogEnd(var_1368_bool);
	
	for(;;) {
		var_1415_bool = !var_1368_bool; //@nz
		if(var_1415_bool == 0) goto Label_8823;
		@sync();
		var_1365_object->IsDialogEnd(var_1368_bool);
	}
	
Label_8823:
	object var_1416_object;
	var_1359_object = var_1416_object;
	func_9985();
	@StopDialog(var_1365_object);
	var_1365_object->GetReturnValue(-1);
	int var_1367_int = var_1358_int;
}
EMIT "Stack[-4] = 0";


void func_9781(bool var_0_bool, object var_1_object)
{
	cvector var_120_cvector;
	@GetAnimationOffset(var_120_cvector, "all", "walk_stopl");
	cvector var_121_cvector;
	@GetAnimationOffset(var_121_cvector, "all", "walk_stopr");
	var_126_float = GetByIndex(var_120_cvector, 2);
	var_127_float = GetByIndex(var_121_cvector, 2);
	float var_130_float;
	var_132_float = GetByIndex(var_120_cvector, 2);
	func_10191(var_130_float, (var_132_float - ((var_126_float + var_127_float) / 2.0)));
	var_1_object = var_130_float + 40;
}


// @pe
void func_11320(bool var_448_bool)
{
	int var_450_int;
	func_10220(var_450_int, "ood1MladVlad3");
	if(var_450_int == 0) {
		var_448_bool = true;
		return 0;
	}
	var_448_bool = false;
}


void func_10297(object var_276_object, string var_277_string, int var_278_int)
{
	object var_280_object;
	@CreateInvItem(var_280_object);
	var_280_object->SetItemName(var_277_string);
	object var_281_object; object var_282_object; int var_283_int;
	var_276_object = var_281_object;
	var_280_object = var_282_object;
	var_278_int = var_283_int;
	func_10278(var_281_object, var_282_object, var_283_int);
}
EMIT "Stack[-1] = 0";


void func_10816(void)
{
	object var_151_object;
	func_12186(var_151_object);
	object var_150_object;
	var_151_object = var_150_object;
	float var_156_float;
	func_10367(var_156_float);
	var_150_object->AddMark("d3q02MladVladGotoButcher", "pt_gmap_r7_house2_01", 0, 524631, var_156_float);
	func_11950();
}
EMIT "Stack[-1] = 0";


// @pe
void func_11332(bool var_1137_bool)
{
	int var_1139_int;
	func_10220(var_1139_int, "ood8MladVlad6");
	if(var_1139_int == 0) {
		var_1137_bool = true;
		return 0;
	}
	var_1137_bool = false;
}


// @pe
void func_11846(bool var_649_bool, object var_650_object)
{
	object var_652_object;
	var_650_object = var_652_object;
	func_11866(var_652_object);
	bool var_651_bool;
	if(var_651_bool != 0) {
		var_649_bool = true;
		return 0;
	}
	var_649_bool = false;
}


// @pe
void func_10310(bool var_198_bool, object var_199_object, float var_200_float)
{
	if(!var_199_object) { //@nz
		var_198_bool = false;
		return 0;
	}
	if(var_200_float > 0) {
		@SendWorldWndMessage(8);
	} else if(var_200_float < 0) {
			@SendWorldWndMessage(9);
	}
	for(;;) {
		float var_205_float;
		var_200_float = var_205_float;
		func_10345(var_205_float);
		bool var_209_bool; object var_210_object; float var_212_float;
		var_199_object = var_210_object;
		var_200_float = var_212_float;
		func_9853(var_209_bool, var_210_object, "reputation", var_212_float, (float)0, (float)1);
		var_198_bool = true;
		return 0;

	}
	
	var_198_bool = false;
}


// @pe
void func_6734(object var_2_object, string var_1151_string)
{
	bool var_1152_bool;
	func_10433(var_1152_bool);
	if(!var_1152_bool) //@nz
		return 0;
	if(var_1151_string == var_2_object)
		return 0;
	string var_1155_string; bool var_1156_bool;
	var_1151_string = var_1155_string;
	if(var_1151_string == "")
		var_1156_bool = false;
	else
		var_1156_bool = true;
	func_10147(var_1155_string, var_1156_bool);
	var_2_object = var_1151_string;
	
}


// @pe
void func_11856(bool var_209_bool, object var_210_object)
{
	object var_212_object;
	var_210_object = var_212_object;
	bool var_211_bool;
	func_11878(var_211_bool, var_212_object);
	if(var_211_bool != 0) {
		var_209_bool = true;
		return 0;
	}
	var_209_bool = false;
}


// @pe
void func_11344(bool var_1281_bool)
{
	int var_1283_int;
	func_10220(var_1283_int, "d8q04");
	if(var_1283_int == 2)
		var_1281_bool = true;
	var_1281_bool = false;
}


// @pe
void func_10835(void)
{
	@SetVariable("ood4MladVlad1", 1);
}


void func_10841(void)
{
	@SetVariable("d4q01", 3);
	object var_199_object;
	func_12186(var_199_object);
	object var_196_object;
	var_199_object = var_196_object;
	float var_204_float;
	func_10367(var_204_float);
	var_196_object->AddMark("d4q01MladVladGotoBigVlad", "pt_map_bigvlad", 1, 511507, var_204_float);
	func_11963();
}
EMIT "Stack[-1] = 0";


void func_11866(bool var_651_bool)
{
	int var_657_int;
	func_10372(var_657_int);
	int var_655_int;
	var_657_int = var_655_int;
	int var_656_int;
	@GetVariable(("RMap" + var_655_int), var_656_int);
	var_651_bool = var_656_int != 0;
}


// @pe
void func_11356(bool var_1459_bool)
{
	int var_1461_int;
	func_10220(var_1461_int, "d11q05");
	if(var_1461_int == 2)
		var_1459_bool = true;
	var_1459_bool = false;
}


void func_9828(cvector var_138_cvector)
{
	cvector var_140_cvector;
	@GetPosition(var_140_cvector);
	var_140_cvector = var_138_cvector;
}


void func_11878(bool var_211_bool, object var_212_object)
{
	int var_214_int;
	var_212_object->GetProperty("money", var_214_int);
	var_211_bool = var_214_int >= 1000;
}


// @pe
void func_11368(bool var_631_bool)
{
	int var_633_int;
	func_10220(var_633_int, "ood3MladVlad3");
	if(var_633_int == 0) {
		var_631_bool = true;
		return 0;
	}
	var_631_bool = false;
}


void func_9833(float var_86_float, object var_87_object)
{
	cvector var_91_cvector;
	@GetPosition(var_91_cvector);
	cvector var_92_cvector;
	var_87_object->GetPosition(var_92_cvector);
	var_86_float = (var_92_cvector - var_91_cvector) | (var_92_cvector - var_91_cvector);
}


void func_10345(float var_205_float)
{
	object var_207_object;
	@CreateFloatVector(var_207_object);
	var_207_object->add(var_205_float);
	@SendWorldWndMessage(16, var_207_object);
}
EMIT "Stack[-1] = 0";


void func_11885(void)
{
	object var_83_object;
	@CreateDiaryEntry(var_83_object, 685, 2, 534500);
	bool var_87_bool; object var_88_object;
	var_83_object = var_88_object;
	func_12158(var_87_bool, var_88_object, 682);
}
EMIT "Stack[-1] = 0";


void func_10864(void)
{
	@SetVariable("d4q01_subquest", 1);
	object var_219_object;
	func_12186(var_219_object);
	object var_216_object;
	var_219_object = var_216_object;
	float var_224_float;
	func_10367(var_224_float);
	var_216_object->AddMark("d4q01MladVladGotoOspina", "pt_map_ospina", 1, 511503, var_224_float);
}
EMIT "Stack[-1] = 0";


void func_9841(bool var_217_bool, object var_218_object, string var_219_string)
{
	var_224_bool = IsFuncExist(var_218_object, "HasProperty", 2);
	if(!var_224_bool) { //@nz
		var_217_bool = false;
		return 2;
	}
	bool var_221_bool;
	var_218_object->HasProperty(var_219_string, var_221_bool);
	var_221_bool = var_217_bool;
}


void func_10355(bool var_105_bool, string var_106_string, string var_107_string)
{
	object var_109_object;
	@FindActor(var_109_object, var_106_string);
	if(var_109_object == null)
		var_105_bool = false;
	@Trigger(var_109_object, var_107_string);
	var_105_bool = true;
}
EMIT "Stack[-1] = 0";


// @pe
void func_1652(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_1516_object, object var_1517_object)
{
	var_0_bool = var_1517_object;
	var_1_object = var_1516_object;
	var_3_object = false;
	if(1 != 0) {
		func_1710(var_1517_object, "Neutral");
		var_0_bool->SetMessage(535677); //@t
		var_0_bool->ClearReplies(); //@t
		var_0_bool->AddReply(535678, 42150, 37364); //@t
		var_0_bool->AddReply(540005, -1, 41976); //@t
		goto Label_1680;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x678";
	}
Label_1680:
	bool var_1538_bool;
	func_10433(var_1538_bool);
	if(var_1538_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_10140(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_1709;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_1709:
		return 0;

	}
	
}


// @pe
void func_11380(bool var_517_bool)
{
	int var_519_int;
	func_10220(var_519_int, "d2q03");
	if(var_519_int == 1)
		var_517_bool = true;
	var_517_bool = false;
}


// @pe
void func_5752(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_949_object, object var_950_object)
{
	var_0_bool = var_950_object;
	var_1_object = var_949_object;
	var_3_object = false;
	if(1 != 0) {
		bool var_956_bool;
		func_11548(var_1_object);
		if(var_956_bool != 0) {
			func_5899(var_950_object, "Neutral");
			var_0_bool->SetMessage(512104); //@t
			var_0_bool->ClearReplies(); //@t
			var_0_bool->AddReply(512105, 13334, 13331); //@t
			var_0_bool->AddReply(512106, 13333, 13332); //@t
		} else {
					func_5899(var_950_object, "Neutral");
					var_0_bool->SetMessage(512515); //@t
					var_0_bool->ClearReplies(); //@t
					bool var_987_bool;
					func_11536(var_1_object);
					if(var_987_bool != 0)
						var_0_bool->AddReply(512520, 13691, 13690); //@t
					bool var_996_bool = false;
					bool var_997_bool;
					func_11560(var_1_object);
					if(var_997_bool != 0) {
						bool var_1003_bool;
						func_11668(var_1_object);
						if(var_1003_bool != 0)
							var_996_bool = true;
					}
					if(var_996_bool != 0)
						var_0_bool->AddReply(512516, 13688, 13686); //@t
					bool var_1012_bool = false;
					bool var_1013_bool = false;
					bool var_1014_bool;
					func_11572(var_1_object);
					if(var_1014_bool != 0) {
						bool var_1020_bool;
						func_11680(var_1_object);
						if(var_1020_bool != 0)
							var_1013_bool = true;
					}
					if(var_1013_bool != 0) {
						bool var_1026_bool;
						func_11668(var_1_object);
						if(!var_1026_bool) //@nz
							var_1012_bool = true;
					}
					if(var_1012_bool != 0)
						var_0_bool->AddReply(512526, 13697, 13696); //@t
					bool var_1032_bool;
					func_11846(var_1032_bool, var_1_object);
					if(!var_1032_bool) //@nz
						var_0_bool->AddReply(520909, 22127, 22126); //@t
					var_0_bool->AddReply(512517, -1, 13687); //@t
		}
	}
	for(;;) {
		bool var_977_bool;
		func_10433(var_977_bool);
		if(var_977_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_object != 0) {
				} else {
					func_10140(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_object != 0) {
					goto Label_5898;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_5898:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x167c";


void func_11898(void)
{
	object var_178_object;
	@CreateDiaryEntry(var_178_object, 620, 1, 532194);
	bool var_182_bool; object var_183_object;
	var_178_object = var_183_object;
	func_12158(var_182_bool, var_183_object, 2);
}
EMIT "Stack[-1] = 0";


void func_9853(bool var_209_bool, object var_210_object, string var_211_string, float var_212_float, float var_213_float, float var_214_float)
{
	object var_218_object;
	var_210_object = var_218_object;
	string var_219_string;
	var_211_string = var_219_string;
	bool var_217_bool;
	func_9841(var_217_bool, var_218_object, var_219_string);
	if(!var_217_bool) //@nz
		var_209_bool = false;
	float var_216_float;
	var_210_object->GetProperty(var_211_string, var_216_float);
	float var_227_float; float var_229_float; float var_230_float;
	var_213_float = var_229_float;
	var_214_float = var_230_float;
	func_10199(var_227_float, (var_216_float + var_212_float), var_229_float, var_230_float);
	var_210_object->SetProperty(var_211_string, var_227_float);
	var_209_bool = true;
}


// @pe
void func_8317(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_1069_object, object var_1070_object)
{
	var_0_bool = var_1070_object;
	var_3_object = false;
	if(1 != 0) {
		func_8381(var_1070_object, "Neutral");
		var_0_bool->SetMessage(520914); //@t
		var_0_bool->ClearReplies(); //@t
		bool var_1085_bool;
		func_11846(var_1085_bool, var_1069_object);
		if(!var_1085_bool) //@nz
			var_0_bool->AddReply(520917, 22135, 22134); //@t
		var_0_bool->AddReply(520915, -1, 22132); //@t
		goto Label_8351;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x2081";
	}
Label_8351:
	bool var_1094_bool;
	func_10433(var_1094_bool);
	if(var_1094_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_10140(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_8380;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_8380:
		return 0;

	}
	
}


void func_2174(bool var_0_bool, int var_470_int, object var_471_object)
{
	var_0_bool = var_471_object;
	bool var_481_bool; object var_482_object;
	object var_483_object;
	func_10175(var_483_object);
	var_483_object = var_482_object;
	func_10002(var_481_bool, var_482_object);
	bool var_484_bool; object var_485_object;
	var_471_object = var_485_object;
	func_9917(var_484_bool, var_485_object, 70.0);
	if(!var_484_bool) { //@nz
		var_470_int = -2;
		return 8;
	}
	object var_477_object;
	@CreateDialog(var_477_object);
	int var_488_int;
	func_10427(var_488_int);
	var_477_object->SetNPCName(var_488_int);
	int var_489_int;
	func_10425(var_489_int);
	var_477_object->SetNPCDescription(var_489_int);
	string var_490_string;
	func_10429(var_490_string);
	var_477_object->SetPhoto(var_490_string);
	string var_491_string;
	func_10431(var_491_string);
	var_477_object->SetPhoto2(var_491_string);
	int var_492_int;
	func_12236(var_492_int);
	var_477_object->SetPlayerName(var_492_int);
	bool var_478_bool;
	@IsOverrideActive(var_478_bool);
	if(var_478_bool != 0) {
		var_470_int = -2;
		return 8;
	}
	@DoDialog(var_477_object);
	object var_494_object; object var_495_object;
	var_471_object = var_494_object;
	var_477_object = var_495_object;
	TaskCall(11);
	func_2255(var_496_object, var_497_object, var_498_string, var_499_bool, var_494_object, var_495_object);
	TaskReturn();
	bool var_480_bool;
	var_477_object->IsDialogEnd(var_480_bool);
	
	for(;;) {
		var_546_bool = !var_480_bool; //@nz
		if(var_546_bool == 0) goto Label_2244;
		@sync();
		var_477_object->IsDialogEnd(var_480_bool);
	}
	
Label_2244:
	object var_547_object;
	var_471_object = var_547_object;
	func_9985();
	@StopDialog(var_477_object);
	var_477_object->GetReturnValue(-1);
	int var_479_int = var_470_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_11392(bool var_526_bool)
{
	int var_528_int;
	func_10220(var_528_int, "ood2MladVlad1");
	if(var_528_int == 0) {
		var_526_bool = true;
		return 0;
	}
	var_526_bool = false;
}


void func_10367(float var_148_float)
{
	float var_150_float;
	@GetGameTime(var_150_float);
	var_150_float = var_148_float;
}


// @pe
void func_8834(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_1382_object, object var_1383_object)
{
	var_0_bool = var_1383_object;
	var_3_object = false;
	if(1 != 0) {
		func_8898(var_1383_object, "Neutral");
		var_0_bool->SetMessage(520934); //@t
		var_0_bool->ClearReplies(); //@t
		bool var_1398_bool;
		func_11846(var_1398_bool, var_1382_object);
		if(!var_1398_bool) //@nz
			var_0_bool->AddReply(520935, 22153, 22152); //@t
		var_0_bool->AddReply(520939, -1, 22156); //@t
		goto Label_8868;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x2286";
	}
Label_8868:
	bool var_1407_bool;
	func_10433(var_1407_bool);
	if(var_1407_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_10140(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_8897;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_8897:
		return 0;

	}
	
}


// @pe
void func_10884(void)
{
	@SetVariable("ood4MladVlad2", 1);
}


void func_10372(int var_161_int)
{
	float var_163_float;
	@GetGameTime(var_163_float);
	var_161_int = 1 + (var_163_float / 24);
}


void func_11911(void)
{
	object var_101_object;
	@CreateDiaryEntry(var_101_object, 37, 2, 512119);
	bool var_105_bool; object var_106_object;
	var_101_object = var_106_object;
	func_12158(var_105_bool, var_106_object, -1);
}
EMIT "Stack[-1] = 0";


void func_10890(void)
{
	object var_88_object;
	func_12186(var_88_object);
	object var_87_object;
	var_88_object = var_87_object;
	float var_99_float;
	func_10367(var_99_float);
	var_87_object->AddMark("d4q02MladVladGotoAnna", "pt_map_anna", 0, 511526, var_99_float);
	float var_106_float;
	func_10367(var_106_float);
	var_87_object->AddMark("d4q02MladVladGotoJulia", "pt_map_julia", 0, 511524, var_106_float);
	float var_111_float;
	func_10367(var_111_float);
	var_87_object->AddMark("d4q02MladVladGotoLara", "pt_map_lara", 0, 511525, var_111_float);
	func_11976();
	func_11989();
	object var_143_object;
	func_10236(var_143_object, "quest_d4_02");
}
EMIT "Stack[-1] = 0";


// @pe
void func_11404(bool var_511_bool)
{
	int var_513_int;
	func_10220(var_513_int, "ood2MladVlad2");
	if(var_513_int == 0) {
		var_511_bool = true;
		return 0;
	}
	var_511_bool = false;
}


// @pe
void func_10381(bool var_314_bool, int var_315_int)
{
	int var_316_int;
	func_10372(var_316_int);
	var_314_bool = var_316_int == var_315_int;
}


void func_2702(bool var_0_bool, int var_550_int, object var_551_object)
{
	var_0_bool = var_551_object;
	bool var_561_bool; object var_562_object;
	object var_563_object;
	func_10175(var_563_object);
	var_563_object = var_562_object;
	func_10002(var_561_bool, var_562_object);
	bool var_564_bool; object var_565_object;
	var_551_object = var_565_object;
	func_9917(var_564_bool, var_565_object, 70.0);
	if(!var_564_bool) { //@nz
		var_550_int = -2;
		return 8;
	}
	object var_557_object;
	@CreateDialog(var_557_object);
	int var_568_int;
	func_10427(var_568_int);
	var_557_object->SetNPCName(var_568_int);
	int var_569_int;
	func_10425(var_569_int);
	var_557_object->SetNPCDescription(var_569_int);
	string var_570_string;
	func_10429(var_570_string);
	var_557_object->SetPhoto(var_570_string);
	string var_571_string;
	func_10431(var_571_string);
	var_557_object->SetPhoto2(var_571_string);
	int var_572_int;
	func_12236(var_572_int);
	var_557_object->SetPlayerName(var_572_int);
	bool var_558_bool;
	@IsOverrideActive(var_558_bool);
	if(var_558_bool != 0) {
		var_550_int = -2;
		return 8;
	}
	@DoDialog(var_557_object);
	object var_574_object; object var_575_object;
	var_551_object = var_574_object;
	var_557_object = var_575_object;
	TaskCall(13);
	func_2783(var_576_object, var_577_object, var_578_string, var_579_bool, var_574_object, var_575_object);
	TaskReturn();
	bool var_560_bool;
	var_557_object->IsDialogEnd(var_560_bool);
	
	for(;;) {
		var_676_bool = !var_560_bool; //@nz
		if(var_676_bool == 0) goto Label_2772;
		@sync();
		var_557_object->IsDialogEnd(var_560_bool);
	}
	
Label_2772:
	object var_677_object;
	var_551_object = var_677_object;
	func_9985();
	@StopDialog(var_557_object);
	var_557_object->GetReturnValue(-1);
	int var_559_int = var_550_int;
}
EMIT "Stack[-4] = 0";


void func_145(void)
{
	@Stop();
}


void func_3729(bool var_0_bool, int var_680_int, object var_681_object)
{
	var_0_bool = var_681_object;
	bool var_691_bool; object var_692_object;
	object var_693_object;
	func_10175(var_693_object);
	var_693_object = var_692_object;
	func_10002(var_691_bool, var_692_object);
	bool var_694_bool; object var_695_object;
	var_681_object = var_695_object;
	func_9917(var_694_bool, var_695_object, 70.0);
	if(!var_694_bool) { //@nz
		var_680_int = -2;
		return 8;
	}
	object var_687_object;
	@CreateDialog(var_687_object);
	int var_698_int;
	func_10427(var_698_int);
	var_687_object->SetNPCName(var_698_int);
	int var_699_int;
	func_10425(var_699_int);
	var_687_object->SetNPCDescription(var_699_int);
	string var_700_string;
	func_10429(var_700_string);
	var_687_object->SetPhoto(var_700_string);
	string var_701_string;
	func_10431(var_701_string);
	var_687_object->SetPhoto2(var_701_string);
	int var_702_int;
	func_12236(var_702_int);
	var_687_object->SetPlayerName(var_702_int);
	bool var_688_bool;
	@IsOverrideActive(var_688_bool);
	if(var_688_bool != 0) {
		var_680_int = -2;
		return 8;
	}
	@DoDialog(var_687_object);
	object var_704_object; object var_705_object;
	var_681_object = var_704_object;
	var_687_object = var_705_object;
	TaskCall(15);
	func_3810(var_706_object, var_707_object, var_708_string, var_709_bool, var_704_object, var_705_object);
	TaskReturn();
	bool var_690_bool;
	var_687_object->IsDialogEnd(var_690_bool);
	
	for(;;) {
		var_788_bool = !var_690_bool; //@nz
		if(var_788_bool == 0) goto Label_3799;
		@sync();
		var_687_object->IsDialogEnd(var_690_bool);
	}
	
Label_3799:
	object var_789_object;
	var_681_object = var_789_object;
	func_9985();
	@StopDialog(var_687_object);
	var_687_object->GetReturnValue(-1);
	int var_689_int = var_680_int;
}
EMIT "Stack[-4] = 0";


void func_10387(string var_226_string, int var_227_int)
{
	string var_229_string = "idle";
	if(var_227_int != 0)
		var_229_string += var_227_int;
	var_229_string = var_226_string;
}


void func_148(object var_100_object)
{
	bool var_102_bool;
	@WaitForAnimEnd(var_102_bool);
	if(!var_102_bool) { //@nz
	}
	object var_104_object;
	var_100_object = var_104_object;
	func_9901(var_104_object);
	@Sleep(6);
}


void func_9875(object var_143_object, string var_144_string, int var_145_int)
{
	int var_147_int;
	var_143_object->GetProperty(var_144_string, var_147_int);
	var_143_object->SetProperty(var_144_string, (var_147_int + var_145_int));
}


void func_11924(void)
{
	object var_124_object;
	@CreateDiaryEntry(var_124_object, 681, 2, 534423);
	bool var_128_bool; object var_129_object;
	var_124_object = var_129_object;
	func_12158(var_128_bool, var_129_object, 37);
}
EMIT "Stack[-1] = 0";


// @pe
void func_11416(bool var_613_bool)
{
	int var_615_int;
	func_10220(var_615_int, "d3q01");
	if(var_615_int == 0) {
		var_613_bool = true;
		return 0;
	}
	var_613_bool = false;
}


void func_10394(int var_220_int)
{
	int var_223_int; bool var_224_bool;
	var_223_int = 0;
	
	for(;;) {
		string var_226_string; int var_227_int;
		var_223_int = var_227_int;
		func_10387(var_226_string, var_227_int);
		@HasAnimation(var_224_bool, "all", var_226_string);
		if(!var_224_bool) //@nz
			break;
		var_223_int += 1;
	}
	var_223_int = var_220_int;
}


void func_9882(bool var_165_bool, cvector var_166_cvector)
{
	cvector var_170_cvector;
	@GetPosition(var_170_cvector);
	cvector var_171_cvector = var_166_cvector - var_170_cvector;
	var_173_float = GetByIndex(var_171_cvector, 0);
	var_174_float = GetByIndex(var_171_cvector, 2);
	bool var_172_bool;
	@Rotate(var_173_float, var_174_float, var_172_bool);
	var_172_bool = var_165_bool;
}


void func_11937(void)
{
	object var_107_object;
	@CreateDiaryEntry(var_107_object, 78, 2, 512160);
	bool var_111_bool; object var_112_object;
	var_107_object = var_112_object;
	func_12158(var_111_bool, var_112_object, 26);
}
EMIT "Stack[-1] = 0";


void func_9892(bool var_78_bool, object var_79_object)
{
	cvector var_81_cvector;
	var_79_object->GetPosition(var_81_cvector);
	bool var_82_bool; cvector var_83_cvector;
	var_81_cvector = var_83_cvector;
	func_9882(var_82_bool, var_83_cvector);
	var_82_bool = var_78_bool;
}


// @pe
void func_11428(bool var_591_bool)
{
	int var_593_int;
	func_10220(var_593_int, "d3q02");
	if(var_593_int == 1)
		var_591_bool = true;
	var_591_bool = false;
}


// @pe
void func_10411(string var_102_string, int var_103_int)
{
	if(var_103_int == 0) {
		var_107_string = GlobalVars[0];
		var_102_string = "pt_" + var_107_string;
	} else {
		var_109_string = GlobalVars[0];
		var_102_string = ("pt_" + var_109_string) + var_103_int;
	}
	
}


void func_9901(object var_104_object)
{
	cvector var_108_cvector;
	var_104_object->GetPosition(var_108_cvector);
	cvector var_109_cvector;
	@GetPosition(var_109_cvector);
	cvector var_110_cvector = var_108_cvector - var_109_cvector;
	var_111_float = GetByIndex(var_110_cvector, 0);
	var_112_float = GetByIndex(var_110_cvector, 2);
	@RotateAsync(var_111_float, var_112_float);
}


// @pe
void func_1710(object var_2_object, string var_1523_string)
{
	bool var_1524_bool;
	func_10433(var_1524_bool);
	if(!var_1524_bool) //@nz
		return 0;
	if(var_1523_string == var_2_object)
		return 0;
	string var_1527_string; bool var_1528_bool;
	var_1523_string = var_1527_string;
	if(var_1523_string == "")
		var_1528_bool = false;
	else
		var_1528_bool = true;
	func_10147(var_1527_string, var_1528_bool);
	var_2_object = var_1523_string;
	
}


void func_11950(void)
{
	object var_158_object;
	@CreateDiaryEntry(var_158_object, 79, 2, 512161);
	bool var_162_bool; object var_163_object;
	var_158_object = var_163_object;
	func_12158(var_162_bool, var_163_object, 26);
}
EMIT "Stack[-1] = 0";


// @pe
void func_11440(bool var_597_bool)
{
	int var_599_int;
	func_10220(var_599_int, "ood3MladVlad1");
	if(var_599_int == 0) {
		var_597_bool = true;
		return 0;
	}
	var_597_bool = false;
}


// @pe
void func_10934(void)
{
	@SetVariable("ood4MladVlad3", 1);
}


void func_9912(bool var_112_bool)
{
	bool var_114_bool;
	@IsLoaded(var_114_bool);
	var_114_bool = var_112_bool;
}


void func_10425(int var_249_int)
{
	var_249_int = 515547;
}


void func_10427(int var_248_int)
{
	var_248_int = 502872;
}


// @pe
void func_11452(bool var_625_bool)
{
	int var_627_int;
	func_10220(var_627_int, "d3q02");
	if(var_627_int == 3)
		var_625_bool = true;
	var_625_bool = false;
}


void func_9917(bool var_201_bool, object var_202_object, float var_203_float)
{
	cvector var_214_cvector; bool var_221_bool;
	var_202_object->GetPosition(var_214_cvector);
	float var_213_float;
	var_202_object->GetEyesHeight(var_213_float);
	var_222_float = GetByIndex(var_214_cvector, 1);
	SetByIndex(var_214_cvector, 1) = (var_222_float + var_213_float);
	cvector var_215_cvector;
	@GetPosition(var_215_cvector);
	@GetEyesHeight(var_213_float);
	var_223_float = GetByIndex(var_215_cvector, 1);
	SetByIndex(var_215_cvector, 1) = (var_223_float + var_213_float);
	cvector var_216_cvector = var_214_cvector - var_215_cvector;
	var_224_float = GetByIndex(var_216_cvector, 1);
	SetByIndex(var_216_cvector, 1) = (float)0;
	var_226_float = sqrt(var_216_cvector | var_216_cvector);
	var_216_cvector /= var_226_float;
	cvector var_217_cvector = -var_216_cvector;
	cvector var_228_cvector;
	func_10181(var_228_cvector, (var_217_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_218_cvector = ((var_216_cvector * var_203_float) + (var_228_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_220_bool;
	@IsOverrideActive(var_220_bool);
	if(var_220_bool != 0)
		var_201_bool = false;
	@StopWorld();
	@CameraTransit((var_215_cvector + var_218_cvector), var_217_cvector);
	var_241_float = GetByIndex(var_218_cvector, 0);
	var_242_float = GetByIndex(var_218_cvector, 2);
	@Rotate(var_241_float, var_242_float);
	bool var_243_bool;
	func_10433(var_243_bool);
	if(var_243_bool != 0) {
	} else {
		@HasAnimationTrack(var_221_bool, "head");
		if(var_221_bool == 0) goto Label_9979;
		@LookAsyncCamera("head");
	}
Label_9979:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_201_bool = true;
	
}


void func_10429(string var_250_string)
{
	var_250_string = "ui/NPC_MladVlad.png";
}


void func_10431(string var_251_string)
{
	var_251_string = "ui/NPC_MladVlad_b.png";
}


void func_10940(void)
{
	object var_88_object;
	func_12186(var_88_object);
	object var_87_object;
	var_88_object = var_87_object;
	float var_99_float;
	func_10367(var_99_float);
	var_87_object->AddMark("d6q02MladVladGotoBigVlad", "pt_map_bigvlad", 0, 515378, var_99_float);
	float var_106_float;
	func_10367(var_106_float);
	var_87_object->AddMark("d6q02MladVladGotoBigVladSelf", "pt_map_mladvlad", 0, 515379, var_106_float);
	func_12028();
	func_12054();
	object var_138_object;
	func_10225(var_138_object, "quest_d6_02");
	bool var_146_bool;
	func_10355(var_146_bool, "quest_d6_02", "place_trigger");
}
EMIT "Stack[-1] = 0";


void func_193(void)
{
	@StopGroup0();
	@StopAnimation();
}


void func_10433(bool var_144_bool)
{
	var_144_bool = true;
}


// @pe
void func_10435(object var_88_object)
{
	@Trace("money 4000 is given");
	object var_91_object;
	var_88_object = var_91_object;
	func_10259(var_91_object, 4000);
}


// @pe
void func_8381(object var_2_object, string var_1076_string)
{
	bool var_1077_bool;
	func_10433(var_1077_bool);
	if(!var_1077_bool) //@nz
		return 0;
	if(var_1076_string == var_2_object)
		return 0;
	string var_1080_string; bool var_1081_bool;
	var_1076_string = var_1080_string;
	if(var_1076_string == "")
		var_1081_bool = false;
	else
		var_1081_bool = true;
	func_10147(var_1080_string, var_1081_bool);
	var_2_object = var_1076_string;
	
}


// @pe
void func_8898(object var_2_object, string var_1389_string)
{
	bool var_1390_bool;
	func_10433(var_1390_bool);
	if(!var_1390_bool) //@nz
		return 0;
	if(var_1389_string == var_2_object)
		return 0;
	string var_1393_string; bool var_1394_bool;
	var_1389_string = var_1393_string;
	if(var_1389_string == "")
		var_1394_bool = false;
	else
		var_1394_bool = true;
	func_10147(var_1393_string, var_1394_bool);
	var_2_object = var_1389_string;
	
}


void func_198(int var_184_int)
{
	string var_192_string; string var_194_string; int var_195_int; int var_196_int; int var_197_int; int var_198_int;
	if(var_184_int != 0)
		var_192_string = "ptidle" + var_184_int;
	else
		var_192_string = "ptidle";
	bool var_193_bool;
	@HasProperty(var_192_string, var_193_bool);
	if(var_193_bool != 0) {
		@GetProperty(var_192_string, var_194_string);
		int var_202_int; string var_203_string;
		var_194_string = var_203_string;
		func_264(var_202_int, var_203_string);
		var_202_int = var_195_int;
		@irand(var_196_int, var_195_int);
		string var_217_string; string var_218_string; int var_219_int;
		var_194_string = var_218_string;
		var_196_int = var_219_int;
		func_256(var_217_string, var_218_string, var_219_int);
		@PlayAnimation("all", var_217_string);
		@WaitForAnimEnd();
	} else {
		int var_220_int;
		func_10394(var_220_int);
		var_220_int = var_197_int;
		if(var_197_int == 0) goto Label_246;
		@irand(var_198_int, var_197_int);
		string var_235_string; int var_236_int;
		var_198_int = var_236_int;
		func_10387(var_235_string, var_236_int);
		@PlayAnimation("all", var_235_string);
		@WaitForAnimEnd();

	}
Label_246:
	
}


// @pe
void func_11464(bool var_638_bool)
{
	int var_640_int;
	func_10220(var_640_int, "d3q02");
	if(var_640_int == 4)
		var_638_bool = true;
	var_638_bool = false;
}


void func_11976(void)
{
	object var_113_object;
	@CreateDiaryEntry(var_113_object, 21, 2, 503361);
	bool var_117_bool; object var_118_object;
	var_113_object = var_118_object;
	func_12158(var_117_bool, var_118_object, -1);
}
EMIT "Stack[-1] = 0";


// @pe
void func_10445(object var_167_object)
{
	@Trace("money20000 is given");
	object var_170_object;
	var_167_object = var_170_object;
	func_10259(var_170_object, 20000);
}


// @pe
void func_2255(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_494_object, object var_495_object)
{
	var_0_bool = var_495_object;
	var_1_object = var_494_object;
	var_3_object = false;
	if(1 != 0) {
		func_2337(var_495_object, "Neutral");
		var_0_bool->SetMessage(506929); //@t
		var_0_bool->ClearReplies(); //@t
		bool var_510_bool = false;
		bool var_511_bool;
		func_11404(var_1_object);
		if(var_511_bool != 0) {
			bool var_517_bool;
			func_11380(var_1_object);
			if(var_517_bool != 0)
				var_510_bool = true;
		}
		if(var_510_bool != 0)
			var_0_bool->AddReply(506930, 7637, 7636); //@t
		bool var_526_bool;
		func_11392(var_1_object);
		if(var_526_bool != 0)
			var_0_bool->AddReply(533959, 10443, 35526); //@t
		var_0_bool->AddReply(507746, -1, 8547); //@t
		goto Label_2307;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x8d3";
	}
Label_2307:
	bool var_538_bool;
	func_10433(var_538_bool);
	if(var_538_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_10140(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_2336;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_2336:
		return 0;

	}
	
}


// @pe
void func_11476(bool var_718_bool)
{
	int var_720_int;
	func_10220(var_720_int, "d4q01");
	if(var_720_int == 2)
		var_718_bool = true;
	var_718_bool = false;
}


void func_11989(void)
{
	object var_136_object;
	@CreateDiaryEntry(var_136_object, 92, 2, 512174);
	bool var_140_bool; object var_141_object;
	var_136_object = var_141_object;
	func_12158(var_140_bool, var_141_object, 21);
}
EMIT "Stack[-1] = 0";


void func_10455(void)
{
	int var_128_int;
	func_10372(var_128_int);
	int var_127_int;
	var_128_int = var_127_int;
	@SetVariable(("RMap" + var_127_int), 1);
}


// @pe
void func_2783(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_574_object, object var_575_object)
{
	var_0_bool = var_575_object;
	var_1_object = var_574_object;
	var_3_object = false;
	if(1 != 0) {
		func_2923(var_575_object, "Neutral");
		var_0_bool->SetMessage(510212); //@t
		var_0_bool->ClearReplies(); //@t
		bool var_590_bool = false;
		bool var_591_bool;
		func_11428(var_1_object);
		if(var_591_bool != 0) {
			bool var_597_bool;
			func_11440(var_1_object);
			if(var_597_bool != 0)
				var_590_bool = true;
		}
		if(var_590_bool != 0)
			var_0_bool->AddReply(510213, 11260, 11259); //@t
		bool var_606_bool = false;
		bool var_607_bool;
		func_11236(var_1_object);
		if(var_607_bool != 0) {
			bool var_613_bool;
			func_11416(var_1_object);
			if(!var_613_bool) //@nz
				var_606_bool = true;
		}
		if(var_606_bool != 0)
			var_0_bool->AddReply(510302, 11359, 11358); //@t
		bool var_623_bool = true;
		bool var_624_bool = false;
		bool var_625_bool;
		func_11452(var_1_object);
		if(var_625_bool != 0) {
			bool var_631_bool;
			func_11368(var_1_object);
			if(var_631_bool != 0)
				var_624_bool = true;
		}
		if(var_624_bool != 1) {
			bool var_637_bool = false;
			bool var_638_bool;
			func_11464(var_1_object);
			if(var_638_bool != 0) {
				bool var_644_bool;
				func_11368(var_1_object);
				if(var_644_bool != 0)
					var_637_bool = true;
			}
			if(var_637_bool != 1)
				var_623_bool = false;
		}
		if(var_623_bool != 0)
			var_0_bool->AddReply(510334, 11395, 11394); //@t
		bool var_649_bool;
		func_11846(var_649_bool, var_1_object);
		if(!var_649_bool) //@nz
			var_0_bool->AddReply(520897, 22115, 22114); //@t
		var_0_bool->AddReply(520896, -1, 22113); //@t
		goto Label_2893;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xae3";
	}
Label_2893:
	bool var_668_bool;
	func_10433(var_668_bool);
	if(var_668_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_10140(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_2922;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_2922:
		return 0;

	}
	
}


// @pe
void func_11488(bool var_752_bool)
{
	int var_754_int;
	func_10220(var_754_int, "ood4MladVlad1");
	if(var_754_int == 0) {
		var_752_bool = true;
		return 0;
	}
	var_752_bool = false;
}


// @pe
void func_10466(object var_137_object)
{
	object var_139_object;
	var_137_object = var_139_object;
	func_10259(var_139_object, -1000);
}


// @pe
void func_3810(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_704_object, object var_705_object)
{
	var_0_bool = var_705_object;
	var_1_object = var_704_object;
	var_3_object = false;
	if(1 != 0) {
		bool var_711_bool = false;
		bool var_712_bool;
		func_11500(var_1_object);
		if(var_712_bool != 0) {
			bool var_718_bool;
			func_11476(var_1_object);
			if(!var_718_bool) //@nz
				var_711_bool = true;
		}
		if(var_711_bool != 0) {
			object var_725_object; object var_726_object;
			var_725_object = var_1_object;
			var_726_object = var_0_bool;
			func_10583();
			func_3947(var_705_object, "Neutral");
			var_0_bool->SetMessage(511395); //@t
			var_0_bool->ClearReplies(); //@t
			var_0_bool->AddReply(511396, 12594, 12593); //@t
		} else {
					func_3947(var_705_object, "Neutral");
					var_0_bool->SetMessage(510814); //@t
					var_0_bool->ClearReplies(); //@t
					bool var_751_bool = false;
					bool var_752_bool;
					func_11488(var_1_object);
					if(var_752_bool != 0) {
						bool var_758_bool;
						func_11476(var_1_object);
						if(var_758_bool != 0)
							var_751_bool = true;
					}
					if(var_751_bool != 0)
						var_0_bool->AddReply(510815, 11956, 11955); //@t
					bool var_763_bool = false;
					bool var_764_bool;
					func_11524(var_1_object);
					if(var_764_bool != 0) {
						bool var_770_bool;
						func_11512(var_1_object);
						if(var_770_bool != 0)
							var_763_bool = true;
					}
					if(var_763_bool != 0)
						var_0_bool->AddReply(511862, 37886, 13075); //@t
					bool var_779_bool;
					func_11846(var_779_bool, var_1_object);
					if(!var_779_bool) //@nz
						var_0_bool->AddReply(520901, 22119, 22118); //@t
					var_0_bool->AddReply(511408, -1, 12605); //@t
		}
	}
	for(;;) {
		bool var_741_bool;
		func_10433(var_741_bool);
		if(var_741_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_object != 0) {
				} else {
					func_10140(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_object != 0) {
					goto Label_3946;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_3946:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0xee6";


// @pe
void func_10980(void)
{
	@SetVariable("ood6MladVlad1", 1);
}


void func_12002(void)
{
	object var_107_object;
	@CreateDiaryEntry(var_107_object, 154, 2, 515365);
	bool var_111_bool; object var_112_object;
	var_107_object = var_112_object;
	func_12158(var_111_bool, var_112_object, -1);
}
EMIT "Stack[-1] = 0";


// @pe
void func_10473(void)
{
	@SetVariable("ood3MladVlad2", 1);
}


// @pe
void func_10986(void)
{
	@SetVariable("ood6MladVlad2", 1);
}


// @pe
void func_11500(bool var_712_bool)
{
	int var_714_int;
	func_10220(var_714_int, "ood4MladVlad2");
	if(var_714_int == 0) {
		var_712_bool = true;
		return 0;
	}
	var_712_bool = false;
}


// @pe
void func_10479(object var_215_object)
{
	@Trace("money2000 is given");
	object var_218_object;
	var_215_object = var_218_object;
	func_10259(var_218_object, 2000);
}


// @pe
void func_10992(void)
{
	@SetVariable("d6q02KnowAboutAttack", 1);
}


void func_12015(void)
{
	object var_130_object;
	@CreateDiaryEntry(var_130_object, 155, 2, 515366);
	bool var_134_bool; object var_135_object;
	var_130_object = var_135_object;
	func_12158(var_134_bool, var_135_object, 154);
}
EMIT "Stack[-1] = 0";


// @pe
void func_10998(void)
{
	@SetVariable("ood6MladVlad3", 1);
}


// @pe
void func_11512(bool var_770_bool)
{
	int var_772_int;
	func_10220(var_772_int, "d4q02");
	if(var_772_int == 1000)
		var_770_bool = true;
	var_770_bool = false;
}


void func_10489(void)
{
	@SetVariable("d1q03IsKapella", 0);
	object var_86_object;
	func_12186(var_86_object);
	object var_83_object;
	var_86_object = var_83_object;
	float var_97_float;
	func_10367(var_97_float);
	var_83_object->AddMark("d1q03MladVladGotoOspina", "pt_map_ospina", 0, 508642, var_97_float);
	func_11911();
	func_11924();
	object var_131_object;
	func_10225(var_131_object, "quest_d1_03");
}
EMIT "Stack[-1] = 0";


// @pe
void func_11004(void)
{
	func_12067();
	bool var_248_bool;
	func_10355(var_248_bool, "quest_d6_03", "failed");
}


void func_12028(void)
{
	object var_108_object;
	@CreateDiaryEntry(var_108_object, 102, 2, 513725);
	bool var_112_bool; object var_113_object;
	var_108_object = var_113_object;
	func_12158(var_112_bool, var_113_object, -1);
}
EMIT "Stack[-1] = 0";


// @pe
void func_256(string var_209_string, string var_210_string, int var_211_int)
{
	if(var_211_int == 0) {
	} else {
		var_209_string += var_211_int;
	}
	
}


void func_9985(void)
{
	bool var_308_bool;
	@CameraSwitchToNormal();
	bool var_309_bool;
	func_10433(var_309_bool);
	if(var_309_bool != 0) {
	} else {
		@HasAnimationTrack(var_308_bool, "head");
		if(var_308_bool == 0) goto Label_10001;
		@UnlookAsync("head");
	}
Label_10001:
	
}


void func_6400(bool var_0_bool, int var_1106_int, object var_1107_object)
{
	var_0_bool = var_1107_object;
	bool var_1117_bool; object var_1118_object;
	object var_1119_object;
	func_10175(var_1119_object);
	var_1119_object = var_1118_object;
	func_10002(var_1117_bool, var_1118_object);
	bool var_1120_bool; object var_1121_object;
	var_1107_object = var_1121_object;
	func_9917(var_1120_bool, var_1121_object, 70.0);
	if(!var_1120_bool) { //@nz
		var_1106_int = -2;
		return 8;
	}
	object var_1113_object;
	@CreateDialog(var_1113_object);
	int var_1124_int;
	func_10427(var_1124_int);
	var_1113_object->SetNPCName(var_1124_int);
	int var_1125_int;
	func_10425(var_1125_int);
	var_1113_object->SetNPCDescription(var_1125_int);
	string var_1126_string;
	func_10429(var_1126_string);
	var_1113_object->SetPhoto(var_1126_string);
	string var_1127_string;
	func_10431(var_1127_string);
	var_1113_object->SetPhoto2(var_1127_string);
	int var_1128_int;
	func_12236(var_1128_int);
	var_1113_object->SetPlayerName(var_1128_int);
	bool var_1114_bool;
	@IsOverrideActive(var_1114_bool);
	if(var_1114_bool != 0) {
		var_1106_int = -2;
		return 8;
	}
	@DoDialog(var_1113_object);
	object var_1130_object; object var_1131_object;
	var_1107_object = var_1130_object;
	var_1113_object = var_1131_object;
	TaskCall(21);
	func_6481(var_1132_object, var_1133_object, var_1134_string, var_1135_bool, var_1130_object, var_1131_object);
	TaskReturn();
	bool var_1116_bool;
	var_1113_object->IsDialogEnd(var_1116_bool);
	
	for(;;) {
		var_1293_bool = !var_1116_bool; //@nz
		if(var_1293_bool == 0) goto Label_6470;
		@sync();
		var_1113_object->IsDialogEnd(var_1116_bool);
	}
	
Label_6470:
	object var_1294_object;
	var_1107_object = var_1294_object;
	func_9985();
	@StopDialog(var_1113_object);
	var_1113_object->GetReturnValue(-1);
	int var_1115_int = var_1106_int;
}
EMIT "Stack[-4] = 0";


void func_9475(bool var_0_bool, int var_1548_int, object var_1549_object)
{
	var_0_bool = var_1549_object;
	bool var_1559_bool; object var_1560_object;
	object var_1561_object;
	func_10175(var_1561_object);
	var_1561_object = var_1560_object;
	func_10002(var_1559_bool, var_1560_object);
	bool var_1562_bool; object var_1563_object;
	var_1549_object = var_1563_object;
	func_9917(var_1562_bool, var_1563_object, 70.0);
	if(!var_1562_bool) { //@nz
		var_1548_int = -2;
		return 8;
	}
	object var_1555_object;
	@CreateDialog(var_1555_object);
	int var_1566_int;
	func_10427(var_1566_int);
	var_1555_object->SetNPCName(var_1566_int);
	int var_1567_int;
	func_10425(var_1567_int);
	var_1555_object->SetNPCDescription(var_1567_int);
	string var_1568_string;
	func_10429(var_1568_string);
	var_1555_object->SetPhoto(var_1568_string);
	string var_1569_string;
	func_10431(var_1569_string);
	var_1555_object->SetPhoto2(var_1569_string);
	int var_1570_int;
	func_12236(var_1570_int);
	var_1555_object->SetPlayerName(var_1570_int);
	bool var_1556_bool;
	@IsOverrideActive(var_1556_bool);
	if(var_1556_bool != 0) {
		var_1548_int = -2;
		return 8;
	}
	@DoDialog(var_1555_object);
	object var_1572_object; object var_1573_object;
	var_1549_object = var_1572_object;
	var_1555_object = var_1573_object;
	TaskCall(31);
	func_9556(var_1574_object, var_1575_object, var_1576_string, var_1577_bool, var_1572_object, var_1573_object);
	TaskReturn();
	bool var_1558_bool;
	var_1555_object->IsDialogEnd(var_1558_bool);
	
	for(;;) {
		var_1602_bool = !var_1558_bool; //@nz
		if(var_1602_bool == 0) goto Label_9545;
		@sync();
		var_1555_object->IsDialogEnd(var_1558_bool);
	}
	
Label_9545:
	object var_1603_object;
	var_1549_object = var_1603_object;
	func_9985();
	@StopDialog(var_1555_object);
	var_1555_object->GetReturnValue(-1);
	int var_1557_int = var_1548_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_11524(bool var_764_bool)
{
	int var_766_int;
	func_10220(var_766_int, "ood4MladVlad3");
	if(var_766_int == 0) {
		var_764_bool = true;
		return 0;
	}
	var_764_bool = false;
}


// @pe
void func_11014(object var_196_object)
{
	object var_199_object;
	var_196_object = var_199_object;
	bool var_198_bool;
	func_10310(var_198_bool, var_199_object, 0.3);
}


void func_264(int var_202_int, string var_203_string)
{
	int var_206_int; bool var_207_bool;
	var_206_int = 0;
	
	for(;;) {
		string var_209_string; string var_210_string; int var_211_int;
		var_203_string = var_210_string;
		var_206_int = var_211_int;
		func_256(var_209_string, var_210_string, var_211_int);
		@HasAnimation(var_207_bool, "all", var_209_string);
		if(!var_207_bool) //@nz
			break;
		var_206_int += 1;
	}
	var_206_int = var_202_int;
}


void func_12041(void)
{
	object var_194_object;
	@CreateDiaryEntry(var_194_object, 104, 2, 513727);
	bool var_198_bool; object var_199_object;
	var_194_object = var_199_object;
	func_12158(var_198_bool, var_199_object, 102);
}
EMIT "Stack[-1] = 0";


// @pe
void func_5899(object var_2_object, string var_962_string)
{
	bool var_963_bool;
	func_10433(var_963_bool);
	if(!var_963_bool) //@nz
		return 0;
	if(var_962_string == var_2_object)
		return 0;
	string var_966_string; bool var_967_bool;
	var_962_string = var_966_string;
	if(var_962_string == "")
		var_967_bool = false;
	else
		var_967_bool = true;
	func_10147(var_966_string, var_967_bool);
	var_2_object = var_962_string;
	
}


// @pe
void func_11021(void)
{
	@SetVariable("ood5MladVlad1", 1);
}


// @pe
void func_11536(bool var_987_bool)
{
	int var_989_int;
	func_10220(var_989_int, "d6q02");
	if(var_989_int == 0) {
		var_987_bool = true;
		return 0;
	}
	var_987_bool = false;
}


void func_10002(bool var_106_bool, object var_107_object)
{
	int var_113_int; int var_114_int;
	@GetVariable("voice_common", var_113_int);
	if(var_113_int != 0) {
		bool var_117_bool; object var_118_object;
		var_107_object = var_118_object;
		func_10060(var_117_bool, var_118_object);
		if(!var_117_bool) { //@nz
			bool var_148_bool; object var_149_object;
			var_107_object = var_149_object;
			func_10097(var_148_bool, var_149_object);
			if(!var_148_bool) { //@nz
				var_106_bool = false;
				return 4;
			}
		}
		@irand(var_114_int, 2);
		if(var_114_int != 0)
			@SetVariable("voice_common", ((var_113_int + 1) % 3));
		else
			@SetVariable("voice_common", 0);
		bool var_193_bool; object var_194_object;
		var_107_object = var_194_object;
		func_10097(var_193_bool, var_194_object);
		if(!var_193_bool) { //@nz
			bool var_196_bool; object var_197_object;
			var_107_object = var_197_object;
			func_10060(var_196_bool, var_197_object);
			if(!var_196_bool) { //@nz
				var_106_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_10058;
	
Label_10058:
	var_106_bool = true;
	
}


// @pe
void func_11027(void)
{
	@SetVariable("ood5MladVlad2", 1);
}


void func_12054(void)
{
	object var_131_object;
	@CreateDiaryEntry(var_131_object, 106, 2, 513729);
	bool var_135_bool; object var_136_object;
	var_131_object = var_136_object;
	func_12158(var_135_bool, var_136_object, 102);
}
EMIT "Stack[-1] = 0";


// @pe
void func_10519(object var_201_object)
{
	@Trace("money10000 is given");
	object var_204_object;
	var_201_object = var_204_object;
	func_10259(var_204_object, 10000);
}


// @pe
void func_11033(void)
{
}


void func_282(bool var_0_bool, int var_317_int, object var_318_object)
{
	var_0_bool = var_318_object;
	bool var_328_bool; object var_329_object;
	object var_330_object;
	func_10175(var_330_object);
	var_330_object = var_329_object;
	func_10002(var_328_bool, var_329_object);
	bool var_331_bool; object var_332_object;
	var_318_object = var_332_object;
	func_9917(var_331_bool, var_332_object, 70.0);
	if(!var_331_bool) { //@nz
		var_317_int = -2;
		return 8;
	}
	object var_324_object;
	@CreateDialog(var_324_object);
	int var_335_int;
	func_10427(var_335_int);
	var_324_object->SetNPCName(var_335_int);
	int var_336_int;
	func_10425(var_336_int);
	var_324_object->SetNPCDescription(var_336_int);
	string var_337_string;
	func_10429(var_337_string);
	var_324_object->SetPhoto(var_337_string);
	string var_338_string;
	func_10431(var_338_string);
	var_324_object->SetPhoto2(var_338_string);
	int var_339_int;
	func_12236(var_339_int);
	var_324_object->SetPlayerName(var_339_int);
	bool var_325_bool;
	@IsOverrideActive(var_325_bool);
	if(var_325_bool != 0) {
		var_317_int = -2;
		return 8;
	}
	@DoDialog(var_324_object);
	object var_341_object; object var_342_object;
	var_318_object = var_341_object;
	var_324_object = var_342_object;
	TaskCall(5);
	func_363(var_343_object, var_344_object, var_345_string, var_346_bool, var_341_object, var_342_object);
	TaskReturn();
	bool var_327_bool;
	var_324_object->IsDialogEnd(var_327_bool);
	
	for(;;) {
		var_466_bool = !var_327_bool; //@nz
		if(var_466_bool == 0) goto Label_352;
		@sync();
		var_324_object->IsDialogEnd(var_327_bool);
	}
	
Label_352:
	object var_467_object;
	var_318_object = var_467_object;
	func_9985();
	@StopDialog(var_324_object);
	var_324_object->GetReturnValue(-1);
	int var_326_int = var_317_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_11035(void)
{
	@SetVariable("ood5MladVlad3", 1);
}


// @pe
void func_11548(bool var_956_bool)
{
	int var_958_int;
	func_10220(var_958_int, "ood6MladVlad1");
	if(var_958_int == 0) {
		var_956_bool = true;
		return 0;
	}
	var_956_bool = false;
}


void func_11963(void)
{
	object var_206_object;
	@CreateDiaryEntry(var_206_object, 137, 1, 515323);
	bool var_210_bool; object var_211_object;
	var_206_object = var_211_object;
	func_12158(var_210_bool, var_211_object, 20);
}
EMIT "Stack[-1] = 0";


// @pe
void func_10529(void)
{
	@TriggerWorld("playsound", "givemoney");
}


// @pe
void func_2337(object var_2_object, string var_501_string)
{
	bool var_502_bool;
	func_10433(var_502_bool);
	if(!var_502_bool) //@nz
		return 0;
	if(var_501_string == var_2_object)
		return 0;
	string var_505_string; bool var_506_bool;
	var_501_string = var_505_string;
	if(var_501_string == "")
		var_506_bool = false;
	else
		var_506_bool = true;
	func_10147(var_505_string, var_506_bool);
	var_2_object = var_501_string;
	
}


void func_11041(void)
{
	object var_184_object;
	func_12186(var_184_object);
	object var_182_object;
	var_184_object = var_182_object;
	object var_183_object;
	var_182_object->FindMark(var_183_object, "d6q02BigVlad");
	if(var_183_object != 0)
		var_183_object->Remove();
	var_182_object->FindMark(var_183_object, "d6q02KapellaGotoMladVlad");
	if(var_183_object != 0)
		var_183_object->Remove();
	var_182_object->FindMark(var_183_object, "d6q02MladVladGotoBigVlad");
	if(var_183_object != 0)
		var_183_object->Remove();
	var_182_object->FindMark(var_183_object, "d6q02MladVladGotoBigVladSelf");
	if(var_183_object != 0)
		var_183_object->Remove();
	func_12041();
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_12067(void)
{
	object var_241_object;
	@CreateDiaryEntry(var_241_object, 110, 2, 513733);
	bool var_245_bool; object var_246_object;
	var_241_object = var_246_object;
	func_12158(var_245_bool, var_246_object, 107);
}
EMIT "Stack[-1] = 0";


// @pe
void func_10535(object var_249_object)
{
	object var_253_object;
	func_12186(var_253_object);
	object var_250_object;
	var_253_object = var_250_object;
	func_12203(var_250_object, "pt_map_mat", (float)2);
	object var_254_object;
	func_12186(var_254_object);
	var_249_object->ShowMap(var_254_object);
}


// @pe
void func_11560(bool var_997_bool)
{
	int var_999_int;
	func_10220(var_999_int, "ood6MladVlad2");
	if(var_999_int == 0) {
		var_997_bool = true;
		return 0;
	}
	var_997_bool = false;
}


void func_4908(bool var_0_bool, int var_792_int, object var_793_object)
{
	var_0_bool = var_793_object;
	bool var_803_bool; object var_804_object;
	object var_805_object;
	func_10175(var_805_object);
	var_805_object = var_804_object;
	func_10002(var_803_bool, var_804_object);
	bool var_806_bool; object var_807_object;
	var_793_object = var_807_object;
	func_9917(var_806_bool, var_807_object, 70.0);
	if(!var_806_bool) { //@nz
		var_792_int = -2;
		return 8;
	}
	object var_799_object;
	@CreateDialog(var_799_object);
	int var_810_int;
	func_10427(var_810_int);
	var_799_object->SetNPCName(var_810_int);
	int var_811_int;
	func_10425(var_811_int);
	var_799_object->SetNPCDescription(var_811_int);
	string var_812_string;
	func_10429(var_812_string);
	var_799_object->SetPhoto(var_812_string);
	string var_813_string;
	func_10431(var_813_string);
	var_799_object->SetPhoto2(var_813_string);
	int var_814_int;
	func_12236(var_814_int);
	var_799_object->SetPlayerName(var_814_int);
	bool var_800_bool;
	@IsOverrideActive(var_800_bool);
	if(var_800_bool != 0) {
		var_792_int = -2;
		return 8;
	}
	@DoDialog(var_799_object);
	object var_816_object; object var_817_object;
	var_793_object = var_816_object;
	var_799_object = var_817_object;
	TaskCall(17);
	func_4989(var_818_object, var_819_object, var_820_string, var_821_bool, var_816_object, var_817_object);
	TaskReturn();
	bool var_802_bool;
	var_799_object->IsDialogEnd(var_802_bool);
	
	for(;;) {
		var_921_bool = !var_802_bool; //@nz
		if(var_921_bool == 0) goto Label_4978;
		@sync();
		var_799_object->IsDialogEnd(var_802_bool);
	}
	
Label_4978:
	object var_922_object;
	var_793_object = var_922_object;
	func_9985();
	@StopDialog(var_799_object);
	var_799_object->GetReturnValue(-1);
	int var_801_int = var_792_int;
}
EMIT "Stack[-4] = 0";


void func_8492(bool var_0_bool, int var_1297_int, object var_1298_object)
{
	var_0_bool = var_1298_object;
	bool var_1308_bool; object var_1309_object;
	object var_1310_object;
	func_10175(var_1310_object);
	var_1310_object = var_1309_object;
	func_10002(var_1308_bool, var_1309_object);
	bool var_1311_bool; object var_1312_object;
	var_1298_object = var_1312_object;
	func_9917(var_1311_bool, var_1312_object, 70.0);
	if(!var_1311_bool) { //@nz
		var_1297_int = -2;
		return 8;
	}
	object var_1304_object;
	@CreateDialog(var_1304_object);
	int var_1315_int;
	func_10427(var_1315_int);
	var_1304_object->SetNPCName(var_1315_int);
	int var_1316_int;
	func_10425(var_1316_int);
	var_1304_object->SetNPCDescription(var_1316_int);
	string var_1317_string;
	func_10429(var_1317_string);
	var_1304_object->SetPhoto(var_1317_string);
	string var_1318_string;
	func_10431(var_1318_string);
	var_1304_object->SetPhoto2(var_1318_string);
	int var_1319_int;
	func_12236(var_1319_int);
	var_1304_object->SetPlayerName(var_1319_int);
	bool var_1305_bool;
	@IsOverrideActive(var_1305_bool);
	if(var_1305_bool != 0) {
		var_1297_int = -2;
		return 8;
	}
	@DoDialog(var_1304_object);
	object var_1321_object; object var_1322_object;
	var_1298_object = var_1321_object;
	var_1304_object = var_1322_object;
	TaskCall(25);
	func_8573(var_1323_object, var_1324_object, var_1325_string, var_1326_bool, var_1321_object, var_1322_object);
	TaskReturn();
	bool var_1307_bool;
	var_1304_object->IsDialogEnd(var_1307_bool);
	
	for(;;) {
		var_1354_bool = !var_1307_bool; //@nz
		if(var_1354_bool == 0) goto Label_8562;
		@sync();
		var_1304_object->IsDialogEnd(var_1307_bool);
	}
	
Label_8562:
	object var_1355_object;
	var_1298_object = var_1355_object;
	func_9985();
	@StopDialog(var_1304_object);
	var_1304_object->GetReturnValue(-1);
	int var_1306_int = var_1297_int;
}
EMIT "Stack[-4] = 0";


void func_12080(void)
{
	object var_231_object;
	@CreateDiaryEntry(var_231_object, 718, 1, 538759);
	bool var_235_bool; object var_236_object;
	var_231_object = var_236_object;
	func_12158(var_235_bool, var_236_object, 175);
}
EMIT "Stack[-1] = 0";


// @pe
void func_11572(bool var_1014_bool)
{
	int var_1016_int;
	func_10220(var_1016_int, "ood6MladVlad3");
	if(var_1016_int == 0) {
		var_1014_bool = true;
		return 0;
	}
	var_1014_bool = false;
}


void func_9014(bool var_0_bool, int var_1419_int, object var_1420_object)
{
	var_0_bool = var_1420_object;
	bool var_1430_bool; object var_1431_object;
	object var_1432_object;
	func_10175(var_1432_object);
	var_1432_object = var_1431_object;
	func_10002(var_1430_bool, var_1431_object);
	bool var_1433_bool; object var_1434_object;
	var_1420_object = var_1434_object;
	func_9917(var_1433_bool, var_1434_object, 70.0);
	if(!var_1433_bool) { //@nz
		var_1419_int = -2;
		return 8;
	}
	object var_1426_object;
	@CreateDialog(var_1426_object);
	int var_1437_int;
	func_10427(var_1437_int);
	var_1426_object->SetNPCName(var_1437_int);
	int var_1438_int;
	func_10425(var_1438_int);
	var_1426_object->SetNPCDescription(var_1438_int);
	string var_1439_string;
	func_10429(var_1439_string);
	var_1426_object->SetPhoto(var_1439_string);
	string var_1440_string;
	func_10431(var_1440_string);
	var_1426_object->SetPhoto2(var_1440_string);
	int var_1441_int;
	func_12236(var_1441_int);
	var_1426_object->SetPlayerName(var_1441_int);
	bool var_1427_bool;
	@IsOverrideActive(var_1427_bool);
	if(var_1427_bool != 0) {
		var_1419_int = -2;
		return 8;
	}
	@DoDialog(var_1426_object);
	object var_1443_object; object var_1444_object;
	var_1420_object = var_1443_object;
	var_1426_object = var_1444_object;
	TaskCall(29);
	func_9095(var_1445_object, var_1446_object, var_1447_string, var_1448_bool, var_1443_object, var_1444_object);
	TaskReturn();
	bool var_1429_bool;
	var_1426_object->IsDialogEnd(var_1429_bool);
	
	for(;;) {
		var_1488_bool = !var_1429_bool; //@nz
		if(var_1488_bool == 0) goto Label_9084;
		@sync();
		var_1426_object->IsDialogEnd(var_1429_bool);
	}
	
Label_9084:
	object var_1489_object;
	var_1420_object = var_1489_object;
	func_9985();
	@StopDialog(var_1426_object);
	var_1426_object->GetReturnValue(-1);
	int var_1428_int = var_1419_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_10551(void)
{
	@SetVariable("d1q01", 7);
	func_11898();
	bool var_185_bool;
	func_10355(var_185_bool, "quest_d1_01", "place_rubin");
}


void func_12093(void)
{
	object var_152_object;
	@CreateDiaryEntry(var_152_object, 177, 1, 515436);
	bool var_156_bool; object var_157_object;
	var_152_object = var_157_object;
	func_12158(var_156_bool, var_157_object, 175);
}
EMIT "Stack[-1] = 0";


// @pe
void func_11584(bool var_864_bool)
{
	int var_866_int;
	func_10220(var_866_int, "d5q03");
	if(var_866_int == 0) {
		var_864_bool = true;
		return 0;
	}
	var_864_bool = false;
}


// @pe
void func_10565(void)
{
	@SetVariable("ood1MladVlad1", 1);
}


// @pe
void func_11080(void)
{
	@SetVariable("ood8MladVlad1", 1);
}


void func_12106(void)
{
	object var_85_object;
	@CreateDiaryEntry(var_85_object, 649, 2, 533362);
	bool var_89_bool; object var_90_object;
	var_85_object = var_90_object;
	func_12158(var_89_bool, var_90_object, -1);
}
EMIT "Stack[-1] = 0";


// @pe
void func_10571(void)
{
	@SetVariable("ood1MladVlad2", 1);
}


// @pe
void func_11596(bool var_831_bool)
{
	int var_833_int;
	func_10220(var_833_int, "d5q03");
	if(var_833_int == 1000)
		var_831_bool = true;
	var_831_bool = false;
}


void func_10060(bool var_117_bool, object var_118_object)
{
	string var_124_string; bool var_126_bool; int var_127_int; string var_128_string;
	var_124_string = "c";
	int var_125_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_118_object->HasProperty((var_124_string + (var_125_int + 1)), var_126_bool);
			if(!var_126_bool) { //@nz
			} else {
				var_125_int += 1;
			}
		}
		if(!var_125_int) { //@nz
			var_117_bool = false;
			return 10;
		}
		var_127_int = 0;
		if(var_125_int > 1)
			@irand(var_127_int, var_125_int);
		var_118_object->GetProperty((var_124_string + (var_127_int + 1)), var_128_string);
		bool var_140_bool; string var_141_string;
		var_128_string = var_141_string;
		func_10153(var_140_bool, var_141_string);
		var_140_bool = var_117_bool;
		return 10;

	}
}


// @pe
void func_11086(void)
{
	@SetVariable("ood8MladVlad2", 1);
}


// @pe
void func_11260(bool var_454_bool)
{
	int var_456_int;
	func_10220(var_456_int, "d1q03");
	if(var_456_int == 1000)
		var_454_bool = true;
	var_454_bool = false;
}


// @pe
void func_10577(void)
{
	@SetVariable("ood1MladVlad3", 1);
}


// @pe
void func_6481(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_1130_object, object var_1131_object)
{
	var_0_bool = var_1131_object;
	var_1_object = var_1130_object;
	var_3_object = false;
	if(1 != 0) {
		bool var_1137_bool;
		func_11332(var_1_object);
		if(var_1137_bool != 0) {
			object var_1143_object; object var_1144_object;
			var_1143_object = var_1_object;
			var_1144_object = var_0_bool;
			func_10589();
			object var_1147_object; object var_1148_object;
			var_1147_object = var_1_object;
			var_1148_object = var_0_bool;
			func_10618();
			func_6734(var_1131_object, "Neutral");
			var_0_bool->SetMessage(533324); //@t
			var_0_bool->ClearReplies(); //@t
			var_0_bool->AddReply(535993, 37724, 37723); //@t
			var_0_bool->AddReply(536001, 37724, 37731); //@t
		} else {
					func_6734(var_1131_object, "Neutral");
					var_0_bool->SetMessage(512410); //@t
					var_0_bool->ClearReplies(); //@t
					bool var_1176_bool = false;
					bool var_1177_bool = false;
					bool var_1178_bool;
					func_11692(var_1_object);
					if(var_1178_bool != 0) {
						bool var_1184_bool;
						func_11716(var_1_object);
						if(var_1184_bool != 0)
							var_1177_bool = true;
					}
					if(var_1177_bool != 0) {
						bool var_1190_bool;
						func_11704(var_1_object);
						if(!var_1190_bool) //@nz
							var_1176_bool = true;
					}
					if(var_1176_bool != 0)
						var_0_bool->AddReply(512412, 13577, 13576); //@t
					bool var_1200_bool = false;
					bool var_1201_bool;
					func_11704(var_1_object);
					if(var_1201_bool != 0) {
						bool var_1203_bool;
						func_11728(var_1_object);
						if(var_1203_bool != 0)
							var_1200_bool = true;
					}
					if(var_1200_bool != 0)
						var_0_bool->AddReply(513588, 14840, 14839); //@t
					bool var_1212_bool = false;
					bool var_1213_bool = false;
					bool var_1214_bool = false;
					bool var_1215_bool;
					func_11740(var_1_object);
					if(var_1215_bool != 0) {
						bool var_1221_bool;
						func_11704(var_1_object);
						if(var_1221_bool != 0)
							var_1214_bool = true;
					}
					if(var_1214_bool != 0) {
						bool var_1223_bool;
						func_11752(var_1_object);
						if(var_1223_bool != 0)
							var_1213_bool = true;
					}
					if(var_1213_bool != 0) {
						bool var_1229_bool;
						func_11788(var_1_object);
						if(!var_1229_bool) //@nz
							var_1212_bool = true;
					}
					if(var_1212_bool != 0)
						var_0_bool->AddReply(513607, 14868, 14862); //@t
					bool var_1239_bool = false;
					bool var_1240_bool = false;
					bool var_1241_bool;
					func_11740(var_1_object);
					if(var_1241_bool != 0) {
						bool var_1243_bool;
						func_11776(var_1_object);
						if(var_1243_bool != 0)
							var_1240_bool = true;
					}
					if(var_1240_bool != 0) {
						bool var_1249_bool;
						func_11800(var_1_object);
						if(!var_1249_bool) //@nz
							var_1239_bool = true;
					}
					if(var_1239_bool != 0)
						var_0_bool->AddReply(513618, 14874, 14873); //@t
					bool var_1259_bool = false;
					bool var_1260_bool = false;
					bool var_1261_bool;
					func_11704(var_1_object);
					if(!var_1261_bool) { //@nz
						bool var_1264_bool;
						func_11692(var_1_object);
						if(var_1264_bool != 0)
							var_1260_bool = true;
					}
					if(var_1260_bool != 0) {
						bool var_1266_bool;
						func_11764(var_1_object);
						if(var_1266_bool != 0)
							var_1259_bool = true;
					}
					if(var_1259_bool != 0)
						var_0_bool->AddReply(513612, 14863, 14867); //@t
					bool var_1275_bool;
					func_11846(var_1275_bool, var_1_object);
					if(!var_1275_bool) //@nz
						var_0_bool->AddReply(520922, 22140, 22139); //@t
					bool var_1281_bool;
					func_11344(var_1_object);
					if(var_1281_bool != 0)
						var_0_bool->AddReply(533337, 37749, 34841); //@t
					var_0_bool->AddReply(512411, -1, 13575); //@t
		}
	}
	for(;;) {
		bool var_1166_bool;
		func_10433(var_1166_bool);
		if(var_1166_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_object != 0) {
				} else {
					func_10140(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_object != 0) {
					goto Label_6733;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_6733:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x1955";


void func_11092(void)
{
	object var_212_object;
	bool var_213_bool = false;
	int var_214_int;
	func_10220(var_214_int, "d8q01BringBadBoy");
	if(var_214_int != 1) {
		int var_220_int;
		func_10220(var_220_int, "d8q01MatBringToy");
		if(var_220_int != 1)
			var_213_bool = true;
	}
	if(var_213_bool != 0) {
		object var_224_object;
		func_12186(var_224_object);
		var_224_object = var_212_object;
		float var_229_float;
		func_10367(var_229_float);
		var_212_object->AddMark("d8q01MladVladGotoMat", "pt_map_mat", 1, 515327, var_229_float);
		func_12080();
		var_212_object = null;
	}
}


// @pe
void func_9556(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_1572_object, object var_1573_object)
{
	var_0_bool = var_1573_object;
	var_1_object = var_1572_object;
	var_3_object = false;
	if(1 != 0) {
		func_9614(var_1573_object, "Neutral");
		var_0_bool->SetMessage(540542); //@t
		var_0_bool->ClearReplies(); //@t
		var_0_bool->AddReply(540543, -1, 42552); //@t
		var_0_bool->AddReply(540796, -1, 42845); //@t
		goto Label_9584;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x2558";
	}
Label_9584:
	bool var_1594_bool;
	func_10433(var_1594_bool);
	if(var_1594_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_10140(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_9613;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_9613:
		return 0;

	}
	
}


// @pe
void func_10583(void)
{
	@SetVariable("d4MladVladVisit", 1);
}


// @pe
void func_11608(bool var_838_bool)
{
	int var_840_int;
	func_10220(var_840_int, "d5q03");
	if(var_840_int == -1)
		var_838_bool = true;
	var_838_bool = false;
}


void func_12119(void)
{
	object var_349_object;
	@CreateDiaryEntry(var_349_object, 652, 2, 533365);
	bool var_353_bool; object var_354_object;
	var_349_object = var_354_object;
	func_12158(var_353_bool, var_354_object, 649);
}
EMIT "Stack[-1] = 0";


// @pe
void func_10589(void)
{
	@SetVariable("ood8MladVlad6", 1);
}


void func_10595(void)
{
	@SetVariable("d8q04", 3);
	object var_342_object;
	func_12186(var_342_object);
	object var_339_object;
	var_342_object = var_339_object;
	float var_347_float;
	func_10367(var_347_float);
	var_339_object->AddMark("d8q04MladVladGotoMark", "pt_map_theater", 0, 515322, var_347_float);
	func_12119();
}
EMIT "Stack[-1] = 0";


// @pe
void func_11620(bool var_885_bool)
{
	int var_887_int;
	func_10220(var_887_int, "d5q03");
	if(var_887_int == 2)
		var_885_bool = true;
	var_885_bool = false;
}


void func_12132(void)
{
	object var_108_object;
	@CreateDiaryEntry(var_108_object, 650, 2, 533363);
	bool var_112_bool; object var_113_object;
	var_108_object = var_113_object;
	func_12158(var_112_bool, var_113_object, 649);
}
EMIT "Stack[-1] = 0";


void func_1892(bool var_0_bool, int var_95_int, object var_96_object)
{
	var_0_bool = var_96_object;
	bool var_106_bool; object var_107_object;
	object var_108_object;
	func_10175(var_108_object);
	var_108_object = var_107_object;
	func_10002(var_106_bool, var_107_object);
	bool var_201_bool; object var_202_object;
	var_96_object = var_202_object;
	func_9917(var_201_bool, var_202_object, 70.0);
	if(!var_201_bool) { //@nz
		var_95_int = -2;
		return 8;
	}
	object var_102_object;
	@CreateDialog(var_102_object);
	int var_248_int;
	func_10427(var_248_int);
	var_102_object->SetNPCName(var_248_int);
	int var_249_int;
	func_10425(var_249_int);
	var_102_object->SetNPCDescription(var_249_int);
	string var_250_string;
	func_10429(var_250_string);
	var_102_object->SetPhoto(var_250_string);
	string var_251_string;
	func_10431(var_251_string);
	var_102_object->SetPhoto2(var_251_string);
	int var_252_int;
	func_12236(var_252_int);
	var_102_object->SetPlayerName(var_252_int);
	bool var_103_bool;
	@IsOverrideActive(var_103_bool);
	if(var_103_bool != 0) {
		var_95_int = -2;
		return 8;
	}
	@DoDialog(var_102_object);
	object var_261_object; object var_262_object;
	var_96_object = var_261_object;
	var_102_object = var_262_object;
	TaskCall(9);
	func_1973(var_263_object, var_264_object, var_265_string, var_266_bool, var_261_object, var_262_object);
	TaskReturn();
	bool var_105_bool;
	var_102_object->IsDialogEnd(var_105_bool);
	
	for(;;) {
		var_305_bool = !var_105_bool; //@nz
		if(var_305_bool == 0) goto Label_1962;
		@sync();
		var_102_object->IsDialogEnd(var_105_bool);
	}
	
Label_1962:
	object var_306_object;
	var_96_object = var_306_object;
	func_9985();
	@StopDialog(var_102_object);
	var_102_object->GetReturnValue(-1);
	int var_104_int = var_95_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_363(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_341_object, object var_342_object)
{
	var_0_bool = var_342_object;
	var_1_object = var_341_object;
	var_3_object = false;
	if(1 != 0) {
		bool var_348_bool = false;
		bool var_349_bool = false;
		bool var_350_bool;
		func_11296(var_1_object);
		if(var_350_bool != 0) {
			bool var_358_bool;
			func_11248(var_1_object);
			if(var_358_bool != 0)
				var_349_bool = true;
		}
		if(var_349_bool != 0) {
			bool var_364_bool;
			func_11812(var_1_object);
			if(var_364_bool != 0)
				var_348_bool = true;
		}
		if(var_348_bool != 0) {
			object var_380_object; object var_381_object;
			var_380_object = var_1_object;
			var_381_object = var_0_bool;
			func_10565();
			func_542(var_342_object, "Neutral");
			var_0_bool->SetMessage(532641); //@t
			var_0_bool->ClearReplies(); //@t
			var_0_bool->AddReply(532642, 34105, 34104); //@t
			var_0_bool->AddReply(532687, 34161, 34160); //@t
		} else {
					func_542(var_342_object, "Neutral");
					var_0_bool->SetMessage(531953); //@t
					var_0_bool->ClearReplies(); //@t
					bool var_409_bool = false;
					bool var_410_bool;
					func_11308(var_1_object);
					if(var_410_bool != 0) {
						bool var_416_bool;
						func_11812(var_1_object);
						if(var_416_bool != 0)
							var_409_bool = true;
					}
					if(var_409_bool != 0)
						var_0_bool->AddReply(532702, 34178, 34177); //@t
					bool var_421_bool;
					func_11284(var_1_object);
					if(var_421_bool != 0)
						var_0_bool->AddReply(531954, 33359, 33358); //@t
					bool var_430_bool = false;
					bool var_431_bool;
					func_11248(var_1_object);
					if(var_431_bool != 0) {
						bool var_433_bool;
						func_11296(var_1_object);
						if(!var_433_bool) //@nz
							var_430_bool = true;
					}
					if(var_430_bool != 0)
						var_0_bool->AddReply(532699, 34175, 34174); //@t
					bool var_439_bool = false;
					bool var_440_bool = false;
					bool var_441_bool;
					func_11272(var_1_object);
					if(!var_441_bool) { //@nz
						bool var_448_bool;
						func_11320(var_1_object);
						if(var_448_bool != 0)
							var_440_bool = true;
					}
					if(var_440_bool != 0) {
						bool var_454_bool;
						func_11260(var_1_object);
						if(var_454_bool != 0)
							var_439_bool = true;
					}
					if(var_439_bool != 0)
						var_0_bool->AddReply(532691, 34166, 34165); //@t
					var_0_bool->AddReply(531960, -1, 33364); //@t
		}
	}
	for(;;) {
		bool var_399_bool;
		func_10433(var_399_bool);
		if(var_399_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_object != 0) {
				} else {
					func_10140(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_object != 0) {
					goto Label_541;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_541:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x16f";


// @pe
void func_2923(object var_2_object, string var_581_string)
{
	bool var_582_bool;
	func_10433(var_582_bool);
	if(!var_582_bool) //@nz
		return 0;
	if(var_581_string == var_2_object)
		return 0;
	string var_585_string; bool var_586_bool;
	var_581_string = var_585_string;
	if(var_581_string == "")
		var_586_bool = false;
	else
		var_586_bool = true;
	func_10147(var_585_string, var_586_bool);
	var_2_object = var_581_string;
	
}


// @pe
void func_3947(object var_2_object, string var_729_string)
{
	bool var_730_bool;
	func_10433(var_730_bool);
	if(!var_730_bool) //@nz
		return 0;
	if(var_729_string == var_2_object)
		return 0;
	string var_733_string; bool var_734_bool;
	var_729_string = var_733_string;
	if(var_729_string == "")
		var_734_bool = false;
	else
		var_734_bool = true;
	func_10147(var_733_string, var_734_bool);
	var_2_object = var_729_string;
	
}


// @pe
void func_11632(bool var_891_bool)
{
	int var_893_int;
	func_10220(var_893_int, "ood5MladVlad1");
	if(var_893_int == 0) {
		var_891_bool = true;
		return 0;
	}
	var_891_bool = false;
}


void func_10097(bool var_148_bool, object var_149_object)
{
	bool var_157_bool; int var_158_int; string var_159_string;
	int var_161_int;
	func_10372(var_161_int);
	string var_155_string = ("d" + var_161_int) + "m";
	int var_156_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_149_object->HasProperty((var_155_string + (var_156_int + 1)), var_157_bool);
			if(!var_157_bool) { //@nz
			} else {
				var_156_int += 1;
			}
		}
		if(!var_156_int) { //@nz
			var_148_bool = false;
			return 10;
		}
		var_158_int = 0;
		if(var_156_int > 1)
			@irand(var_158_int, var_156_int);
		var_149_object->GetProperty((var_155_string + (var_158_int + 1)), var_159_string);
		bool var_180_bool; string var_181_string;
		var_159_string = var_181_string;
		func_10153(var_180_bool, var_181_string);
		var_180_bool = var_148_bool;
		return 10;

	}
}


void func_12145(object var_96_object)
{
	object var_98_object;
	@GetDiaryRoot(var_98_object);
	if(!var_98_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_96_object = false;
	}
	var_98_object = var_96_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_11129(void)
{
	@SetVariable("ood8MladVlad3", 1);
}


// @pe
void func_10618(void)
{
	@SetVariable("d8MladVladVisit", 1);
}


// @pe
void func_11644(bool var_903_bool)
{
	int var_905_int;
	func_10220(var_905_int, "ood5MladVlad2");
	if(var_905_int == 0) {
		var_903_bool = true;
		return 0;
	}
	var_903_bool = false;
}


// @pe
void func_4989(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_816_object, object var_817_object)
{
	var_0_bool = var_817_object;
	var_1_object = var_816_object;
	var_3_object = false;
	if(1 != 0) {
		bool var_823_bool = false;
		bool var_824_bool = false;
		bool var_825_bool;
		func_11656(var_1_object);
		if(var_825_bool != 0) {
			bool var_831_bool;
			func_11596(var_1_object);
			if(!var_831_bool) //@nz
				var_824_bool = true;
		}
		if(var_824_bool != 0) {
			bool var_838_bool;
			func_11608(var_1_object);
			if(!var_838_bool) //@nz
				var_823_bool = true;
		}
		if(var_823_bool != 0) {
			object var_845_object; object var_846_object;
			var_845_object = var_1_object;
			var_846_object = var_0_bool;
			func_11035();
			func_5152(var_817_object, "Neutral");
			var_0_bool->SetMessage(511741); //@t
			var_0_bool->ClearReplies(); //@t
			var_0_bool->AddReply(511743, 12951, 12949); //@t
			var_0_bool->AddReply(511742, 12950, 12948); //@t
			bool var_864_bool;
			func_11584(var_1_object);
			if(!var_864_bool) //@nz
				var_0_bool->AddReply(512586, 13766, 13753); //@t
		} else {
					func_5152(var_817_object, "Neutral");
					var_0_bool->SetMessage(512573); //@t
					var_0_bool->ClearReplies(); //@t
					bool var_884_bool = false;
					bool var_885_bool;
					func_11620(var_1_object);
					if(var_885_bool != 0) {
						bool var_891_bool;
						func_11632(var_1_object);
						if(var_891_bool != 0)
							var_884_bool = true;
					}
					if(var_884_bool != 0)
						var_0_bool->AddReply(512574, 13744, 13743); //@t
					bool var_900_bool = false;
					bool var_901_bool;
					func_11596(var_1_object);
					if(var_901_bool != 0) {
						bool var_903_bool;
						func_11644(var_1_object);
						if(var_903_bool != 0)
							var_900_bool = true;
					}
					if(var_900_bool != 0)
						var_0_bool->AddReply(512577, 13747, 13746); //@t
					bool var_912_bool;
					func_11846(var_912_bool, var_1_object);
					if(!var_912_bool) //@nz
						var_0_bool->AddReply(520905, 22123, 22122); //@t
					var_0_bool->AddReply(512580, -1, 13749); //@t
		}
	}
	for(;;) {
		bool var_874_bool;
		func_10433(var_874_bool);
		if(var_874_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_object != 0) {
				} else {
					func_10140(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_object != 0) {
					goto Label_5151;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_5151:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x1381";


// @pe
void func_8573(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_1321_object, object var_1322_object)
{
	var_0_bool = var_1322_object;
	var_3_object = false;
	if(1 != 0) {
		func_8637(var_1322_object, "Neutral");
		var_0_bool->SetMessage(520927); //@t
		var_0_bool->ClearReplies(); //@t
		bool var_1337_bool;
		func_11846(var_1337_bool, var_1321_object);
		if(!var_1337_bool) //@nz
			var_0_bool->AddReply(520928, 22146, 22145); //@t
		var_0_bool->AddReply(520932, -1, 22149); //@t
		goto Label_8607;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x2181";
	}
Label_8607:
	bool var_1346_bool;
	func_10433(var_1346_bool);
	if(var_1346_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_10140(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_8636;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_8636:
		return 0;

	}
	
}


// @pe
void func_11135(void)
{
	@SetVariable("d8q01MladVladIsVictim", 1);
}


// @pe
void func_10624(object var_166_object)
{
	object var_170_object;
	func_12186(var_170_object);
	object var_167_object;
	var_170_object = var_167_object;
	func_12203(var_167_object, "pt_gmap_r7_house2_01", (float)2);
	object var_190_object;
	func_12186(var_190_object);
	var_166_object->ShowMap(var_190_object);
}


void func_12158(bool var_87_bool, object var_88_object, int var_89_int)
{
	object var_96_object;
	func_12145(var_96_object);
	object var_93_object;
	var_96_object = var_93_object;
	object var_94_object;
	var_93_object->Find(var_89_int, var_94_object);
	if(!var_94_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_89_int);
		var_87_bool = false;
	}
	var_94_object->AddChild(var_88_object);
	@SendWorldWndMessage(7);
	int var_95_int;
	var_88_object->GetCategory(var_95_int);
	@SetDiarySection(var_95_int);
	var_87_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


// @pe
void func_11141(void)
{
	@SetVariable("ood8MladVlad4", 1);
}


// @pe
void func_9095(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_1443_object, object var_1444_object)
{
	var_0_bool = var_1444_object;
	var_1_object = var_1443_object;
	var_3_object = false;
	if(1 != 0) {
		func_9174(var_1444_object, "Neutral");
		var_0_bool->SetMessage(520941); //@t
		var_0_bool->ClearReplies(); //@t
		bool var_1459_bool;
		func_11356(var_1_object);
		if(var_1459_bool != 0)
			var_0_bool->AddReply(534490, 38444, 36135); //@t
		bool var_1468_bool;
		func_11846(var_1468_bool, var_1_object);
		if(!var_1468_bool) //@nz
			var_0_bool->AddReply(520942, 22160, 22159); //@t
		var_0_bool->AddReply(520946, -1, 22163); //@t
		var_0_bool->AddReply(536616, -1, 38443); //@t
		goto Label_9144;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x238b";
	}
Label_9144:
	bool var_1480_bool;
	func_10433(var_1480_bool);
	if(var_1480_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_10140(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_9173;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_9173:
		return 0;

	}
	
}


// @pe
void func_11656(bool var_825_bool)
{
	int var_827_int;
	func_10220(var_827_int, "ood5MladVlad3");
	if(var_827_int == 0) {
		var_825_bool = true;
		return 0;
	}
	var_825_bool = false;
}


// @pe
void func_11147(void)
{
	@SetVariable("ood8MladVlad5", 1);
}


// @pe
void func_9614(object var_2_object, string var_1579_string)
{
	bool var_1580_bool;
	func_10433(var_1580_bool);
	if(!var_1580_bool) //@nz
		return 0;
	if(var_1579_string == var_2_object)
		return 0;
	string var_1583_string; bool var_1584_bool;
	var_1579_string = var_1583_string;
	if(var_1579_string == "")
		var_1584_bool = false;
	else
		var_1584_bool = true;
	func_10147(var_1583_string, var_1584_bool);
	var_2_object = var_1579_string;
	
}


// @pe
void func_10640(void)
{
	func_11885();
	bool var_105_bool;
	func_10355(var_105_bool, "quest_d11_05", "place_enemy_after");
	bool var_111_bool;
	func_10355(var_111_bool, "quest_d11_05", "completed");
}


// @pe
void func_11153(void)
{
	@SetVariable("d8q04", 1);
	func_12106();
	func_12132();
	object var_115_object;
	func_10225(var_115_object, "quest_d8_04");
}


// @pe
void func_11668(bool var_1003_bool)
{
	int var_1005_int;
	func_10220(var_1005_int, "d6q02GorbunDeath");
	if(var_1005_int != 0) {
		var_1003_bool = true;
		return 0;
	}
	var_1003_bool = false;
}


void func_12186(object var_137_object)
{
	object var_140_object; object var_141_object;
	@GetMainOutdoorScene(var_140_object);
	if(var_140_object == null) {
		@Trace("Can't find main outdoor scene");
		var_141_object = null;
		var_141_object = var_137_object;
	}
	var_140_object->GetMap(var_141_object);
	var_141_object = var_137_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_10140(string var_294_string)
{
	float var_297_float; float var_298_float;
	@lshGetAnimTimes(var_294_string, var_297_float, var_298_float);
	@lshPlayAnimation(var_297_float, var_298_float, false);
}


// @pe
void func_10655(void)
{
	@SetVariable("ood3MladVlad3", 1);
}


// @pe
void func_11680(bool var_1020_bool)
{
	int var_1022_int;
	func_10220(var_1022_int, "d6q02Trigger");
	if(var_1022_int != 0) {
		var_1020_bool = true;
		return 0;
	}
	var_1020_bool = false;
}


// @pe
void func_11169(void)
{
	@SetVariable("KnowMladVlad", 1);
}


void func_10147(string var_280_string, bool var_281_bool)
{
	float var_286_float; float var_287_float;
	@lshGetAnimTimes(var_280_string, var_286_float, var_287_float);
	@lshPlayAnimation(var_286_float, var_287_float, var_281_bool);
}


// @pe
void func_10661(void)
{
	int var_240_int;
	func_10220(var_240_int, "map_chertez_state");
	if(var_240_int <= 2) {
		@SetVariable("map_chertez_state", 2);
		@SetVariable("map_chertez_force", 1);
	}
}


void func_11175(void)
{
	object var_83_object;
	int var_84_int;
	func_10220(var_84_int, "d5q03");
	if(var_84_int == 0) {
		@SetVariable("d5q03", 1);
		object var_92_object;
		func_12186(var_92_object);
		var_92_object = var_83_object;
		float var_103_float;
		func_10367(var_103_float);
		var_83_object->AddMark("d5q03SavePrisoners", "pt_map_uprava_prison", 0, 515370, var_103_float);
		func_12002();
		func_12015();
		object var_137_object;
		func_10225(var_137_object, "quest_d5_03");
		bool var_145_bool;
		func_10355(var_145_bool, "quest_d5_03", "place_prisoners");
		var_83_object = null;
	}
}


void func_10153(bool var_140_bool, string var_141_string)
{
	bool var_143_bool;
	bool var_144_bool;
	func_10433(var_144_bool);
	if(var_144_bool != 0) {
		@lshHasSpeech(var_143_bool, var_141_string);
		if(var_143_bool != 0) {
			@lshPlaySpeech(var_141_string);
			var_140_bool = true;
		}
	}
	var_140_bool = false;
}


void func_12203(object var_161_object, string var_162_string, float var_163_float)
{
	object var_171_object;
	@GetMainOutdoorScene(var_171_object);
	if(var_171_object == null) {
		@Trace("Can't find main outdoor scene");
		return 8;
	}
	cvector var_169_cvector;
	cvector var_170_cvector;
	bool var_172_bool;
	var_171_object->GetLocator(var_162_string, var_172_bool, var_169_cvector, var_170_cvector);
	if(!var_172_bool) //@nz
		@Trace(("Warning: outdoor scene locator " + var_162_string) + " doesnt exist");
	var_171_object->GetMap(var_161_object);
	if(var_161_object == null) {
		@Trace("Can't find map");
		return 8;
	}
	var_182_float = GetByIndex(var_169_cvector, 0);
	var_183_float = GetByIndex(var_169_cvector, 2);
	var_161_object->SetMapParams(var_182_float, var_183_float, var_163_float);
}
EMIT "Stack[-2] = 0";


// @pe
void func_11692(bool var_1178_bool)
{
	int var_1180_int;
	func_10220(var_1180_int, "d8q01");
	if(var_1180_int == 1)
		var_1178_bool = true;
	var_1178_bool = false;
}


// @pe
void func_1973(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_261_object, object var_262_object)
{
	var_0_bool = var_262_object;
	var_1_object = var_261_object;
	var_3_object = false;
	if(1 != 0) {
		object var_268_object; object var_269_object;
		var_268_object = var_1_object;
		var_269_object = var_0_bool;
		func_11169();
		object var_272_object; object var_273_object;
		var_272_object = var_1_object;
		var_273_object = var_0_bool;
		func_10689();
		func_2036(var_262_object, "Neutral");
		var_0_bool->SetMessage(500416); //@t
		var_0_bool->ClearReplies(); //@t
		var_0_bool->AddReply(533500, 35031, 35030); //@t
		goto Label_2006;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x7b9";
	}
Label_2006:
	bool var_292_bool;
	func_10433(var_292_bool);
	if(var_292_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_10140(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_2035;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_2035:
		return 0;

	}
	
}


// @pe
void func_10678(object var_273_object)
{
	@Trace("lens is given");
	object var_276_object;
	var_273_object = var_276_object;
	func_10297(var_276_object, "lens", 1);
}


void func_10168(void)
{
	bool var_77_bool;
	func_10433(var_77_bool);
	if(var_77_bool != 0)
		@lshStopSpeech();
}


// @pe
void func_11704(bool var_1190_bool)
{
	int var_1192_int;
	func_10220(var_1192_int, "d8q01MladVladIsBad");
	if(var_1192_int == 1)
		var_1190_bool = true;
	var_1190_bool = false;
}


// @pe
void func_8637(object var_2_object, string var_1328_string)
{
	bool var_1329_bool;
	func_10433(var_1329_bool);
	if(!var_1329_bool) //@nz
		return 0;
	if(var_1328_string == var_2_object)
		return 0;
	string var_1332_string; bool var_1333_bool;
	var_1328_string = var_1332_string;
	if(var_1328_string == "")
		var_1333_bool = false;
	else
		var_1333_bool = true;
	func_10147(var_1332_string, var_1333_bool);
	var_2_object = var_1328_string;
	
}


void func_10175(object var_108_object)
{
	object var_110_object;
	@self(var_110_object);
	var_110_object = var_108_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_10689(void)
{
	@SetVariable("KnowPochka", 1);
}


// @pe
void func_11716(bool var_1184_bool)
{
	int var_1186_int;
	func_10220(var_1186_int, "ood8MladVlad1");
	if(var_1186_int == 0) {
		var_1184_bool = true;
		return 0;
	}
	var_1184_bool = false;
}


void func_10181(cvector var_228_cvector, cvector var_229_cvector)
{
	float var_232_float = sqrt(var_229_cvector | var_229_cvector);
	if(var_232_float < 0.000001)
		var_228_cvector = [0.0, 0.0, 0.0];
	var_228_cvector = var_229_cvector / var_232_float;
}


// @pe
void func_10695(void)
{
	@SetVariable("ood2MladVlad1", 1);
}


void func_12236(int var_252_int)
{
	int var_254_int;
	@GetVariable("branch", var_254_int);
	if(var_254_int == 0) {
		var_252_int = 1;
		return 2;
	EMIT "GOTO 0x2fdb";
	}
	if(var_254_int == 1) {
		var_252_int = 2;
		return 2;
	}
	var_252_int = 3;
}


// @pe
void func_10701(void)
{
	@SetVariable("ood2MladVlad2", 1);
}


// @pe
void func_10191(float var_130_float, float var_131_float)
{
	if(var_131_float < 0)
		var_130_float = -var_131_float;
	else
		var_131_float = var_130_float;
	
}


// @pe
void func_11728(bool var_1203_bool)
{
	int var_1205_int;
	func_10220(var_1205_int, "ood8MladVlad2");
	if(var_1205_int == 0) {
		var_1203_bool = true;
		return 0;
	}
	var_1203_bool = false;
}


void func_11217(void)
{
	object var_137_object;
	func_12186(var_137_object);
	object var_136_object;
	var_137_object = var_136_object;
	float var_148_float;
	func_10367(var_148_float);
	var_136_object->AddMark("d8q01MladVladgotoOspina", "pt_map_ospina", 1, 515320, var_148_float);
	func_12093();
}
EMIT "Stack[-1] = 0";


// @pe
void func_10707(object var_357_object)
{
	object var_361_object;
	func_12186(var_361_object);
	object var_358_object;
	var_361_object = var_358_object;
	func_12203(var_358_object, "pt_map_theater", (float)2);
	object var_362_object;
	func_12186(var_362_object);
	var_357_object->ShowMap(var_362_object);
}


void func_9685(bool var_0_bool, object var_1_object, object var_2_object)
{
	bool var_87_bool; int var_88_int; bool var_89_bool; cvector var_90_cvector; cvector var_91_cvector; cvector var_92_cvector; float var_93_float; cvector var_94_cvector; bool var_95_bool; cvector var_96_cvector;
	@SensePlayerOnly(true);
	func_9773();
	object var_86_object;
	@GetScene(var_86_object);
	var_2_object = 0;
	
	for(;;) {
		string var_102_string;
		func_10411(var_102_string, var_2_object);
		var_86_object->GetLocator(var_102_string, var_87_bool);
		if(!var_87_bool) { //@nz
		} else {
		}
		bool var_112_bool;
		func_9912(var_112_bool);
		if(!var_112_bool) { //@nz
			TaskCall(0);
			func_0();
			TaskReturn();
		}
		func_9781(var_95_bool, var_96_cvector);

		for(;;) {
			@irand(var_88_int, (var_2_object + 1));
			string var_136_string; int var_137_int;
			var_88_int = var_137_int;
			func_10411(var_136_string, var_137_int);
			var_86_object->GetLocator(var_136_string, var_89_bool, var_90_cvector, var_91_cvector);
			cvector var_138_cvector;
			func_9828(var_138_cvector);
			var_92_cvector = var_90_cvector - var_138_cvector;
			float var_141_float; cvector var_142_cvector;
			var_92_cvector = var_142_cvector;
			func_10210(var_141_float, var_142_cvector);
			if(var_141_float > var_1_object) {
				@GetHeight(var_93_float);
				var_151_float = GetByIndex(var_94_cvector, 1);
				SetByIndex(var_94_cvector, 1) = (var_151_float + var_93_float);
				@CanReachByPF(var_95_bool, var_94_cvector);
				if(var_95_bool != 0) {
					var_154_float = sqrt(var_92_cvector | var_92_cvector);
					var_96_cvector = var_94_cvector - (var_92_cvector * (var_0_bool / var_154_float));
					bool var_157_bool; cvector var_158_cvector; cvector var_159_cvector;
					var_96_cvector = var_158_cvector;
					var_91_cvector = var_159_cvector;
					TaskCall(1);
					func_13(var_160_bool, var_157_bool, var_158_cvector, var_159_cvector);
					TaskReturn();
					if(var_160_bool != 0) {
						int var_184_int;
						var_88_int = var_184_int;
						TaskCall(3);
						func_198(var_184_int);
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
void func_9174(object var_2_object, string var_1450_string)
{
	bool var_1451_bool;
	func_10433(var_1451_bool);
	if(!var_1451_bool) //@nz
		return 0;
	if(var_1450_string == var_2_object)
		return 0;
	string var_1454_string; bool var_1455_bool;
	var_1450_string = var_1454_string;
	if(var_1450_string == "")
		var_1455_bool = false;
	else
		var_1455_bool = true;
	func_10147(var_1454_string, var_1455_bool);
	var_2_object = var_1450_string;
	
}


// @pe
void func_10199(float var_227_float, float var_228_float, float var_229_float, float var_230_float)
{
	if(var_228_float < var_229_float) {
		var_229_float = var_227_float;
		return 0;
	}
	if(var_228_float > var_230_float) {
		var_230_float = var_227_float;
		return 0;
	}
	var_228_float = var_227_float;
}


// @pe
void func_11740(bool var_1215_bool)
{
	int var_1217_int;
	func_10220(var_1217_int, "d8q01BringBadBoy");
	if(var_1217_int == 1)
		var_1215_bool = true;
	var_1215_bool = false;
}


// @pe
void func_12253(object var_92_object)
{
	var_93_bool = GlobalVars[2];
	if(!var_93_bool) { //@nz
		int var_95_int; object var_96_object;
		var_92_object = var_96_object;
		TaskCall(8);
		func_1892(var_97_object, var_95_int, var_96_object);
		TaskReturn();
		var_313_bool = GlobalVars[2];
		GlobalVars[2] = true;
	}
	bool var_314_bool;
	func_10381(var_314_bool, 1);
	if(var_314_bool != 0) {
		int var_317_int; object var_318_object;
		var_92_object = var_318_object;
		TaskCall(4);
		func_282(var_319_object, var_317_int, var_318_object);
		TaskReturn();
		return 0;
	}
	bool var_468_bool;
	func_10381(var_468_bool, 2);
	if(var_468_bool != 0) {
		int var_470_int; object var_471_object;
		var_92_object = var_471_object;
		TaskCall(10);
		func_2174(var_472_object, var_470_int, var_471_object);
		TaskReturn();
		return 0;
	}
	bool var_548_bool;
	func_10381(var_548_bool, 3);
	if(var_548_bool != 0) {
		int var_550_int; object var_551_object;
		var_92_object = var_551_object;
		TaskCall(12);
		func_2702(var_552_object, var_550_int, var_551_object);
		TaskReturn();
		return 0;
	}
	bool var_678_bool;
	func_10381(var_678_bool, 4);
	if(var_678_bool != 0) {
		int var_680_int; object var_681_object;
		var_92_object = var_681_object;
		TaskCall(14);
		func_3729(var_682_object, var_680_int, var_681_object);
		TaskReturn();
		return 0;
	}
	bool var_790_bool;
	func_10381(var_790_bool, 5);
	if(var_790_bool != 0) {
		int var_792_int; object var_793_object;
		var_92_object = var_793_object;
		TaskCall(16);
		func_4908(var_794_object, var_792_int, var_793_object);
		TaskReturn();
		return 0;
	}
	bool var_923_bool;
	func_10381(var_923_bool, 6);
	if(var_923_bool != 0) {
		int var_925_int; object var_926_object;
		var_92_object = var_926_object;
		TaskCall(18);
		func_5671(var_927_object, var_925_int, var_926_object);
		TaskReturn();
		return 0;
	}
	bool var_1043_bool;
	func_10381(var_1043_bool, 7);
	if(var_1043_bool != 0) {
		int var_1045_int; object var_1046_object;
		var_92_object = var_1046_object;
		TaskCall(22);
		func_8236(var_1047_object, var_1045_int, var_1046_object);
		TaskReturn();
		return 0;
	}
	bool var_1104_bool;
	func_10381(var_1104_bool, 8);
	if(var_1104_bool != 0) {
		int var_1106_int; object var_1107_object;
		var_92_object = var_1107_object;
		TaskCall(20);
		func_6400(var_1108_object, var_1106_int, var_1107_object);
		TaskReturn();
		return 0;
	}
	bool var_1295_bool;
	func_10381(var_1295_bool, 9);
	if(var_1295_bool != 0) {
		int var_1297_int; object var_1298_object;
		var_92_object = var_1298_object;
		TaskCall(24);
		func_8492(var_1299_object, var_1297_int, var_1298_object);
		TaskReturn();
		return 0;
	}
	bool var_1356_bool;
	func_10381(var_1356_bool, 10);
	if(var_1356_bool != 0) {
		int var_1358_int; object var_1359_object;
		var_92_object = var_1359_object;
		TaskCall(26);
		func_8753(var_1360_object, var_1358_int, var_1359_object);
		TaskReturn();
		return 0;
	}
	bool var_1417_bool;
	func_10381(var_1417_bool, 11);
	if(var_1417_bool != 0) {
		int var_1419_int; object var_1420_object;
		var_92_object = var_1420_object;
		TaskCall(28);
		func_9014(var_1421_object, var_1419_int, var_1420_object);
		TaskReturn();
		return 0;
	}
	bool var_1490_bool;
	func_10381(var_1490_bool, 12);
	if(var_1490_bool != 0) {
		int var_1492_int; object var_1493_object;
		var_92_object = var_1493_object;
		TaskCall(6);
		func_1571(var_1494_object, var_1492_int, var_1493_object);
		TaskReturn();
		return 0;
	}
	int var_1548_int; object var_1549_object;
	var_92_object = var_1549_object;
	TaskCall(30);
	func_9475(var_1550_object, var_1548_int, var_1549_object);
	TaskReturn();
}


// @pe
void func_10210(float var_141_float, cvector var_142_cvector)
{
	var_143_float = GetByIndex(var_142_cvector, 0);
	var_144_float = GetByIndex(var_142_cvector, 0);
	var_146_float = GetByIndex(var_142_cvector, 2);
	var_147_float = GetByIndex(var_142_cvector, 2);
	var_141_float = sqrt((var_143_float * var_144_float) + (var_146_float * var_147_float));
}


// @pe
void func_10723(object var_152_object)
{
	object var_156_object;
	func_12186(var_156_object);
	object var_153_object;
	var_156_object = var_153_object;
	func_12203(var_153_object, "pt_map_anna", (float)2);
	object var_176_object;
	func_12186(var_176_object);
	var_152_object->ShowMap(var_176_object);
}


// @pe
void func_11236(bool var_607_bool)
{
	int var_609_int;
	func_10220(var_609_int, "ood3MladVlad2");
	if(var_609_int == 0) {
		var_607_bool = true;
		return 0;
	}
	var_607_bool = false;
}


// @pe
void func_11752(bool var_1223_bool)
{
	int var_1225_int;
	func_10220(var_1225_int, "ood8MladVlad3");
	if(var_1225_int == 0) {
		var_1223_bool = true;
		return 0;
	}
	var_1223_bool = false;
}


void func_10220(int var_352_int, string var_353_string)
{
	int var_355_int;
	@GetVariable(var_353_string, var_355_int);
	var_355_int = var_352_int;
}


// @pe
void func_11248(bool var_358_bool)
{
	int var_360_int;
	func_10220(var_360_int, "d1q03");
	if(var_360_int == 0) {
		var_358_bool = true;
		return 0;
	}
	var_358_bool = false;
}


void func_10225(object var_115_object, string var_116_string)
{
	object var_119_object;
	@GetMainOutdoorScene(var_119_object);
	object var_120_object;
	@AddBlankActor(var_120_object, var_119_object, var_116_string, (var_116_string + ".bin"));
	var_120_object = var_115_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_10739(void)
{
	@TriggerWorld("playsound", "mapmark");
}


// @pe
void func_2036(object var_2_object, string var_276_string)
{
	bool var_277_bool;
	func_10433(var_277_bool);
	if(!var_277_bool) //@nz
		return 0;
	if(var_276_string == var_2_object)
		return 0;
	string var_280_string; bool var_281_bool;
	var_276_string = var_280_string;
	if(var_276_string == "")
		var_281_bool = false;
	else
		var_281_bool = true;
	func_10147(var_280_string, var_281_bool);
	var_2_object = var_276_string;
	
}


// @pe
void func_11764(bool var_1266_bool)
{
	int var_1268_int;
	func_10220(var_1268_int, "ood8MladVlad4");
	if(var_1268_int == 0) {
		var_1266_bool = true;
		return 0;
	}
	var_1266_bool = false;
}


// @pe
void func_10745(object var_160_object)
{
	object var_164_object;
	func_12186(var_164_object);
	object var_161_object;
	var_164_object = var_161_object;
	func_12203(var_161_object, "pt_map_ospina", (float)2);
	object var_184_object;
	func_12186(var_184_object);
	var_160_object->ShowMap(var_184_object);
}


void func_10236(object var_143_object, string var_144_string)
{
	object var_147_object;
	@GetMainOutdoorScene(var_147_object);
	object var_148_object;
	@AddBlankActorFromXml(var_148_object, var_147_object, var_144_string, (var_144_string + ".xml"));
	var_148_object = var_143_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


