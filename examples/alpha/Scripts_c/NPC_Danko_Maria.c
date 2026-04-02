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
		func_5630();
		bool var_36_bool;
		func_4670(var_36_bool);
		if(!var_36_bool) { //@nz
			TaskCall(0);
			func_0();
			TaskReturn();
		}
		for(;;) {
			func_4735("Neutral");
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
		func_5634(var_36_object, var_36_object);
	}

	// @pe
	void OnCollision(object actor, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, object var_31_object, object var_32_object, object var_33_object, string var_34_string, bool var_35_bool)
	{
		object var_37_object;
		var_35_bool = var_37_object;
		bool var_36_bool;
		func_4658(var_36_bool, var_37_object);
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
			func_4753();
			if(var_35_string == 84) {
				object var_41_object; object var_42_object;
				var_41_object = var_1_object;
				var_42_object = var_0_object;
				func_4916();
				func_185(var_36_bool, "Neutral");
				var_0_object->SetMessage(72); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(73, 87, 85); //@t
				var_0_object->AddReply(74, 88, 86); //@t
				var_0_object->AddReply(86, 87, 98); //@t
				var_0_object->AddReply(87, 87, 99); //@t
				return 0;
			}
			if(var_35_string == 88) {
				object var_75_object; object var_76_object;
				var_75_object = var_1_object;
				var_76_object = var_0_object;
				func_4892();
				func_185(var_36_bool, "Neutral");
				var_0_object->SetMessage(76); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(85, 87, 97); //@t
				return 0;
			}
			if(var_35_string == 87) {
				func_185(var_36_bool, "Neutral");
				var_0_object->SetMessage(75); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(77, 93, 89); //@t
				var_0_object->AddReply(78, 91, 90); //@t
				return 0;
			}
			if(var_35_string == 91) {
				func_185(var_36_bool, "Neutral");
				var_0_object->SetMessage(79); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(80, -1, 92); //@t
				return 0;
			}
			if(var_35_string == 93) {
				func_185(var_36_bool, "Neutral");
				var_0_object->SetMessage(81); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(83, -1, 95); //@t
				var_0_object->AddReply(84, -1, 96); //@t
				return 0;
			}
			var_3_string = true;
			bool var_111_bool;
			func_4808(var_111_bool);
			if(var_111_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xca";
	
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
			func_4753();
			if(var_36_bool == 13313) {
				object var_41_object; object var_42_object;
				var_41_object = var_1_object;
				var_42_object = var_0_object;
				func_4904();
			}
			if(var_35_string == 3539) {
				bool var_47_bool = false;
				bool var_48_bool;
				func_5144(var_1_object);
				if(var_48_bool != 0) {
					bool var_56_bool;
					func_5156(var_1_object);
					if(var_56_bool != 0)
						var_47_bool = true;
				}
				if(var_47_bool != 0) {
					object var_62_object; object var_63_object;
					var_62_object = var_1_object;
					var_63_object = var_0_object;
					func_4898();
					object var_66_object; object var_67_object;
					var_66_object = var_1_object;
					var_67_object = var_0_object;
					func_4984();
					func_520(var_36_bool, "Neutral");
					var_0_object->SetMessage(3206); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(3207, 3543, 3540); //@t
					var_0_object->AddReply(3208, 3542, 3541); //@t
					return 0;
				}
				object var_92_object; object var_93_object;
				var_92_object = var_1_object;
				var_93_object = var_0_object;
				func_4984();
				func_520(var_36_bool, "Neutral");
				var_0_object->SetMessage(12086); //@t
				var_0_object->ClearReplies(); //@t
				bool var_96_bool;
				func_5168(var_1_object);
				if(var_96_bool != 0)
					var_0_object->AddReply(12087, 13314, 13313); //@t
				var_0_object->AddReply(12094, -1, 13320); //@t
				return 0;
			}
			if(var_35_string == 13314) {
				func_520(var_36_bool, "Neutral");
				var_0_object->SetMessage(12088); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12089, 13316, 13315); //@t
				return 0;
			}
			if(var_35_string == 13316) {
				func_520(var_36_bool, "Neutral");
				var_0_object->SetMessage(12090); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12091, 13318, 13317); //@t
				return 0;
			}
			if(var_35_string == 13318) {
				func_520(var_36_bool, "Neutral");
				var_0_object->SetMessage(12092); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12093, -1, 13319); //@t
				return 0;
			}
			if(var_35_string == 3542) {
				func_520(var_36_bool, "Neutral");
				var_0_object->SetMessage(3209); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(3215, 3543, 3549); //@t
				var_0_object->AddReply(3216, 3543, 3551); //@t
				return 0;
			}
			if(var_35_string == 3543) {
				func_520(var_36_bool, "Neutral");
				var_0_object->SetMessage(3210); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(3211, 3545, 3544); //@t
				var_0_object->AddReply(3214, 3545, 3547); //@t
				return 0;
			}
			if(var_35_string == 3545) {
				func_520(var_36_bool, "Neutral");
				var_0_object->SetMessage(3212); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(3213, -1, 3546); //@t
				var_0_object->AddReply(3217, 3554, 3553); //@t
				return 0;
			}
			if(var_35_string == 3554) {
				func_520(var_36_bool, "Neutral");
				var_0_object->SetMessage(3218); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(3219, -1, 3555); //@t
				var_0_object->AddReply(3220, -1, 3556); //@t
				return 0;
			}
			var_3_string = true;
			bool var_169_bool;
			func_4808(var_169_bool);
			if(var_169_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x219";
	
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
			func_4753();
			if(var_36_bool == 6112) {
				object var_41_object; object var_42_object;
				var_41_object = var_1_object;
				var_42_object = var_0_object;
				func_4816();
			}
			if(var_36_bool == 6113) {
				object var_47_object; object var_48_object;
				var_47_object = var_1_object;
				var_48_object = var_0_object;
				func_4816();
			}
			if(var_36_bool == 6122) {
				object var_51_object; object var_52_object;
				var_51_object = var_1_object;
				var_52_object = var_0_object;
				func_4816();
			}
			if(var_36_bool == 6123) {
				object var_55_object; object var_56_object;
				var_55_object = var_1_object;
				var_56_object = var_0_object;
				func_4816();
			}
			if(var_36_bool == 6127) {
				object var_59_object; object var_60_object;
				var_59_object = var_1_object;
				var_60_object = var_0_object;
				func_4816();
			}
			if(var_36_bool == 6128) {
				object var_63_object; object var_64_object;
				var_63_object = var_1_object;
				var_64_object = var_0_object;
				func_4816();
			}
			if(var_36_bool == 6154) {
				object var_67_object; object var_68_object;
				var_67_object = var_1_object;
				var_68_object = var_0_object;
				func_4822();
			}
			if(var_36_bool == 6155) {
				object var_73_object; object var_74_object;
				var_73_object = var_1_object;
				var_74_object = var_0_object;
				func_4822();
			}
			if(var_36_bool == 6158) {
				object var_77_object; object var_78_object;
				var_77_object = var_1_object;
				var_78_object = var_0_object;
				func_4822();
			}
			if(var_36_bool == 6159) {
				object var_81_object; object var_82_object;
				var_81_object = var_1_object;
				var_82_object = var_0_object;
				func_4822();
			}
			if(var_36_bool == 6164) {
				object var_85_object; object var_86_object;
				var_85_object = var_1_object;
				var_86_object = var_0_object;
				func_4822();
			}
			if(var_36_bool == 6173) {
				object var_89_object; object var_90_object;
				var_89_object = var_1_object;
				var_90_object = var_0_object;
				func_4822();
			}
			if(var_36_bool == 6902) {
				object var_93_object; object var_94_object;
				var_93_object = var_1_object;
				var_94_object = var_0_object;
				func_4828();
			}
			if(var_36_bool == 6903) {
				object var_99_object; object var_100_object;
				var_99_object = var_1_object;
				var_100_object = var_0_object;
				func_4828();
			}
			if(var_36_bool == 6904) {
				object var_103_object; object var_104_object;
				var_103_object = var_1_object;
				var_104_object = var_0_object;
				func_4828();
			}
			if(var_36_bool == 6188) {
				object var_107_object; object var_108_object;
				var_107_object = var_1_object;
				var_108_object = var_0_object;
				func_4828();
			}
			if(var_36_bool == 6183) {
				object var_111_object; object var_112_object;
				var_111_object = var_1_object;
				var_112_object = var_0_object;
				func_4810();
			}
			if(var_36_bool == 6184) {
				object var_117_object; object var_118_object;
				var_117_object = var_1_object;
				var_118_object = var_0_object;
				func_4810();
			}
			if(var_36_bool == 8932) {
				object var_121_object; object var_122_object;
				var_121_object = var_1_object;
				var_122_object = var_0_object;
				func_4828();
			}
			if(var_36_bool == 8934) {
				object var_125_object; object var_126_object;
				var_125_object = var_1_object;
				var_126_object = var_0_object;
				func_4960();
			}
			if(var_36_bool == 8938) {
				object var_131_object; object var_132_object;
				var_131_object = var_1_object;
				var_132_object = var_0_object;
				func_4966();
			}
			if(var_36_bool == 8940) {
				object var_137_object; object var_138_object;
				var_137_object = var_1_object;
				var_138_object = var_0_object;
				func_4972();
			}
			if(var_36_bool == 8942) {
				object var_143_object; object var_144_object;
				var_143_object = var_1_object;
				var_144_object = var_0_object;
				func_4978();
			}
			if(var_35_string == 6919) {
				bool var_149_bool;
				func_5050(var_1_object);
				if(!var_149_bool) { //@nz
					func_1137(var_36_bool, "Neutral");
					var_0_object->SetMessage(6253); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(6254, 6921, 6920); //@t
					var_0_object->AddReply(6259, 6926, 6925); //@t
					return 0;
				}
				bool var_180_bool;
				func_5014(var_1_object);
				if(var_180_bool != 0) {
					func_1137(var_36_bool, "Neutral");
					var_0_object->SetMessage(5533); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(5534, 6099, 6098); //@t
					var_0_object->AddReply(5571, 6140, 6139); //@t
					return 0;
				}
				bool var_194_bool;
				func_5026(var_1_object);
				if(var_194_bool != 0) {
					func_1137(var_36_bool, "Neutral");
					var_0_object->SetMessage(5574); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(5575, 6145, 6144); //@t
					return 0;
				}
				bool var_205_bool = false;
				bool var_206_bool;
				func_5038(var_1_object);
				if(var_206_bool != 0) {
					bool var_212_bool;
					func_5098(var_212_bool, var_1_object);
					if(var_212_bool != 0)
						var_205_bool = true;
				}
				if(var_205_bool != 0) {
					func_1137(var_36_bool, "Neutral");
					var_0_object->SetMessage(5527); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(5528, 6901, 6092); //@t
					var_0_object->AddReply(5529, 6187, 6093); //@t
					return 0;
				}
				bool var_224_bool;
				func_5002(var_1_object);
				if(var_224_bool != 0) {
					func_1137(var_36_bool, "Neutral");
					var_0_object->SetMessage(5604); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(5605, 6180, 6179); //@t
					var_0_object->AddReply(5611, 6180, 6185); //@t
					return 0;
				}
				func_1137(var_36_bool, "Neutral");
				var_0_object->SetMessage(8097); //@t
				var_0_object->ClearReplies(); //@t
				bool var_240_bool;
				func_5098(var_240_bool, var_1_object);
				if(var_240_bool != 0)
					var_0_object->AddReply(8098, -1, 8921); //@t
				bool var_245_bool = false;
				bool var_246_bool;
				func_5288(var_1_object);
				if(var_246_bool != 0) {
					bool var_252_bool;
					func_5038(var_1_object);
					if(var_252_bool != 0)
						var_245_bool = true;
				}
				if(var_245_bool != 0)
					var_0_object->AddReply(8109, 8947, 8932); //@t
				bool var_257_bool = false;
				bool var_258_bool;
				func_5192(var_1_object);
				if(var_258_bool != 0) {
					bool var_264_bool;
					func_5300(var_1_object);
					if(var_264_bool != 0)
						var_257_bool = true;
				}
				if(var_257_bool != 0)
					var_0_object->AddReply(8111, 8948, 8934); //@t
				bool var_273_bool = false;
				bool var_274_bool;
				func_5132(var_1_object);
				if(var_274_bool != 0) {
					bool var_280_bool;
					func_5312(var_1_object);
					if(var_280_bool != 0)
						var_273_bool = true;
				}
				if(var_273_bool != 0)
					var_0_object->AddReply(8115, 8949, 8938); //@t
				bool var_289_bool = false;
				bool var_290_bool;
				func_5396(var_1_object);
				if(var_290_bool != 0) {
					bool var_296_bool;
					func_5324(var_1_object);
					if(var_296_bool != 0)
						var_289_bool = true;
				}
				if(var_289_bool != 0)
					var_0_object->AddReply(8117, 8950, 8940); //@t
				bool var_305_bool = false;
				bool var_306_bool;
				func_5384(var_1_object);
				if(var_306_bool != 0) {
					bool var_312_bool;
					func_5336(var_1_object);
					if(var_312_bool != 0)
						var_305_bool = true;
				}
				if(var_305_bool != 0)
					var_0_object->AddReply(8119, 8951, 8942); //@t
				var_0_object->AddReply(15220, -1, 16497); //@t
				return 0;
			}
			if(var_35_string == 8951) {
				func_1137(var_36_bool, "Neutral");
				var_0_object->SetMessage(8128); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8688, -1, 9526); //@t
				return 0;
			}
			if(var_35_string == 8950) {
				func_1137(var_36_bool, "Neutral");
				var_0_object->SetMessage(8127); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8687, -1, 9525); //@t
				return 0;
			}
			if(var_35_string == 8949) {
				func_1137(var_36_bool, "Neutral");
				var_0_object->SetMessage(8126); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8686, -1, 9524); //@t
				return 0;
			}
			if(var_35_string == 8948) {
				func_1137(var_36_bool, "Neutral");
				var_0_object->SetMessage(8125); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8685, -1, 9523); //@t
				return 0;
			}
			if(var_35_string == 8947) {
				func_1137(var_36_bool, "Neutral");
				var_0_object->SetMessage(8124); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8684, -1, 9522); //@t
				return 0;
			}
			if(var_35_string == 6180) {
				func_1137(var_36_bool, "Neutral");
				var_0_object->SetMessage(5606); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5607, 6182, 6181); //@t
				return 0;
			}
			if(var_35_string == 6182) {
				func_1137(var_36_bool, "Neutral");
				var_0_object->SetMessage(5608); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5609, -1, 6183); //@t
				var_0_object->AddReply(5610, -1, 6184); //@t
				return 0;
			}
			if(var_35_string == 6187) {
				func_1137(var_36_bool, "Neutral");
				var_0_object->SetMessage(5612); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5613, -1, 6188); //@t
				return 0;
			}
			if(var_35_string == 6901) {
				func_1137(var_36_bool, "Neutral");
				var_0_object->SetMessage(6238); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6239, -1, 6902); //@t
				var_0_object->AddReply(6240, -1, 6903); //@t
				var_0_object->AddReply(6241, -1, 6904); //@t
				return 0;
			}
			if(var_35_string == 6145) {
				func_1137(var_36_bool, "Neutral");
				var_0_object->SetMessage(5576); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5577, 6147, 6146); //@t
				var_0_object->AddReply(5603, 6149, 6176); //@t
				return 0;
			}
			if(var_35_string == 6147) {
				func_1137(var_36_bool, "Neutral");
				var_0_object->SetMessage(5578); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5579, 6149, 6148); //@t
				var_0_object->AddReply(5595, 6149, 6165); //@t
				var_0_object->AddReply(5596, 6168, 6167); //@t
				return 0;
			}
			if(var_35_string == 6168) {
				func_1137(var_36_bool, "Neutral");
				var_0_object->SetMessage(5597); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5598, 6151, 6169); //@t
				var_0_object->AddReply(5599, 6172, 6171); //@t
				return 0;
			}
			if(var_35_string == 6172) {
				func_1137(var_36_bool, "Neutral");
				var_0_object->SetMessage(5600); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5601, -1, 6173); //@t
				var_0_object->AddReply(5602, 6151, 6174); //@t
				return 0;
			}
			if(var_35_string == 6149) {
				func_1137(var_36_bool, "Neutral");
				var_0_object->SetMessage(5580); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5581, 6151, 6150); //@t
				var_0_object->AddReply(5591, 6161, 6160); //@t
				return 0;
			}
			if(var_35_string == 6161) {
				func_1137(var_36_bool, "Neutral");
				var_0_object->SetMessage(5592); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5593, 6157, 6162); //@t
				var_0_object->AddReply(5594, -1, 6164); //@t
				return 0;
			}
			if(var_35_string == 6151) {
				func_1137(var_36_bool, "Neutral");
				var_0_object->SetMessage(5582); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5583, 6153, 6152); //@t
				var_0_object->AddReply(5587, 6157, 6156); //@t
				return 0;
			}
			if(var_35_string == 6157) {
				func_1137(var_36_bool, "Neutral");
				var_0_object->SetMessage(5588); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5589, -1, 6158); //@t
				var_0_object->AddReply(5590, -1, 6159); //@t
				return 0;
			}
			if(var_35_string == 6153) {
				func_1137(var_36_bool, "Neutral");
				var_0_object->SetMessage(5584); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5585, -1, 6154); //@t
				var_0_object->AddReply(5586, -1, 6155); //@t
				return 0;
			}
			if(var_35_string == 6140) {
				func_1137(var_36_bool, "Neutral");
				var_0_object->SetMessage(5572); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5573, 6099, 6141); //@t
				return 0;
			}
			if(var_35_string == 6099) {
				func_1137(var_36_bool, "Neutral");
				var_0_object->SetMessage(5535); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5536, 6101, 6100); //@t
				return 0;
			}
			if(var_35_string == 6101) {
				func_1137(var_36_bool, "Neutral");
				var_0_object->SetMessage(5537); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5538, 6103, 6102); //@t
				var_0_object->AddReply(5565, 6132, 6131); //@t
				return 0;
			}
			if(var_35_string == 6132) {
				func_1137(var_36_bool, "Neutral");
				var_0_object->SetMessage(5566); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5567, 6103, 6133); //@t
				var_0_object->AddReply(5568, 6136, 6135); //@t
				return 0;
			}
			if(var_35_string == 6136) {
				func_1137(var_36_bool, "Neutral");
				var_0_object->SetMessage(5569); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5570, 6103, 6137); //@t
				return 0;
			}
			if(var_35_string == 6103) {
				func_1137(var_36_bool, "Neutral");
				var_0_object->SetMessage(5539); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5540, 6105, 6104); //@t
				return 0;
			}
			if(var_35_string == 6105) {
				func_1137(var_36_bool, "Neutral");
				var_0_object->SetMessage(5541); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5542, 6107, 6106); //@t
				var_0_object->AddReply(5551, 6117, 6116); //@t
				return 0;
			}
			if(var_35_string == 6117) {
				func_1137(var_36_bool, "Neutral");
				var_0_object->SetMessage(5552); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5553, 6119, 6118); //@t
				var_0_object->AddReply(5564, 6111, 6129); //@t
				return 0;
			}
			if(var_35_string == 6119) {
				func_1137(var_36_bool, "Neutral");
				var_0_object->SetMessage(5554); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5555, 6121, 6120); //@t
				var_0_object->AddReply(5559, -1, 6124); //@t
				var_0_object->AddReply(5560, 6126, 6125); //@t
				return 0;
			}
			if(var_35_string == 6126) {
				func_1137(var_36_bool, "Neutral");
				var_0_object->SetMessage(5561); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5562, -1, 6127); //@t
				var_0_object->AddReply(5563, -1, 6128); //@t
				return 0;
			}
			if(var_35_string == 6121) {
				func_1137(var_36_bool, "Neutral");
				var_0_object->SetMessage(5556); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5557, -1, 6122); //@t
				var_0_object->AddReply(5558, -1, 6123); //@t
				return 0;
			}
			if(var_35_string == 6107) {
				func_1137(var_36_bool, "Neutral");
				var_0_object->SetMessage(5543); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5544, 6109, 6108); //@t
				var_0_object->AddReply(5550, 6111, 6114); //@t
				return 0;
			}
			if(var_35_string == 6109) {
				func_1137(var_36_bool, "Neutral");
				var_0_object->SetMessage(5545); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5546, 6111, 6110); //@t
				return 0;
			}
			if(var_35_string == 6111) {
				func_1137(var_36_bool, "Neutral");
				var_0_object->SetMessage(5547); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5548, -1, 6112); //@t
				var_0_object->AddReply(5549, -1, 6113); //@t
				return 0;
			}
			if(var_35_string == 6926) {
				func_1137(var_36_bool, "Neutral");
				var_0_object->SetMessage(6260); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6261, 6924, 6927); //@t
				return 0;
			}
			if(var_35_string == 6921) {
				func_1137(var_36_bool, "Neutral");
				var_0_object->SetMessage(6255); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6256, -1, 6922); //@t
				var_0_object->AddReply(6257, 6924, 6923); //@t
				return 0;
			}
			if(var_35_string == 6924) {
				func_1137(var_36_bool, "Neutral");
				var_0_object->SetMessage(6258); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6262, -1, 6929); //@t
				return 0;
			}
			var_3_string = true;
			bool var_641_bool;
			func_4808(var_641_bool);
			if(var_641_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x482";
	
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
			func_4753();
			if(var_36_bool == 15761) {
				object var_41_object; object var_42_object;
				var_41_object = var_1_object;
				var_42_object = var_0_object;
				func_4946();
				object var_100_object = var_1_object;
				func_4955(var_0_object);
			}
			if(var_36_bool == 15762) {
				object var_105_object; object var_106_object;
				var_105_object = var_1_object;
				var_106_object = var_0_object;
				func_4946();
				object var_107_object = var_1_object;
				func_4955(var_0_object);
			}
			if(var_36_bool == 8183) {
				object var_111_object; object var_112_object;
				var_111_object = var_1_object;
				var_112_object = var_0_object;
				func_4851();
				object var_115_object; object var_116_object;
				var_115_object = var_1_object;
				var_116_object = var_0_object;
				func_4863();
			}
			if(var_36_bool == 8187) {
				object var_162_object; object var_163_object;
				var_162_object = var_1_object;
				var_163_object = var_0_object;
				func_4851();
			}
			if(var_36_bool == 8171) {
				object var_166_object; object var_167_object;
				var_166_object = var_1_object;
				var_167_object = var_0_object;
				func_4857();
				object var_170_object; object var_171_object;
				var_170_object = var_1_object;
				var_171_object = var_0_object;
				func_4886();
				object var_174_object; object var_175_object;
				var_174_object = var_1_object;
				var_175_object = var_0_object;
				func_4845();
				object var_178_object = var_1_object;
				func_4834(var_0_object);
			}
			if(var_36_bool == 8170) {
				object var_189_object; object var_190_object;
				var_189_object = var_1_object;
				var_190_object = var_0_object;
				func_4857();
				object var_191_object; object var_192_object;
				var_191_object = var_1_object;
				var_192_object = var_0_object;
				func_4845();
				object var_193_object = var_1_object;
				func_4834(var_0_object);
			}
			if(var_35_string == 15758) {
				bool var_197_bool;
				func_5276(var_1_object);
				if(var_197_bool != 0) {
					object var_205_object; object var_206_object;
					var_205_object = var_1_object;
					var_206_object = var_0_object;
					func_4940();
					func_2578(var_36_bool, "Neutral");
					var_0_object->SetMessage(14519); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(14520, 15760, 15759); //@t
					return 0;
				}
				func_2578(var_36_bool, "Neutral");
				var_0_object->SetMessage(6887); //@t
				var_0_object->ClearReplies(); //@t
				bool var_230_bool = false;
				bool var_231_bool;
				func_5062(var_1_object);
				if(var_231_bool != 0) {
					bool var_237_bool;
					func_5086(var_1_object);
					if(var_237_bool != 0)
						var_230_bool = true;
				}
				if(var_230_bool != 0)
					var_0_object->AddReply(6888, 7595, 7594); //@t
				bool var_246_bool = false;
				bool var_247_bool;
				func_5074(var_1_object);
				if(var_247_bool != 0) {
					bool var_253_bool;
					func_5120(var_1_object);
					if(var_253_bool != 0)
						var_246_bool = true;
				}
				if(var_246_bool != 0)
					var_0_object->AddReply(6918, 7625, 7624); //@t
				var_0_object->AddReply(7400, -1, 8166); //@t
				return 0;
			EMIT "PushEmpty(string)";
			EMIT "Stack[-1] = \"Neutral\" // @poff=0";
			EMIT "Call 0xa12";
			EMIT "Pop(1)";
			EMIT "Push((int) 9351)";
			EMIT "@@@ SetMessage(Stack[-1]); Obj=0 // @poff=77";
			EMIT "Pop(1)";
			EMIT "@@@ ClearReplies(); Obj=0 // @poff=88";
			EMIT "Pop(0)";
			EMIT "Push((int) 9352)";
			EMIT "Push((int) 10275)";
			EMIT "Push((int) 10274)";
			EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
			EMIT "Pop(3)";
			EMIT "Push((int) 9361)";
			EMIT "Push((int) 10275)";
			EMIT "Push((int) 10284)";
			EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
			EMIT "Pop(3)";
			EMIT "Return(); Pop(0)";
			EMIT "PushEmpty(string)";
			EMIT "Stack[-1] = \"Neutral\" // @poff=0";
			EMIT "Call 0xa12";
			EMIT "Pop(1)";
			EMIT "Push((int) 9362)";
			EMIT "@@@ SetMessage(Stack[-1]); Obj=0 // @poff=77";
			EMIT "Pop(1)";
			EMIT "@@@ ClearReplies(); Obj=0 // @poff=88";
			EMIT "Pop(0)";
			EMIT "Push((int) 9363)";
			EMIT "Push((int) 10288)";
			EMIT "Push((int) 10287)";
			EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
			EMIT "Pop(3)";
			EMIT "Push((int) 9371)";
			EMIT "Push((int) 10296)";
			EMIT "Push((int) 10295)";
			EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
			EMIT "Pop(3)";
			EMIT "Return(); Pop(0)";
			}
			if(var_35_string == 10296) {
				func_2578(var_36_bool, "Neutral");
				var_0_object->SetMessage(9372); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9373, 10298, 10297); //@t
				var_0_object->AddReply(9376, 10288, 10300); //@t
				return 0;
			}
			if(var_35_string == 10298) {
				func_2578(var_36_bool, "Neutral");
				var_0_object->SetMessage(9374); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9375, -1, 10299); //@t
				return 0;
			}
			if(var_35_string == 10288) {
				func_2578(var_36_bool, "Neutral");
				var_0_object->SetMessage(9364); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9365, 10290, 10289); //@t
				var_0_object->AddReply(9368, 10293, 10292); //@t
				return 0;
			}
			if(var_35_string == 10293) {
				func_2578(var_36_bool, "Neutral");
				var_0_object->SetMessage(9369); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9370, -1, 10294); //@t
				return 0;
			}
			if(var_35_string == 10290) {
				func_2578(var_36_bool, "Neutral");
				var_0_object->SetMessage(9366); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9367, -1, 10291); //@t
				return 0;
			}
			if(var_35_string == 10275) {
				func_2578(var_36_bool, "Neutral");
				var_0_object->SetMessage(9353); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9354, 10277, 10276); //@t
				var_0_object->AddReply(9359, 10277, 10281); //@t
				var_0_object->AddReply(9360, -1, 10283); //@t
				return 0;
			}
			if(var_35_string == 10277) {
				func_2578(var_36_bool, "Neutral");
				var_0_object->SetMessage(9355); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9356, -1, 10278); //@t
				var_0_object->AddReply(9357, -1, 10279); //@t
				var_0_object->AddReply(9358, -1, 10280); //@t
				return 0;
			}
			if(var_35_string == 7625) {
				func_2578(var_36_bool, "Neutral");
				var_0_object->SetMessage(6919); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7401, 8168, 8167); //@t
				return 0;
			}
			if(var_35_string == 8168) {
				func_2578(var_36_bool, "Neutral");
				var_0_object->SetMessage(7402); //@t
				var_0_object->ClearReplies(); //@t
				bool var_343_bool;
				func_5108(var_1_object);
				if(var_343_bool != 0)
					var_0_object->AddReply(6920, 7628, 7626); //@t
				var_0_object->AddReply(6921, 8169, 7627); //@t
				return 0;
			}
			if(var_35_string == 8169) {
				func_2578(var_36_bool, "Neutral");
				var_0_object->SetMessage(7403); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7404, -1, 8170); //@t
				return 0;
			}
			if(var_35_string == 7628) {
				func_2578(var_36_bool, "Neutral");
				var_0_object->SetMessage(6922); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7405, -1, 8171); //@t
				return 0;
			}
			if(var_35_string == 7595) {
				func_2578(var_36_bool, "Neutral");
				var_0_object->SetMessage(6889); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7406, 8174, 8172); //@t
				var_0_object->AddReply(6890, 7597, 7596); //@t
				return 0;
			}
			if(var_35_string == 7597) {
				func_2578(var_36_bool, "Neutral");
				var_0_object->SetMessage(6891); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7407, 8184, 8173); //@t
				var_0_object->AddReply(7417, 8184, 8185); //@t
				return 0;
			}
			if(var_35_string == 8184) {
				func_2578(var_36_bool, "Neutral");
				var_0_object->SetMessage(7416); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7418, -1, 8187); //@t
				return 0;
			}
			if(var_35_string == 8174) {
				func_2578(var_36_bool, "Neutral");
				var_0_object->SetMessage(7408); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7409, 8178, 8175); //@t
				var_0_object->AddReply(7410, 8178, 8176); //@t
				var_0_object->AddReply(7411, 8178, 8177); //@t
				return 0;
			}
			if(var_35_string == 8178) {
				func_2578(var_36_bool, "Neutral");
				var_0_object->SetMessage(7412); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7413, 8182, 8181); //@t
				return 0;
			}
			if(var_35_string == 8182) {
				func_2578(var_36_bool, "Neutral");
				var_0_object->SetMessage(7414); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7415, -1, 8183); //@t
				return 0;
			}
			if(var_35_string == 15760) {
				func_2578(var_36_bool, "Neutral");
				var_0_object->SetMessage(14521); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(14522, -1, 15761); //@t
				var_0_object->AddReply(14523, -1, 15762); //@t
				return 0;
			}
			var_3_string = true;
			bool var_433_bool;
			func_4808(var_433_bool);
			if(var_433_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xa23";
	
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
			func_4753();
			if(var_35_string == 13469) {
				bool var_41_bool;
				func_5180(var_1_object);
				if(var_41_bool != 0) {
					object var_49_object; object var_50_object;
					var_49_object = var_1_object;
					var_50_object = var_0_object;
					func_4910();
					func_3357(var_36_bool, "Neutral");
					var_0_object->SetMessage(12310); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(12311, 13471, 13470); //@t
					var_0_object->AddReply(12313, 13473, 13472); //@t
					return 0;
				}
				func_3357(var_36_bool, "Neutral");
				var_0_object->SetMessage(13777); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13778, -1, 15014); //@t
				return 0;
			}
			if(var_35_string == 13473) {
				func_3357(var_36_bool, "Neutral");
				var_0_object->SetMessage(12314); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12315, 13475, 13474); //@t
				return 0;
			}
			if(var_35_string == 13475) {
				func_3357(var_36_bool, "Neutral");
				var_0_object->SetMessage(12316); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12317, 13477, 13476); //@t
				return 0;
			}
			if(var_35_string == 13477) {
				func_3357(var_36_bool, "Neutral");
				var_0_object->SetMessage(12318); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12319, 13482, 13478); //@t
				return 0;
			}
			if(var_35_string == 13482) {
				func_3357(var_36_bool, "Neutral");
				var_0_object->SetMessage(12323); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12324, 13484, 13483); //@t
				return 0;
			}
			if(var_35_string == 13484) {
				func_3357(var_36_bool, "Neutral");
				var_0_object->SetMessage(12325); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12326, 13486, 13485); //@t
				return 0;
			}
			if(var_35_string == 13486) {
				func_3357(var_36_bool, "Neutral");
				var_0_object->SetMessage(12327); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12328, -1, 13487); //@t
				return 0;
			}
			if(var_35_string == 13471) {
				func_3357(var_36_bool, "Neutral");
				var_0_object->SetMessage(12312); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12320, 13480, 13479); //@t
				return 0;
			}
			if(var_35_string == 13480) {
				func_3357(var_36_bool, "Neutral");
				var_0_object->SetMessage(12321); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12322, -1, 13481); //@t
				return 0;
			}
			var_3_string = true;
			bool var_136_bool;
			func_4808(var_136_bool);
			if(var_136_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xd2e";
	
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
			func_4753();
			if(var_36_bool == 14178) {
				object var_41_object; object var_42_object;
				var_41_object = var_1_object;
				var_42_object = var_0_object;
				func_4996();
			}
			if(var_35_string == 14094) {
				bool var_47_bool = false;
				bool var_48_bool = false;
				bool var_49_bool;
				func_5372(var_1_object);
				if(var_49_bool != 0) {
					bool var_57_bool;
					func_5360(var_1_object);
					if(!var_57_bool) //@nz
						var_48_bool = true;
				}
				if(var_48_bool != 0) {
					bool var_64_bool;
					func_5348(var_1_object);
					if(!var_64_bool) //@nz
						var_47_bool = true;
				}
				if(var_47_bool != 0) {
					object var_71_object; object var_72_object;
					var_71_object = var_1_object;
					var_72_object = var_0_object;
					func_4990();
					func_3750(var_36_bool, "Neutral");
					var_0_object->SetMessage(12892); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(12893, 14096, 14095); //@t
					var_0_object->AddReply(12969, 14175, 14174); //@t
					return 0;
				}
				func_3750(var_36_bool, "Neutral");
				var_0_object->SetMessage(12974); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12975, -1, 14180); //@t
				return 0;
			}
			if(var_35_string == 14175) {
				func_3750(var_36_bool, "Neutral");
				var_0_object->SetMessage(12970); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12971, 14177, 14176); //@t
				return 0;
			}
			if(var_35_string == 14177) {
				func_3750(var_36_bool, "Neutral");
				var_0_object->SetMessage(12972); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12973, -1, 14178); //@t
				return 0;
			}
			if(var_35_string == 14096) {
				func_3750(var_36_bool, "Neutral");
				var_0_object->SetMessage(12894); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12895, 14098, 14097); //@t
				return 0;
			}
			if(var_35_string == 14098) {
				func_3750(var_36_bool, "Neutral");
				var_0_object->SetMessage(12896); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12897, 14175, 14099); //@t
				return 0;
			}
			var_3_string = true;
			bool var_130_bool;
			func_4808(var_130_bool);
			if(var_130_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xeb7";
	
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
			func_4753();
			if(var_36_int == 15601) {
				object var_41_object; object var_42_object;
				var_41_object = var_1_object;
				var_42_object = var_0_object;
				func_4928();
			}
			if(var_36_int == 15625) {
				object var_47_object; object var_48_object;
				var_47_object = var_1_object;
				var_48_object = var_0_object;
				func_4934();
			}
			if(var_35_int == 15592) {
				bool var_53_bool = false;
				bool var_54_bool;
				func_5204(var_1_object);
				if(var_54_bool != 0) {
					bool var_62_bool;
					func_5216(var_1_object);
					if(var_62_bool != 0)
						var_53_bool = true;
				}
				if(var_53_bool != 0) {
					object var_68_object; object var_69_object;
					var_68_object = var_1_object;
					var_69_object = var_0_object;
					func_4922();
					func_4127(var_36_int, "Neutral");
					var_0_object->SetMessage(14369); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(14370, 15594, 15593); //@t
					var_0_object->AddReply(14376, -1, 15599); //@t
					return 0;
				}
				func_4127(var_36_int, "Neutral");
				var_0_object->SetMessage(14377); //@t
				var_0_object->ClearReplies(); //@t
				bool var_96_bool = false;
				bool var_97_bool = false;
				bool var_98_bool;
				func_5216(var_1_object);
				if(!var_98_bool) { //@nz
					bool var_101_bool;
					func_5228(var_1_object);
					if(var_101_bool != 0)
						var_97_bool = true;
				}
				if(var_97_bool != 0) {
					bool var_107_bool;
					func_5240(var_1_object);
					if(var_107_bool != 0)
						var_96_bool = true;
				}
				if(var_96_bool != 0)
					var_0_object->AddReply(14378, 15602, 15601); //@t
				bool var_116_bool;
				func_5264(var_1_object);
				if(var_116_bool != 0)
					var_0_object->AddReply(14400, 15626, 15625); //@t
				var_0_object->AddReply(14419, -1, 15644); //@t
				return 0;
			}
			if(var_35_int == 15626) {
				func_4127(var_36_int, "Neutral");
				var_0_object->SetMessage(14401); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(14402, 15628, 15627); //@t
				return 0;
			}
			if(var_35_int == 15628) {
				func_4127(var_36_int, "Neutral");
				var_0_object->SetMessage(14403); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(14404, 15630, 15629); //@t
				return 0;
			}
			if(var_35_int == 15630) {
				func_4127(var_36_int, "Neutral");
				var_0_object->SetMessage(14405); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(14406, 15632, 15631); //@t
				return 0;
			}
			if(var_35_int == 15632) {
				func_4127(var_36_int, "Neutral");
				var_0_object->SetMessage(14407); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(14408, 15634, 15633); //@t
				return 0;
			}
			if(var_35_int == 15634) {
				func_4127(var_36_int, "Neutral");
				var_0_object->SetMessage(14409); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(14410, 15636, 15635); //@t
				return 0;
			}
			if(var_35_int == 15636) {
				func_4127(var_36_int, "Neutral");
				var_0_object->SetMessage(14411); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(14412, 15638, 15637); //@t
				return 0;
			}
			if(var_35_int == 15638) {
				func_4127(var_36_int, "Neutral");
				var_0_object->SetMessage(14413); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(14414, 15640, 15639); //@t
				return 0;
			}
			if(var_35_int == 15640) {
				func_4127(var_36_int, "Neutral");
				var_0_object->SetMessage(14415); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(14416, -1, 15641); //@t
				var_0_object->AddReply(14417, -1, 15642); //@t
				var_0_object->AddReply(14418, -1, 15643); //@t
				return 0;
			}
			if(var_35_int == 15602) {
				func_4127(var_36_int, "Neutral");
				var_0_object->SetMessage(14379); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(14380, 15604, 15603); //@t
				var_0_object->AddReply(14399, 15604, 15623); //@t
				return 0;
			}
			if(var_35_int == 15604) {
				func_4127(var_36_int, "Neutral");
				var_0_object->SetMessage(14381); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(14382, 15606, 15605); //@t
				return 0;
			}
			if(var_35_int == 15606) {
				func_4127(var_36_int, "Neutral");
				var_0_object->SetMessage(14383); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(14384, 15608, 15607); //@t
				return 0;
			}
			if(var_35_int == 15608) {
				func_4127(var_36_int, "Neutral");
				var_0_object->SetMessage(14385); //@t
				var_0_object->ClearReplies(); //@t
				bool var_218_bool;
				func_5252(var_1_object);
				if(var_218_bool != 0)
					var_0_object->AddReply(14386, 15610, 15609); //@t
				var_0_object->AddReply(14398, -1, 15622); //@t
				return 0;
			}
			if(var_35_int == 15610) {
				func_4127(var_36_int, "Neutral");
				var_0_object->SetMessage(14387); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(14388, 15612, 15611); //@t
				return 0;
			}
			if(var_35_int == 15612) {
				func_4127(var_36_int, "Neutral");
				var_0_object->SetMessage(14389); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(14390, 15614, 15613); //@t
				return 0;
			}
			if(var_35_int == 15614) {
				func_4127(var_36_int, "Neutral");
				var_0_object->SetMessage(14391); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(14392, 15616, 15615); //@t
				var_0_object->AddReply(14397, 15616, 15620); //@t
				return 0;
			}
			if(var_35_int == 15616) {
				func_4127(var_36_int, "Neutral");
				var_0_object->SetMessage(14393); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(14394, 15618, 15617); //@t
				return 0;
			}
			if(var_35_int == 15618) {
				func_4127(var_36_int, "Neutral");
				var_0_object->SetMessage(14395); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(14396, -1, 15619); //@t
				return 0;
			}
			if(var_35_int == 15594) {
				func_4127(var_36_int, "Neutral");
				var_0_object->SetMessage(14371); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(14372, 15596, 15595); //@t
				return 0;
			}
			if(var_35_int == 15596) {
				func_4127(var_36_int, "Neutral");
				var_0_object->SetMessage(14373); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(14374, -1, 15597); //@t
				var_0_object->AddReply(14375, -1, 15598); //@t
				return 0;
			}
			var_3_string = true;
			bool var_285_bool;
			func_4808(var_285_bool);
			if(var_285_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x1030";
	
	}

}


void func_0(void)
{
	@Hold();
}


// @pe
void func_5120(bool var_253_bool)
{
	int var_255_int;
	func_4770(var_255_int, "d2q03");
	if(var_255_int == 1)
		var_253_bool = true;
	var_253_bool = false;
}


// @pe
void func_5634(object var_36_object, object var_365_object)
{
	var_37_bool = GlobalVars[1];
	if(!var_37_bool) { //@nz
		int var_39_int; object var_40_object;
		var_36_object = var_40_object;
		TaskCall(2);
		func_49(var_41_object, var_39_int, var_40_object);
		TaskReturn();
		var_151_bool = GlobalVars[1];
		GlobalVars[1] = true;
	}
	bool var_152_bool;
	func_4789(var_152_bool, 1);
	if(var_152_bool != 0) {
		int var_160_int; object var_161_object;
		var_36_object = var_161_object;
		TaskCall(6);
		func_786(var_162_object, var_160_int, var_161_object);
		TaskReturn();
		return 0;
	}
	bool var_360_bool;
	func_4789(var_360_bool, 2);
	if(var_360_bool != 0) {
		int var_363_int; object var_364_object;
		var_36_object = var_364_object;
		TaskCall(8);
		func_2359(var_365_object, var_363_int, var_364_object);
		TaskReturn();
		if(2000 == var_365_object)
			@ShowWindow("people.xml", true);
		return 0;
	}
	bool var_457_bool;
	func_4789(var_457_bool, 6);
	if(var_457_bool != 0) {
		int var_459_int; object var_460_object;
		var_36_object = var_460_object;
		TaskCall(4);
		func_345(var_461_object, var_459_int, var_460_object);
		TaskReturn();
		return 0;
	}
	bool var_543_bool;
	func_4789(var_543_bool, 8);
	if(var_543_bool != 0) {
		int var_545_int; object var_546_object;
		var_36_object = var_546_object;
		TaskCall(10);
		func_3211(var_547_object, var_545_int, var_546_object);
		TaskReturn();
		return 0;
	}
	bool var_607_bool;
	func_4789(var_607_bool, 10);
	if(var_607_bool != 0) {
		int var_609_int; object var_610_object;
		var_36_object = var_610_object;
		TaskCall(12);
		func_3584(var_611_object, var_609_int, var_610_object);
		TaskReturn();
		return 0;
	}
	bool var_687_bool;
	func_4789(var_687_bool, 11);
	if(var_687_bool != 0) {
		int var_689_int; object var_690_object;
		var_36_object = var_690_object;
		TaskCall(14);
		func_3933(var_691_object, var_689_int, var_690_object);
		TaskReturn();
		return 0;
	}
	bool var_787_bool;
	func_4795(var_787_bool);
}


void func_3584(object var_0_object, int var_609_int, object var_610_object)
{
	var_0_object = var_610_object;
	bool var_620_bool; object var_621_object;
	var_610_object = var_621_object;
	func_4675(var_620_bool, var_621_object);
	if(!var_620_bool) { //@nz
		var_609_int = -2;
		return 8;
	}
	object var_616_object;
	@CreateDialog(var_616_object);
	int var_623_int;
	func_4804(var_623_int);
	var_616_object->SetNPCName(var_623_int);
	string var_624_string;
	func_4806(var_624_string);
	var_616_object->SetPhoto(var_624_string);
	int var_625_int;
	func_5470(var_625_int);
	var_616_object->SetPlayerName(var_625_int);
	bool var_617_bool;
	@IsOverrideActive(var_617_bool);
	if(var_617_bool != 0) {
		var_609_int = -2;
		return 8;
	}
	@DoDialog(var_616_object);
	object var_627_object; object var_628_object;
	var_610_object = var_627_object;
	var_616_object = var_628_object;
	TaskCall(13);
	func_3647(var_629_object, var_630_object, var_631_string, var_632_bool, var_627_object, var_628_object);
	TaskReturn();
	bool var_619_bool;
	var_616_object->IsDialogEnd(var_619_bool);
	
	for(;;) {
		var_685_bool = !var_619_bool; //@nz
		if(var_685_bool == 0) goto Label_3636;
		@sync();
		var_616_object->IsDialogEnd(var_619_bool);
	}
	
Label_3636:
	object var_686_object;
	var_610_object = var_686_object;
	func_4731();
	@StopDialog(var_616_object);
	var_616_object->GetReturnValue(-1);
	int var_618_int = var_609_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_520(object var_2_object, string var_70_string)
{
	bool var_71_bool;
	func_4808(var_71_bool);
	if(!var_71_bool) //@nz
		return 0;
	if(var_70_string == var_2_object)
		return 0;
	string var_74_string;
	func_4735(var_74_string);
	var_2_object = var_74_string;
}


// @pe
void func_5384(bool var_306_bool)
{
	int var_308_int;
	func_4770(var_308_int, "KnowKapella");
	if(var_308_int == 1)
		var_306_bool = true;
	var_306_bool = false;
}


// @pe
void func_5132(bool var_274_bool)
{
	int var_276_int;
	func_4770(var_276_int, "KnowMark");
	if(var_276_int == 1)
		var_274_bool = true;
	var_274_bool = false;
}


// @pe
void func_2578(object var_2_object, string var_209_string)
{
	bool var_210_bool;
	func_4808(var_210_bool);
	if(!var_210_bool) //@nz
		return 0;
	if(var_209_string == var_2_object)
		return 0;
	string var_213_string;
	func_4735(var_213_string);
	var_2_object = var_213_string;
}


void func_786(object var_0_object, int var_160_int, object var_161_object)
{
	var_0_object = var_161_object;
	bool var_171_bool; object var_172_object;
	var_161_object = var_172_object;
	func_4675(var_171_bool, var_172_object);
	if(!var_171_bool) { //@nz
		var_160_int = -2;
		return 8;
	}
	object var_167_object;
	@CreateDialog(var_167_object);
	int var_174_int;
	func_4804(var_174_int);
	var_167_object->SetNPCName(var_174_int);
	string var_175_string;
	func_4806(var_175_string);
	var_167_object->SetPhoto(var_175_string);
	int var_176_int;
	func_5470(var_176_int);
	var_167_object->SetPlayerName(var_176_int);
	bool var_168_bool;
	@IsOverrideActive(var_168_bool);
	if(var_168_bool != 0) {
		var_160_int = -2;
		return 8;
	}
	@DoDialog(var_167_object);
	object var_178_object; object var_179_object;
	var_161_object = var_178_object;
	var_167_object = var_179_object;
	TaskCall(7);
	func_849(var_180_object, var_181_object, var_182_string, var_183_bool, var_178_object, var_179_object);
	TaskReturn();
	bool var_170_bool;
	var_167_object->IsDialogEnd(var_170_bool);
	
	for(;;) {
		var_358_bool = !var_170_bool; //@nz
		if(var_358_bool == 0) goto Label_838;
		@sync();
		var_167_object->IsDialogEnd(var_170_bool);
	}
	
Label_838:
	object var_359_object;
	var_161_object = var_359_object;
	func_4731();
	@StopDialog(var_167_object);
	var_167_object->GetReturnValue(-1);
	int var_169_int = var_160_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_5396(bool var_290_bool)
{
	int var_292_int;
	func_4770(var_292_int, "KnowStamatins");
	if(var_292_int == 1)
		var_290_bool = true;
	var_290_bool = false;
}


// @pe
void func_4886(void)
{
	@SetVariable("d2q03MariaGotoViktor", 1);
}


// @pe
void func_5144(bool var_48_bool)
{
	int var_50_int;
	func_4770(var_50_int, "d6q01");
	if(var_50_int == 0) {
		var_48_bool = true;
		return 0;
	}
	var_48_bool = false;
}


// @pe
void func_4892(void)
{
	@SetVariable("KnowViktor", 1);
}


// @pe
void func_3357(object var_2_object, string var_53_string)
{
	bool var_54_bool;
	func_4808(var_54_bool);
	if(!var_54_bool) //@nz
		return 0;
	if(var_53_string == var_2_object)
		return 0;
	string var_57_string;
	func_4735(var_57_string);
	var_2_object = var_57_string;
}


// @pe
void func_4127(object var_2_object, string var_72_string)
{
	bool var_73_bool;
	func_4808(var_73_bool);
	if(!var_73_bool) //@nz
		return 0;
	if(var_72_string == var_2_object)
		return 0;
	string var_76_string;
	func_4735(var_76_string);
	var_2_object = var_76_string;
}


// @pe
void func_5408(bool var_214_bool)
{
	var_214_bool = false;
}


// @pe
void func_4898(void)
{
	@SetVariable("ood6Maria1", 1);
}


void func_5411(object var_150_object)
{
	object var_152_object;
	@GetDiaryRoot(var_152_object);
	if(!var_152_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_150_object = false;
	}
	var_152_object = var_150_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_5156(bool var_56_bool)
{
	int var_58_int;
	func_4770(var_58_int, "ood6Maria1");
	if(var_58_int == 0) {
		var_56_bool = true;
		return 0;
	}
	var_56_bool = false;
}


// @pe
void func_4904(void)
{
	@SetVariable("ood6Maria2", 1);
}


void func_4651(object var_181_object, string var_182_string, int var_183_int)
{
	int var_185_int;
	var_181_object->GetProperty(var_182_string, var_185_int);
	var_181_object->SetProperty(var_182_string, (var_185_int + var_183_int));
}


// @pe
void func_4910(void)
{
	@SetVariable("ood8Maria1", 1);
}


// @pe
void func_5168(bool var_96_bool)
{
	int var_98_int;
	func_4770(var_98_int, "ood6Maria2");
	if(var_98_int == 0) {
		var_96_bool = true;
		return 0;
	}
	var_96_bool = false;
}


void func_49(object var_0_object, int var_39_int, object var_40_object)
{
	var_0_object = var_40_object;
	bool var_50_bool; object var_51_object;
	var_40_object = var_51_object;
	func_4675(var_50_bool, var_51_object);
	if(!var_50_bool) { //@nz
		var_39_int = -2;
		return 8;
	}
	object var_46_object;
	@CreateDialog(var_46_object);
	int var_91_int;
	func_4804(var_91_int);
	var_46_object->SetNPCName(var_91_int);
	string var_92_string;
	func_4806(var_92_string);
	var_46_object->SetPhoto(var_92_string);
	int var_93_int;
	func_5470(var_93_int);
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
		var_149_bool = !var_49_bool; //@nz
		if(var_149_bool == 0) goto Label_101;
		@sync();
		var_46_object->IsDialogEnd(var_49_bool);
	}
	
Label_101:
	object var_150_object;
	var_40_object = var_150_object;
	func_4731();
	@StopDialog(var_46_object);
	var_46_object->GetReturnValue(-1);
	int var_48_int = var_39_int;
}
EMIT "Stack[-4] = 0";


void func_4658(bool var_36_bool, object var_37_object)
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


void func_5424(bool var_141_bool, object var_142_object, int var_143_int)
{
	object var_150_object;
	func_5411(var_150_object);
	object var_147_object;
	var_150_object = var_147_object;
	object var_148_object;
	var_147_object->Find(var_143_int, var_148_object);
	if(!var_148_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_143_int);
		var_141_bool = false;
	}
	var_148_object->AddChild(var_142_object);
	@SetVariable("player_diary", 1);
	int var_149_int;
	var_142_object->GetCategory(var_149_int);
	@SetDiarySection(var_149_int);
	var_141_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


// @pe
void func_4916(void)
{
	@SetVariable("KnowMaria", 1);
}


void func_2359(object var_0_object, int var_363_int, object var_364_object)
{
	var_0_object = var_364_object;
	bool var_374_bool; object var_375_object;
	var_364_object = var_375_object;
	func_4675(var_374_bool, var_375_object);
	if(!var_374_bool) { //@nz
		var_363_int = -2;
		return 8;
	}
	object var_370_object;
	@CreateDialog(var_370_object);
	int var_377_int;
	func_4804(var_377_int);
	var_370_object->SetNPCName(var_377_int);
	string var_378_string;
	func_4806(var_378_string);
	var_370_object->SetPhoto(var_378_string);
	int var_379_int;
	func_5470(var_379_int);
	var_370_object->SetPlayerName(var_379_int);
	bool var_371_bool;
	@IsOverrideActive(var_371_bool);
	if(var_371_bool != 0) {
		var_363_int = -2;
		return 8;
	}
	@DoDialog(var_370_object);
	object var_381_object; object var_382_object;
	var_364_object = var_381_object;
	var_370_object = var_382_object;
	TaskCall(9);
	func_2422(var_383_object, var_384_object, var_385_string, var_386_bool, var_381_object, var_382_object);
	TaskReturn();
	bool var_373_bool;
	var_370_object->IsDialogEnd(var_373_bool);
	
	for(;;) {
		var_452_bool = !var_373_bool; //@nz
		if(var_452_bool == 0) goto Label_2411;
		@sync();
		var_370_object->IsDialogEnd(var_373_bool);
	}
	
Label_2411:
	object var_453_object;
	var_364_object = var_453_object;
	func_4731();
	@StopDialog(var_370_object);
	var_370_object->GetReturnValue(-1);
	int var_372_int = var_363_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_4922(void)
{
	@SetVariable("ood11Maria1", 1);
}


// @pe
void func_5180(bool var_41_bool)
{
	int var_43_int;
	func_4770(var_43_int, "ood8Maria1");
	if(var_43_int == 0) {
		var_41_bool = true;
		return 0;
	}
	var_41_bool = false;
}


void func_4670(bool var_36_bool)
{
	bool var_38_bool;
	@IsLoaded(var_38_bool);
	var_38_bool = var_36_bool;
}


// @pe
void func_3647(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_627_object, object var_628_object)
{
	var_0_object = var_628_object;
	var_1_object = var_627_object;
	var_3_object = false;
	if(1 != 0) {
		bool var_634_bool = false;
		bool var_635_bool = false;
		bool var_636_bool;
		func_5372(var_1_object);
		if(var_636_bool != 0) {
			bool var_642_bool;
			func_5360(var_1_object);
			if(!var_642_bool) //@nz
				var_635_bool = true;
		}
		if(var_635_bool != 0) {
			bool var_649_bool;
			func_5348(var_1_object);
			if(!var_649_bool) //@nz
				var_634_bool = true;
		}
		if(var_634_bool != 0) {
			object var_656_object; object var_657_object;
			var_656_object = var_1_object;
			var_657_object = var_0_object;
			func_4990();
			func_3750(var_628_object, "Neutral");
			var_0_object->SetMessage(12892); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(12893, 14096, 14095); //@t
			var_0_object->AddReply(12969, 14175, 14174); //@t
		} else {
					func_3750(var_628_object, "Neutral");
					var_0_object->SetMessage(12974); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(12975, -1, 14180); //@t
		}
	}
	for(;;) {
		bool var_672_bool;
		func_4808(var_672_bool);
		if(var_672_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_object != 0) {
				} else {
					func_4735(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_object != 0) {
					goto Label_3749;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_3749:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0xe43";


// @pe
void func_4928(void)
{
	@SetVariable("ood11Maria2", 1);
}


void func_4675(bool var_50_bool, object var_51_object)
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
	func_4760(var_75_cvector, (var_64_cvector ^ [0.0, 1.0, 0.0]));
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
void func_4934(void)
{
	@SetVariable("ood11Maria3", 1);
}


// @pe
void func_5192(bool var_258_bool)
{
	int var_260_int;
	func_4770(var_260_int, "KnowGeorg");
	if(var_260_int == 1)
		var_258_bool = true;
	var_258_bool = false;
}


// @pe
void func_4940(void)
{
	@SetVariable("ood2Maria3", 1);
}


void func_5453(object var_121_object)
{
	object var_124_object; object var_125_object;
	@GetMainOutdoorScene(var_124_object);
	if(var_124_object == null) {
		@Trace("Can't find main outdoor scene");
		var_125_object = null;
		var_125_object = var_121_object;
	}
	var_124_object->GetMap(var_125_object);
	var_125_object = var_121_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_849(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_178_object, object var_179_object)
{
	var_0_object = var_179_object;
	var_1_object = var_178_object;
	var_3_object = false;
	if(1 != 0) {
		bool var_185_bool;
		func_5050(var_1_object);
		if(!var_185_bool) { //@nz
			func_1137(var_179_object, "Neutral");
			var_0_object->SetMessage(6253); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(6254, 6921, 6920); //@t
			var_0_object->AddReply(6259, 6926, 6925); //@t
		} else {
					bool var_214_bool;
					func_5014(var_1_object);
					if(var_214_bool == 0) goto Label_906;
					func_1137(var_179_object, "Neutral");
					var_0_object->SetMessage(5533); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(5534, 6099, 6098); //@t
					var_0_object->AddReply(5571, 6140, 6139); //@t
		}
	}
Label_1107:
	for(;;) {
		bool var_206_bool;
		func_4808(var_206_bool);
		if(var_206_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_object != 0) {
				} else {
					func_4735(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_object != 0) {
					goto Label_1136;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_1136:
			}
			bool var_228_bool;
			func_5026(var_1_object);
			if(var_228_bool != 0) {
			func_1137(var_179_object, "Neutral");
			var_0_object->SetMessage(5574); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(5575, 6145, 6144); //@t
			goto Label_1107;
		}
		return 0;
	}
	bool var_239_bool = false;
	bool var_240_bool;
	func_5038(var_1_object);
	if(var_240_bool != 0) {
		bool var_246_bool;
		func_5098(var_246_bool, var_1_object);
		if(var_246_bool != 0)
			var_239_bool = true;
	}
	if(var_239_bool != 0) {
		func_1137(var_179_object, "Neutral");
		var_0_object->SetMessage(5527); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(5528, 6901, 6092); //@t
		var_0_object->AddReply(5529, 6187, 6093); //@t
		goto Label_1107;
	}
	bool var_258_bool;
	func_5002(var_1_object);
	if(var_258_bool != 0) {
		func_1137(var_179_object, "Neutral");
		var_0_object->SetMessage(5604); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(5605, 6180, 6179); //@t
		var_0_object->AddReply(5611, 6180, 6185); //@t
		goto Label_1107;
	}
	func_1137(var_179_object, "Neutral");
	var_0_object->SetMessage(8097); //@t
	var_0_object->ClearReplies(); //@t
	bool var_274_bool;
	func_5098(var_274_bool, var_1_object);
	if(var_274_bool != 0)
		var_0_object->AddReply(8098, -1, 8921); //@t
	bool var_279_bool = false;
	bool var_280_bool;
	func_5288(var_1_object);
	if(var_280_bool != 0) {
		bool var_286_bool;
		func_5038(var_1_object);
		if(var_286_bool != 0)
			var_279_bool = true;
	}
	if(var_279_bool != 0)
		var_0_object->AddReply(8109, 8947, 8932); //@t
	bool var_291_bool = false;
	bool var_292_bool;
	func_5192(var_1_object);
	if(var_292_bool != 0) {
		bool var_298_bool;
		func_5300(var_1_object);
		if(var_298_bool != 0)
			var_291_bool = true;
	}
	if(var_291_bool != 0)
		var_0_object->AddReply(8111, 8948, 8934); //@t
	bool var_307_bool = false;
	bool var_308_bool;
	func_5132(var_1_object);
	if(var_308_bool != 0) {
		bool var_314_bool;
		func_5312(var_1_object);
		if(var_314_bool != 0)
			var_307_bool = true;
	}
	if(var_307_bool != 0)
		var_0_object->AddReply(8115, 8949, 8938); //@t
	bool var_323_bool = false;
	bool var_324_bool;
	func_5396(var_1_object);
	if(var_324_bool != 0) {
		bool var_330_bool;
		func_5324(var_1_object);
		if(var_330_bool != 0)
			var_323_bool = true;
	}
	if(var_323_bool != 0)
		var_0_object->AddReply(8117, 8950, 8940); //@t
	bool var_339_bool = false;
	bool var_340_bool;
	func_5384(var_1_object);
	if(var_340_bool != 0) {
		bool var_346_bool;
		func_5336(var_1_object);
		if(var_346_bool != 0)
			var_339_bool = true;
	}
	if(var_339_bool != 0)
		var_0_object->AddReply(8119, 8951, 8942); //@t
	var_0_object->AddReply(15220, -1, 16497); //@t
	goto Label_1107;
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x355";


// @pe
void func_4946(void)
{
	@SetVariable("resque_list", 1);
	func_5515();
}


// @pe
void func_5204(bool var_54_bool)
{
	int var_56_int;
	func_4770(var_56_int, "d11q01");
	if(var_56_int == 1)
		var_54_bool = true;
	var_54_bool = false;
}


void func_345(object var_0_object, int var_459_int, object var_460_object)
{
	var_0_object = var_460_object;
	bool var_470_bool; object var_471_object;
	var_460_object = var_471_object;
	func_4675(var_470_bool, var_471_object);
	if(!var_470_bool) { //@nz
		var_459_int = -2;
		return 8;
	}
	object var_466_object;
	@CreateDialog(var_466_object);
	int var_473_int;
	func_4804(var_473_int);
	var_466_object->SetNPCName(var_473_int);
	string var_474_string;
	func_4806(var_474_string);
	var_466_object->SetPhoto(var_474_string);
	int var_475_int;
	func_5470(var_475_int);
	var_466_object->SetPlayerName(var_475_int);
	bool var_467_bool;
	@IsOverrideActive(var_467_bool);
	if(var_467_bool != 0) {
		var_459_int = -2;
		return 8;
	}
	@DoDialog(var_466_object);
	object var_477_object; object var_478_object;
	var_460_object = var_477_object;
	var_466_object = var_478_object;
	TaskCall(5);
	func_408(var_479_object, var_480_object, var_481_string, var_482_bool, var_477_object, var_478_object);
	TaskReturn();
	bool var_469_bool;
	var_466_object->IsDialogEnd(var_469_bool);
	
	for(;;) {
		var_541_bool = !var_469_bool; //@nz
		if(var_541_bool == 0) goto Label_397;
		@sync();
		var_466_object->IsDialogEnd(var_469_bool);
	}
	
Label_397:
	object var_542_object;
	var_460_object = var_542_object;
	func_4731();
	@StopDialog(var_466_object);
	var_466_object->GetReturnValue(-1);
	int var_468_int = var_459_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_4955(object var_101_object)
{
	var_101_object->SetReturnValue(2000);
}


void func_3933(object var_0_object, int var_689_int, object var_690_object)
{
	var_0_object = var_690_object;
	bool var_700_bool; object var_701_object;
	var_690_object = var_701_object;
	func_4675(var_700_bool, var_701_object);
	if(!var_700_bool) { //@nz
		var_689_int = -2;
		return 8;
	}
	object var_696_object;
	@CreateDialog(var_696_object);
	int var_703_int;
	func_4804(var_703_int);
	var_696_object->SetNPCName(var_703_int);
	string var_704_string;
	func_4806(var_704_string);
	var_696_object->SetPhoto(var_704_string);
	int var_705_int;
	func_5470(var_705_int);
	var_696_object->SetPlayerName(var_705_int);
	bool var_697_bool;
	@IsOverrideActive(var_697_bool);
	if(var_697_bool != 0) {
		var_689_int = -2;
		return 8;
	}
	@DoDialog(var_696_object);
	object var_707_object; object var_708_object;
	var_690_object = var_707_object;
	var_696_object = var_708_object;
	TaskCall(15);
	func_3996(var_709_object, var_710_object, var_711_string, var_712_bool, var_707_object, var_708_object);
	TaskReturn();
	bool var_699_bool;
	var_696_object->IsDialogEnd(var_699_bool);
	
	for(;;) {
		var_785_bool = !var_699_bool; //@nz
		if(var_785_bool == 0) goto Label_3985;
		@sync();
		var_696_object->IsDialogEnd(var_699_bool);
	}
	
Label_3985:
	object var_786_object;
	var_690_object = var_786_object;
	func_4731();
	@StopDialog(var_696_object);
	var_696_object->GetReturnValue(-1);
	int var_698_int = var_689_int;
}
EMIT "Stack[-4] = 0";


void func_5470(int var_93_int)
{
	int var_95_int;
	@GetVariable("player", var_95_int);
	if(var_95_int == 0) {
		var_93_int = 200001;
		return 2;
	EMIT "GOTO 0x156d";
	}
	if(var_95_int == 1) {
		var_93_int = 200002;
		return 2;
	}
	var_93_int = 200003;
}


// @pe
void func_5216(bool var_62_bool)
{
	int var_64_int;
	func_4770(var_64_int, "ood11Maria1");
	if(var_64_int == 0) {
		var_62_bool = true;
		return 0;
	}
	var_62_bool = false;
}


// @pe
void func_4960(void)
{
	@SetVariable("ood1Maria5", 1);
}


// @pe
void func_4966(void)
{
	@SetVariable("ood1Maria6", 1);
}


// @pe
void func_5228(bool var_101_bool)
{
	int var_103_int;
	func_4770(var_103_int, "ood11Maria2");
	if(var_103_int == 0) {
		var_101_bool = true;
		return 0;
	}
	var_101_bool = false;
}


// @pe
void func_4972(void)
{
	@SetVariable("ood1Maria7", 1);
}


void func_5487(void)
{
	@Trace("Adding diary entry");
	object var_136_object;
	@CreateDiaryEntry(var_136_object, 134, 2, 15285);
	bool var_141_bool; object var_142_object;
	var_136_object = var_142_object;
	func_5424(var_141_bool, var_142_object, 11);
}
EMIT "Stack[-1] = 0";


// @pe
void func_112(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_102_object, object var_103_object)
{
	var_0_object = var_103_object;
	var_3_object = false;
	if(1 != 0) {
		object var_109_object; object var_110_object;
		var_109_object = var_102_object;
		var_110_object = var_0_object;
		func_4916();
		func_185(var_103_object, "Neutral");
		var_0_object->SetMessage(72); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(73, 87, 85); //@t
		var_0_object->AddReply(74, 88, 86); //@t
		var_0_object->AddReply(86, 87, 98); //@t
		var_0_object->AddReply(87, 87, 99); //@t
		goto Label_155;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x74";
	}
Label_155:
	bool var_141_bool;
	func_4808(var_141_bool);
	if(var_141_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_4735(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_184;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_184:
		return 0;

	}
	
}


// @pe
void func_1137(object var_2_object, string var_158_string)
{
	bool var_159_bool;
	func_4808(var_159_bool);
	if(!var_159_bool) //@nz
		return 0;
	if(var_158_string == var_2_object)
		return 0;
	string var_162_string;
	func_4735(var_162_string);
	var_2_object = var_162_string;
}


// @pe
void func_4978(void)
{
	@SetVariable("ood1Maria8", 1);
}


// @pe
void func_2422(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_381_object, object var_382_object)
{
	var_0_object = var_382_object;
	var_1_object = var_381_object;
	var_3_object = false;
	if(1 != 0) {
		bool var_388_bool;
		func_5276(var_1_object);
		if(var_388_bool != 0) {
			object var_394_object; object var_395_object;
			var_394_object = var_1_object;
			var_395_object = var_0_object;
			func_4940();
			func_2578(var_382_object, "Neutral");
			var_0_object->SetMessage(14519); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(14520, 15760, 15759); //@t
		} else {
					func_2578(var_382_object, "Neutral");
					var_0_object->SetMessage(6887); //@t
					var_0_object->ClearReplies(); //@t
					bool var_417_bool = false;
					bool var_418_bool;
					func_5062(var_1_object);
					if(var_418_bool != 0) {
						bool var_424_bool;
						func_5086(var_1_object);
						if(var_424_bool != 0)
							var_417_bool = true;
					}
					if(var_417_bool != 0)
						var_0_object->AddReply(6888, 7595, 7594); //@t
					bool var_433_bool = false;
					bool var_434_bool;
					func_5074(var_1_object);
					if(var_434_bool != 0) {
						bool var_440_bool;
						func_5120(var_1_object);
						if(var_440_bool != 0)
							var_433_bool = true;
					}
					if(var_433_bool != 0)
						var_0_object->AddReply(6918, 7625, 7624); //@t
					var_0_object->AddReply(7400, -1, 8166); //@t
		}
	}
	for(;;) {
		bool var_407_bool;
		func_4808(var_407_bool);
		if(var_407_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_object != 0) {
				} else {
					func_4735(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_object != 0) {
					goto Label_2577;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_2577:
			return 0;

		}

	}
}
EMIT "PushEmpty(string)";
EMIT "Stack[-1] = \"Neutral\" // @poff=0";
EMIT "Call 0xa12";
EMIT "Pop(1)";
EMIT "Push((int) 9351)";
EMIT "@@@ SetMessage(Stack[-1]); Obj=0 // @poff=77";
EMIT "Pop(1)";
EMIT "@@@ ClearReplies(); Obj=0 // @poff=88";
EMIT "Pop(0)";
EMIT "Push((int) 9352)";
EMIT "Push((int) 10275)";
EMIT "Push((int) 10274)";
EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
EMIT "Pop(3)";
EMIT "Push((int) 9361)";
EMIT "Push((int) 10275)";
EMIT "Push((int) 10284)";
EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
EMIT "Pop(3)";
EMIT "GOTO 0x9f4";
EMIT "PushEmpty(string)";
EMIT "Stack[-1] = \"Neutral\" // @poff=0";
EMIT "Call 0xa12";
EMIT "Pop(1)";
EMIT "Push((int) 9362)";
EMIT "@@@ SetMessage(Stack[-1]); Obj=0 // @poff=77";
EMIT "Pop(1)";
EMIT "@@@ ClearReplies(); Obj=0 // @poff=88";
EMIT "Pop(0)";
EMIT "Push((int) 9363)";
EMIT "Push((int) 10288)";
EMIT "Push((int) 10287)";
EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
EMIT "Pop(3)";
EMIT "Push((int) 9371)";
EMIT "Push((int) 10296)";
EMIT "Push((int) 10295)";
EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
EMIT "Pop(3)";
EMIT "GOTO 0x9f4";
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x97a";


// @pe
void func_5240(bool var_107_bool)
{
	int var_109_int;
	func_4770(var_109_int, "d11q01");
	if(var_109_int >= 4)
		var_107_bool = true;
	var_107_bool = false;
}


// @pe
void func_4984(void)
{
	@SetVariable("d6MariaVisit", 1);
}


// @pe
void func_4731(void)
{
	@CameraSwitchToNormal();
}


// @pe
void func_4990(void)
{
	@SetVariable("ood10Maria1", 1);
}


void func_4735(string var_40_string)
{
	@Trace("playing " + var_40_string);
	float var_43_float;
	float var_44_float;
	@lshGetAnimTimes(var_40_string, var_43_float, var_44_float);
	@lshPlayAnimation(var_43_float, var_44_float);
	@Trace("start: " + var_43_float);
	@Trace("end: " + var_44_float);
}


void func_5503(int var_54_int)
{
	int var_56_int;
	@GetVariable(("vol_" + var_54_int), var_56_int);
	@SetVariable(("vol_" + var_54_int), (var_56_int | 8));
}


// @pe
void func_5252(bool var_218_bool)
{
	int var_220_int;
	func_4770(var_220_int, "d11q01");
	if(var_220_int == 1000)
		var_218_bool = true;
	var_218_bool = false;
}


// @pe
void func_4996(void)
{
	@SetVariable("d10q01MariaSavePetr", 1);
}


// @pe
void func_5002(bool var_224_bool)
{
	int var_226_int;
	func_4770(var_226_int, "ood1Maria1");
	if(var_226_int == 0) {
		var_224_bool = true;
		return 0;
	}
	var_224_bool = false;
}


void func_3211(object var_0_object, int var_545_int, object var_546_object)
{
	var_0_object = var_546_object;
	bool var_556_bool; object var_557_object;
	var_546_object = var_557_object;
	func_4675(var_556_bool, var_557_object);
	if(!var_556_bool) { //@nz
		var_545_int = -2;
		return 8;
	}
	object var_552_object;
	@CreateDialog(var_552_object);
	int var_559_int;
	func_4804(var_559_int);
	var_552_object->SetNPCName(var_559_int);
	string var_560_string;
	func_4806(var_560_string);
	var_552_object->SetPhoto(var_560_string);
	int var_561_int;
	func_5470(var_561_int);
	var_552_object->SetPlayerName(var_561_int);
	bool var_553_bool;
	@IsOverrideActive(var_553_bool);
	if(var_553_bool != 0) {
		var_545_int = -2;
		return 8;
	}
	@DoDialog(var_552_object);
	object var_563_object; object var_564_object;
	var_546_object = var_563_object;
	var_552_object = var_564_object;
	TaskCall(11);
	func_3274(var_565_object, var_566_object, var_567_string, var_568_bool, var_563_object, var_564_object);
	TaskReturn();
	bool var_555_bool;
	var_552_object->IsDialogEnd(var_555_bool);
	
	for(;;) {
		var_605_bool = !var_555_bool; //@nz
		if(var_605_bool == 0) goto Label_3263;
		@sync();
		var_552_object->IsDialogEnd(var_555_bool);
	}
	
Label_3263:
	object var_606_object;
	var_546_object = var_606_object;
	func_4731();
	@StopDialog(var_552_object);
	var_552_object->GetReturnValue(-1);
	int var_554_int = var_545_int;
}
EMIT "Stack[-4] = 0";


void func_5515(void)
{
	int var_47_int; int var_48_int;
	var_47_int = 0;
	
	for(;;) {
		if(var_47_int < 3) {
			@irand(var_48_int, 13);
			if(var_48_int == 0) {
				func_5503(11);
			} else {
			if(var_48_int == 1) {
				func_5503(18);
			} else if(var_48_int == 2) {
				func_5503(21);
			} else if(var_48_int == 3) {
				func_5503(2);
			} else if(var_48_int == 4) {
				func_5503(9);
			} else if(var_48_int == 5) {
				func_5503(13);
			} else if(var_48_int == 6) {
				func_5503(24);
			} else if(var_48_int == 7) {
				func_5503(10);
			} else if(var_48_int == 8) {
				func_5503(20);
			} else if(var_48_int == 9) {
				func_5503(21);
			} else if(var_48_int == 10) {
				func_5503(3);
			} else if(var_48_int == 11) {
				func_5503(19);
			} else if(var_48_int == 12) {
				func_5503(26);
			}
		}
		return 4;
		}
		var_47_int += 1;
	}
	
}


// @pe
void func_5264(bool var_116_bool)
{
	int var_118_int;
	func_4770(var_118_int, "ood11Maria3");
	if(var_118_int == 0) {
		var_116_bool = true;
		return 0;
	}
	var_116_bool = false;
}


void func_4753(void)
{
	bool var_38_bool;
	func_4808(var_38_bool);
	if(var_38_bool != 0)
		@lshStopSpeech();
}


// @pe
void func_5014(bool var_180_bool)
{
	int var_182_int;
	func_4770(var_182_int, "ood1Maria2");
	if(var_182_int == 0) {
		var_180_bool = true;
		return 0;
	}
	var_180_bool = false;
}


void func_4760(cvector var_75_cvector, cvector var_76_cvector)
{
	float var_79_float = sqrt(var_76_cvector | var_76_cvector);
	if(var_79_float < 0.000001)
		var_75_cvector = [0.0, 0.0, 0.0];
	var_75_cvector = var_76_cvector / var_79_float;
}


// @pe
void func_408(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_477_object, object var_478_object)
{
	var_0_object = var_478_object;
	var_1_object = var_477_object;
	var_3_object = false;
	if(1 != 0) {
		bool var_484_bool = false;
		bool var_485_bool;
		func_5144(var_1_object);
		if(var_485_bool != 0) {
			bool var_491_bool;
			func_5156(var_1_object);
			if(var_491_bool != 0)
				var_484_bool = true;
		}
		if(var_484_bool != 0) {
			object var_497_object; object var_498_object;
			var_497_object = var_1_object;
			var_498_object = var_0_object;
			func_4898();
			object var_501_object; object var_502_object;
			var_501_object = var_1_object;
			var_502_object = var_0_object;
			func_4984();
			func_520(var_478_object, "Neutral");
			var_0_object->SetMessage(3206); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(3207, 3543, 3540); //@t
			var_0_object->AddReply(3208, 3542, 3541); //@t
		} else {
					object var_525_object; object var_526_object;
					var_525_object = var_1_object;
					var_526_object = var_0_object;
					func_4984();
					func_520(var_478_object, "Neutral");
					var_0_object->SetMessage(12086); //@t
					var_0_object->ClearReplies(); //@t
					bool var_529_bool;
					func_5168(var_1_object);
					if(var_529_bool != 0)
						var_0_object->AddReply(12087, 13314, 13313); //@t
					var_0_object->AddReply(12094, -1, 13320); //@t
		}
	}
	for(;;) {
		bool var_517_bool;
		func_4808(var_517_bool);
		if(var_517_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_object != 0) {
				} else {
					func_4735(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_object != 0) {
					goto Label_519;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_519:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x19c";


// @pe
void func_5276(bool var_197_bool)
{
	int var_199_int;
	func_4770(var_199_int, "ood2Maria3");
	if(var_199_int == 0) {
		var_197_bool = true;
		return 0;
	}
	var_197_bool = false;
}


// @pe
void func_3996(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_707_object, object var_708_object)
{
	var_0_object = var_708_object;
	var_1_object = var_707_object;
	var_3_object = false;
	if(1 != 0) {
		bool var_714_bool = false;
		bool var_715_bool;
		func_5204(var_1_object);
		if(var_715_bool != 0) {
			bool var_721_bool;
			func_5216(var_1_object);
			if(var_721_bool != 0)
				var_714_bool = true;
		}
		if(var_714_bool != 0) {
			object var_727_object; object var_728_object;
			var_727_object = var_1_object;
			var_728_object = var_0_object;
			func_4922();
			func_4127(var_708_object, "Neutral");
			var_0_object->SetMessage(14369); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(14370, 15594, 15593); //@t
			var_0_object->AddReply(14376, -1, 15599); //@t
		} else {
					func_4127(var_708_object, "Neutral");
					var_0_object->SetMessage(14377); //@t
					var_0_object->ClearReplies(); //@t
					bool var_753_bool = false;
					bool var_754_bool = false;
					bool var_755_bool;
					func_5216(var_1_object);
					if(!var_755_bool) { //@nz
						bool var_758_bool;
						func_5228(var_1_object);
						if(var_758_bool != 0)
							var_754_bool = true;
					}
					if(var_754_bool != 0) {
						bool var_764_bool;
						func_5240(var_1_object);
						if(var_764_bool != 0)
							var_753_bool = true;
					}
					if(var_753_bool != 0)
						var_0_object->AddReply(14378, 15602, 15601); //@t
					bool var_773_bool;
					func_5264(var_1_object);
					if(var_773_bool != 0)
						var_0_object->AddReply(14400, 15626, 15625); //@t
					var_0_object->AddReply(14419, -1, 15644); //@t
		}
	}
	for(;;) {
		bool var_743_bool;
		func_4808(var_743_bool);
		if(var_743_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_object != 0) {
				} else {
					func_4735(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_object != 0) {
					goto Label_4126;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_4126:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0xfa0";


void func_4770(int var_56_int, string var_57_string)
{
	int var_59_int;
	@GetVariable(var_57_string, var_59_int);
	var_59_int = var_56_int;
}


// @pe
void func_5026(bool var_194_bool)
{
	int var_196_int;
	func_4770(var_196_int, "ood1Maria3");
	if(var_196_int == 0) {
		var_194_bool = true;
		return 0;
	}
	var_194_bool = false;
}


// @pe
void func_3750(object var_2_object, string var_75_string)
{
	bool var_76_bool;
	func_4808(var_76_bool);
	if(!var_76_bool) //@nz
		return 0;
	if(var_75_string == var_2_object)
		return 0;
	string var_79_string;
	func_4735(var_79_string);
	var_2_object = var_79_string;
}


void func_4775(float var_132_float)
{
	float var_134_float;
	@GetGameTime(var_134_float);
	var_134_float = var_132_float;
}


// @pe
void func_5288(bool var_246_bool)
{
	int var_248_int;
	func_4770(var_248_int, "KnowKaterina");
	if(var_248_int == 1)
		var_246_bool = true;
	var_246_bool = false;
}


void func_4780(int var_154_int)
{
	float var_156_float;
	@GetGameTime(var_156_float);
	var_154_int = 1 + (var_156_float / 24);
}


// @pe
void func_5038(bool var_206_bool)
{
	int var_208_int;
	func_4770(var_208_int, "ood1Maria4");
	if(var_208_int == 0) {
		var_206_bool = true;
		return 0;
	}
	var_206_bool = false;
}


// @pe
void func_5300(bool var_264_bool)
{
	int var_266_int;
	func_4770(var_266_int, "ood1Maria5");
	if(var_266_int == 0) {
		var_264_bool = true;
		return 0;
	}
	var_264_bool = false;
}


// @pe
void func_4789(bool var_152_bool, int var_153_int)
{
	int var_154_int;
	func_4780(var_154_int);
	var_152_bool = var_154_int == var_153_int;
}


// @pe
void func_185(object var_2_object, string var_45_string)
{
	bool var_46_bool;
	func_4808(var_46_bool);
	if(!var_46_bool) //@nz
		return 0;
	if(var_45_string == var_2_object)
		return 0;
	string var_49_string;
	func_4735(var_49_string);
	var_2_object = var_49_string;
}


// @pe
void func_5050(bool var_149_bool)
{
	int var_151_int;
	func_4770(var_151_int, "d1q01FirstGeorgVisit");
	if(var_151_int == 1)
		var_149_bool = true;
	var_149_bool = false;
}


void func_4795(bool var_787_bool)
{
	func_4735("No");
	bool var_789_bool;
	@lshWaitForAnimEnd(var_789_bool);
	var_789_bool = var_787_bool;
}


// @pe
void func_5312(bool var_280_bool)
{
	int var_282_int;
	func_4770(var_282_int, "ood1Maria6");
	if(var_282_int == 0) {
		var_280_bool = true;
		return 0;
	}
	var_280_bool = false;
}


void func_4804(int var_91_int)
{
	var_91_int = 2868;
}


void func_4806(string var_92_string)
{
	var_92_string = "ui/NPC_Maria.png";
}


// @pe
void func_5062(bool var_231_bool)
{
	int var_233_int;
	func_4770(var_233_int, "ood2Maria1");
	if(var_233_int == 0) {
		var_231_bool = true;
		return 0;
	}
	var_231_bool = false;
}


void func_4808(bool var_38_bool)
{
	var_38_bool = true;
}


// @pe
void func_4810(void)
{
	@SetVariable("ood1Maria1", 1);
}


// @pe
void func_3274(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_563_object, object var_564_object)
{
	var_0_object = var_564_object;
	var_1_object = var_563_object;
	var_3_object = false;
	if(1 != 0) {
		bool var_570_bool;
		func_5180(var_1_object);
		if(var_570_bool != 0) {
			object var_576_object; object var_577_object;
			var_576_object = var_1_object;
			var_577_object = var_0_object;
			func_4910();
			func_3357(var_564_object, "Neutral");
			var_0_object->SetMessage(12310); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(12311, 13471, 13470); //@t
			var_0_object->AddReply(12313, 13473, 13472); //@t
		} else {
					func_3357(var_564_object, "Neutral");
					var_0_object->SetMessage(13777); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(13778, -1, 15014); //@t
		}
	}
	for(;;) {
		bool var_592_bool;
		func_4808(var_592_bool);
		if(var_592_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_object != 0) {
				} else {
					func_4735(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_object != 0) {
					goto Label_3356;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_3356:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0xcce";


// @pe
void func_5324(bool var_296_bool)
{
	int var_298_int;
	func_4770(var_298_int, "ood1Maria7");
	if(var_298_int == 0) {
		var_296_bool = true;
		return 0;
	}
	var_296_bool = false;
}


// @pe
void func_4816(void)
{
	@SetVariable("ood1Maria2", 1);
}


// @pe
void func_5074(bool var_247_bool)
{
	int var_249_int;
	func_4770(var_249_int, "ood2Maria2");
	if(var_249_int == 0) {
		var_247_bool = true;
		return 0;
	}
	var_247_bool = false;
}


// @pe
void func_4822(void)
{
	@SetVariable("ood1Maria3", 1);
}


// @pe
void func_5336(bool var_312_bool)
{
	int var_314_int;
	func_4770(var_314_int, "ood1Maria8");
	if(var_314_int == 0) {
		var_312_bool = true;
		return 0;
	}
	var_312_bool = false;
}


// @pe
void func_4828(void)
{
	@SetVariable("ood1Maria4", 1);
}


// @pe
void func_5086(bool var_237_bool)
{
	int var_239_int;
	func_4770(var_239_int, "d2q02");
	if(var_239_int == 3)
		var_237_bool = true;
	var_237_bool = false;
}


// @pe
void func_4834(object var_178_object)
{
	@Trace("money500 is given");
	object var_181_object;
	var_178_object = var_181_object;
	func_4651(var_181_object, "money", 500);
}


// @pe
void func_5348(bool var_64_bool)
{
	int var_66_int;
	func_4770(var_66_int, "d10q01");
	if(var_66_int == 0) {
		var_64_bool = true;
		return 0;
	}
	var_64_bool = false;
}


// @pe
void func_5098(bool var_212_bool, object var_213_object)
{
	object var_215_object;
	var_213_object = var_215_object;
	func_5408(var_215_object);
	bool var_214_bool;
	if(var_214_bool != 0) {
		var_212_bool = true;
		return 0;
	}
	var_212_bool = false;
}


// @pe
void func_4845(void)
{
	@TriggerWorld("playsound", "givemoney");
}


// @pe
void func_5360(bool var_57_bool)
{
	int var_59_int;
	func_4770(var_59_int, "d10q01");
	if(var_59_int == 1000)
		var_57_bool = true;
	var_57_bool = false;
}


// @pe
void func_4851(void)
{
	@SetVariable("ood2Maria1", 1);
}


// @pe
void func_5108(bool var_343_bool)
{
	int var_345_int;
	func_4770(var_345_int, "d2q01");
	if(var_345_int == 1000)
		var_343_bool = true;
	var_343_bool = false;
}


// @pe
void func_4857(void)
{
	@SetVariable("ood2Maria2", 1);
}


// @pe
void func_5372(bool var_49_bool)
{
	int var_51_int;
	func_4770(var_51_int, "ood10Maria1");
	if(var_51_int == 0) {
		var_49_bool = true;
		return 0;
	}
	var_49_bool = false;
}


void func_5630(void)
{
	var_35_bool = GlobalVars[1];
	GlobalVars[1] = false;
}


void func_4863(void)
{
	@SetVariable("d2q02", 4);
	object var_121_object;
	func_5453(var_121_object);
	object var_118_object;
	var_121_object = var_118_object;
	float var_132_float;
	func_4775(var_132_float);
	var_118_object->AddMark("d2q02MariaGotoPetr", "pt_map_petr", 0, 15275, var_132_float);
	func_5487();
}
EMIT "Stack[-1] = 0";


