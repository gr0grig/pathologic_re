GlobalVarCount = 2
	G_VAR_0 object 
	G_VAR_1 bool 

Strings:
	SetNPCName
	SetNPCDescription
	SetPhoto
	SetPhoto2
	SetPlayerName
	IsDialogEnd
	GetReturnValue
	Distrust
	SetMessage
	ClearReplies
	AddReply
	Neutral
	all
	idle
	Repentance
	Patronage
	Anger
	GetProperty
	SetProperty
	GetPosition
	GetEyesHeight
	head
	voice_common
	c
	HasProperty
	m
	Can't find lsh animation : 
	Door 
	 not found
	locked
	add
	money
	Money
	ui/NPC_BigVlad.png
	ui/NPC_BigVlad_b.png
	b3q01
	b3q01BigVladGotoOspina
	pt_map_ospina
	AddMark
	oob3BigVlad1
	quest_b3_01
	completed
	oob1BigVlad1
	oob1BigVlad2
	oob1BigVlad3
	oob1BigVlad4
	b1q01
	b1q01BigVladGotoKapella
	pt_map_kapella
	b1q01BigVladGotoMladVlad
	pt_map_mladvlad
	cot_alexandr@door1
	cot_katerina@door1
	b2q01
	b2q01BigVladGotoAlexandr
	pt_map_alexandr
	b2q01BigVladGotoKaterina
	pt_map_katerina
	b2q01BigVladGotoMladVlad
	b2q01BigVladGotoDanko
	pt_map_eva
	b11q01KnowWhoKilled
	oob11BigVlad1
	volonteers_burah
	kill
	bigvlad
	oob11BigVlad2
	oob11BigVlad3
	oob11BigVlad4
	oob11BigVlad5
	b3BigVladVisit
	ShowMap
	b11q01
	b11KnowBigVladKill
	Can't retrieve diary root
	Find
	Can't find diary parent with id: 
	AddChild
	GetCategory
	Can't find main outdoor scene
	GetMap
	GetLocator
	Warning: outdoor scene locator 
	 doesnt exist
	Can't find map
	SetMapParams
	branch

Import:
	CreateDialog (1 args)
	IsOverrideActive (1 args)
	DoDialog (1 args)
	sync (0 args)
	StopDialog (1 args)
	lshWaitForAnimEnd (0 args)
	PlayAnimation (2 args)
	WaitForAnimEnd (0 args)
	lshStopAnimation (0 args)
	StopAnimation (0 args)
	Hold (0 args)
	StopGroup0 (0 args)
	GetPosition (1 args)
	Rotate (3 args)
	IsLoaded (1 args)
	GetEyesHeight (1 args)
	StopWorld (0 args)
	CameraTransit (3 args)
	Rotate (2 args)
	HasAnimationTrack (2 args)
	LookAsyncCamera (1 args)
	CameraWaitForPlayFinish (0 args)
	ResumeWorld (0 args)
	CameraSwitchToNormal (1 args)
	UnlookAsync (1 args)
	GetVariable (2 args)
	irand (2 args)
	SetVariable (2 args)
	lshHasAnimation (2 args)
	lshGetAnimTimes (3 args)
	lshPlayAnimation (3 args)
	Trace (1 args)
	lshHasSpeech (2 args)
	lshPlaySpeech (1 args)
	lshStopSpeech (0 args)
	self (1 args)
	FindActor (2 args)
	CreateIntVector (1 args)
	SendWorldWndMessage (2 args)
	GetInvItemByName (2 args)
	Trigger (2 args)
	Trigger (3 args)
	GetGameTime (1 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)
	GetMainOutdoorScene (1 args)

RunOp = 0xf98
RunTask = 16

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xb0 Vars = (int, int)
	GTASK_2 Vars = (object) Params = 2
	GTASK_3 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x2b2 Vars = (int, int)
	GTASK_4 Vars = (object) Params = 2
	GTASK_5 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x5e8 Vars = (int, int)
	GTASK_6 Vars = (object) Params = 2
	GTASK_7 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x8fc Vars = (int, int)
	GTASK_8 Vars = (object) Params = 2
	GTASK_9 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xa6c Vars = (int, int)
	GTASK_10 Vars = (object) Params = 2
	GTASK_11 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xdd8 Vars = (int, int)
	GTASK_12 Vars = (object) Params = 2
	GTASK_13 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xea3 Vars = (int, int)
	GTASK_14 Vars = (object) Params = 2
	GTASK_15 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xf6e Vars = (int, int)
	GTASK_16  Params = 0
		EVENT_6 Op = 0xfb0 Vars = ()
		EVENT_5 Op = 0xfb3 Vars = ()
		EVENT_0 Op = 0xfb6 Vars = (object)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0xfe5

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x1181

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x117f

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x1183

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x1185

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x143f

0x23: Pop(0)
0x24: @@ SetPlayerName(Stack[-1])
0x25: Pop(1)
0x26: Stack[-2] = (int) -1
0x27: @ IsOverrideActive(Stack[-3])
0x28: Pop(0)
0x29: Push(Stack[-3])
0x2a: IF (Stack[-1] == 0) GOTO 0x2d; Pop(1)

0x2b: Stack[-10] = (int) -2
0x2c: Return(); Pop(8)

0x2d: @ DoDialog(Stack[-4])
0x2e: Pop(0)
0x2f: PushEmpty(bool, object)
0x30: PushEmpty(object)
0x31: Call2 0x10fb

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0x103c

0x35: Pop(2)
0x36: PushEmpty(object, object)
0x37: Stack[-2] = Stack[-11]
0x38: Stack[-1] = Stack[-6]
0x39: Push(-2, 4); TaskCall(1)
0x3a: Call2 0x51

0x3b: Pop(-2, 4); TaskReturn
0x3c: Pop(2)
0x3d: @@ IsDialogEnd(Stack[-1])
0x3e: Pop(0)
0x3f: Pop(0); Push((bool) Stack[-1] == 0)
0x40: IF (Stack[-1] == 0) GOTO 0x46; Pop(1)

0x41: @ sync()
0x42: Pop(0)
0x43: @@ IsDialogEnd(Stack[-1])
0x44: Pop(0)
0x45: GOTO 0x3f

0x46: PushEmpty(object)
0x47: Stack[-1] = Stack[-10]
0x48: Call2 0x102a

0x49: Pop(1)
0x4a: @ StopDialog(Stack[-4])
0x4b: Pop(0)
0x4c: @@ GetReturnValue(Stack[-2])
0x4d: Pop(0)
0x4e: Stack[-10] = Stack[-2]
0x4f: Return(); Pop(8)

0x50: Stack[-4] = 0
0x51: PushEmpty()
0x52: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x53: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x54: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x55: Push((int) 1)
0x56: IF (Stack[-1] == 0) GOTO 0x7c; Pop(1)

0x57: PushEmpty(bool, object)
0x58: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x59: Call2 0x1363

0x5a: Pop(1)
0x5b: IF (Stack[-1] == 0) GOTO 0x6b; Pop(1)

0x5c: PushEmpty(string)
0x5d: Stack[-1] = "Distrust"
0x5e: Call2 0x9a

0x5f: Pop(1)
0x60: Push((int) 518234)
0x61: @@ SetMessage(Stack[-1])
0x62: Pop(1)
0x63: @@ ClearReplies()
0x64: Pop(0)
0x65: Push((int) 518235)
0x66: Push((int) 20742)
0x67: Push((int) 19344)
0x68: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x69: Pop(3)
0x6a: GOTO 0x7c

0x6b: PushEmpty(string)
0x6c: Stack[-1] = "Neutral"
0x6d: Call2 0x9a

0x6e: Pop(1)
0x6f: Push((int) 518236)
0x70: @@ SetMessage(Stack[-1])
0x71: Pop(1)
0x72: @@ ClearReplies()
0x73: Pop(0)
0x74: Push((int) 518237)
0x75: Push((int) -1)
0x76: Push((int) 19346)
0x77: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x78: Pop(3)
0x79: GOTO 0x7c

0x7a: Return(); Pop(0)

0x7b: GOTO 0x55

0x7c: PushEmpty(bool)
0x7d: Call2 0x1187

0x7e: Pop(0)
0x7f: IF (Stack[-1] == 0) GOTO 0x8b; Pop(1)

0x80: @ lshWaitForAnimEnd()
0x81: Pop(0)
0x82: Push( Stack[3 + Tasks[-1].StackPointer] )
0x83: IF (Stack[-1] == 0) GOTO 0x85; Pop(1)

0x84: GOTO 0x8a

0x85: PushEmpty(string)
0x86: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x87: Call2 0x10c6

0x88: Pop(1)
0x89: GOTO 0x80

0x8a: GOTO 0x99

0x8b: Push("all")
0x8c: Push("idle")
0x8d: @ PlayAnimation(Stack[-2], Stack[-1])
0x8e: Pop(2)
0x8f: @ WaitForAnimEnd()
0x90: Pop(0)
0x91: Push( Stack[3 + Tasks[-1].StackPointer] )
0x92: IF (Stack[-1] == 0) GOTO 0x94; Pop(1)

0x93: GOTO 0x99

0x94: Push("all")
0x95: Push("idle")
0x96: @ PlayAnimation(Stack[-2], Stack[-1])
0x97: Pop(2)
0x98: GOTO 0x8f

0x99: Return(); Pop(0)

0x9a: PushEmpty()
0x9b: PushEmpty(bool)
0x9c: Call2 0x1187

0x9d: Pop(0)
0x9e: Pop(1); Push((bool) Stack[-1] == 0)
0x9f: IF (Stack[-1] == 0) GOTO 0xa1; Pop(1)

0xa0: Return(); Pop(0)

0xa1: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xa2: IF (Stack[-1] == 0) GOTO 0xa4; Pop(1)

0xa3: Return(); Pop(0)

0xa4: PushEmpty(string, bool)
0xa5: Stack[-2] = Stack[-3]
0xa6: Push("")
0xa7: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xa8: IF (Stack[-1] == 0) GOTO 0xab; Pop(1)

0xa9: Stack[-1] = (bool) 0
0xaa: GOTO 0xac

0xab: Stack[-1] = (bool) 1
0xac: Call2 0x10d6

0xad: Pop(2)
0xae: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xaf: Return(); Pop(0)

0xb0: PushEmpty()
0xb1: Push((int) 1)
0xb2: IF (Stack[-1] == 0) GOTO 0x1de; Pop(1)

0xb3: PushEmpty()
0xb4: Call2 0x10f4

0xb5: Pop(0)
0xb6: Push((int) 20759)
0xb7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xb8: IF (Stack[-1] == 0) GOTO 0xcd; Pop(1)

0xb9: PushEmpty(object, object)
0xba: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xbb: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xbc: Call2 0x1206

0xbd: Pop(2)
0xbe: PushEmpty(object, object)
0xbf: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc1: Call2 0x128b

0xc2: Pop(2)
0xc3: PushEmpty(object, object)
0xc4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc6: Call2 0x11f8

0xc7: Pop(2)
0xc8: PushEmpty(object, object)
0xc9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xca: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xcb: Call2 0x11ff

0xcc: Pop(2)
0xcd: Push((int) 20765)
0xce: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xcf: IF (Stack[-1] == 0) GOTO 0xe4; Pop(1)

0xd0: PushEmpty(object, object)
0xd1: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd3: Call2 0x1206

0xd4: Pop(2)
0xd5: PushEmpty(object, object)
0xd6: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd8: Call2 0x128b

0xd9: Pop(2)
0xda: PushEmpty(object, object)
0xdb: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xdc: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xdd: Call2 0x11f8

0xde: Pop(2)
0xdf: PushEmpty(object, object)
0xe0: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xe1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe2: Call2 0x11ff

0xe3: Pop(2)
0xe4: Push((int) 19343)
0xe5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe6: IF (Stack[-1] == 0) GOTO 0x10a; Pop(1)

0xe7: PushEmpty(bool, object)
0xe8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xe9: Call2 0x1363

0xea: Pop(1)
0xeb: IF (Stack[-1] == 0) GOTO 0xfb; Pop(1)

0xec: PushEmpty(string)
0xed: Stack[-1] = "Distrust"
0xee: Call2 0x9a

0xef: Pop(1)
0xf0: Push((int) 518234)
0xf1: @@ SetMessage(Stack[-1])
0xf2: Pop(1)
0xf3: @@ ClearReplies()
0xf4: Pop(0)
0xf5: Push((int) 518235)
0xf6: Push((int) 20742)
0xf7: Push((int) 19344)
0xf8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf9: Pop(3)
0xfa: Return(); Pop(0)

0xfb: PushEmpty(string)
0xfc: Stack[-1] = "Neutral"
0xfd: Call2 0x9a

0xfe: Pop(1)
0xff: Push((int) 518236)
0x100: @@ SetMessage(Stack[-1])
0x101: Pop(1)
0x102: @@ ClearReplies()
0x103: Pop(0)
0x104: Push((int) 518237)
0x105: Push((int) -1)
0x106: Push((int) 19346)
0x107: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x108: Pop(3)
0x109: Return(); Pop(0)

0x10a: Push((int) 20742)
0x10b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x10c: IF (Stack[-1] == 0) GOTO 0x121; Pop(1)

0x10d: PushEmpty(string)
0x10e: Stack[-1] = "Neutral"
0x10f: Call2 0x9a

0x110: Pop(1)
0x111: Push((int) 519566)
0x112: @@ SetMessage(Stack[-1])
0x113: Pop(1)
0x114: @@ ClearReplies()
0x115: Pop(0)
0x116: Push((int) 519567)
0x117: Push((int) 20744)
0x118: Push((int) 20743)
0x119: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11a: Pop(3)
0x11b: Push((int) 519584)
0x11c: Push((int) 20746)
0x11d: Push((int) 20760)
0x11e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11f: Pop(3)
0x120: Return(); Pop(0)

0x121: Push((int) 20744)
0x122: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x123: IF (Stack[-1] == 0) GOTO 0x133; Pop(1)

0x124: PushEmpty(string)
0x125: Stack[-1] = "Repentance"
0x126: Call2 0x9a

0x127: Pop(1)
0x128: Push((int) 519568)
0x129: @@ SetMessage(Stack[-1])
0x12a: Pop(1)
0x12b: @@ ClearReplies()
0x12c: Pop(0)
0x12d: Push((int) 519569)
0x12e: Push((int) 20746)
0x12f: Push((int) 20745)
0x130: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x131: Pop(3)
0x132: Return(); Pop(0)

0x133: Push((int) 20746)
0x134: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x135: IF (Stack[-1] == 0) GOTO 0x145; Pop(1)

0x136: PushEmpty(string)
0x137: Stack[-1] = "Neutral"
0x138: Call2 0x9a

0x139: Pop(1)
0x13a: Push((int) 519570)
0x13b: @@ SetMessage(Stack[-1])
0x13c: Pop(1)
0x13d: @@ ClearReplies()
0x13e: Pop(0)
0x13f: Push((int) 519571)
0x140: Push((int) 20748)
0x141: Push((int) 20747)
0x142: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x143: Pop(3)
0x144: Return(); Pop(0)

0x145: Push((int) 20748)
0x146: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x147: IF (Stack[-1] == 0) GOTO 0x15c; Pop(1)

0x148: PushEmpty(string)
0x149: Stack[-1] = "Neutral"
0x14a: Call2 0x9a

0x14b: Pop(1)
0x14c: Push((int) 519572)
0x14d: @@ SetMessage(Stack[-1])
0x14e: Pop(1)
0x14f: @@ ClearReplies()
0x150: Pop(0)
0x151: Push((int) 519574)
0x152: Push((int) 20752)
0x153: Push((int) 20750)
0x154: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x155: Pop(3)
0x156: Push((int) 519575)
0x157: Push((int) 20752)
0x158: Push((int) 20751)
0x159: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x15a: Pop(3)
0x15b: Return(); Pop(0)

0x15c: Push((int) 20752)
0x15d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x15e: IF (Stack[-1] == 0) GOTO 0x16e; Pop(1)

0x15f: PushEmpty(string)
0x160: Stack[-1] = "Patronage"
0x161: Call2 0x9a

0x162: Pop(1)
0x163: Push((int) 519576)
0x164: @@ SetMessage(Stack[-1])
0x165: Pop(1)
0x166: @@ ClearReplies()
0x167: Pop(0)
0x168: Push((int) 519577)
0x169: Push((int) 20754)
0x16a: Push((int) 20753)
0x16b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x16c: Pop(3)
0x16d: Return(); Pop(0)

0x16e: Push((int) 20754)
0x16f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x170: IF (Stack[-1] == 0) GOTO 0x180; Pop(1)

0x171: PushEmpty(string)
0x172: Stack[-1] = "Neutral"
0x173: Call2 0x9a

0x174: Pop(1)
0x175: Push((int) 519578)
0x176: @@ SetMessage(Stack[-1])
0x177: Pop(1)
0x178: @@ ClearReplies()
0x179: Pop(0)
0x17a: Push((int) 519579)
0x17b: Push((int) 20756)
0x17c: Push((int) 20755)
0x17d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x17e: Pop(3)
0x17f: Return(); Pop(0)

0x180: Push((int) 20756)
0x181: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x182: IF (Stack[-1] == 0) GOTO 0x197; Pop(1)

0x183: PushEmpty(string)
0x184: Stack[-1] = "Neutral"
0x185: Call2 0x9a

0x186: Pop(1)
0x187: Push((int) 519580)
0x188: @@ SetMessage(Stack[-1])
0x189: Pop(1)
0x18a: @@ ClearReplies()
0x18b: Pop(0)
0x18c: Push((int) 527722)
0x18d: Push((int) 29071)
0x18e: Push((int) 29070)
0x18f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x190: Pop(3)
0x191: Push((int) 519587)
0x192: Push((int) 20758)
0x193: Push((int) 20766)
0x194: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x195: Pop(3)
0x196: Return(); Pop(0)

0x197: Push((int) 29071)
0x198: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x199: IF (Stack[-1] == 0) GOTO 0x1a9; Pop(1)

0x19a: PushEmpty(string)
0x19b: Stack[-1] = "Neutral"
0x19c: Call2 0x9a

0x19d: Pop(1)
0x19e: Push((int) 527723)
0x19f: @@ SetMessage(Stack[-1])
0x1a0: Pop(1)
0x1a1: @@ ClearReplies()
0x1a2: Pop(0)
0x1a3: Push((int) 530603)
0x1a4: Push((int) 31907)
0x1a5: Push((int) 31906)
0x1a6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1a7: Pop(3)
0x1a8: Return(); Pop(0)

0x1a9: Push((int) 31907)
0x1aa: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1ab: IF (Stack[-1] == 0) GOTO 0x1bb; Pop(1)

0x1ac: PushEmpty(string)
0x1ad: Stack[-1] = "Anger"
0x1ae: Call2 0x9a

0x1af: Pop(1)
0x1b0: Push((int) 530604)
0x1b1: @@ SetMessage(Stack[-1])
0x1b2: Pop(1)
0x1b3: @@ ClearReplies()
0x1b4: Pop(0)
0x1b5: Push((int) 519581)
0x1b6: Push((int) 20758)
0x1b7: Push((int) 20757)
0x1b8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1b9: Pop(3)
0x1ba: Return(); Pop(0)

0x1bb: Push((int) 20758)
0x1bc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1bd: IF (Stack[-1] == 0) GOTO 0x1d2; Pop(1)

0x1be: PushEmpty(string)
0x1bf: Stack[-1] = "Neutral"
0x1c0: Call2 0x9a

0x1c1: Pop(1)
0x1c2: Push((int) 519582)
0x1c3: @@ SetMessage(Stack[-1])
0x1c4: Pop(1)
0x1c5: @@ ClearReplies()
0x1c6: Pop(0)
0x1c7: Push((int) 519583)
0x1c8: Push((int) -1)
0x1c9: Push((int) 20759)
0x1ca: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1cb: Pop(3)
0x1cc: Push((int) 519586)
0x1cd: Push((int) -1)
0x1ce: Push((int) 20765)
0x1cf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1d0: Pop(3)
0x1d1: Return(); Pop(0)

0x1d2: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x1d3: PushEmpty(bool)
0x1d4: Call2 0x1187

0x1d5: Pop(0)
0x1d6: IF (Stack[-1] == 0) GOTO 0x1da; Pop(1)

0x1d7: @ lshStopAnimation()
0x1d8: Pop(0)
0x1d9: GOTO 0x1dc

0x1da: @ StopAnimation()
0x1db: Pop(0)
0x1dc: Return(); Pop(0)

0x1dd: GOTO 0xb1

0x1de: Return(); Pop(0)

0x1df: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1e0: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x1e1: PushEmpty(bool, object, float)
0x1e2: Stack[-2] = Stack[-12]
0x1e3: Stack[-1] = (float) 70.0
0x1e4: Call2 0xfe5

0x1e5: Pop(2)
0x1e6: Pop(1); Push((bool) Stack[-1] == 0)
0x1e7: IF (Stack[-1] == 0) GOTO 0x1ea; Pop(1)

0x1e8: Stack[-10] = (int) -2
0x1e9: Return(); Pop(8)

0x1ea: @ CreateDialog(Stack[-4])
0x1eb: Pop(0)
0x1ec: PushEmpty(int)
0x1ed: Call2 0x1181

0x1ee: Pop(0)
0x1ef: @@ SetNPCName(Stack[-1])
0x1f0: Pop(1)
0x1f1: PushEmpty(int)
0x1f2: Call2 0x117f

0x1f3: Pop(0)
0x1f4: @@ SetNPCDescription(Stack[-1])
0x1f5: Pop(1)
0x1f6: PushEmpty(string)
0x1f7: Call2 0x1183

0x1f8: Pop(0)
0x1f9: @@ SetPhoto(Stack[-1])
0x1fa: Pop(1)
0x1fb: PushEmpty(string)
0x1fc: Call2 0x1185

0x1fd: Pop(0)
0x1fe: @@ SetPhoto2(Stack[-1])
0x1ff: Pop(1)
0x200: PushEmpty(int)
0x201: Call2 0x143f

0x202: Pop(0)
0x203: @@ SetPlayerName(Stack[-1])
0x204: Pop(1)
0x205: Stack[-2] = (int) -1
0x206: @ IsOverrideActive(Stack[-3])
0x207: Pop(0)
0x208: Push(Stack[-3])
0x209: IF (Stack[-1] == 0) GOTO 0x20c; Pop(1)

0x20a: Stack[-10] = (int) -2
0x20b: Return(); Pop(8)

0x20c: @ DoDialog(Stack[-4])
0x20d: Pop(0)
0x20e: PushEmpty(bool, object)
0x20f: PushEmpty(object)
0x210: Call2 0x10fb

0x211: Stack[-2] = Stack[-1]
0x212: Pop(1)
0x213: Call2 0x103c

0x214: Pop(2)
0x215: PushEmpty(object, object)
0x216: Stack[-2] = Stack[-11]
0x217: Stack[-1] = Stack[-6]
0x218: Push(-2, 4); TaskCall(3)
0x219: Call2 0x230

0x21a: Pop(-2, 4); TaskReturn
0x21b: Pop(2)
0x21c: @@ IsDialogEnd(Stack[-1])
0x21d: Pop(0)
0x21e: Pop(0); Push((bool) Stack[-1] == 0)
0x21f: IF (Stack[-1] == 0) GOTO 0x225; Pop(1)

0x220: @ sync()
0x221: Pop(0)
0x222: @@ IsDialogEnd(Stack[-1])
0x223: Pop(0)
0x224: GOTO 0x21e

0x225: PushEmpty(object)
0x226: Stack[-1] = Stack[-10]
0x227: Call2 0x102a

0x228: Pop(1)
0x229: @ StopDialog(Stack[-4])
0x22a: Pop(0)
0x22b: @@ GetReturnValue(Stack[-2])
0x22c: Pop(0)
0x22d: Stack[-10] = Stack[-2]
0x22e: Return(); Pop(8)

0x22f: Stack[-4] = 0
0x230: PushEmpty()
0x231: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x232: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x233: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x234: Push((int) 1)
0x235: IF (Stack[-1] == 0) GOTO 0x27e; Pop(1)

0x236: PushEmpty(bool, object)
0x237: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x238: Call2 0x130f

0x239: Pop(1)
0x23a: IF (Stack[-1] == 0) GOTO 0x259; Pop(1)

0x23b: PushEmpty(object, object)
0x23c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x23d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x23e: Call2 0x11a3

0x23f: Pop(2)
0x240: PushEmpty(object, object)
0x241: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x242: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x243: Call2 0x126a

0x244: Pop(2)
0x245: PushEmpty(string)
0x246: Stack[-1] = "Neutral"
0x247: Call2 0x29c

0x248: Pop(1)
0x249: Push((int) 519215)
0x24a: @@ SetMessage(Stack[-1])
0x24b: Pop(1)
0x24c: @@ ClearReplies()
0x24d: Pop(0)
0x24e: Push((int) 519216)
0x24f: Push((int) 29206)
0x250: Push((int) 20358)
0x251: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x252: Pop(3)
0x253: Push((int) 519240)
0x254: Push((int) 20385)
0x255: Push((int) 20384)
0x256: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x257: Pop(3)
0x258: GOTO 0x27e

0x259: PushEmpty(string)
0x25a: Stack[-1] = "Neutral"
0x25b: Call2 0x29c

0x25c: Pop(1)
0x25d: Push((int) 519247)
0x25e: @@ SetMessage(Stack[-1])
0x25f: Pop(1)
0x260: @@ ClearReplies()
0x261: Pop(0)
0x262: PushEmpty(bool, object)
0x263: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x264: Call2 0x131b

0x265: Pop(1)
0x266: IF (Stack[-1] == 0) GOTO 0x26c; Pop(1)

0x267: Push((int) 519628)
0x268: Push((int) 20811)
0x269: Push((int) 20810)
0x26a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x26b: Pop(3)
0x26c: PushEmpty(bool, object)
0x26d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x26e: Call2 0x1327

0x26f: Pop(1)
0x270: IF (Stack[-1] == 0) GOTO 0x276; Pop(1)

0x271: Push((int) 519248)
0x272: Push((int) 20399)
0x273: Push((int) 20397)
0x274: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x275: Pop(3)
0x276: Push((int) 519249)
0x277: Push((int) -1)
0x278: Push((int) 20398)
0x279: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x27a: Pop(3)
0x27b: GOTO 0x27e

0x27c: Return(); Pop(0)

0x27d: GOTO 0x234

0x27e: PushEmpty(bool)
0x27f: Call2 0x1187

0x280: Pop(0)
0x281: IF (Stack[-1] == 0) GOTO 0x28d; Pop(1)

0x282: @ lshWaitForAnimEnd()
0x283: Pop(0)
0x284: Push( Stack[3 + Tasks[-1].StackPointer] )
0x285: IF (Stack[-1] == 0) GOTO 0x287; Pop(1)

0x286: GOTO 0x28c

0x287: PushEmpty(string)
0x288: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x289: Call2 0x10c6

0x28a: Pop(1)
0x28b: GOTO 0x282

0x28c: GOTO 0x29b

0x28d: Push("all")
0x28e: Push("idle")
0x28f: @ PlayAnimation(Stack[-2], Stack[-1])
0x290: Pop(2)
0x291: @ WaitForAnimEnd()
0x292: Pop(0)
0x293: Push( Stack[3 + Tasks[-1].StackPointer] )
0x294: IF (Stack[-1] == 0) GOTO 0x296; Pop(1)

0x295: GOTO 0x29b

0x296: Push("all")
0x297: Push("idle")
0x298: @ PlayAnimation(Stack[-2], Stack[-1])
0x299: Pop(2)
0x29a: GOTO 0x291

0x29b: Return(); Pop(0)

0x29c: PushEmpty()
0x29d: PushEmpty(bool)
0x29e: Call2 0x1187

0x29f: Pop(0)
0x2a0: Pop(1); Push((bool) Stack[-1] == 0)
0x2a1: IF (Stack[-1] == 0) GOTO 0x2a3; Pop(1)

0x2a2: Return(); Pop(0)

0x2a3: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x2a4: IF (Stack[-1] == 0) GOTO 0x2a6; Pop(1)

0x2a5: Return(); Pop(0)

0x2a6: PushEmpty(string, bool)
0x2a7: Stack[-2] = Stack[-3]
0x2a8: Push("")
0x2a9: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x2aa: IF (Stack[-1] == 0) GOTO 0x2ad; Pop(1)

0x2ab: Stack[-1] = (bool) 0
0x2ac: GOTO 0x2ae

0x2ad: Stack[-1] = (bool) 1
0x2ae: Call2 0x10d6

0x2af: Pop(2)
0x2b0: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x2b1: Return(); Pop(0)

0x2b2: PushEmpty()
0x2b3: Push((int) 1)
0x2b4: IF (Stack[-1] == 0) GOTO 0x50f; Pop(1)

0x2b5: PushEmpty()
0x2b6: Call2 0x10f4

0x2b7: Pop(0)
0x2b8: Push((int) 20378)
0x2b9: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2ba: IF (Stack[-1] == 0) GOTO 0x2c5; Pop(1)

0x2bb: PushEmpty(object, object)
0x2bc: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2bd: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2be: Call2 0x1189

0x2bf: Pop(2)
0x2c0: PushEmpty(object, object)
0x2c1: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2c2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2c3: Call2 0x127b

0x2c4: Pop(2)
0x2c5: Push((int) 20814)
0x2c6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2c7: IF (Stack[-1] == 0) GOTO 0x2d2; Pop(1)

0x2c8: PushEmpty(object, object)
0x2c9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2ca: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2cb: Call2 0x1189

0x2cc: Pop(2)
0x2cd: PushEmpty(object, object)
0x2ce: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2cf: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2d0: Call2 0x127b

0x2d1: Pop(2)
0x2d2: Push((int) 20422)
0x2d3: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2d4: IF (Stack[-1] == 0) GOTO 0x2da; Pop(1)

0x2d5: PushEmpty(object, object)
0x2d6: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2d7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2d8: Call2 0x11a9

0x2d9: Pop(2)
0x2da: Push((int) 20423)
0x2db: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2dc: IF (Stack[-1] == 0) GOTO 0x2e2; Pop(1)

0x2dd: PushEmpty(object, object)
0x2de: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2df: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2e0: Call2 0x11a9

0x2e1: Pop(2)
0x2e2: Push((int) 20420)
0x2e3: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2e4: IF (Stack[-1] == 0) GOTO 0x2ea; Pop(1)

0x2e5: PushEmpty(object, object)
0x2e6: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2e7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2e8: Call2 0x11a9

0x2e9: Pop(2)
0x2ea: Push((int) 20409)
0x2eb: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2ec: IF (Stack[-1] == 0) GOTO 0x2f2; Pop(1)

0x2ed: PushEmpty(object, object)
0x2ee: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2ef: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2f0: Call2 0x11b3

0x2f1: Pop(2)
0x2f2: Push((int) 20357)
0x2f3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2f4: IF (Stack[-1] == 0) GOTO 0x33b; Pop(1)

0x2f5: PushEmpty(bool, object)
0x2f6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2f7: Call2 0x130f

0x2f8: Pop(1)
0x2f9: IF (Stack[-1] == 0) GOTO 0x318; Pop(1)

0x2fa: PushEmpty(object, object)
0x2fb: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2fc: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2fd: Call2 0x11a3

0x2fe: Pop(2)
0x2ff: PushEmpty(object, object)
0x300: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x301: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x302: Call2 0x126a

0x303: Pop(2)
0x304: PushEmpty(string)
0x305: Stack[-1] = "Neutral"
0x306: Call2 0x29c

0x307: Pop(1)
0x308: Push((int) 519215)
0x309: @@ SetMessage(Stack[-1])
0x30a: Pop(1)
0x30b: @@ ClearReplies()
0x30c: Pop(0)
0x30d: Push((int) 519216)
0x30e: Push((int) 29206)
0x30f: Push((int) 20358)
0x310: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x311: Pop(3)
0x312: Push((int) 519240)
0x313: Push((int) 20385)
0x314: Push((int) 20384)
0x315: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x316: Pop(3)
0x317: Return(); Pop(0)

0x318: PushEmpty(string)
0x319: Stack[-1] = "Neutral"
0x31a: Call2 0x29c

0x31b: Pop(1)
0x31c: Push((int) 519247)
0x31d: @@ SetMessage(Stack[-1])
0x31e: Pop(1)
0x31f: @@ ClearReplies()
0x320: Pop(0)
0x321: PushEmpty(bool, object)
0x322: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x323: Call2 0x131b

0x324: Pop(1)
0x325: IF (Stack[-1] == 0) GOTO 0x32b; Pop(1)

0x326: Push((int) 519628)
0x327: Push((int) 20811)
0x328: Push((int) 20810)
0x329: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x32a: Pop(3)
0x32b: PushEmpty(bool, object)
0x32c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x32d: Call2 0x1327

0x32e: Pop(1)
0x32f: IF (Stack[-1] == 0) GOTO 0x335; Pop(1)

0x330: Push((int) 519248)
0x331: Push((int) 20399)
0x332: Push((int) 20397)
0x333: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x334: Pop(3)
0x335: Push((int) 519249)
0x336: Push((int) -1)
0x337: Push((int) 20398)
0x338: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x339: Pop(3)
0x33a: Return(); Pop(0)

0x33b: Push((int) 20399)
0x33c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x33d: IF (Stack[-1] == 0) GOTO 0x352; Pop(1)

0x33e: PushEmpty(string)
0x33f: Stack[-1] = "Anger"
0x340: Call2 0x29c

0x341: Pop(1)
0x342: Push((int) 519250)
0x343: @@ SetMessage(Stack[-1])
0x344: Pop(1)
0x345: @@ ClearReplies()
0x346: Pop(0)
0x347: Push((int) 519251)
0x348: Push((int) 20402)
0x349: Push((int) 20400)
0x34a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x34b: Pop(3)
0x34c: Push((int) 519252)
0x34d: Push((int) 20402)
0x34e: Push((int) 20401)
0x34f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x350: Pop(3)
0x351: Return(); Pop(0)

0x352: Push((int) 20402)
0x353: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x354: IF (Stack[-1] == 0) GOTO 0x369; Pop(1)

0x355: PushEmpty(string)
0x356: Stack[-1] = "Neutral"
0x357: Call2 0x29c

0x358: Pop(1)
0x359: Push((int) 519253)
0x35a: @@ SetMessage(Stack[-1])
0x35b: Pop(1)
0x35c: @@ ClearReplies()
0x35d: Pop(0)
0x35e: Push((int) 519254)
0x35f: Push((int) 20405)
0x360: Push((int) 20404)
0x361: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x362: Pop(3)
0x363: Push((int) 519256)
0x364: Push((int) 20407)
0x365: Push((int) 20406)
0x366: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x367: Pop(3)
0x368: Return(); Pop(0)

0x369: Push((int) 20407)
0x36a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x36b: IF (Stack[-1] == 0) GOTO 0x380; Pop(1)

0x36c: PushEmpty(string)
0x36d: Stack[-1] = "Neutral"
0x36e: Call2 0x29c

0x36f: Pop(1)
0x370: Push((int) 519257)
0x371: @@ SetMessage(Stack[-1])
0x372: Pop(1)
0x373: @@ ClearReplies()
0x374: Pop(0)
0x375: Push((int) 519258)
0x376: Push((int) 20413)
0x377: Push((int) 20408)
0x378: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x379: Pop(3)
0x37a: Push((int) 519259)
0x37b: Push((int) -1)
0x37c: Push((int) 20409)
0x37d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x37e: Pop(3)
0x37f: Return(); Pop(0)

0x380: Push((int) 20405)
0x381: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x382: IF (Stack[-1] == 0) GOTO 0x397; Pop(1)

0x383: PushEmpty(string)
0x384: Stack[-1] = "Neutral"
0x385: Call2 0x29c

0x386: Pop(1)
0x387: Push((int) 519255)
0x388: @@ SetMessage(Stack[-1])
0x389: Pop(1)
0x38a: @@ ClearReplies()
0x38b: Pop(0)
0x38c: Push((int) 519260)
0x38d: Push((int) 20413)
0x38e: Push((int) 20410)
0x38f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x390: Pop(3)
0x391: Push((int) 519261)
0x392: Push((int) 20412)
0x393: Push((int) 20411)
0x394: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x395: Pop(3)
0x396: Return(); Pop(0)

0x397: Push((int) 20412)
0x398: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x399: IF (Stack[-1] == 0) GOTO 0x3a9; Pop(1)

0x39a: PushEmpty(string)
0x39b: Stack[-1] = "Neutral"
0x39c: Call2 0x29c

0x39d: Pop(1)
0x39e: Push((int) 519262)
0x39f: @@ SetMessage(Stack[-1])
0x3a0: Pop(1)
0x3a1: @@ ClearReplies()
0x3a2: Pop(0)
0x3a3: Push((int) 519264)
0x3a4: Push((int) 20413)
0x3a5: Push((int) 20415)
0x3a6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3a7: Pop(3)
0x3a8: Return(); Pop(0)

0x3a9: Push((int) 20413)
0x3aa: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3ab: IF (Stack[-1] == 0) GOTO 0x3bb; Pop(1)

0x3ac: PushEmpty(string)
0x3ad: Stack[-1] = "Neutral"
0x3ae: Call2 0x29c

0x3af: Pop(1)
0x3b0: Push((int) 519263)
0x3b1: @@ SetMessage(Stack[-1])
0x3b2: Pop(1)
0x3b3: @@ ClearReplies()
0x3b4: Pop(0)
0x3b5: Push((int) 519265)
0x3b6: Push((int) 20418)
0x3b7: Push((int) 20417)
0x3b8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3b9: Pop(3)
0x3ba: Return(); Pop(0)

0x3bb: Push((int) 20418)
0x3bc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3bd: IF (Stack[-1] == 0) GOTO 0x3d2; Pop(1)

0x3be: PushEmpty(string)
0x3bf: Stack[-1] = "Neutral"
0x3c0: Call2 0x29c

0x3c1: Pop(1)
0x3c2: Push((int) 519266)
0x3c3: @@ SetMessage(Stack[-1])
0x3c4: Pop(1)
0x3c5: @@ ClearReplies()
0x3c6: Pop(0)
0x3c7: Push((int) 519267)
0x3c8: Push((int) 20421)
0x3c9: Push((int) 20419)
0x3ca: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3cb: Pop(3)
0x3cc: Push((int) 519268)
0x3cd: Push((int) -1)
0x3ce: Push((int) 20420)
0x3cf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3d0: Pop(3)
0x3d1: Return(); Pop(0)

0x3d2: Push((int) 20421)
0x3d3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3d4: IF (Stack[-1] == 0) GOTO 0x3e9; Pop(1)

0x3d5: PushEmpty(string)
0x3d6: Stack[-1] = "Repentance"
0x3d7: Call2 0x29c

0x3d8: Pop(1)
0x3d9: Push((int) 519269)
0x3da: @@ SetMessage(Stack[-1])
0x3db: Pop(1)
0x3dc: @@ ClearReplies()
0x3dd: Pop(0)
0x3de: Push((int) 519270)
0x3df: Push((int) -1)
0x3e0: Push((int) 20422)
0x3e1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3e2: Pop(3)
0x3e3: Push((int) 519271)
0x3e4: Push((int) -1)
0x3e5: Push((int) 20423)
0x3e6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3e7: Pop(3)
0x3e8: Return(); Pop(0)

0x3e9: Push((int) 20811)
0x3ea: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3eb: IF (Stack[-1] == 0) GOTO 0x3fb; Pop(1)

0x3ec: PushEmpty(string)
0x3ed: Stack[-1] = "Neutral"
0x3ee: Call2 0x29c

0x3ef: Pop(1)
0x3f0: Push((int) 519629)
0x3f1: @@ SetMessage(Stack[-1])
0x3f2: Pop(1)
0x3f3: @@ ClearReplies()
0x3f4: Pop(0)
0x3f5: Push((int) 519630)
0x3f6: Push((int) 20813)
0x3f7: Push((int) 20812)
0x3f8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3f9: Pop(3)
0x3fa: Return(); Pop(0)

0x3fb: Push((int) 20813)
0x3fc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3fd: IF (Stack[-1] == 0) GOTO 0x40d; Pop(1)

0x3fe: PushEmpty(string)
0x3ff: Stack[-1] = "Anger"
0x400: Call2 0x29c

0x401: Pop(1)
0x402: Push((int) 519631)
0x403: @@ SetMessage(Stack[-1])
0x404: Pop(1)
0x405: @@ ClearReplies()
0x406: Pop(0)
0x407: Push((int) 519632)
0x408: Push((int) -1)
0x409: Push((int) 20814)
0x40a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x40b: Pop(3)
0x40c: Return(); Pop(0)

0x40d: Push((int) 20385)
0x40e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x40f: IF (Stack[-1] == 0) GOTO 0x41f; Pop(1)

0x410: PushEmpty(string)
0x411: Stack[-1] = "Neutral"
0x412: Call2 0x29c

0x413: Pop(1)
0x414: Push((int) 519241)
0x415: @@ SetMessage(Stack[-1])
0x416: Pop(1)
0x417: @@ ClearReplies()
0x418: Pop(0)
0x419: Push((int) 519242)
0x41a: Push((int) 20359)
0x41b: Push((int) 20386)
0x41c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x41d: Pop(3)
0x41e: Return(); Pop(0)

0x41f: Push((int) 29206)
0x420: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x421: IF (Stack[-1] == 0) GOTO 0x431; Pop(1)

0x422: PushEmpty(string)
0x423: Stack[-1] = "Neutral"
0x424: Call2 0x29c

0x425: Pop(1)
0x426: Push((int) 527862)
0x427: @@ SetMessage(Stack[-1])
0x428: Pop(1)
0x429: @@ ClearReplies()
0x42a: Pop(0)
0x42b: Push((int) 527863)
0x42c: Push((int) 20359)
0x42d: Push((int) 29207)
0x42e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x42f: Pop(3)
0x430: Return(); Pop(0)

0x431: Push((int) 20359)
0x432: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x433: IF (Stack[-1] == 0) GOTO 0x448; Pop(1)

0x434: PushEmpty(string)
0x435: Stack[-1] = "Patronage"
0x436: Call2 0x29c

0x437: Pop(1)
0x438: Push((int) 519217)
0x439: @@ SetMessage(Stack[-1])
0x43a: Pop(1)
0x43b: @@ ClearReplies()
0x43c: Pop(0)
0x43d: Push((int) 519218)
0x43e: Push((int) 20361)
0x43f: Push((int) 20360)
0x440: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x441: Pop(3)
0x442: Push((int) 519244)
0x443: Push((int) 20363)
0x444: Push((int) 20389)
0x445: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x446: Pop(3)
0x447: Return(); Pop(0)

0x448: Push((int) 20361)
0x449: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x44a: IF (Stack[-1] == 0) GOTO 0x45a; Pop(1)

0x44b: PushEmpty(string)
0x44c: Stack[-1] = "Neutral"
0x44d: Call2 0x29c

0x44e: Pop(1)
0x44f: Push((int) 519219)
0x450: @@ SetMessage(Stack[-1])
0x451: Pop(1)
0x452: @@ ClearReplies()
0x453: Pop(0)
0x454: Push((int) 519220)
0x455: Push((int) 20363)
0x456: Push((int) 20362)
0x457: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x458: Pop(3)
0x459: Return(); Pop(0)

0x45a: Push((int) 20363)
0x45b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x45c: IF (Stack[-1] == 0) GOTO 0x471; Pop(1)

0x45d: PushEmpty(string)
0x45e: Stack[-1] = "Neutral"
0x45f: Call2 0x29c

0x460: Pop(1)
0x461: Push((int) 519221)
0x462: @@ SetMessage(Stack[-1])
0x463: Pop(1)
0x464: @@ ClearReplies()
0x465: Pop(0)
0x466: Push((int) 519222)
0x467: Push((int) 20365)
0x468: Push((int) 20364)
0x469: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x46a: Pop(3)
0x46b: Push((int) 519245)
0x46c: Push((int) 20365)
0x46d: Push((int) 20391)
0x46e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x46f: Pop(3)
0x470: Return(); Pop(0)

0x471: Push((int) 20365)
0x472: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x473: IF (Stack[-1] == 0) GOTO 0x488; Pop(1)

0x474: PushEmpty(string)
0x475: Stack[-1] = "Neutral"
0x476: Call2 0x29c

0x477: Pop(1)
0x478: Push((int) 519223)
0x479: @@ SetMessage(Stack[-1])
0x47a: Pop(1)
0x47b: @@ ClearReplies()
0x47c: Pop(0)
0x47d: Push((int) 519224)
0x47e: Push((int) 20367)
0x47f: Push((int) 20366)
0x480: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x481: Pop(3)
0x482: Push((int) 519246)
0x483: Push((int) 20369)
0x484: Push((int) 20394)
0x485: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x486: Pop(3)
0x487: Return(); Pop(0)

0x488: Push((int) 20367)
0x489: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x48a: IF (Stack[-1] == 0) GOTO 0x49a; Pop(1)

0x48b: PushEmpty(string)
0x48c: Stack[-1] = "Anger"
0x48d: Call2 0x29c

0x48e: Pop(1)
0x48f: Push((int) 519225)
0x490: @@ SetMessage(Stack[-1])
0x491: Pop(1)
0x492: @@ ClearReplies()
0x493: Pop(0)
0x494: Push((int) 519226)
0x495: Push((int) 20369)
0x496: Push((int) 20368)
0x497: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x498: Pop(3)
0x499: Return(); Pop(0)

0x49a: Push((int) 20369)
0x49b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x49c: IF (Stack[-1] == 0) GOTO 0x4b1; Pop(1)

0x49d: PushEmpty(string)
0x49e: Stack[-1] = "Neutral"
0x49f: Call2 0x29c

0x4a0: Pop(1)
0x4a1: Push((int) 519227)
0x4a2: @@ SetMessage(Stack[-1])
0x4a3: Pop(1)
0x4a4: @@ ClearReplies()
0x4a5: Pop(0)
0x4a6: Push((int) 519228)
0x4a7: Push((int) 20375)
0x4a8: Push((int) 20370)
0x4a9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4aa: Pop(3)
0x4ab: Push((int) 519229)
0x4ac: Push((int) 20372)
0x4ad: Push((int) 20371)
0x4ae: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4af: Pop(3)
0x4b0: Return(); Pop(0)

0x4b1: Push((int) 20372)
0x4b2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4b3: IF (Stack[-1] == 0) GOTO 0x4c8; Pop(1)

0x4b4: PushEmpty(string)
0x4b5: Stack[-1] = "Neutral"
0x4b6: Call2 0x29c

0x4b7: Pop(1)
0x4b8: Push((int) 519230)
0x4b9: @@ SetMessage(Stack[-1])
0x4ba: Pop(1)
0x4bb: @@ ClearReplies()
0x4bc: Pop(0)
0x4bd: Push((int) 519231)
0x4be: Push((int) 20375)
0x4bf: Push((int) 20373)
0x4c0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4c1: Pop(3)
0x4c2: Push((int) 519232)
0x4c3: Push((int) -1)
0x4c4: Push((int) 20374)
0x4c5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4c6: Pop(3)
0x4c7: Return(); Pop(0)

0x4c8: Push((int) 20375)
0x4c9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4ca: IF (Stack[-1] == 0) GOTO 0x4df; Pop(1)

0x4cb: PushEmpty(string)
0x4cc: Stack[-1] = "Neutral"
0x4cd: Call2 0x29c

0x4ce: Pop(1)
0x4cf: Push((int) 519233)
0x4d0: @@ SetMessage(Stack[-1])
0x4d1: Pop(1)
0x4d2: @@ ClearReplies()
0x4d3: Pop(0)
0x4d4: Push((int) 519234)
0x4d5: Push((int) 20377)
0x4d6: Push((int) 20376)
0x4d7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4d8: Pop(3)
0x4d9: Push((int) 519237)
0x4da: Push((int) 20381)
0x4db: Push((int) 20380)
0x4dc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4dd: Pop(3)
0x4de: Return(); Pop(0)

0x4df: Push((int) 20381)
0x4e0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4e1: IF (Stack[-1] == 0) GOTO 0x4f1; Pop(1)

0x4e2: PushEmpty(string)
0x4e3: Stack[-1] = "Repentance"
0x4e4: Call2 0x29c

0x4e5: Pop(1)
0x4e6: Push((int) 519238)
0x4e7: @@ SetMessage(Stack[-1])
0x4e8: Pop(1)
0x4e9: @@ ClearReplies()
0x4ea: Pop(0)
0x4eb: Push((int) 519239)
0x4ec: Push((int) 20377)
0x4ed: Push((int) 20382)
0x4ee: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4ef: Pop(3)
0x4f0: Return(); Pop(0)

0x4f1: Push((int) 20377)
0x4f2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4f3: IF (Stack[-1] == 0) GOTO 0x503; Pop(1)

0x4f4: PushEmpty(string)
0x4f5: Stack[-1] = "Neutral"
0x4f6: Call2 0x29c

0x4f7: Pop(1)
0x4f8: Push((int) 519235)
0x4f9: @@ SetMessage(Stack[-1])
0x4fa: Pop(1)
0x4fb: @@ ClearReplies()
0x4fc: Pop(0)
0x4fd: Push((int) 519236)
0x4fe: Push((int) -1)
0x4ff: Push((int) 20378)
0x500: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x501: Pop(3)
0x502: Return(); Pop(0)

0x503: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x504: PushEmpty(bool)
0x505: Call2 0x1187

0x506: Pop(0)
0x507: IF (Stack[-1] == 0) GOTO 0x50b; Pop(1)

0x508: @ lshStopAnimation()
0x509: Pop(0)
0x50a: GOTO 0x50d

0x50b: @ StopAnimation()
0x50c: Pop(0)
0x50d: Return(); Pop(0)

0x50e: GOTO 0x2b3

0x50f: Return(); Pop(0)

0x510: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x511: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x512: PushEmpty(bool, object, float)
0x513: Stack[-2] = Stack[-12]
0x514: Stack[-1] = (float) 70.0
0x515: Call2 0xfe5

0x516: Pop(2)
0x517: Pop(1); Push((bool) Stack[-1] == 0)
0x518: IF (Stack[-1] == 0) GOTO 0x51b; Pop(1)

0x519: Stack[-10] = (int) -2
0x51a: Return(); Pop(8)

0x51b: @ CreateDialog(Stack[-4])
0x51c: Pop(0)
0x51d: PushEmpty(int)
0x51e: Call2 0x1181

0x51f: Pop(0)
0x520: @@ SetNPCName(Stack[-1])
0x521: Pop(1)
0x522: PushEmpty(int)
0x523: Call2 0x117f

0x524: Pop(0)
0x525: @@ SetNPCDescription(Stack[-1])
0x526: Pop(1)
0x527: PushEmpty(string)
0x528: Call2 0x1183

0x529: Pop(0)
0x52a: @@ SetPhoto(Stack[-1])
0x52b: Pop(1)
0x52c: PushEmpty(string)
0x52d: Call2 0x1185

0x52e: Pop(0)
0x52f: @@ SetPhoto2(Stack[-1])
0x530: Pop(1)
0x531: PushEmpty(int)
0x532: Call2 0x143f

0x533: Pop(0)
0x534: @@ SetPlayerName(Stack[-1])
0x535: Pop(1)
0x536: Stack[-2] = (int) -1
0x537: @ IsOverrideActive(Stack[-3])
0x538: Pop(0)
0x539: Push(Stack[-3])
0x53a: IF (Stack[-1] == 0) GOTO 0x53d; Pop(1)

0x53b: Stack[-10] = (int) -2
0x53c: Return(); Pop(8)

0x53d: @ DoDialog(Stack[-4])
0x53e: Pop(0)
0x53f: PushEmpty(bool, object)
0x540: PushEmpty(object)
0x541: Call2 0x10fb

0x542: Stack[-2] = Stack[-1]
0x543: Pop(1)
0x544: Call2 0x103c

0x545: Pop(2)
0x546: PushEmpty(object, object)
0x547: Stack[-2] = Stack[-11]
0x548: Stack[-1] = Stack[-6]
0x549: Push(-2, 4); TaskCall(5)
0x54a: Call2 0x561

0x54b: Pop(-2, 4); TaskReturn
0x54c: Pop(2)
0x54d: @@ IsDialogEnd(Stack[-1])
0x54e: Pop(0)
0x54f: Pop(0); Push((bool) Stack[-1] == 0)
0x550: IF (Stack[-1] == 0) GOTO 0x556; Pop(1)

0x551: @ sync()
0x552: Pop(0)
0x553: @@ IsDialogEnd(Stack[-1])
0x554: Pop(0)
0x555: GOTO 0x54f

0x556: PushEmpty(object)
0x557: Stack[-1] = Stack[-10]
0x558: Call2 0x102a

0x559: Pop(1)
0x55a: @ StopDialog(Stack[-4])
0x55b: Pop(0)
0x55c: @@ GetReturnValue(Stack[-2])
0x55d: Pop(0)
0x55e: Stack[-10] = Stack[-2]
0x55f: Return(); Pop(8)

0x560: Stack[-4] = 0
0x561: PushEmpty()
0x562: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x563: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x564: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x565: Push((int) 1)
0x566: IF (Stack[-1] == 0) GOTO 0x5b4; Pop(1)

0x567: PushEmpty(bool, object)
0x568: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x569: Call2 0x1333

0x56a: Pop(1)
0x56b: IF (Stack[-1] == 0) GOTO 0x585; Pop(1)

0x56c: PushEmpty(object, object)
0x56d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x56e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x56f: Call2 0x11bd

0x570: Pop(2)
0x571: PushEmpty(string)
0x572: Stack[-1] = "Neutral"
0x573: Call2 0x5d2

0x574: Pop(1)
0x575: Push((int) 519752)
0x576: @@ SetMessage(Stack[-1])
0x577: Pop(1)
0x578: @@ ClearReplies()
0x579: Pop(0)
0x57a: Push((int) 519753)
0x57b: Push((int) 20908)
0x57c: Push((int) 20907)
0x57d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x57e: Pop(3)
0x57f: Push((int) 519791)
0x580: Push((int) 20910)
0x581: Push((int) 20951)
0x582: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x583: Pop(3)
0x584: GOTO 0x5b4

0x585: PushEmpty(string)
0x586: Stack[-1] = "Neutral"
0x587: Call2 0x5d2

0x588: Pop(1)
0x589: Push((int) 519792)
0x58a: @@ SetMessage(Stack[-1])
0x58b: Pop(1)
0x58c: @@ ClearReplies()
0x58d: Pop(0)
0x58e: PushEmpty(bool, object)
0x58f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x590: Call2 0x133f

0x591: Pop(1)
0x592: IF (Stack[-1] == 0) GOTO 0x598; Pop(1)

0x593: Push((int) 519793)
0x594: Push((int) 20954)
0x595: Push((int) 20953)
0x596: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x597: Pop(3)
0x598: PushEmpty(bool, object)
0x599: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x59a: Call2 0x134b

0x59b: Pop(1)
0x59c: IF (Stack[-1] == 0) GOTO 0x5a2; Pop(1)

0x59d: Push((int) 519798)
0x59e: Push((int) 28439)
0x59f: Push((int) 20958)
0x5a0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5a1: Pop(3)
0x5a2: PushEmpty(bool, object)
0x5a3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5a4: Call2 0x1357

0x5a5: Pop(1)
0x5a6: IF (Stack[-1] == 0) GOTO 0x5ac; Pop(1)

0x5a7: Push((int) 519807)
0x5a8: Push((int) 20968)
0x5a9: Push((int) 20967)
0x5aa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5ab: Pop(3)
0x5ac: Push((int) 519810)
0x5ad: Push((int) -1)
0x5ae: Push((int) 20970)
0x5af: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5b0: Pop(3)
0x5b1: GOTO 0x5b4

0x5b2: Return(); Pop(0)

0x5b3: GOTO 0x565

0x5b4: PushEmpty(bool)
0x5b5: Call2 0x1187

0x5b6: Pop(0)
0x5b7: IF (Stack[-1] == 0) GOTO 0x5c3; Pop(1)

0x5b8: @ lshWaitForAnimEnd()
0x5b9: Pop(0)
0x5ba: Push( Stack[3 + Tasks[-1].StackPointer] )
0x5bb: IF (Stack[-1] == 0) GOTO 0x5bd; Pop(1)

0x5bc: GOTO 0x5c2

0x5bd: PushEmpty(string)
0x5be: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x5bf: Call2 0x10c6

0x5c0: Pop(1)
0x5c1: GOTO 0x5b8

0x5c2: GOTO 0x5d1

0x5c3: Push("all")
0x5c4: Push("idle")
0x5c5: @ PlayAnimation(Stack[-2], Stack[-1])
0x5c6: Pop(2)
0x5c7: @ WaitForAnimEnd()
0x5c8: Pop(0)
0x5c9: Push( Stack[3 + Tasks[-1].StackPointer] )
0x5ca: IF (Stack[-1] == 0) GOTO 0x5cc; Pop(1)

0x5cb: GOTO 0x5d1

0x5cc: Push("all")
0x5cd: Push("idle")
0x5ce: @ PlayAnimation(Stack[-2], Stack[-1])
0x5cf: Pop(2)
0x5d0: GOTO 0x5c7

0x5d1: Return(); Pop(0)

0x5d2: PushEmpty()
0x5d3: PushEmpty(bool)
0x5d4: Call2 0x1187

0x5d5: Pop(0)
0x5d6: Pop(1); Push((bool) Stack[-1] == 0)
0x5d7: IF (Stack[-1] == 0) GOTO 0x5d9; Pop(1)

0x5d8: Return(); Pop(0)

0x5d9: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x5da: IF (Stack[-1] == 0) GOTO 0x5dc; Pop(1)

0x5db: Return(); Pop(0)

0x5dc: PushEmpty(string, bool)
0x5dd: Stack[-2] = Stack[-3]
0x5de: Push("")
0x5df: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x5e0: IF (Stack[-1] == 0) GOTO 0x5e3; Pop(1)

0x5e1: Stack[-1] = (bool) 0
0x5e2: GOTO 0x5e4

0x5e3: Stack[-1] = (bool) 1
0x5e4: Call2 0x10d6

0x5e5: Pop(2)
0x5e6: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x5e7: Return(); Pop(0)

0x5e8: PushEmpty()
0x5e9: Push((int) 1)
0x5ea: IF (Stack[-1] == 0) GOTO 0x85a; Pop(1)

0x5eb: PushEmpty()
0x5ec: Call2 0x10f4

0x5ed: Pop(0)
0x5ee: Push((int) 20926)
0x5ef: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5f0: IF (Stack[-1] == 0) GOTO 0x5fb; Pop(1)

0x5f1: PushEmpty(object, object)
0x5f2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5f3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5f4: Call2 0x11d5

0x5f5: Pop(2)
0x5f6: PushEmpty(object, object)
0x5f7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5f8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5f9: Call2 0x12ab

0x5fa: Pop(2)
0x5fb: Push((int) 28438)
0x5fc: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5fd: IF (Stack[-1] == 0) GOTO 0x608; Pop(1)

0x5fe: PushEmpty(object, object)
0x5ff: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x600: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x601: Call2 0x11d5

0x602: Pop(2)
0x603: PushEmpty(object, object)
0x604: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x605: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x606: Call2 0x12ab

0x607: Pop(2)
0x608: Push((int) 20953)
0x609: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x60a: IF (Stack[-1] == 0) GOTO 0x610; Pop(1)

0x60b: PushEmpty(object, object)
0x60c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x60d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x60e: Call2 0x11c3

0x60f: Pop(2)
0x610: Push((int) 20957)
0x611: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x612: IF (Stack[-1] == 0) GOTO 0x618; Pop(1)

0x613: PushEmpty(object, object)
0x614: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x615: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x616: Call2 0x129b

0x617: Pop(2)
0x618: Push((int) 20958)
0x619: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x61a: IF (Stack[-1] == 0) GOTO 0x620; Pop(1)

0x61b: PushEmpty(object, object)
0x61c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x61d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x61e: Call2 0x11c9

0x61f: Pop(2)
0x620: Push((int) 20967)
0x621: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x622: IF (Stack[-1] == 0) GOTO 0x628; Pop(1)

0x623: PushEmpty(object, object)
0x624: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x625: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x626: Call2 0x11cf

0x627: Pop(2)
0x628: Push((int) 20969)
0x629: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x62a: IF (Stack[-1] == 0) GOTO 0x630; Pop(1)

0x62b: PushEmpty(object, object)
0x62c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x62d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x62e: Call2 0x1270

0x62f: Pop(2)
0x630: Push((int) 20906)
0x631: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x632: IF (Stack[-1] == 0) GOTO 0x67e; Pop(1)

0x633: PushEmpty(bool, object)
0x634: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x635: Call2 0x1333

0x636: Pop(1)
0x637: IF (Stack[-1] == 0) GOTO 0x651; Pop(1)

0x638: PushEmpty(object, object)
0x639: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x63a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x63b: Call2 0x11bd

0x63c: Pop(2)
0x63d: PushEmpty(string)
0x63e: Stack[-1] = "Neutral"
0x63f: Call2 0x5d2

0x640: Pop(1)
0x641: Push((int) 519752)
0x642: @@ SetMessage(Stack[-1])
0x643: Pop(1)
0x644: @@ ClearReplies()
0x645: Pop(0)
0x646: Push((int) 519753)
0x647: Push((int) 20908)
0x648: Push((int) 20907)
0x649: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x64a: Pop(3)
0x64b: Push((int) 519791)
0x64c: Push((int) 20910)
0x64d: Push((int) 20951)
0x64e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x64f: Pop(3)
0x650: Return(); Pop(0)

0x651: PushEmpty(string)
0x652: Stack[-1] = "Neutral"
0x653: Call2 0x5d2

0x654: Pop(1)
0x655: Push((int) 519792)
0x656: @@ SetMessage(Stack[-1])
0x657: Pop(1)
0x658: @@ ClearReplies()
0x659: Pop(0)
0x65a: PushEmpty(bool, object)
0x65b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x65c: Call2 0x133f

0x65d: Pop(1)
0x65e: IF (Stack[-1] == 0) GOTO 0x664; Pop(1)

0x65f: Push((int) 519793)
0x660: Push((int) 20954)
0x661: Push((int) 20953)
0x662: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x663: Pop(3)
0x664: PushEmpty(bool, object)
0x665: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x666: Call2 0x134b

0x667: Pop(1)
0x668: IF (Stack[-1] == 0) GOTO 0x66e; Pop(1)

0x669: Push((int) 519798)
0x66a: Push((int) 28439)
0x66b: Push((int) 20958)
0x66c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x66d: Pop(3)
0x66e: PushEmpty(bool, object)
0x66f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x670: Call2 0x1357

0x671: Pop(1)
0x672: IF (Stack[-1] == 0) GOTO 0x678; Pop(1)

0x673: Push((int) 519807)
0x674: Push((int) 20968)
0x675: Push((int) 20967)
0x676: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x677: Pop(3)
0x678: Push((int) 519810)
0x679: Push((int) -1)
0x67a: Push((int) 20970)
0x67b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x67c: Pop(3)
0x67d: Return(); Pop(0)

0x67e: Push((int) 20968)
0x67f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x680: IF (Stack[-1] == 0) GOTO 0x690; Pop(1)

0x681: PushEmpty(string)
0x682: Stack[-1] = "Neutral"
0x683: Call2 0x5d2

0x684: Pop(1)
0x685: Push((int) 519808)
0x686: @@ SetMessage(Stack[-1])
0x687: Pop(1)
0x688: @@ ClearReplies()
0x689: Pop(0)
0x68a: Push((int) 519809)
0x68b: Push((int) -1)
0x68c: Push((int) 20969)
0x68d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x68e: Pop(3)
0x68f: Return(); Pop(0)

0x690: Push((int) 28439)
0x691: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x692: IF (Stack[-1] == 0) GOTO 0x6a2; Pop(1)

0x693: PushEmpty(string)
0x694: Stack[-1] = "Neutral"
0x695: Call2 0x5d2

0x696: Pop(1)
0x697: Push((int) 527140)
0x698: @@ SetMessage(Stack[-1])
0x699: Pop(1)
0x69a: @@ ClearReplies()
0x69b: Pop(0)
0x69c: Push((int) 527141)
0x69d: Push((int) 28441)
0x69e: Push((int) 28440)
0x69f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6a0: Pop(3)
0x6a1: Return(); Pop(0)

0x6a2: Push((int) 28441)
0x6a3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6a4: IF (Stack[-1] == 0) GOTO 0x6b9; Pop(1)

0x6a5: PushEmpty(string)
0x6a6: Stack[-1] = "Patronage"
0x6a7: Call2 0x5d2

0x6a8: Pop(1)
0x6a9: Push((int) 527142)
0x6aa: @@ SetMessage(Stack[-1])
0x6ab: Pop(1)
0x6ac: @@ ClearReplies()
0x6ad: Pop(0)
0x6ae: Push((int) 519802)
0x6af: Push((int) 20963)
0x6b0: Push((int) 20962)
0x6b1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6b2: Pop(3)
0x6b3: Push((int) 519806)
0x6b4: Push((int) -1)
0x6b5: Push((int) 20966)
0x6b6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6b7: Pop(3)
0x6b8: Return(); Pop(0)

0x6b9: Push((int) 20963)
0x6ba: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6bb: IF (Stack[-1] == 0) GOTO 0x6d0; Pop(1)

0x6bc: PushEmpty(string)
0x6bd: Stack[-1] = "Neutral"
0x6be: Call2 0x5d2

0x6bf: Pop(1)
0x6c0: Push((int) 519803)
0x6c1: @@ SetMessage(Stack[-1])
0x6c2: Pop(1)
0x6c3: @@ ClearReplies()
0x6c4: Pop(0)
0x6c5: Push((int) 519804)
0x6c6: Push((int) -1)
0x6c7: Push((int) 20964)
0x6c8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6c9: Pop(3)
0x6ca: Push((int) 519805)
0x6cb: Push((int) -1)
0x6cc: Push((int) 20965)
0x6cd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6ce: Pop(3)
0x6cf: Return(); Pop(0)

0x6d0: Push((int) 20954)
0x6d1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6d2: IF (Stack[-1] == 0) GOTO 0x6e2; Pop(1)

0x6d3: PushEmpty(string)
0x6d4: Stack[-1] = "Neutral"
0x6d5: Call2 0x5d2

0x6d6: Pop(1)
0x6d7: Push((int) 519794)
0x6d8: @@ SetMessage(Stack[-1])
0x6d9: Pop(1)
0x6da: @@ ClearReplies()
0x6db: Pop(0)
0x6dc: Push((int) 519795)
0x6dd: Push((int) 20956)
0x6de: Push((int) 20955)
0x6df: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6e0: Pop(3)
0x6e1: Return(); Pop(0)

0x6e2: Push((int) 20956)
0x6e3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6e4: IF (Stack[-1] == 0) GOTO 0x6f4; Pop(1)

0x6e5: PushEmpty(string)
0x6e6: Stack[-1] = "Neutral"
0x6e7: Call2 0x5d2

0x6e8: Pop(1)
0x6e9: Push((int) 519796)
0x6ea: @@ SetMessage(Stack[-1])
0x6eb: Pop(1)
0x6ec: @@ ClearReplies()
0x6ed: Pop(0)
0x6ee: Push((int) 519797)
0x6ef: Push((int) -1)
0x6f0: Push((int) 20957)
0x6f1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6f2: Pop(3)
0x6f3: Return(); Pop(0)

0x6f4: Push((int) 20908)
0x6f5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6f6: IF (Stack[-1] == 0) GOTO 0x70b; Pop(1)

0x6f7: PushEmpty(string)
0x6f8: Stack[-1] = "Patronage"
0x6f9: Call2 0x5d2

0x6fa: Pop(1)
0x6fb: Push((int) 519754)
0x6fc: @@ SetMessage(Stack[-1])
0x6fd: Pop(1)
0x6fe: @@ ClearReplies()
0x6ff: Pop(0)
0x700: Push((int) 519755)
0x701: Push((int) 20910)
0x702: Push((int) 20909)
0x703: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x704: Pop(3)
0x705: Push((int) 519788)
0x706: Push((int) 20948)
0x707: Push((int) 20947)
0x708: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x709: Pop(3)
0x70a: Return(); Pop(0)

0x70b: Push((int) 20948)
0x70c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x70d: IF (Stack[-1] == 0) GOTO 0x71d; Pop(1)

0x70e: PushEmpty(string)
0x70f: Stack[-1] = "Anger"
0x710: Call2 0x5d2

0x711: Pop(1)
0x712: Push((int) 519789)
0x713: @@ SetMessage(Stack[-1])
0x714: Pop(1)
0x715: @@ ClearReplies()
0x716: Pop(0)
0x717: Push((int) 519790)
0x718: Push((int) 20910)
0x719: Push((int) 20949)
0x71a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x71b: Pop(3)
0x71c: Return(); Pop(0)

0x71d: Push((int) 20910)
0x71e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x71f: IF (Stack[-1] == 0) GOTO 0x734; Pop(1)

0x720: PushEmpty(string)
0x721: Stack[-1] = "Neutral"
0x722: Call2 0x5d2

0x723: Pop(1)
0x724: Push((int) 519756)
0x725: @@ SetMessage(Stack[-1])
0x726: Pop(1)
0x727: @@ ClearReplies()
0x728: Pop(0)
0x729: Push((int) 519757)
0x72a: Push((int) 20912)
0x72b: Push((int) 20911)
0x72c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x72d: Pop(3)
0x72e: Push((int) 519783)
0x72f: Push((int) 20942)
0x730: Push((int) 20941)
0x731: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x732: Pop(3)
0x733: Return(); Pop(0)

0x734: Push((int) 20942)
0x735: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x736: IF (Stack[-1] == 0) GOTO 0x746; Pop(1)

0x737: PushEmpty(string)
0x738: Stack[-1] = "Neutral"
0x739: Call2 0x5d2

0x73a: Pop(1)
0x73b: Push((int) 519784)
0x73c: @@ SetMessage(Stack[-1])
0x73d: Pop(1)
0x73e: @@ ClearReplies()
0x73f: Pop(0)
0x740: Push((int) 519785)
0x741: Push((int) 20944)
0x742: Push((int) 20943)
0x743: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x744: Pop(3)
0x745: Return(); Pop(0)

0x746: Push((int) 20944)
0x747: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x748: IF (Stack[-1] == 0) GOTO 0x758; Pop(1)

0x749: PushEmpty(string)
0x74a: Stack[-1] = "Neutral"
0x74b: Call2 0x5d2

0x74c: Pop(1)
0x74d: Push((int) 519786)
0x74e: @@ SetMessage(Stack[-1])
0x74f: Pop(1)
0x750: @@ ClearReplies()
0x751: Pop(0)
0x752: Push((int) 519787)
0x753: Push((int) 20912)
0x754: Push((int) 20945)
0x755: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x756: Pop(3)
0x757: Return(); Pop(0)

0x758: Push((int) 20912)
0x759: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x75a: IF (Stack[-1] == 0) GOTO 0x76f; Pop(1)

0x75b: PushEmpty(string)
0x75c: Stack[-1] = "Neutral"
0x75d: Call2 0x5d2

0x75e: Pop(1)
0x75f: Push((int) 519758)
0x760: @@ SetMessage(Stack[-1])
0x761: Pop(1)
0x762: @@ ClearReplies()
0x763: Pop(0)
0x764: Push((int) 519759)
0x765: Push((int) 20914)
0x766: Push((int) 20913)
0x767: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x768: Pop(3)
0x769: Push((int) 519782)
0x76a: Push((int) 20920)
0x76b: Push((int) 20939)
0x76c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x76d: Pop(3)
0x76e: Return(); Pop(0)

0x76f: Push((int) 20914)
0x770: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x771: IF (Stack[-1] == 0) GOTO 0x786; Pop(1)

0x772: PushEmpty(string)
0x773: Stack[-1] = "Neutral"
0x774: Call2 0x5d2

0x775: Pop(1)
0x776: Push((int) 519760)
0x777: @@ SetMessage(Stack[-1])
0x778: Pop(1)
0x779: @@ ClearReplies()
0x77a: Pop(0)
0x77b: Push((int) 519761)
0x77c: Push((int) 20916)
0x77d: Push((int) 20915)
0x77e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x77f: Pop(3)
0x780: Push((int) 519777)
0x781: Push((int) 20934)
0x782: Push((int) 20933)
0x783: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x784: Pop(3)
0x785: Return(); Pop(0)

0x786: Push((int) 20934)
0x787: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x788: IF (Stack[-1] == 0) GOTO 0x798; Pop(1)

0x789: PushEmpty(string)
0x78a: Stack[-1] = "Patronage"
0x78b: Call2 0x5d2

0x78c: Pop(1)
0x78d: Push((int) 519778)
0x78e: @@ SetMessage(Stack[-1])
0x78f: Pop(1)
0x790: @@ ClearReplies()
0x791: Pop(0)
0x792: Push((int) 519779)
0x793: Push((int) 20936)
0x794: Push((int) 20935)
0x795: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x796: Pop(3)
0x797: Return(); Pop(0)

0x798: Push((int) 20936)
0x799: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x79a: IF (Stack[-1] == 0) GOTO 0x7aa; Pop(1)

0x79b: PushEmpty(string)
0x79c: Stack[-1] = "Neutral"
0x79d: Call2 0x5d2

0x79e: Pop(1)
0x79f: Push((int) 519780)
0x7a0: @@ SetMessage(Stack[-1])
0x7a1: Pop(1)
0x7a2: @@ ClearReplies()
0x7a3: Pop(0)
0x7a4: Push((int) 519781)
0x7a5: Push((int) 20916)
0x7a6: Push((int) 20937)
0x7a7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7a8: Pop(3)
0x7a9: Return(); Pop(0)

0x7aa: Push((int) 20916)
0x7ab: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7ac: IF (Stack[-1] == 0) GOTO 0x7c1; Pop(1)

0x7ad: PushEmpty(string)
0x7ae: Stack[-1] = "Neutral"
0x7af: Call2 0x5d2

0x7b0: Pop(1)
0x7b1: Push((int) 519762)
0x7b2: @@ SetMessage(Stack[-1])
0x7b3: Pop(1)
0x7b4: @@ ClearReplies()
0x7b5: Pop(0)
0x7b6: Push((int) 519763)
0x7b7: Push((int) 20918)
0x7b8: Push((int) 20917)
0x7b9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7ba: Pop(3)
0x7bb: Push((int) 519773)
0x7bc: Push((int) 20928)
0x7bd: Push((int) 20927)
0x7be: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7bf: Pop(3)
0x7c0: Return(); Pop(0)

0x7c1: Push((int) 20928)
0x7c2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7c3: IF (Stack[-1] == 0) GOTO 0x7d8; Pop(1)

0x7c4: PushEmpty(string)
0x7c5: Stack[-1] = "Patronage"
0x7c6: Call2 0x5d2

0x7c7: Pop(1)
0x7c8: Push((int) 519774)
0x7c9: @@ SetMessage(Stack[-1])
0x7ca: Pop(1)
0x7cb: @@ ClearReplies()
0x7cc: Pop(0)
0x7cd: Push((int) 519775)
0x7ce: Push((int) 20920)
0x7cf: Push((int) 20929)
0x7d0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7d1: Pop(3)
0x7d2: Push((int) 519776)
0x7d3: Push((int) 20920)
0x7d4: Push((int) 20931)
0x7d5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7d6: Pop(3)
0x7d7: Return(); Pop(0)

0x7d8: Push((int) 20918)
0x7d9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7da: IF (Stack[-1] == 0) GOTO 0x7ef; Pop(1)

0x7db: PushEmpty(string)
0x7dc: Stack[-1] = "Repentance"
0x7dd: Call2 0x5d2

0x7de: Pop(1)
0x7df: Push((int) 519764)
0x7e0: @@ SetMessage(Stack[-1])
0x7e1: Pop(1)
0x7e2: @@ ClearReplies()
0x7e3: Pop(0)
0x7e4: Push((int) 519765)
0x7e5: Push((int) 20920)
0x7e6: Push((int) 20919)
0x7e7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7e8: Pop(3)
0x7e9: Push((int) 527079)
0x7ea: Push((int) 28377)
0x7eb: Push((int) 28376)
0x7ec: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7ed: Pop(3)
0x7ee: Return(); Pop(0)

0x7ef: Push((int) 28377)
0x7f0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7f1: IF (Stack[-1] == 0) GOTO 0x801; Pop(1)

0x7f2: PushEmpty(string)
0x7f3: Stack[-1] = "Neutral"
0x7f4: Call2 0x5d2

0x7f5: Pop(1)
0x7f6: Push((int) 527080)
0x7f7: @@ SetMessage(Stack[-1])
0x7f8: Pop(1)
0x7f9: @@ ClearReplies()
0x7fa: Pop(0)
0x7fb: Push((int) 527081)
0x7fc: Push((int) 20920)
0x7fd: Push((int) 28378)
0x7fe: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7ff: Pop(3)
0x800: Return(); Pop(0)

0x801: Push((int) 20920)
0x802: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x803: IF (Stack[-1] == 0) GOTO 0x813; Pop(1)

0x804: PushEmpty(string)
0x805: Stack[-1] = "Neutral"
0x806: Call2 0x5d2

0x807: Pop(1)
0x808: Push((int) 519766)
0x809: @@ SetMessage(Stack[-1])
0x80a: Pop(1)
0x80b: @@ ClearReplies()
0x80c: Pop(0)
0x80d: Push((int) 519767)
0x80e: Push((int) 20922)
0x80f: Push((int) 20921)
0x810: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x811: Pop(3)
0x812: Return(); Pop(0)

0x813: Push((int) 20922)
0x814: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x815: IF (Stack[-1] == 0) GOTO 0x825; Pop(1)

0x816: PushEmpty(string)
0x817: Stack[-1] = "Neutral"
0x818: Call2 0x5d2

0x819: Pop(1)
0x81a: Push((int) 519768)
0x81b: @@ SetMessage(Stack[-1])
0x81c: Pop(1)
0x81d: @@ ClearReplies()
0x81e: Pop(0)
0x81f: Push((int) 519769)
0x820: Push((int) 20924)
0x821: Push((int) 20923)
0x822: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x823: Pop(3)
0x824: Return(); Pop(0)

0x825: Push((int) 20924)
0x826: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x827: IF (Stack[-1] == 0) GOTO 0x837; Pop(1)

0x828: PushEmpty(string)
0x829: Stack[-1] = "Anger"
0x82a: Call2 0x5d2

0x82b: Pop(1)
0x82c: Push((int) 519770)
0x82d: @@ SetMessage(Stack[-1])
0x82e: Pop(1)
0x82f: @@ ClearReplies()
0x830: Pop(0)
0x831: Push((int) 527082)
0x832: Push((int) 28381)
0x833: Push((int) 28380)
0x834: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x835: Pop(3)
0x836: Return(); Pop(0)

0x837: Push((int) 28381)
0x838: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x839: IF (Stack[-1] == 0) GOTO 0x84e; Pop(1)

0x83a: PushEmpty(string)
0x83b: Stack[-1] = "Neutral"
0x83c: Call2 0x5d2

0x83d: Pop(1)
0x83e: Push((int) 527083)
0x83f: @@ SetMessage(Stack[-1])
0x840: Pop(1)
0x841: @@ ClearReplies()
0x842: Pop(0)
0x843: Push((int) 519772)
0x844: Push((int) -1)
0x845: Push((int) 20926)
0x846: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x847: Pop(3)
0x848: Push((int) 527139)
0x849: Push((int) -1)
0x84a: Push((int) 28438)
0x84b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x84c: Pop(3)
0x84d: Return(); Pop(0)

0x84e: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x84f: PushEmpty(bool)
0x850: Call2 0x1187

0x851: Pop(0)
0x852: IF (Stack[-1] == 0) GOTO 0x856; Pop(1)

0x853: @ lshStopAnimation()
0x854: Pop(0)
0x855: GOTO 0x858

0x856: @ StopAnimation()
0x857: Pop(0)
0x858: Return(); Pop(0)

0x859: GOTO 0x5e9

0x85a: Return(); Pop(0)

0x85b: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x85c: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x85d: PushEmpty(bool, object, float)
0x85e: Stack[-2] = Stack[-12]
0x85f: Stack[-1] = (float) 70.0
0x860: Call2 0xfe5

0x861: Pop(2)
0x862: Pop(1); Push((bool) Stack[-1] == 0)
0x863: IF (Stack[-1] == 0) GOTO 0x866; Pop(1)

0x864: Stack[-10] = (int) -2
0x865: Return(); Pop(8)

0x866: @ CreateDialog(Stack[-4])
0x867: Pop(0)
0x868: PushEmpty(int)
0x869: Call2 0x1181

0x86a: Pop(0)
0x86b: @@ SetNPCName(Stack[-1])
0x86c: Pop(1)
0x86d: PushEmpty(int)
0x86e: Call2 0x117f

0x86f: Pop(0)
0x870: @@ SetNPCDescription(Stack[-1])
0x871: Pop(1)
0x872: PushEmpty(string)
0x873: Call2 0x1183

0x874: Pop(0)
0x875: @@ SetPhoto(Stack[-1])
0x876: Pop(1)
0x877: PushEmpty(string)
0x878: Call2 0x1185

0x879: Pop(0)
0x87a: @@ SetPhoto2(Stack[-1])
0x87b: Pop(1)
0x87c: PushEmpty(int)
0x87d: Call2 0x143f

0x87e: Pop(0)
0x87f: @@ SetPlayerName(Stack[-1])
0x880: Pop(1)
0x881: Stack[-2] = (int) -1
0x882: @ IsOverrideActive(Stack[-3])
0x883: Pop(0)
0x884: Push(Stack[-3])
0x885: IF (Stack[-1] == 0) GOTO 0x888; Pop(1)

0x886: Stack[-10] = (int) -2
0x887: Return(); Pop(8)

0x888: @ DoDialog(Stack[-4])
0x889: Pop(0)
0x88a: PushEmpty(bool, object)
0x88b: PushEmpty(object)
0x88c: Call2 0x10fb

0x88d: Stack[-2] = Stack[-1]
0x88e: Pop(1)
0x88f: Call2 0x103c

0x890: Pop(2)
0x891: PushEmpty(object, object)
0x892: Stack[-2] = Stack[-11]
0x893: Stack[-1] = Stack[-6]
0x894: Push(-2, 4); TaskCall(7)
0x895: Call2 0x8ac

0x896: Pop(-2, 4); TaskReturn
0x897: Pop(2)
0x898: @@ IsDialogEnd(Stack[-1])
0x899: Pop(0)
0x89a: Pop(0); Push((bool) Stack[-1] == 0)
0x89b: IF (Stack[-1] == 0) GOTO 0x8a1; Pop(1)

0x89c: @ sync()
0x89d: Pop(0)
0x89e: @@ IsDialogEnd(Stack[-1])
0x89f: Pop(0)
0x8a0: GOTO 0x89a

0x8a1: PushEmpty(object)
0x8a2: Stack[-1] = Stack[-10]
0x8a3: Call2 0x102a

0x8a4: Pop(1)
0x8a5: @ StopDialog(Stack[-4])
0x8a6: Pop(0)
0x8a7: @@ GetReturnValue(Stack[-2])
0x8a8: Pop(0)
0x8a9: Stack[-10] = Stack[-2]
0x8aa: Return(); Pop(8)

0x8ab: Stack[-4] = 0
0x8ac: PushEmpty()
0x8ad: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x8ae: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x8af: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x8b0: Push((int) 1)
0x8b1: IF (Stack[-1] == 0) GOTO 0x8c8; Pop(1)

0x8b2: PushEmpty(string)
0x8b3: Stack[-1] = "Neutral"
0x8b4: Call2 0x8e6

0x8b5: Pop(1)
0x8b6: Push((int) 520698)
0x8b7: @@ SetMessage(Stack[-1])
0x8b8: Pop(1)
0x8b9: @@ ClearReplies()
0x8ba: Pop(0)
0x8bb: Push((int) 520699)
0x8bc: Push((int) 21910)
0x8bd: Push((int) 21909)
0x8be: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8bf: Pop(3)
0x8c0: Push((int) 520705)
0x8c1: Push((int) 21916)
0x8c2: Push((int) 21915)
0x8c3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8c4: Pop(3)
0x8c5: GOTO 0x8c8

0x8c6: Return(); Pop(0)

0x8c7: GOTO 0x8b0

0x8c8: PushEmpty(bool)
0x8c9: Call2 0x1187

0x8ca: Pop(0)
0x8cb: IF (Stack[-1] == 0) GOTO 0x8d7; Pop(1)

0x8cc: @ lshWaitForAnimEnd()
0x8cd: Pop(0)
0x8ce: Push( Stack[3 + Tasks[-1].StackPointer] )
0x8cf: IF (Stack[-1] == 0) GOTO 0x8d1; Pop(1)

0x8d0: GOTO 0x8d6

0x8d1: PushEmpty(string)
0x8d2: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x8d3: Call2 0x10c6

0x8d4: Pop(1)
0x8d5: GOTO 0x8cc

0x8d6: GOTO 0x8e5

0x8d7: Push("all")
0x8d8: Push("idle")
0x8d9: @ PlayAnimation(Stack[-2], Stack[-1])
0x8da: Pop(2)
0x8db: @ WaitForAnimEnd()
0x8dc: Pop(0)
0x8dd: Push( Stack[3 + Tasks[-1].StackPointer] )
0x8de: IF (Stack[-1] == 0) GOTO 0x8e0; Pop(1)

0x8df: GOTO 0x8e5

0x8e0: Push("all")
0x8e1: Push("idle")
0x8e2: @ PlayAnimation(Stack[-2], Stack[-1])
0x8e3: Pop(2)
0x8e4: GOTO 0x8db

0x8e5: Return(); Pop(0)

0x8e6: PushEmpty()
0x8e7: PushEmpty(bool)
0x8e8: Call2 0x1187

0x8e9: Pop(0)
0x8ea: Pop(1); Push((bool) Stack[-1] == 0)
0x8eb: IF (Stack[-1] == 0) GOTO 0x8ed; Pop(1)

0x8ec: Return(); Pop(0)

0x8ed: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x8ee: IF (Stack[-1] == 0) GOTO 0x8f0; Pop(1)

0x8ef: Return(); Pop(0)

0x8f0: PushEmpty(string, bool)
0x8f1: Stack[-2] = Stack[-3]
0x8f2: Push("")
0x8f3: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x8f4: IF (Stack[-1] == 0) GOTO 0x8f7; Pop(1)

0x8f5: Stack[-1] = (bool) 0
0x8f6: GOTO 0x8f8

0x8f7: Stack[-1] = (bool) 1
0x8f8: Call2 0x10d6

0x8f9: Pop(2)
0x8fa: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x8fb: Return(); Pop(0)

0x8fc: PushEmpty()
0x8fd: Push((int) 1)
0x8fe: IF (Stack[-1] == 0) GOTO 0x960; Pop(1)

0x8ff: PushEmpty()
0x900: Call2 0x10f4

0x901: Pop(0)
0x902: Push((int) 21908)
0x903: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x904: IF (Stack[-1] == 0) GOTO 0x919; Pop(1)

0x905: PushEmpty(string)
0x906: Stack[-1] = "Neutral"
0x907: Call2 0x8e6

0x908: Pop(1)
0x909: Push((int) 520698)
0x90a: @@ SetMessage(Stack[-1])
0x90b: Pop(1)
0x90c: @@ ClearReplies()
0x90d: Pop(0)
0x90e: Push((int) 520699)
0x90f: Push((int) 21910)
0x910: Push((int) 21909)
0x911: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x912: Pop(3)
0x913: Push((int) 520705)
0x914: Push((int) 21916)
0x915: Push((int) 21915)
0x916: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x917: Pop(3)
0x918: Return(); Pop(0)

0x919: Push((int) 21916)
0x91a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x91b: IF (Stack[-1] == 0) GOTO 0x92b; Pop(1)

0x91c: PushEmpty(string)
0x91d: Stack[-1] = "Neutral"
0x91e: Call2 0x8e6

0x91f: Pop(1)
0x920: Push((int) 520706)
0x921: @@ SetMessage(Stack[-1])
0x922: Pop(1)
0x923: @@ ClearReplies()
0x924: Pop(0)
0x925: Push((int) 520707)
0x926: Push((int) 21912)
0x927: Push((int) 21917)
0x928: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x929: Pop(3)
0x92a: Return(); Pop(0)

0x92b: Push((int) 21910)
0x92c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x92d: IF (Stack[-1] == 0) GOTO 0x93d; Pop(1)

0x92e: PushEmpty(string)
0x92f: Stack[-1] = "Neutral"
0x930: Call2 0x8e6

0x931: Pop(1)
0x932: Push((int) 520700)
0x933: @@ SetMessage(Stack[-1])
0x934: Pop(1)
0x935: @@ ClearReplies()
0x936: Pop(0)
0x937: Push((int) 520701)
0x938: Push((int) 21912)
0x939: Push((int) 21911)
0x93a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x93b: Pop(3)
0x93c: Return(); Pop(0)

0x93d: Push((int) 21912)
0x93e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x93f: IF (Stack[-1] == 0) GOTO 0x954; Pop(1)

0x940: PushEmpty(string)
0x941: Stack[-1] = "Neutral"
0x942: Call2 0x8e6

0x943: Pop(1)
0x944: Push((int) 520702)
0x945: @@ SetMessage(Stack[-1])
0x946: Pop(1)
0x947: @@ ClearReplies()
0x948: Pop(0)
0x949: Push((int) 520703)
0x94a: Push((int) -1)
0x94b: Push((int) 21913)
0x94c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x94d: Pop(3)
0x94e: Push((int) 520704)
0x94f: Push((int) -1)
0x950: Push((int) 21914)
0x951: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x952: Pop(3)
0x953: Return(); Pop(0)

0x954: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x955: PushEmpty(bool)
0x956: Call2 0x1187

0x957: Pop(0)
0x958: IF (Stack[-1] == 0) GOTO 0x95c; Pop(1)

0x959: @ lshStopAnimation()
0x95a: Pop(0)
0x95b: GOTO 0x95e

0x95c: @ StopAnimation()
0x95d: Pop(0)
0x95e: Return(); Pop(0)

0x95f: GOTO 0x8fd

0x960: Return(); Pop(0)

0x961: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x962: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x963: PushEmpty(bool, object, float)
0x964: Stack[-2] = Stack[-12]
0x965: Stack[-1] = (float) 70.0
0x966: Call2 0xfe5

0x967: Pop(2)
0x968: Pop(1); Push((bool) Stack[-1] == 0)
0x969: IF (Stack[-1] == 0) GOTO 0x96c; Pop(1)

0x96a: Stack[-10] = (int) -2
0x96b: Return(); Pop(8)

0x96c: @ CreateDialog(Stack[-4])
0x96d: Pop(0)
0x96e: PushEmpty(int)
0x96f: Call2 0x1181

0x970: Pop(0)
0x971: @@ SetNPCName(Stack[-1])
0x972: Pop(1)
0x973: PushEmpty(int)
0x974: Call2 0x117f

0x975: Pop(0)
0x976: @@ SetNPCDescription(Stack[-1])
0x977: Pop(1)
0x978: PushEmpty(string)
0x979: Call2 0x1183

0x97a: Pop(0)
0x97b: @@ SetPhoto(Stack[-1])
0x97c: Pop(1)
0x97d: PushEmpty(string)
0x97e: Call2 0x1185

0x97f: Pop(0)
0x980: @@ SetPhoto2(Stack[-1])
0x981: Pop(1)
0x982: PushEmpty(int)
0x983: Call2 0x143f

0x984: Pop(0)
0x985: @@ SetPlayerName(Stack[-1])
0x986: Pop(1)
0x987: Stack[-2] = (int) -1
0x988: @ IsOverrideActive(Stack[-3])
0x989: Pop(0)
0x98a: Push(Stack[-3])
0x98b: IF (Stack[-1] == 0) GOTO 0x98e; Pop(1)

0x98c: Stack[-10] = (int) -2
0x98d: Return(); Pop(8)

0x98e: @ DoDialog(Stack[-4])
0x98f: Pop(0)
0x990: PushEmpty(bool, object)
0x991: PushEmpty(object)
0x992: Call2 0x10fb

0x993: Stack[-2] = Stack[-1]
0x994: Pop(1)
0x995: Call2 0x103c

0x996: Pop(2)
0x997: PushEmpty(object, object)
0x998: Stack[-2] = Stack[-11]
0x999: Stack[-1] = Stack[-6]
0x99a: Push(-2, 4); TaskCall(9)
0x99b: Call2 0x9b2

0x99c: Pop(-2, 4); TaskReturn
0x99d: Pop(2)
0x99e: @@ IsDialogEnd(Stack[-1])
0x99f: Pop(0)
0x9a0: Pop(0); Push((bool) Stack[-1] == 0)
0x9a1: IF (Stack[-1] == 0) GOTO 0x9a7; Pop(1)

0x9a2: @ sync()
0x9a3: Pop(0)
0x9a4: @@ IsDialogEnd(Stack[-1])
0x9a5: Pop(0)
0x9a6: GOTO 0x9a0

0x9a7: PushEmpty(object)
0x9a8: Stack[-1] = Stack[-10]
0x9a9: Call2 0x102a

0x9aa: Pop(1)
0x9ab: @ StopDialog(Stack[-4])
0x9ac: Pop(0)
0x9ad: @@ GetReturnValue(Stack[-2])
0x9ae: Pop(0)
0x9af: Stack[-10] = Stack[-2]
0x9b0: Return(); Pop(8)

0x9b1: Stack[-4] = 0
0x9b2: PushEmpty()
0x9b3: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x9b4: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x9b5: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x9b6: Push((int) 1)
0x9b7: IF (Stack[-1] == 0) GOTO 0xa38; Pop(1)

0x9b8: PushEmpty(bool, object)
0x9b9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x9ba: Call2 0x12c7

0x9bb: Pop(1)
0x9bc: IF (Stack[-1] == 0) GOTO 0x9db; Pop(1)

0x9bd: PushEmpty(object, object)
0x9be: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x9bf: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x9c0: Call2 0x1244

0x9c1: Pop(2)
0x9c2: PushEmpty(string)
0x9c3: Stack[-1] = "Neutral"
0x9c4: Call2 0xa56

0x9c5: Pop(1)
0x9c6: Push((int) 522082)
0x9c7: @@ SetMessage(Stack[-1])
0x9c8: Pop(1)
0x9c9: @@ ClearReplies()
0x9ca: Pop(0)
0x9cb: Push((int) 523463)
0x9cc: Push((int) 24690)
0x9cd: Push((int) 24689)
0x9ce: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9cf: Pop(3)
0x9d0: Push((int) 523518)
0x9d1: Push((int) 24749)
0x9d2: Push((int) 24748)
0x9d3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9d4: Pop(3)
0x9d5: Push((int) 523517)
0x9d6: Push((int) 24750)
0x9d7: Push((int) 24747)
0x9d8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9d9: Pop(3)
0x9da: GOTO 0xa38

0x9db: PushEmpty(string)
0x9dc: Stack[-1] = "Neutral"
0x9dd: Call2 0xa56

0x9de: Pop(1)
0x9df: Push((int) 522085)
0x9e0: @@ SetMessage(Stack[-1])
0x9e1: Pop(1)
0x9e2: @@ ClearReplies()
0x9e3: Pop(0)
0x9e4: PushEmpty(bool)
0x9e5: Stack[-1] = (bool) 0
0x9e6: PushEmpty(bool, object)
0x9e7: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x9e8: Call2 0x12d3

0x9e9: Pop(1)
0x9ea: IF (Stack[-1] == 0) GOTO 0x9f1; Pop(1)

0x9eb: PushEmpty(bool, object)
0x9ec: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x9ed: Call2 0x12df

0x9ee: Pop(1)
0x9ef: IF (Stack[-1] == 0) GOTO 0x9f1; Pop(1)

0x9f0: Stack[-1] = (bool) 1
0x9f1: IF (Stack[-1] == 0) GOTO 0x9f7; Pop(1)

0x9f2: Push((int) 523467)
0x9f3: Push((int) 24695)
0x9f4: Push((int) 24693)
0x9f5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9f6: Pop(3)
0x9f7: PushEmpty(bool)
0x9f8: Stack[-1] = (bool) 0
0x9f9: PushEmpty(bool, object)
0x9fa: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x9fb: Call2 0x12d3

0x9fc: Pop(1)
0x9fd: IF (Stack[-1] == 0) GOTO 0xa04; Pop(1)

0x9fe: PushEmpty(bool, object)
0x9ff: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa00: Call2 0x12eb

0xa01: Pop(1)
0xa02: IF (Stack[-1] == 0) GOTO 0xa04; Pop(1)

0xa03: Stack[-1] = (bool) 1
0xa04: IF (Stack[-1] == 0) GOTO 0xa0a; Pop(1)

0xa05: Push((int) 523468)
0xa06: Push((int) 24699)
0xa07: Push((int) 24694)
0xa08: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa09: Pop(3)
0xa0a: PushEmpty(bool)
0xa0b: Stack[-1] = (bool) 0
0xa0c: PushEmpty(bool, object)
0xa0d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa0e: Call2 0x12d3

0xa0f: Pop(1)
0xa10: IF (Stack[-1] == 0) GOTO 0xa17; Pop(1)

0xa11: PushEmpty(bool, object)
0xa12: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa13: Call2 0x12f7

0xa14: Pop(1)
0xa15: IF (Stack[-1] == 0) GOTO 0xa17; Pop(1)

0xa16: Stack[-1] = (bool) 1
0xa17: IF (Stack[-1] == 0) GOTO 0xa1d; Pop(1)

0xa18: Push((int) 523479)
0xa19: Push((int) 24706)
0xa1a: Push((int) 24705)
0xa1b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa1c: Pop(3)
0xa1d: PushEmpty(bool)
0xa1e: Stack[-1] = (bool) 0
0xa1f: PushEmpty(bool, object)
0xa20: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa21: Call2 0x12d3

0xa22: Pop(1)
0xa23: IF (Stack[-1] == 0) GOTO 0xa2a; Pop(1)

0xa24: PushEmpty(bool, object)
0xa25: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa26: Call2 0x1303

0xa27: Pop(1)
0xa28: IF (Stack[-1] == 0) GOTO 0xa2a; Pop(1)

0xa29: Stack[-1] = (bool) 1
0xa2a: IF (Stack[-1] == 0) GOTO 0xa30; Pop(1)

0xa2b: Push((int) 523508)
0xa2c: Push((int) 24739)
0xa2d: Push((int) 24738)
0xa2e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa2f: Pop(3)
0xa30: Push((int) 522086)
0xa31: Push((int) -1)
0xa32: Push((int) 23255)
0xa33: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa34: Pop(3)
0xa35: GOTO 0xa38

0xa36: Return(); Pop(0)

0xa37: GOTO 0x9b6

0xa38: PushEmpty(bool)
0xa39: Call2 0x1187

0xa3a: Pop(0)
0xa3b: IF (Stack[-1] == 0) GOTO 0xa47; Pop(1)

0xa3c: @ lshWaitForAnimEnd()
0xa3d: Pop(0)
0xa3e: Push( Stack[3 + Tasks[-1].StackPointer] )
0xa3f: IF (Stack[-1] == 0) GOTO 0xa41; Pop(1)

0xa40: GOTO 0xa46

0xa41: PushEmpty(string)
0xa42: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xa43: Call2 0x10c6

0xa44: Pop(1)
0xa45: GOTO 0xa3c

0xa46: GOTO 0xa55

0xa47: Push("all")
0xa48: Push("idle")
0xa49: @ PlayAnimation(Stack[-2], Stack[-1])
0xa4a: Pop(2)
0xa4b: @ WaitForAnimEnd()
0xa4c: Pop(0)
0xa4d: Push( Stack[3 + Tasks[-1].StackPointer] )
0xa4e: IF (Stack[-1] == 0) GOTO 0xa50; Pop(1)

0xa4f: GOTO 0xa55

0xa50: Push("all")
0xa51: Push("idle")
0xa52: @ PlayAnimation(Stack[-2], Stack[-1])
0xa53: Pop(2)
0xa54: GOTO 0xa4b

0xa55: Return(); Pop(0)

0xa56: PushEmpty()
0xa57: PushEmpty(bool)
0xa58: Call2 0x1187

0xa59: Pop(0)
0xa5a: Pop(1); Push((bool) Stack[-1] == 0)
0xa5b: IF (Stack[-1] == 0) GOTO 0xa5d; Pop(1)

0xa5c: Return(); Pop(0)

0xa5d: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xa5e: IF (Stack[-1] == 0) GOTO 0xa60; Pop(1)

0xa5f: Return(); Pop(0)

0xa60: PushEmpty(string, bool)
0xa61: Stack[-2] = Stack[-3]
0xa62: Push("")
0xa63: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xa64: IF (Stack[-1] == 0) GOTO 0xa67; Pop(1)

0xa65: Stack[-1] = (bool) 0
0xa66: GOTO 0xa68

0xa67: Stack[-1] = (bool) 1
0xa68: Call2 0x10d6

0xa69: Pop(2)
0xa6a: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xa6b: Return(); Pop(0)

0xa6c: PushEmpty()
0xa6d: Push((int) 1)
0xa6e: IF (Stack[-1] == 0) GOTO 0xd36; Pop(1)

0xa6f: PushEmpty()
0xa70: Call2 0x10f4

0xa71: Pop(0)
0xa72: Push((int) 23252)
0xa73: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xa74: IF (Stack[-1] == 0) GOTO 0xa7a; Pop(1)

0xa75: PushEmpty(object, object)
0xa76: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xa77: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xa78: Call2 0x123b

0xa79: Pop(2)
0xa7a: Push((int) 24761)
0xa7b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xa7c: IF (Stack[-1] == 0) GOTO 0xa82; Pop(1)

0xa7d: PushEmpty(object, object)
0xa7e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xa7f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xa80: Call2 0x123b

0xa81: Pop(2)
0xa82: Push((int) 24693)
0xa83: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xa84: IF (Stack[-1] == 0) GOTO 0xa8a; Pop(1)

0xa85: PushEmpty(object, object)
0xa86: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xa87: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xa88: Call2 0x1252

0xa89: Pop(2)
0xa8a: Push((int) 24694)
0xa8b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xa8c: IF (Stack[-1] == 0) GOTO 0xa92; Pop(1)

0xa8d: PushEmpty(object, object)
0xa8e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xa8f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xa90: Call2 0x1258

0xa91: Pop(2)
0xa92: Push((int) 24705)
0xa93: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xa94: IF (Stack[-1] == 0) GOTO 0xa9a; Pop(1)

0xa95: PushEmpty(object, object)
0xa96: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xa97: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xa98: Call2 0x125e

0xa99: Pop(2)
0xa9a: Push((int) 24714)
0xa9b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xa9c: IF (Stack[-1] == 0) GOTO 0xaa2; Pop(1)

0xa9d: PushEmpty(object, object)
0xa9e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xa9f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xaa0: Call2 0x124a

0xaa1: Pop(2)
0xaa2: Push((int) 24715)
0xaa3: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xaa4: IF (Stack[-1] == 0) GOTO 0xaaa; Pop(1)

0xaa5: PushEmpty(object, object)
0xaa6: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xaa7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xaa8: Call2 0x124a

0xaa9: Pop(2)
0xaaa: Push((int) 24738)
0xaab: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xaac: IF (Stack[-1] == 0) GOTO 0xab2; Pop(1)

0xaad: PushEmpty(object, object)
0xaae: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xaaf: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xab0: Call2 0x1264

0xab1: Pop(2)
0xab2: Push((int) 23251)
0xab3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xab4: IF (Stack[-1] == 0) GOTO 0xb33; Pop(1)

0xab5: PushEmpty(bool, object)
0xab6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xab7: Call2 0x12c7

0xab8: Pop(1)
0xab9: IF (Stack[-1] == 0) GOTO 0xad8; Pop(1)

0xaba: PushEmpty(object, object)
0xabb: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xabc: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xabd: Call2 0x1244

0xabe: Pop(2)
0xabf: PushEmpty(string)
0xac0: Stack[-1] = "Neutral"
0xac1: Call2 0xa56

0xac2: Pop(1)
0xac3: Push((int) 522082)
0xac4: @@ SetMessage(Stack[-1])
0xac5: Pop(1)
0xac6: @@ ClearReplies()
0xac7: Pop(0)
0xac8: Push((int) 523463)
0xac9: Push((int) 24690)
0xaca: Push((int) 24689)
0xacb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xacc: Pop(3)
0xacd: Push((int) 523518)
0xace: Push((int) 24749)
0xacf: Push((int) 24748)
0xad0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xad1: Pop(3)
0xad2: Push((int) 523517)
0xad3: Push((int) 24750)
0xad4: Push((int) 24747)
0xad5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xad6: Pop(3)
0xad7: Return(); Pop(0)

0xad8: PushEmpty(string)
0xad9: Stack[-1] = "Neutral"
0xada: Call2 0xa56

0xadb: Pop(1)
0xadc: Push((int) 522085)
0xadd: @@ SetMessage(Stack[-1])
0xade: Pop(1)
0xadf: @@ ClearReplies()
0xae0: Pop(0)
0xae1: PushEmpty(bool)
0xae2: Stack[-1] = (bool) 0
0xae3: PushEmpty(bool, object)
0xae4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xae5: Call2 0x12d3

0xae6: Pop(1)
0xae7: IF (Stack[-1] == 0) GOTO 0xaee; Pop(1)

0xae8: PushEmpty(bool, object)
0xae9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xaea: Call2 0x12df

0xaeb: Pop(1)
0xaec: IF (Stack[-1] == 0) GOTO 0xaee; Pop(1)

0xaed: Stack[-1] = (bool) 1
0xaee: IF (Stack[-1] == 0) GOTO 0xaf4; Pop(1)

0xaef: Push((int) 523467)
0xaf0: Push((int) 24695)
0xaf1: Push((int) 24693)
0xaf2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xaf3: Pop(3)
0xaf4: PushEmpty(bool)
0xaf5: Stack[-1] = (bool) 0
0xaf6: PushEmpty(bool, object)
0xaf7: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xaf8: Call2 0x12d3

0xaf9: Pop(1)
0xafa: IF (Stack[-1] == 0) GOTO 0xb01; Pop(1)

0xafb: PushEmpty(bool, object)
0xafc: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xafd: Call2 0x12eb

0xafe: Pop(1)
0xaff: IF (Stack[-1] == 0) GOTO 0xb01; Pop(1)

0xb00: Stack[-1] = (bool) 1
0xb01: IF (Stack[-1] == 0) GOTO 0xb07; Pop(1)

0xb02: Push((int) 523468)
0xb03: Push((int) 24699)
0xb04: Push((int) 24694)
0xb05: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb06: Pop(3)
0xb07: PushEmpty(bool)
0xb08: Stack[-1] = (bool) 0
0xb09: PushEmpty(bool, object)
0xb0a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb0b: Call2 0x12d3

0xb0c: Pop(1)
0xb0d: IF (Stack[-1] == 0) GOTO 0xb14; Pop(1)

0xb0e: PushEmpty(bool, object)
0xb0f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb10: Call2 0x12f7

0xb11: Pop(1)
0xb12: IF (Stack[-1] == 0) GOTO 0xb14; Pop(1)

0xb13: Stack[-1] = (bool) 1
0xb14: IF (Stack[-1] == 0) GOTO 0xb1a; Pop(1)

0xb15: Push((int) 523479)
0xb16: Push((int) 24706)
0xb17: Push((int) 24705)
0xb18: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb19: Pop(3)
0xb1a: PushEmpty(bool)
0xb1b: Stack[-1] = (bool) 0
0xb1c: PushEmpty(bool, object)
0xb1d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb1e: Call2 0x12d3

0xb1f: Pop(1)
0xb20: IF (Stack[-1] == 0) GOTO 0xb27; Pop(1)

0xb21: PushEmpty(bool, object)
0xb22: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb23: Call2 0x1303

0xb24: Pop(1)
0xb25: IF (Stack[-1] == 0) GOTO 0xb27; Pop(1)

0xb26: Stack[-1] = (bool) 1
0xb27: IF (Stack[-1] == 0) GOTO 0xb2d; Pop(1)

0xb28: Push((int) 523508)
0xb29: Push((int) 24739)
0xb2a: Push((int) 24738)
0xb2b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb2c: Pop(3)
0xb2d: Push((int) 522086)
0xb2e: Push((int) -1)
0xb2f: Push((int) 23255)
0xb30: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb31: Pop(3)
0xb32: Return(); Pop(0)

0xb33: Push((int) 24739)
0xb34: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb35: IF (Stack[-1] == 0) GOTO 0xb4a; Pop(1)

0xb36: PushEmpty(string)
0xb37: Stack[-1] = "Neutral"
0xb38: Call2 0xa56

0xb39: Pop(1)
0xb3a: Push((int) 523509)
0xb3b: @@ SetMessage(Stack[-1])
0xb3c: Pop(1)
0xb3d: @@ ClearReplies()
0xb3e: Pop(0)
0xb3f: Push((int) 523510)
0xb40: Push((int) 24742)
0xb41: Push((int) 24740)
0xb42: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb43: Pop(3)
0xb44: Push((int) 523511)
0xb45: Push((int) -1)
0xb46: Push((int) 24741)
0xb47: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb48: Pop(3)
0xb49: Return(); Pop(0)

0xb4a: Push((int) 24742)
0xb4b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb4c: IF (Stack[-1] == 0) GOTO 0xb61; Pop(1)

0xb4d: PushEmpty(string)
0xb4e: Stack[-1] = "Neutral"
0xb4f: Call2 0xa56

0xb50: Pop(1)
0xb51: Push((int) 523512)
0xb52: @@ SetMessage(Stack[-1])
0xb53: Pop(1)
0xb54: @@ ClearReplies()
0xb55: Pop(0)
0xb56: Push((int) 523513)
0xb57: Push((int) -1)
0xb58: Push((int) 24743)
0xb59: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb5a: Pop(3)
0xb5b: Push((int) 523514)
0xb5c: Push((int) 24745)
0xb5d: Push((int) 24744)
0xb5e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb5f: Pop(3)
0xb60: Return(); Pop(0)

0xb61: Push((int) 24745)
0xb62: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb63: IF (Stack[-1] == 0) GOTO 0xb73; Pop(1)

0xb64: PushEmpty(string)
0xb65: Stack[-1] = "Neutral"
0xb66: Call2 0xa56

0xb67: Pop(1)
0xb68: Push((int) 523515)
0xb69: @@ SetMessage(Stack[-1])
0xb6a: Pop(1)
0xb6b: @@ ClearReplies()
0xb6c: Pop(0)
0xb6d: Push((int) 523516)
0xb6e: Push((int) -1)
0xb6f: Push((int) 24746)
0xb70: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb71: Pop(3)
0xb72: Return(); Pop(0)

0xb73: Push((int) 24706)
0xb74: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb75: IF (Stack[-1] == 0) GOTO 0xb8a; Pop(1)

0xb76: PushEmpty(string)
0xb77: Stack[-1] = "Neutral"
0xb78: Call2 0xa56

0xb79: Pop(1)
0xb7a: Push((int) 523480)
0xb7b: @@ SetMessage(Stack[-1])
0xb7c: Pop(1)
0xb7d: @@ ClearReplies()
0xb7e: Pop(0)
0xb7f: Push((int) 523481)
0xb80: Push((int) 24709)
0xb81: Push((int) 24707)
0xb82: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb83: Pop(3)
0xb84: Push((int) 523482)
0xb85: Push((int) 24709)
0xb86: Push((int) 24708)
0xb87: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb88: Pop(3)
0xb89: Return(); Pop(0)

0xb8a: Push((int) 24709)
0xb8b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb8c: IF (Stack[-1] == 0) GOTO 0xba1; Pop(1)

0xb8d: PushEmpty(string)
0xb8e: Stack[-1] = "Neutral"
0xb8f: Call2 0xa56

0xb90: Pop(1)
0xb91: Push((int) 523483)
0xb92: @@ SetMessage(Stack[-1])
0xb93: Pop(1)
0xb94: @@ ClearReplies()
0xb95: Pop(0)
0xb96: Push((int) 523484)
0xb97: Push((int) 24713)
0xb98: Push((int) 24710)
0xb99: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb9a: Pop(3)
0xb9b: Push((int) 523485)
0xb9c: Push((int) 24713)
0xb9d: Push((int) 24711)
0xb9e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb9f: Pop(3)
0xba0: Return(); Pop(0)

0xba1: Push((int) 24713)
0xba2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xba3: IF (Stack[-1] == 0) GOTO 0xbb8; Pop(1)

0xba4: PushEmpty(string)
0xba5: Stack[-1] = "Neutral"
0xba6: Call2 0xa56

0xba7: Pop(1)
0xba8: Push((int) 523487)
0xba9: @@ SetMessage(Stack[-1])
0xbaa: Pop(1)
0xbab: @@ ClearReplies()
0xbac: Pop(0)
0xbad: Push((int) 523488)
0xbae: Push((int) -1)
0xbaf: Push((int) 24714)
0xbb0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbb1: Pop(3)
0xbb2: Push((int) 523489)
0xbb3: Push((int) -1)
0xbb4: Push((int) 24715)
0xbb5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbb6: Pop(3)
0xbb7: Return(); Pop(0)

0xbb8: Push((int) 24699)
0xbb9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xbba: IF (Stack[-1] == 0) GOTO 0xbca; Pop(1)

0xbbb: PushEmpty(string)
0xbbc: Stack[-1] = "Neutral"
0xbbd: Call2 0xa56

0xbbe: Pop(1)
0xbbf: Push((int) 523473)
0xbc0: @@ SetMessage(Stack[-1])
0xbc1: Pop(1)
0xbc2: @@ ClearReplies()
0xbc3: Pop(0)
0xbc4: Push((int) 523474)
0xbc5: Push((int) 24701)
0xbc6: Push((int) 24700)
0xbc7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbc8: Pop(3)
0xbc9: Return(); Pop(0)

0xbca: Push((int) 24701)
0xbcb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xbcc: IF (Stack[-1] == 0) GOTO 0xbdc; Pop(1)

0xbcd: PushEmpty(string)
0xbce: Stack[-1] = "Patronage"
0xbcf: Call2 0xa56

0xbd0: Pop(1)
0xbd1: Push((int) 523475)
0xbd2: @@ SetMessage(Stack[-1])
0xbd3: Pop(1)
0xbd4: @@ ClearReplies()
0xbd5: Pop(0)
0xbd6: Push((int) 523476)
0xbd7: Push((int) 24703)
0xbd8: Push((int) 24702)
0xbd9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbda: Pop(3)
0xbdb: Return(); Pop(0)

0xbdc: Push((int) 24703)
0xbdd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xbde: IF (Stack[-1] == 0) GOTO 0xbf3; Pop(1)

0xbdf: PushEmpty(string)
0xbe0: Stack[-1] = "Neutral"
0xbe1: Call2 0xa56

0xbe2: Pop(1)
0xbe3: Push((int) 523477)
0xbe4: @@ SetMessage(Stack[-1])
0xbe5: Pop(1)
0xbe6: @@ ClearReplies()
0xbe7: Pop(0)
0xbe8: Push((int) 523490)
0xbe9: Push((int) 24720)
0xbea: Push((int) 24718)
0xbeb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbec: Pop(3)
0xbed: Push((int) 523491)
0xbee: Push((int) -1)
0xbef: Push((int) 24719)
0xbf0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbf1: Pop(3)
0xbf2: Return(); Pop(0)

0xbf3: Push((int) 24720)
0xbf4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xbf5: IF (Stack[-1] == 0) GOTO 0xc05; Pop(1)

0xbf6: PushEmpty(string)
0xbf7: Stack[-1] = "Neutral"
0xbf8: Call2 0xa56

0xbf9: Pop(1)
0xbfa: Push((int) 523492)
0xbfb: @@ SetMessage(Stack[-1])
0xbfc: Pop(1)
0xbfd: @@ ClearReplies()
0xbfe: Pop(0)
0xbff: Push((int) 523493)
0xc00: Push((int) -1)
0xc01: Push((int) 24721)
0xc02: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc03: Pop(3)
0xc04: Return(); Pop(0)

0xc05: Push((int) 24695)
0xc06: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc07: IF (Stack[-1] == 0) GOTO 0xc17; Pop(1)

0xc08: PushEmpty(string)
0xc09: Stack[-1] = "Neutral"
0xc0a: Call2 0xa56

0xc0b: Pop(1)
0xc0c: Push((int) 523469)
0xc0d: @@ SetMessage(Stack[-1])
0xc0e: Pop(1)
0xc0f: @@ ClearReplies()
0xc10: Pop(0)
0xc11: Push((int) 523470)
0xc12: Push((int) 24697)
0xc13: Push((int) 24696)
0xc14: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc15: Pop(3)
0xc16: Return(); Pop(0)

0xc17: Push((int) 24697)
0xc18: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc19: IF (Stack[-1] == 0) GOTO 0xc29; Pop(1)

0xc1a: PushEmpty(string)
0xc1b: Stack[-1] = "Repentance"
0xc1c: Call2 0xa56

0xc1d: Pop(1)
0xc1e: Push((int) 523471)
0xc1f: @@ SetMessage(Stack[-1])
0xc20: Pop(1)
0xc21: @@ ClearReplies()
0xc22: Pop(0)
0xc23: Push((int) 523472)
0xc24: Push((int) 24704)
0xc25: Push((int) 24698)
0xc26: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc27: Pop(3)
0xc28: Return(); Pop(0)

0xc29: Push((int) 24704)
0xc2a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc2b: IF (Stack[-1] == 0) GOTO 0xc40; Pop(1)

0xc2c: PushEmpty(string)
0xc2d: Stack[-1] = "Neutral"
0xc2e: Call2 0xa56

0xc2f: Pop(1)
0xc30: Push((int) 523478)
0xc31: @@ SetMessage(Stack[-1])
0xc32: Pop(1)
0xc33: @@ ClearReplies()
0xc34: Pop(0)
0xc35: Push((int) 523494)
0xc36: Push((int) 24723)
0xc37: Push((int) 24722)
0xc38: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc39: Pop(3)
0xc3a: Push((int) 523501)
0xc3b: Push((int) 24730)
0xc3c: Push((int) 24729)
0xc3d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc3e: Pop(3)
0xc3f: Return(); Pop(0)

0xc40: Push((int) 24730)
0xc41: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc42: IF (Stack[-1] == 0) GOTO 0xc52; Pop(1)

0xc43: PushEmpty(string)
0xc44: Stack[-1] = "Neutral"
0xc45: Call2 0xa56

0xc46: Pop(1)
0xc47: Push((int) 523502)
0xc48: @@ SetMessage(Stack[-1])
0xc49: Pop(1)
0xc4a: @@ ClearReplies()
0xc4b: Pop(0)
0xc4c: Push((int) 523503)
0xc4d: Push((int) 24723)
0xc4e: Push((int) 24731)
0xc4f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc50: Pop(3)
0xc51: Return(); Pop(0)

0xc52: Push((int) 24723)
0xc53: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc54: IF (Stack[-1] == 0) GOTO 0xc69; Pop(1)

0xc55: PushEmpty(string)
0xc56: Stack[-1] = "Anger"
0xc57: Call2 0xa56

0xc58: Pop(1)
0xc59: Push((int) 523495)
0xc5a: @@ SetMessage(Stack[-1])
0xc5b: Pop(1)
0xc5c: @@ ClearReplies()
0xc5d: Pop(0)
0xc5e: Push((int) 523499)
0xc5f: Push((int) 24728)
0xc60: Push((int) 24727)
0xc61: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc62: Pop(3)
0xc63: Push((int) 523496)
0xc64: Push((int) 24725)
0xc65: Push((int) 24724)
0xc66: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc67: Pop(3)
0xc68: Return(); Pop(0)

0xc69: Push((int) 24725)
0xc6a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc6b: IF (Stack[-1] == 0) GOTO 0xc7b; Pop(1)

0xc6c: PushEmpty(string)
0xc6d: Stack[-1] = "Repentance"
0xc6e: Call2 0xa56

0xc6f: Pop(1)
0xc70: Push((int) 523497)
0xc71: @@ SetMessage(Stack[-1])
0xc72: Pop(1)
0xc73: @@ ClearReplies()
0xc74: Pop(0)
0xc75: Push((int) 523498)
0xc76: Push((int) 24728)
0xc77: Push((int) 24726)
0xc78: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc79: Pop(3)
0xc7a: Return(); Pop(0)

0xc7b: Push((int) 24728)
0xc7c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc7d: IF (Stack[-1] == 0) GOTO 0xc8d; Pop(1)

0xc7e: PushEmpty(string)
0xc7f: Stack[-1] = "Neutral"
0xc80: Call2 0xa56

0xc81: Pop(1)
0xc82: Push((int) 523500)
0xc83: @@ SetMessage(Stack[-1])
0xc84: Pop(1)
0xc85: @@ ClearReplies()
0xc86: Pop(0)
0xc87: Push((int) 523504)
0xc88: Push((int) 24735)
0xc89: Push((int) 24734)
0xc8a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc8b: Pop(3)
0xc8c: Return(); Pop(0)

0xc8d: Push((int) 24735)
0xc8e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc8f: IF (Stack[-1] == 0) GOTO 0xca4; Pop(1)

0xc90: PushEmpty(string)
0xc91: Stack[-1] = "Neutral"
0xc92: Call2 0xa56

0xc93: Pop(1)
0xc94: Push((int) 523505)
0xc95: @@ SetMessage(Stack[-1])
0xc96: Pop(1)
0xc97: @@ ClearReplies()
0xc98: Pop(0)
0xc99: Push((int) 523506)
0xc9a: Push((int) -1)
0xc9b: Push((int) 24736)
0xc9c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc9d: Pop(3)
0xc9e: Push((int) 523507)
0xc9f: Push((int) -1)
0xca0: Push((int) 24737)
0xca1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xca2: Pop(3)
0xca3: Return(); Pop(0)

0xca4: Push((int) 24750)
0xca5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xca6: IF (Stack[-1] == 0) GOTO 0xcbb; Pop(1)

0xca7: PushEmpty(string)
0xca8: Stack[-1] = "Neutral"
0xca9: Call2 0xa56

0xcaa: Pop(1)
0xcab: Push((int) 523520)
0xcac: @@ SetMessage(Stack[-1])
0xcad: Pop(1)
0xcae: @@ ClearReplies()
0xcaf: Pop(0)
0xcb0: Push((int) 523521)
0xcb1: Push((int) 24752)
0xcb2: Push((int) 24751)
0xcb3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcb4: Pop(3)
0xcb5: Push((int) 523527)
0xcb6: Push((int) 24690)
0xcb7: Push((int) 24759)
0xcb8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcb9: Pop(3)
0xcba: Return(); Pop(0)

0xcbb: Push((int) 24752)
0xcbc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xcbd: IF (Stack[-1] == 0) GOTO 0xccd; Pop(1)

0xcbe: PushEmpty(string)
0xcbf: Stack[-1] = "Neutral"
0xcc0: Call2 0xa56

0xcc1: Pop(1)
0xcc2: Push((int) 523522)
0xcc3: @@ SetMessage(Stack[-1])
0xcc4: Pop(1)
0xcc5: @@ ClearReplies()
0xcc6: Pop(0)
0xcc7: Push((int) 523523)
0xcc8: Push((int) 24754)
0xcc9: Push((int) 24753)
0xcca: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xccb: Pop(3)
0xccc: Return(); Pop(0)

0xccd: Push((int) 24754)
0xcce: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xccf: IF (Stack[-1] == 0) GOTO 0xcdf; Pop(1)

0xcd0: PushEmpty(string)
0xcd1: Stack[-1] = "Neutral"
0xcd2: Call2 0xa56

0xcd3: Pop(1)
0xcd4: Push((int) 523524)
0xcd5: @@ SetMessage(Stack[-1])
0xcd6: Pop(1)
0xcd7: @@ ClearReplies()
0xcd8: Pop(0)
0xcd9: Push((int) 523525)
0xcda: Push((int) 24690)
0xcdb: Push((int) 24755)
0xcdc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcdd: Pop(3)
0xcde: Return(); Pop(0)

0xcdf: Push((int) 24749)
0xce0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xce1: IF (Stack[-1] == 0) GOTO 0xcf1; Pop(1)

0xce2: PushEmpty(string)
0xce3: Stack[-1] = "Neutral"
0xce4: Call2 0xa56

0xce5: Pop(1)
0xce6: Push((int) 523519)
0xce7: @@ SetMessage(Stack[-1])
0xce8: Pop(1)
0xce9: @@ ClearReplies()
0xcea: Pop(0)
0xceb: Push((int) 523526)
0xcec: Push((int) 24750)
0xced: Push((int) 24757)
0xcee: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcef: Pop(3)
0xcf0: Return(); Pop(0)

0xcf1: Push((int) 24690)
0xcf2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xcf3: IF (Stack[-1] == 0) GOTO 0xd13; Pop(1)

0xcf4: PushEmpty(string)
0xcf5: Stack[-1] = "Neutral"
0xcf6: Call2 0xa56

0xcf7: Pop(1)
0xcf8: Push((int) 523464)
0xcf9: @@ SetMessage(Stack[-1])
0xcfa: Pop(1)
0xcfb: @@ ClearReplies()
0xcfc: Pop(0)
0xcfd: PushEmpty(bool, object)
0xcfe: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xcff: Call2 0x12bb

0xd00: Pop(1)
0xd01: Pop(1); Push((bool) Stack[-1] == 0)
0xd02: IF (Stack[-1] == 0) GOTO 0xd08; Pop(1)

0xd03: Push((int) 523465)
0xd04: Push((int) 24692)
0xd05: Push((int) 24691)
0xd06: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd07: Pop(3)
0xd08: PushEmpty(bool, object)
0xd09: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xd0a: Call2 0x12bb

0xd0b: Pop(1)
0xd0c: IF (Stack[-1] == 0) GOTO 0xd12; Pop(1)

0xd0d: Push((int) 522084)
0xd0e: Push((int) -1)
0xd0f: Push((int) 23253)
0xd10: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd11: Pop(3)
0xd12: Return(); Pop(0)

0xd13: Push((int) 24692)
0xd14: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd15: IF (Stack[-1] == 0) GOTO 0xd2a; Pop(1)

0xd16: PushEmpty(string)
0xd17: Stack[-1] = "Repentance"
0xd18: Call2 0xa56

0xd19: Pop(1)
0xd1a: Push((int) 523466)
0xd1b: @@ SetMessage(Stack[-1])
0xd1c: Pop(1)
0xd1d: @@ ClearReplies()
0xd1e: Pop(0)
0xd1f: Push((int) 522083)
0xd20: Push((int) -1)
0xd21: Push((int) 23252)
0xd22: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd23: Pop(3)
0xd24: Push((int) 523528)
0xd25: Push((int) -1)
0xd26: Push((int) 24761)
0xd27: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd28: Pop(3)
0xd29: Return(); Pop(0)

0xd2a: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xd2b: PushEmpty(bool)
0xd2c: Call2 0x1187

0xd2d: Pop(0)
0xd2e: IF (Stack[-1] == 0) GOTO 0xd32; Pop(1)

0xd2f: @ lshStopAnimation()
0xd30: Pop(0)
0xd31: GOTO 0xd34

0xd32: @ StopAnimation()
0xd33: Pop(0)
0xd34: Return(); Pop(0)

0xd35: GOTO 0xa6d

0xd36: Return(); Pop(0)

0xd37: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0xd38: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0xd39: PushEmpty(bool, object, float)
0xd3a: Stack[-2] = Stack[-12]
0xd3b: Stack[-1] = (float) 70.0
0xd3c: Call2 0xfe5

0xd3d: Pop(2)
0xd3e: Pop(1); Push((bool) Stack[-1] == 0)
0xd3f: IF (Stack[-1] == 0) GOTO 0xd42; Pop(1)

0xd40: Stack[-10] = (int) -2
0xd41: Return(); Pop(8)

0xd42: @ CreateDialog(Stack[-4])
0xd43: Pop(0)
0xd44: PushEmpty(int)
0xd45: Call2 0x1181

0xd46: Pop(0)
0xd47: @@ SetNPCName(Stack[-1])
0xd48: Pop(1)
0xd49: PushEmpty(int)
0xd4a: Call2 0x117f

0xd4b: Pop(0)
0xd4c: @@ SetNPCDescription(Stack[-1])
0xd4d: Pop(1)
0xd4e: PushEmpty(string)
0xd4f: Call2 0x1183

0xd50: Pop(0)
0xd51: @@ SetPhoto(Stack[-1])
0xd52: Pop(1)
0xd53: PushEmpty(string)
0xd54: Call2 0x1185

0xd55: Pop(0)
0xd56: @@ SetPhoto2(Stack[-1])
0xd57: Pop(1)
0xd58: PushEmpty(int)
0xd59: Call2 0x143f

0xd5a: Pop(0)
0xd5b: @@ SetPlayerName(Stack[-1])
0xd5c: Pop(1)
0xd5d: Stack[-2] = (int) -1
0xd5e: @ IsOverrideActive(Stack[-3])
0xd5f: Pop(0)
0xd60: Push(Stack[-3])
0xd61: IF (Stack[-1] == 0) GOTO 0xd64; Pop(1)

0xd62: Stack[-10] = (int) -2
0xd63: Return(); Pop(8)

0xd64: @ DoDialog(Stack[-4])
0xd65: Pop(0)
0xd66: PushEmpty(bool, object)
0xd67: PushEmpty(object)
0xd68: Call2 0x10fb

0xd69: Stack[-2] = Stack[-1]
0xd6a: Pop(1)
0xd6b: Call2 0x103c

0xd6c: Pop(2)
0xd6d: PushEmpty(object, object)
0xd6e: Stack[-2] = Stack[-11]
0xd6f: Stack[-1] = Stack[-6]
0xd70: Push(-2, 4); TaskCall(11)
0xd71: Call2 0xd88

0xd72: Pop(-2, 4); TaskReturn
0xd73: Pop(2)
0xd74: @@ IsDialogEnd(Stack[-1])
0xd75: Pop(0)
0xd76: Pop(0); Push((bool) Stack[-1] == 0)
0xd77: IF (Stack[-1] == 0) GOTO 0xd7d; Pop(1)

0xd78: @ sync()
0xd79: Pop(0)
0xd7a: @@ IsDialogEnd(Stack[-1])
0xd7b: Pop(0)
0xd7c: GOTO 0xd76

0xd7d: PushEmpty(object)
0xd7e: Stack[-1] = Stack[-10]
0xd7f: Call2 0x102a

0xd80: Pop(1)
0xd81: @ StopDialog(Stack[-4])
0xd82: Pop(0)
0xd83: @@ GetReturnValue(Stack[-2])
0xd84: Pop(0)
0xd85: Stack[-10] = Stack[-2]
0xd86: Return(); Pop(8)

0xd87: Stack[-4] = 0
0xd88: PushEmpty()
0xd89: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0xd8a: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0xd8b: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0xd8c: Push((int) 1)
0xd8d: IF (Stack[-1] == 0) GOTO 0xda4; Pop(1)

0xd8e: PushEmpty(string)
0xd8f: Stack[-1] = "Neutral"
0xd90: Call2 0xdc2

0xd91: Pop(1)
0xd92: Push((int) 529898)
0xd93: @@ SetMessage(Stack[-1])
0xd94: Pop(1)
0xd95: @@ ClearReplies()
0xd96: Pop(0)
0xd97: Push((int) 529899)
0xd98: Push((int) -1)
0xd99: Push((int) 31282)
0xd9a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd9b: Pop(3)
0xd9c: Push((int) 529900)
0xd9d: Push((int) -1)
0xd9e: Push((int) 31283)
0xd9f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xda0: Pop(3)
0xda1: GOTO 0xda4

0xda2: Return(); Pop(0)

0xda3: GOTO 0xd8c

0xda4: PushEmpty(bool)
0xda5: Call2 0x1187

0xda6: Pop(0)
0xda7: IF (Stack[-1] == 0) GOTO 0xdb3; Pop(1)

0xda8: @ lshWaitForAnimEnd()
0xda9: Pop(0)
0xdaa: Push( Stack[3 + Tasks[-1].StackPointer] )
0xdab: IF (Stack[-1] == 0) GOTO 0xdad; Pop(1)

0xdac: GOTO 0xdb2

0xdad: PushEmpty(string)
0xdae: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xdaf: Call2 0x10c6

0xdb0: Pop(1)
0xdb1: GOTO 0xda8

0xdb2: GOTO 0xdc1

0xdb3: Push("all")
0xdb4: Push("idle")
0xdb5: @ PlayAnimation(Stack[-2], Stack[-1])
0xdb6: Pop(2)
0xdb7: @ WaitForAnimEnd()
0xdb8: Pop(0)
0xdb9: Push( Stack[3 + Tasks[-1].StackPointer] )
0xdba: IF (Stack[-1] == 0) GOTO 0xdbc; Pop(1)

0xdbb: GOTO 0xdc1

0xdbc: Push("all")
0xdbd: Push("idle")
0xdbe: @ PlayAnimation(Stack[-2], Stack[-1])
0xdbf: Pop(2)
0xdc0: GOTO 0xdb7

0xdc1: Return(); Pop(0)

0xdc2: PushEmpty()
0xdc3: PushEmpty(bool)
0xdc4: Call2 0x1187

0xdc5: Pop(0)
0xdc6: Pop(1); Push((bool) Stack[-1] == 0)
0xdc7: IF (Stack[-1] == 0) GOTO 0xdc9; Pop(1)

0xdc8: Return(); Pop(0)

0xdc9: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xdca: IF (Stack[-1] == 0) GOTO 0xdcc; Pop(1)

0xdcb: Return(); Pop(0)

0xdcc: PushEmpty(string, bool)
0xdcd: Stack[-2] = Stack[-3]
0xdce: Push("")
0xdcf: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xdd0: IF (Stack[-1] == 0) GOTO 0xdd3; Pop(1)

0xdd1: Stack[-1] = (bool) 0
0xdd2: GOTO 0xdd4

0xdd3: Stack[-1] = (bool) 1
0xdd4: Call2 0x10d6

0xdd5: Pop(2)
0xdd6: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xdd7: Return(); Pop(0)

0xdd8: PushEmpty()
0xdd9: Push((int) 1)
0xdda: IF (Stack[-1] == 0) GOTO 0xe01; Pop(1)

0xddb: PushEmpty()
0xddc: Call2 0x10f4

0xddd: Pop(0)
0xdde: Push((int) 31281)
0xddf: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xde0: IF (Stack[-1] == 0) GOTO 0xdf5; Pop(1)

0xde1: PushEmpty(string)
0xde2: Stack[-1] = "Neutral"
0xde3: Call2 0xdc2

0xde4: Pop(1)
0xde5: Push((int) 529898)
0xde6: @@ SetMessage(Stack[-1])
0xde7: Pop(1)
0xde8: @@ ClearReplies()
0xde9: Pop(0)
0xdea: Push((int) 529899)
0xdeb: Push((int) -1)
0xdec: Push((int) 31282)
0xded: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdee: Pop(3)
0xdef: Push((int) 529900)
0xdf0: Push((int) -1)
0xdf1: Push((int) 31283)
0xdf2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdf3: Pop(3)
0xdf4: Return(); Pop(0)

0xdf5: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xdf6: PushEmpty(bool)
0xdf7: Call2 0x1187

0xdf8: Pop(0)
0xdf9: IF (Stack[-1] == 0) GOTO 0xdfd; Pop(1)

0xdfa: @ lshStopAnimation()
0xdfb: Pop(0)
0xdfc: GOTO 0xdff

0xdfd: @ StopAnimation()
0xdfe: Pop(0)
0xdff: Return(); Pop(0)

0xe00: GOTO 0xdd9

0xe01: Return(); Pop(0)

0xe02: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0xe03: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0xe04: PushEmpty(bool, object, float)
0xe05: Stack[-2] = Stack[-12]
0xe06: Stack[-1] = (float) 70.0
0xe07: Call2 0xfe5

0xe08: Pop(2)
0xe09: Pop(1); Push((bool) Stack[-1] == 0)
0xe0a: IF (Stack[-1] == 0) GOTO 0xe0d; Pop(1)

0xe0b: Stack[-10] = (int) -2
0xe0c: Return(); Pop(8)

0xe0d: @ CreateDialog(Stack[-4])
0xe0e: Pop(0)
0xe0f: PushEmpty(int)
0xe10: Call2 0x1181

0xe11: Pop(0)
0xe12: @@ SetNPCName(Stack[-1])
0xe13: Pop(1)
0xe14: PushEmpty(int)
0xe15: Call2 0x117f

0xe16: Pop(0)
0xe17: @@ SetNPCDescription(Stack[-1])
0xe18: Pop(1)
0xe19: PushEmpty(string)
0xe1a: Call2 0x1183

0xe1b: Pop(0)
0xe1c: @@ SetPhoto(Stack[-1])
0xe1d: Pop(1)
0xe1e: PushEmpty(string)
0xe1f: Call2 0x1185

0xe20: Pop(0)
0xe21: @@ SetPhoto2(Stack[-1])
0xe22: Pop(1)
0xe23: PushEmpty(int)
0xe24: Call2 0x143f

0xe25: Pop(0)
0xe26: @@ SetPlayerName(Stack[-1])
0xe27: Pop(1)
0xe28: Stack[-2] = (int) -1
0xe29: @ IsOverrideActive(Stack[-3])
0xe2a: Pop(0)
0xe2b: Push(Stack[-3])
0xe2c: IF (Stack[-1] == 0) GOTO 0xe2f; Pop(1)

0xe2d: Stack[-10] = (int) -2
0xe2e: Return(); Pop(8)

0xe2f: @ DoDialog(Stack[-4])
0xe30: Pop(0)
0xe31: PushEmpty(bool, object)
0xe32: PushEmpty(object)
0xe33: Call2 0x10fb

0xe34: Stack[-2] = Stack[-1]
0xe35: Pop(1)
0xe36: Call2 0x103c

0xe37: Pop(2)
0xe38: PushEmpty(object, object)
0xe39: Stack[-2] = Stack[-11]
0xe3a: Stack[-1] = Stack[-6]
0xe3b: Push(-2, 4); TaskCall(13)
0xe3c: Call2 0xe53

0xe3d: Pop(-2, 4); TaskReturn
0xe3e: Pop(2)
0xe3f: @@ IsDialogEnd(Stack[-1])
0xe40: Pop(0)
0xe41: Pop(0); Push((bool) Stack[-1] == 0)
0xe42: IF (Stack[-1] == 0) GOTO 0xe48; Pop(1)

0xe43: @ sync()
0xe44: Pop(0)
0xe45: @@ IsDialogEnd(Stack[-1])
0xe46: Pop(0)
0xe47: GOTO 0xe41

0xe48: PushEmpty(object)
0xe49: Stack[-1] = Stack[-10]
0xe4a: Call2 0x102a

0xe4b: Pop(1)
0xe4c: @ StopDialog(Stack[-4])
0xe4d: Pop(0)
0xe4e: @@ GetReturnValue(Stack[-2])
0xe4f: Pop(0)
0xe50: Stack[-10] = Stack[-2]
0xe51: Return(); Pop(8)

0xe52: Stack[-4] = 0
0xe53: PushEmpty()
0xe54: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0xe55: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0xe56: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0xe57: Push((int) 1)
0xe58: IF (Stack[-1] == 0) GOTO 0xe6f; Pop(1)

0xe59: PushEmpty(string)
0xe5a: Stack[-1] = "Neutral"
0xe5b: Call2 0xe8d

0xe5c: Pop(1)
0xe5d: Push((int) 529902)
0xe5e: @@ SetMessage(Stack[-1])
0xe5f: Pop(1)
0xe60: @@ ClearReplies()
0xe61: Pop(0)
0xe62: Push((int) 529903)
0xe63: Push((int) -1)
0xe64: Push((int) 31286)
0xe65: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe66: Pop(3)
0xe67: Push((int) 529904)
0xe68: Push((int) -1)
0xe69: Push((int) 31287)
0xe6a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe6b: Pop(3)
0xe6c: GOTO 0xe6f

0xe6d: Return(); Pop(0)

0xe6e: GOTO 0xe57

0xe6f: PushEmpty(bool)
0xe70: Call2 0x1187

0xe71: Pop(0)
0xe72: IF (Stack[-1] == 0) GOTO 0xe7e; Pop(1)

0xe73: @ lshWaitForAnimEnd()
0xe74: Pop(0)
0xe75: Push( Stack[3 + Tasks[-1].StackPointer] )
0xe76: IF (Stack[-1] == 0) GOTO 0xe78; Pop(1)

0xe77: GOTO 0xe7d

0xe78: PushEmpty(string)
0xe79: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xe7a: Call2 0x10c6

0xe7b: Pop(1)
0xe7c: GOTO 0xe73

0xe7d: GOTO 0xe8c

0xe7e: Push("all")
0xe7f: Push("idle")
0xe80: @ PlayAnimation(Stack[-2], Stack[-1])
0xe81: Pop(2)
0xe82: @ WaitForAnimEnd()
0xe83: Pop(0)
0xe84: Push( Stack[3 + Tasks[-1].StackPointer] )
0xe85: IF (Stack[-1] == 0) GOTO 0xe87; Pop(1)

0xe86: GOTO 0xe8c

0xe87: Push("all")
0xe88: Push("idle")
0xe89: @ PlayAnimation(Stack[-2], Stack[-1])
0xe8a: Pop(2)
0xe8b: GOTO 0xe82

0xe8c: Return(); Pop(0)

0xe8d: PushEmpty()
0xe8e: PushEmpty(bool)
0xe8f: Call2 0x1187

0xe90: Pop(0)
0xe91: Pop(1); Push((bool) Stack[-1] == 0)
0xe92: IF (Stack[-1] == 0) GOTO 0xe94; Pop(1)

0xe93: Return(); Pop(0)

0xe94: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xe95: IF (Stack[-1] == 0) GOTO 0xe97; Pop(1)

0xe96: Return(); Pop(0)

0xe97: PushEmpty(string, bool)
0xe98: Stack[-2] = Stack[-3]
0xe99: Push("")
0xe9a: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xe9b: IF (Stack[-1] == 0) GOTO 0xe9e; Pop(1)

0xe9c: Stack[-1] = (bool) 0
0xe9d: GOTO 0xe9f

0xe9e: Stack[-1] = (bool) 1
0xe9f: Call2 0x10d6

0xea0: Pop(2)
0xea1: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xea2: Return(); Pop(0)

0xea3: PushEmpty()
0xea4: Push((int) 1)
0xea5: IF (Stack[-1] == 0) GOTO 0xecc; Pop(1)

0xea6: PushEmpty()
0xea7: Call2 0x10f4

0xea8: Pop(0)
0xea9: Push((int) 31285)
0xeaa: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xeab: IF (Stack[-1] == 0) GOTO 0xec0; Pop(1)

0xeac: PushEmpty(string)
0xead: Stack[-1] = "Neutral"
0xeae: Call2 0xe8d

0xeaf: Pop(1)
0xeb0: Push((int) 529902)
0xeb1: @@ SetMessage(Stack[-1])
0xeb2: Pop(1)
0xeb3: @@ ClearReplies()
0xeb4: Pop(0)
0xeb5: Push((int) 529903)
0xeb6: Push((int) -1)
0xeb7: Push((int) 31286)
0xeb8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xeb9: Pop(3)
0xeba: Push((int) 529904)
0xebb: Push((int) -1)
0xebc: Push((int) 31287)
0xebd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xebe: Pop(3)
0xebf: Return(); Pop(0)

0xec0: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xec1: PushEmpty(bool)
0xec2: Call2 0x1187

0xec3: Pop(0)
0xec4: IF (Stack[-1] == 0) GOTO 0xec8; Pop(1)

0xec5: @ lshStopAnimation()
0xec6: Pop(0)
0xec7: GOTO 0xeca

0xec8: @ StopAnimation()
0xec9: Pop(0)
0xeca: Return(); Pop(0)

0xecb: GOTO 0xea4

0xecc: Return(); Pop(0)

0xecd: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0xece: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0xecf: PushEmpty(bool, object, float)
0xed0: Stack[-2] = Stack[-12]
0xed1: Stack[-1] = (float) 70.0
0xed2: Call2 0xfe5

0xed3: Pop(2)
0xed4: Pop(1); Push((bool) Stack[-1] == 0)
0xed5: IF (Stack[-1] == 0) GOTO 0xed8; Pop(1)

0xed6: Stack[-10] = (int) -2
0xed7: Return(); Pop(8)

0xed8: @ CreateDialog(Stack[-4])
0xed9: Pop(0)
0xeda: PushEmpty(int)
0xedb: Call2 0x1181

0xedc: Pop(0)
0xedd: @@ SetNPCName(Stack[-1])
0xede: Pop(1)
0xedf: PushEmpty(int)
0xee0: Call2 0x117f

0xee1: Pop(0)
0xee2: @@ SetNPCDescription(Stack[-1])
0xee3: Pop(1)
0xee4: PushEmpty(string)
0xee5: Call2 0x1183

0xee6: Pop(0)
0xee7: @@ SetPhoto(Stack[-1])
0xee8: Pop(1)
0xee9: PushEmpty(string)
0xeea: Call2 0x1185

0xeeb: Pop(0)
0xeec: @@ SetPhoto2(Stack[-1])
0xeed: Pop(1)
0xeee: PushEmpty(int)
0xeef: Call2 0x143f

0xef0: Pop(0)
0xef1: @@ SetPlayerName(Stack[-1])
0xef2: Pop(1)
0xef3: Stack[-2] = (int) -1
0xef4: @ IsOverrideActive(Stack[-3])
0xef5: Pop(0)
0xef6: Push(Stack[-3])
0xef7: IF (Stack[-1] == 0) GOTO 0xefa; Pop(1)

0xef8: Stack[-10] = (int) -2
0xef9: Return(); Pop(8)

0xefa: @ DoDialog(Stack[-4])
0xefb: Pop(0)
0xefc: PushEmpty(bool, object)
0xefd: PushEmpty(object)
0xefe: Call2 0x10fb

0xeff: Stack[-2] = Stack[-1]
0xf00: Pop(1)
0xf01: Call2 0x103c

0xf02: Pop(2)
0xf03: PushEmpty(object, object)
0xf04: Stack[-2] = Stack[-11]
0xf05: Stack[-1] = Stack[-6]
0xf06: Push(-2, 4); TaskCall(15)
0xf07: Call2 0xf1e

0xf08: Pop(-2, 4); TaskReturn
0xf09: Pop(2)
0xf0a: @@ IsDialogEnd(Stack[-1])
0xf0b: Pop(0)
0xf0c: Pop(0); Push((bool) Stack[-1] == 0)
0xf0d: IF (Stack[-1] == 0) GOTO 0xf13; Pop(1)

0xf0e: @ sync()
0xf0f: Pop(0)
0xf10: @@ IsDialogEnd(Stack[-1])
0xf11: Pop(0)
0xf12: GOTO 0xf0c

0xf13: PushEmpty(object)
0xf14: Stack[-1] = Stack[-10]
0xf15: Call2 0x102a

0xf16: Pop(1)
0xf17: @ StopDialog(Stack[-4])
0xf18: Pop(0)
0xf19: @@ GetReturnValue(Stack[-2])
0xf1a: Pop(0)
0xf1b: Stack[-10] = Stack[-2]
0xf1c: Return(); Pop(8)

0xf1d: Stack[-4] = 0
0xf1e: PushEmpty()
0xf1f: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0xf20: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0xf21: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0xf22: Push((int) 1)
0xf23: IF (Stack[-1] == 0) GOTO 0xf3a; Pop(1)

0xf24: PushEmpty(string)
0xf25: Stack[-1] = "Neutral"
0xf26: Call2 0xf58

0xf27: Pop(1)
0xf28: Push((int) 540554)
0xf29: @@ SetMessage(Stack[-1])
0xf2a: Pop(1)
0xf2b: @@ ClearReplies()
0xf2c: Pop(0)
0xf2d: Push((int) 540555)
0xf2e: Push((int) -1)
0xf2f: Push((int) 42564)
0xf30: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf31: Pop(3)
0xf32: Push((int) 540794)
0xf33: Push((int) -1)
0xf34: Push((int) 42843)
0xf35: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf36: Pop(3)
0xf37: GOTO 0xf3a

0xf38: Return(); Pop(0)

0xf39: GOTO 0xf22

0xf3a: PushEmpty(bool)
0xf3b: Call2 0x1187

0xf3c: Pop(0)
0xf3d: IF (Stack[-1] == 0) GOTO 0xf49; Pop(1)

0xf3e: @ lshWaitForAnimEnd()
0xf3f: Pop(0)
0xf40: Push( Stack[3 + Tasks[-1].StackPointer] )
0xf41: IF (Stack[-1] == 0) GOTO 0xf43; Pop(1)

0xf42: GOTO 0xf48

0xf43: PushEmpty(string)
0xf44: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xf45: Call2 0x10c6

0xf46: Pop(1)
0xf47: GOTO 0xf3e

0xf48: GOTO 0xf57

0xf49: Push("all")
0xf4a: Push("idle")
0xf4b: @ PlayAnimation(Stack[-2], Stack[-1])
0xf4c: Pop(2)
0xf4d: @ WaitForAnimEnd()
0xf4e: Pop(0)
0xf4f: Push( Stack[3 + Tasks[-1].StackPointer] )
0xf50: IF (Stack[-1] == 0) GOTO 0xf52; Pop(1)

0xf51: GOTO 0xf57

0xf52: Push("all")
0xf53: Push("idle")
0xf54: @ PlayAnimation(Stack[-2], Stack[-1])
0xf55: Pop(2)
0xf56: GOTO 0xf4d

0xf57: Return(); Pop(0)

0xf58: PushEmpty()
0xf59: PushEmpty(bool)
0xf5a: Call2 0x1187

0xf5b: Pop(0)
0xf5c: Pop(1); Push((bool) Stack[-1] == 0)
0xf5d: IF (Stack[-1] == 0) GOTO 0xf5f; Pop(1)

0xf5e: Return(); Pop(0)

0xf5f: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xf60: IF (Stack[-1] == 0) GOTO 0xf62; Pop(1)

0xf61: Return(); Pop(0)

0xf62: PushEmpty(string, bool)
0xf63: Stack[-2] = Stack[-3]
0xf64: Push("")
0xf65: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xf66: IF (Stack[-1] == 0) GOTO 0xf69; Pop(1)

0xf67: Stack[-1] = (bool) 0
0xf68: GOTO 0xf6a

0xf69: Stack[-1] = (bool) 1
0xf6a: Call2 0x10d6

0xf6b: Pop(2)
0xf6c: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xf6d: Return(); Pop(0)

0xf6e: PushEmpty()
0xf6f: Push((int) 1)
0xf70: IF (Stack[-1] == 0) GOTO 0xf97; Pop(1)

0xf71: PushEmpty()
0xf72: Call2 0x10f4

0xf73: Pop(0)
0xf74: Push((int) 42563)
0xf75: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf76: IF (Stack[-1] == 0) GOTO 0xf8b; Pop(1)

0xf77: PushEmpty(string)
0xf78: Stack[-1] = "Neutral"
0xf79: Call2 0xf58

0xf7a: Pop(1)
0xf7b: Push((int) 540554)
0xf7c: @@ SetMessage(Stack[-1])
0xf7d: Pop(1)
0xf7e: @@ ClearReplies()
0xf7f: Pop(0)
0xf80: Push((int) 540555)
0xf81: Push((int) -1)
0xf82: Push((int) 42564)
0xf83: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf84: Pop(3)
0xf85: Push((int) 540794)
0xf86: Push((int) -1)
0xf87: Push((int) 42843)
0xf88: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf89: Pop(3)
0xf8a: Return(); Pop(0)

0xf8b: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xf8c: PushEmpty(bool)
0xf8d: Call2 0x1187

0xf8e: Pop(0)
0xf8f: IF (Stack[-1] == 0) GOTO 0xf93; Pop(1)

0xf90: @ lshStopAnimation()
0xf91: Pop(0)
0xf92: GOTO 0xf95

0xf93: @ StopAnimation()
0xf94: Pop(0)
0xf95: Return(); Pop(0)

0xf96: GOTO 0xf6f

0xf97: Return(); Pop(0)

0xf98: Push(GlobalVars[1])
0xf99: Stack[-1] = (bool) 0
0xf9a: GlobalVars[1] = Stack[-1]; Pop(1)
0xf9b: PushEmpty()
0xf9c: Call2 0xf9f

0xf9d: Pop(0)
0xf9e: Return(); Pop(0)

0xf9f: PushEmpty(bool)
0xfa0: Call2 0xfe0

0xfa1: Pop(0)
0xfa2: Pop(1); Push((bool) Stack[-1] == 0)
0xfa3: IF (Stack[-1] == 0) GOTO 0xfa6; Pop(1)

0xfa4: @ Hold()
0xfa5: Pop(0)
0xfa6: PushEmpty(string)
0xfa7: Stack[-1] = "Neutral"
0xfa8: Call2 0x10c6

0xfa9: Pop(1)
0xfaa: @ lshWaitForAnimEnd()
0xfab: Pop(0)
0xfac: GOTO 0xfa6

0xfad: @ Hold()
0xfae: Pop(0)
0xfaf: Return(); Pop(0)

0xfb0: @ Hold()
0xfb1: Pop(0)
0xfb2: Return(); Pop(0)

0xfb3: @ StopGroup0()
0xfb4: Pop(0)
0xfb5: Return(); Pop(0)

0xfb6: PushEmpty(bool, bool)
0xfb7: @ IsOverrideActive(Stack[-1])
0xfb8: Pop(0)
0xfb9: Pop(0); Push((bool) Stack[-1] == 0)
0xfba: IF (Stack[-1] == 0) GOTO 0xfc5; Pop(1)

0xfbb: EventDisable(0)
0xfbc: PushEmpty(bool, object)
0xfbd: Stack[-1] = Stack[-5]
0xfbe: Call2 0xfd7

0xfbf: Pop(2)
0xfc0: EventEnable(0)
0xfc1: PushEmpty(object)
0xfc2: Stack[-1] = Stack[-4]
0xfc3: Call2 0x1450

0xfc4: Pop(1)
0xfc5: Return(); Pop(2)

0xfc6: PushEmpty(int, int)
0xfc7: @@ GetProperty(Stack[-4], Stack[-1])
0xfc8: Pop(0)
0xfc9: Pop(0); Push(Stack[-1] + Stack[-3]);
0xfca: @@ SetProperty(Stack[-5], Stack[-1])
0xfcb: Pop(1)
0xfcc: Return(); Pop(2)

0xfcd: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0xfce: @ GetPosition(Stack[-3])
0xfcf: Pop(0)
0xfd0: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0xfd1: Push(CvectorIndex(Stack[-2], 0))
0xfd2: Push(CvectorIndex(Stack[-3], 2))
0xfd3: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0xfd4: Pop(2)
0xfd5: Stack[-8] = Stack[-1]
0xfd6: Return(); Pop(6)

0xfd7: PushEmpty(cvector, cvector)
0xfd8: @@ GetPosition(Stack[-1])
0xfd9: Pop(0)
0xfda: PushEmpty(bool, cvector)
0xfdb: Stack[-1] = Stack[-3]
0xfdc: Call2 0xfcd

0xfdd: Stack[-6] = Stack[-2]
0xfde: Pop(2)
0xfdf: Return(); Pop(2)

0xfe0: PushEmpty(bool, bool)
0xfe1: @ IsLoaded(Stack[-1])
0xfe2: Pop(0)
0xfe3: Stack[-3] = Stack[-1]
0xfe4: Return(); Pop(2)

0xfe5: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0xfe6: @@ GetPosition(Stack[-8])
0xfe7: Pop(0)
0xfe8: @@ GetEyesHeight(Stack[-9])
0xfe9: Pop(0)
0xfea: Push(CvectorIndex(Stack[-8], 1))
0xfeb: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0xfec: CvectorIndex(Stack[-9], 1) = Stack[-1];
0xfed: @ GetPosition(Stack[-7])
0xfee: Pop(0)
0xfef: @ GetEyesHeight(Stack[-9])
0xff0: Pop(0)
0xff1: Push(CvectorIndex(Stack[-7], 1))
0xff2: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0xff3: CvectorIndex(Stack[-8], 1) = Stack[-1];
0xff4: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0xff5: Push(CvectorIndex(Stack[-6], 1))
0xff6: Stack[-1] = (int) 0
0xff7: CvectorIndex(Stack[-7], 1) = Stack[-1];
0xff8: Pop(0); Push(Stack[-6] | Stack[-6]);
0xff9: Pop(1); Push(Sqrt(Stack[-1]))
0xffa: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0xffb: Stack[-5] = -Stack[-6]; Pop(0);
0xffc: Pop(0); Push(Stack[-6] * Stack[-19]);
0xffd: PushEmpty(cvector, cvector)
0xffe: Push(CVector(0.0, 1.0, 0.0))
0xfff: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x1000: Call2 0x1101

0x1001: Pop(1)
0x1002: Push((int) 25)
0x1003: Pop(2); Push(Stack[-2] * Stack[-1]);
0x1004: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1005: Push(CVector(0.0, 10.0, 0.0))
0x1006: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x1007: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x1008: @ IsOverrideActive(Stack[-2])
0x1009: Pop(0)
0x100a: Push(Stack[-2])
0x100b: IF (Stack[-1] == 0) GOTO 0x100e; Pop(1)

0x100c: Stack[-21] = (bool) 0
0x100d: Return(); Pop(18)

0x100e: @ StopWorld()
0x100f: Pop(0)
0x1010: Push((bool) 1)
0x1011: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0x1012: Pop(1)
0x1013: Push(CvectorIndex(Stack[-4], 0))
0x1014: Push(CvectorIndex(Stack[-5], 2))
0x1015: @ Rotate(Stack[-2], Stack[-1])
0x1016: Pop(2)
0x1017: PushEmpty(bool)
0x1018: Call2 0x1187

0x1019: Pop(0)
0x101a: IF (Stack[-1] == 0) GOTO 0x101c; Pop(1)

0x101b: GOTO 0x1024

0x101c: Push("head")
0x101d: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x101e: Pop(1)
0x101f: Push(Stack[-1])
0x1020: IF (Stack[-1] == 0) GOTO 0x1024; Pop(1)

0x1021: Push("head")
0x1022: @ LookAsyncCamera(Stack[-1])
0x1023: Pop(1)
0x1024: @ CameraWaitForPlayFinish()
0x1025: Pop(0)
0x1026: @ ResumeWorld()
0x1027: Pop(0)
0x1028: Stack[-21] = (bool) 1
0x1029: Return(); Pop(18)

0x102a: PushEmpty(bool, bool)
0x102b: Push((bool) 1)
0x102c: @ CameraSwitchToNormal(Stack[-1])
0x102d: Pop(1)
0x102e: PushEmpty(bool)
0x102f: Call2 0x1187

0x1030: Pop(0)
0x1031: IF (Stack[-1] == 0) GOTO 0x1033; Pop(1)

0x1032: GOTO 0x103b

0x1033: Push("head")
0x1034: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x1035: Pop(1)
0x1036: Push(Stack[-1])
0x1037: IF (Stack[-1] == 0) GOTO 0x103b; Pop(1)

0x1038: Push("head")
0x1039: @ UnlookAsync(Stack[-1])
0x103a: Pop(1)
0x103b: Return(); Pop(2)

0x103c: PushEmpty(int, int, int, int)
0x103d: Push("voice_common")
0x103e: @ GetVariable(Stack[-1], Stack[-3])
0x103f: Pop(1)
0x1040: Push(Stack[-2])
0x1041: IF (Stack[-1] == 0) GOTO 0x1062; Pop(1)

0x1042: PushEmpty(bool, object)
0x1043: Stack[-1] = Stack[-7]
0x1044: Call2 0x1076

0x1045: Pop(1)
0x1046: Pop(1); Push((bool) Stack[-1] == 0)
0x1047: IF (Stack[-1] == 0) GOTO 0x1050; Pop(1)

0x1048: PushEmpty(bool, object)
0x1049: Stack[-1] = Stack[-7]
0x104a: Call2 0x109b

0x104b: Pop(1)
0x104c: Pop(1); Push((bool) Stack[-1] == 0)
0x104d: IF (Stack[-1] == 0) GOTO 0x1050; Pop(1)

0x104e: Stack[-6] = (bool) 0
0x104f: Return(); Pop(4)

0x1050: Push((int) 2)
0x1051: @ irand(Stack[-2], Stack[-1])
0x1052: Pop(1)
0x1053: Push(Stack[-1])
0x1054: IF (Stack[-1] == 0) GOTO 0x105d; Pop(1)

0x1055: Push("voice_common")
0x1056: Push((int) 1)
0x1057: Pop(1); Push(Stack[-4] + Stack[-1]);
0x1058: Push((int) 3)
0x1059: Pop(2); Push(Stack[-2] % Stack[-1]);
0x105a: @ SetVariable(Stack[-2], Stack[-1])
0x105b: Pop(2)
0x105c: GOTO 0x1061

0x105d: Push("voice_common")
0x105e: Push((int) 0)
0x105f: @ SetVariable(Stack[-2], Stack[-1])
0x1060: Pop(2)
0x1061: GOTO 0x1074

0x1062: PushEmpty(bool, object)
0x1063: Stack[-1] = Stack[-7]
0x1064: Call2 0x109b

0x1065: Pop(1)
0x1066: Pop(1); Push((bool) Stack[-1] == 0)
0x1067: IF (Stack[-1] == 0) GOTO 0x1070; Pop(1)

0x1068: PushEmpty(bool, object)
0x1069: Stack[-1] = Stack[-7]
0x106a: Call2 0x1076

0x106b: Pop(1)
0x106c: Pop(1); Push((bool) Stack[-1] == 0)
0x106d: IF (Stack[-1] == 0) GOTO 0x1070; Pop(1)

0x106e: Stack[-6] = (bool) 0
0x106f: Return(); Pop(4)

0x1070: Push("voice_common")
0x1071: Push((int) 1)
0x1072: @ SetVariable(Stack[-2], Stack[-1])
0x1073: Pop(2)
0x1074: Stack[-6] = (bool) 1
0x1075: Return(); Pop(4)

0x1076: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x1077: Stack[-5] = "c"
0x1078: Stack[-4] = (int) 0
0x1079: Push((int) 1)
0x107a: IF (Stack[-1] == 0) GOTO 0x1086; Pop(1)

0x107b: Push((int) 1)
0x107c: Pop(1); Push(Stack[-5] + Stack[-1]);
0x107d: Pop(1); Push(Stack[-6] + Stack[-1]);
0x107e: @@ HasProperty(Stack[-1], Stack[-4])
0x107f: Pop(1)
0x1080: Pop(0); Push((bool) Stack[-3] == 0)
0x1081: IF (Stack[-1] == 0) GOTO 0x1083; Pop(1)

0x1082: GOTO 0x1086

0x1083: Push((int) 1)
0x1084: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x1085: GOTO 0x1079

0x1086: Pop(0); Push((bool) Stack[-4] == 0)
0x1087: IF (Stack[-1] == 0) GOTO 0x108a; Pop(1)

0x1088: Stack[-12] = (bool) 0
0x1089: Return(); Pop(10)

0x108a: Stack[-2] = (int) 0
0x108b: Push((int) 1)
0x108c: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x108d: IF (Stack[-1] == 0) GOTO 0x1090; Pop(1)

0x108e: @ irand(Stack[-2], Stack[-4])
0x108f: Pop(0)
0x1090: Push((int) 1)
0x1091: Pop(1); Push(Stack[-3] + Stack[-1]);
0x1092: Pop(1); Push(Stack[-6] + Stack[-1]);
0x1093: @@ GetProperty(Stack[-1], Stack[-2])
0x1094: Pop(1)
0x1095: PushEmpty(bool, string)
0x1096: Stack[-1] = Stack[-3]
0x1097: Call2 0x10e5

0x1098: Stack[-14] = Stack[-2]
0x1099: Pop(2)
0x109a: Return(); Pop(10)

0x109b: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x109c: Push("d")
0x109d: PushEmpty(int)
0x109e: Call2 0x115d

0x109f: Pop(0)
0x10a0: Pop(2); Push(Stack[-2] + Stack[-1]);
0x10a1: Push("m")
0x10a2: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x10a3: Stack[-4] = (int) 0
0x10a4: Push((int) 1)
0x10a5: IF (Stack[-1] == 0) GOTO 0x10b1; Pop(1)

0x10a6: Push((int) 1)
0x10a7: Pop(1); Push(Stack[-5] + Stack[-1]);
0x10a8: Pop(1); Push(Stack[-6] + Stack[-1]);
0x10a9: @@ HasProperty(Stack[-1], Stack[-4])
0x10aa: Pop(1)
0x10ab: Pop(0); Push((bool) Stack[-3] == 0)
0x10ac: IF (Stack[-1] == 0) GOTO 0x10ae; Pop(1)

0x10ad: GOTO 0x10b1

0x10ae: Push((int) 1)
0x10af: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x10b0: GOTO 0x10a4

0x10b1: Pop(0); Push((bool) Stack[-4] == 0)
0x10b2: IF (Stack[-1] == 0) GOTO 0x10b5; Pop(1)

0x10b3: Stack[-12] = (bool) 0
0x10b4: Return(); Pop(10)

0x10b5: Stack[-2] = (int) 0
0x10b6: Push((int) 1)
0x10b7: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x10b8: IF (Stack[-1] == 0) GOTO 0x10bb; Pop(1)

0x10b9: @ irand(Stack[-2], Stack[-4])
0x10ba: Pop(0)
0x10bb: Push((int) 1)
0x10bc: Pop(1); Push(Stack[-3] + Stack[-1]);
0x10bd: Pop(1); Push(Stack[-6] + Stack[-1]);
0x10be: @@ GetProperty(Stack[-1], Stack[-2])
0x10bf: Pop(1)
0x10c0: PushEmpty(bool, string)
0x10c1: Stack[-1] = Stack[-3]
0x10c2: Call2 0x10e5

0x10c3: Stack[-14] = Stack[-2]
0x10c4: Pop(2)
0x10c5: Return(); Pop(10)

0x10c6: PushEmpty(bool, float, float, bool, float, float)
0x10c7: @ lshHasAnimation(Stack[-3], Stack[-7])
0x10c8: Pop(0)
0x10c9: Push(Stack[-3])
0x10ca: IF (Stack[-1] == 0) GOTO 0x10d1; Pop(1)

0x10cb: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x10cc: Pop(0)
0x10cd: Push((bool) 0)
0x10ce: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x10cf: Pop(1)
0x10d0: GOTO 0x10d5

0x10d1: Push("Can't find lsh animation : ")
0x10d2: Pop(1); Push(Stack[-1] + Stack[-8]);
0x10d3: @ Trace(Stack[-1])
0x10d4: Pop(1)
0x10d5: Return(); Pop(6)

0x10d6: PushEmpty(bool, float, float, bool, float, float)
0x10d7: @ lshHasAnimation(Stack[-3], Stack[-8])
0x10d8: Pop(0)
0x10d9: Push(Stack[-3])
0x10da: IF (Stack[-1] == 0) GOTO 0x10e0; Pop(1)

0x10db: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x10dc: Pop(0)
0x10dd: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x10de: Pop(0)
0x10df: GOTO 0x10e4

0x10e0: Push("Can't find lsh animation : ")
0x10e1: Pop(1); Push(Stack[-1] + Stack[-9]);
0x10e2: @ Trace(Stack[-1])
0x10e3: Pop(1)
0x10e4: Return(); Pop(6)

0x10e5: PushEmpty(bool, bool)
0x10e6: PushEmpty(bool)
0x10e7: Call2 0x1187

0x10e8: Pop(0)
0x10e9: IF (Stack[-1] == 0) GOTO 0x10f2; Pop(1)

0x10ea: @ lshHasSpeech(Stack[-1], Stack[-3])
0x10eb: Pop(0)
0x10ec: Push(Stack[-1])
0x10ed: IF (Stack[-1] == 0) GOTO 0x10f2; Pop(1)

0x10ee: @ lshPlaySpeech(Stack[-3])
0x10ef: Pop(0)
0x10f0: Stack[-4] = (bool) 1
0x10f1: Return(); Pop(2)

0x10f2: Stack[-4] = (bool) 0
0x10f3: Return(); Pop(2)

0x10f4: PushEmpty(bool)
0x10f5: Call2 0x1187

0x10f6: Pop(0)
0x10f7: IF (Stack[-1] == 0) GOTO 0x10fa; Pop(1)

0x10f8: @ lshStopSpeech()
0x10f9: Pop(0)
0x10fa: Return(); Pop(0)

0x10fb: PushEmpty(object, object)
0x10fc: @ self(Stack[-1])
0x10fd: Pop(0)
0x10fe: Stack[-3] = Stack[-1]
0x10ff: Return(); Pop(2)

0x1100: Stack[-1] = 0
0x1101: PushEmpty(float, float)
0x1102: Pop(0); Push(Stack[-3] | Stack[-3]);
0x1103: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x1104: Push((float)0.0)
0x1105: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x1106: IF (Stack[-1] == 0) GOTO 0x1109; Pop(1)

0x1107: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x1108: Return(); Pop(2)

0x1109: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x110a: Return(); Pop(2)

0x110b: PushEmpty(int, int)
0x110c: @ GetVariable(Stack[-3], Stack[-1])
0x110d: Pop(0)
0x110e: Stack[-4] = Stack[-1]
0x110f: Return(); Pop(2)

0x1110: PushEmpty(object, object)
0x1111: @ FindActor(Stack[-1], Stack[-4])
0x1112: Pop(0)
0x1113: Pop(0); Push((bool) Stack[-1] == 0)
0x1114: IF (Stack[-1] == 0) GOTO 0x111c; Pop(1)

0x1115: Push("Door ")
0x1116: Pop(1); Push(Stack[-1] + Stack[-5]);
0x1117: Push(" not found")
0x1118: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1119: @ Trace(Stack[-1])
0x111a: Pop(1)
0x111b: GOTO 0x111f

0x111c: Push("locked")
0x111d: @@ SetProperty(Stack[-1], Stack[-4])
0x111e: Pop(1)
0x111f: Return(); Pop(2)

0x1120: Stack[-1] = 0
0x1121: PushEmpty(object, object)
0x1122: @ CreateIntVector(Stack[-1])
0x1123: Pop(0)
0x1124: @@ add(Stack[-4])
0x1125: Pop(0)
0x1126: @@ add(Stack[-3])
0x1127: Pop(0)
0x1128: Push((int) 3)
0x1129: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x112a: Pop(1)
0x112b: Return(); Pop(2)

0x112c: Stack[-1] = 0
0x112d: PushEmpty(int, int)
0x112e: PushEmpty(object, string, int)
0x112f: Stack[-3] = Stack[-7]
0x1130: Stack[-2] = "money"
0x1131: Stack[-1] = Stack[-6]
0x1132: Call2 0xfc6

0x1133: Pop(3)
0x1134: Push((int) 0)
0x1135: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0x1136: IF (Stack[-1] == 0) GOTO 0x113f; Pop(1)

0x1137: Push("Money")
0x1138: @ GetInvItemByName(Stack[-2], Stack[-1])
0x1139: Pop(1)
0x113a: PushEmpty(int, int)
0x113b: Stack[-2] = Stack[-3]
0x113c: Stack[-1] = Stack[-5]
0x113d: Call2 0x1121

0x113e: Pop(2)
0x113f: Return(); Pop(2)

0x1140: PushEmpty(object, object)
0x1141: @ FindActor(Stack[-1], Stack[-4])
0x1142: Pop(0)
0x1143: Pop(0); Push((bool) Stack[-1] == 0)
0x1144: IF (Stack[-1] == 0) GOTO 0x1147; Pop(1)

0x1145: Stack[-5] = (bool) 0
0x1146: Return(); Pop(2)

0x1147: @ Trigger(Stack[-1], Stack[-3])
0x1148: Pop(0)
0x1149: Stack[-5] = (bool) 1
0x114a: Return(); Pop(2)

0x114b: Stack[-1] = 0
0x114c: PushEmpty(object, object)
0x114d: @ FindActor(Stack[-1], Stack[-5])
0x114e: Pop(0)
0x114f: Pop(0); Push((bool) Stack[-1] == 0)
0x1150: IF (Stack[-1] == 0) GOTO 0x1153; Pop(1)

0x1151: Stack[-6] = (bool) 0
0x1152: Return(); Pop(2)

0x1153: @ Trigger(Stack[-1], Stack[-4], Stack[-3])
0x1154: Pop(0)
0x1155: Stack[-6] = (bool) 1
0x1156: Return(); Pop(2)

0x1157: Stack[-1] = 0
0x1158: PushEmpty(float, float)
0x1159: @ GetGameTime(Stack[-1])
0x115a: Pop(0)
0x115b: Stack[-3] = Stack[-1]
0x115c: Return(); Pop(2)

0x115d: PushEmpty(float, float)
0x115e: @ GetGameTime(Stack[-1])
0x115f: Pop(0)
0x1160: Push((int) 1)
0x1161: PushEmpty(int)
0x1162: Push((int) 24)
0x1163: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x1164: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x1165: Return(); Pop(2)

0x1166: PushEmpty()
0x1167: PushEmpty(int)
0x1168: Call2 0x115d

0x1169: Pop(0)
0x116a: Stack[-3] = Stack[-1] == Stack[-2]; Pop(1);
0x116b: Return(); Pop(0)

0x116c: PushEmpty(float, int, int, float, int, int)
0x116d: @ GetGameTime(Stack[-3])
0x116e: Pop(0)
0x116f: Push((int) 1)
0x1170: PushEmpty(int)
0x1171: Push((int) 24)
0x1172: Stack[-2] = Stack[-6] / Stack[-1]; Pop(1);
0x1173: Stack[-4] = Stack[-2] + Stack[-1]; Pop(2);
0x1174: Pop(0); Push((bool) Stack[-2] != Stack[-7])
0x1175: IF (Stack[-1] == 0) GOTO 0x1178; Pop(1)

0x1176: Stack[-8] = (bool) 0
0x1177: Return(); Pop(6)

0x1178: PushEmpty(int)
0x1179: Stack[-1] = Stack[-4]
0x117a: Push((int) 24)
0x117b: Stack[-3] = Stack[-2] % Stack[-1]; Pop(2);
0x117c: Push((int) 7)
0x117d: Stack[-9] = Stack[-2] < Stack[-1]; Pop(1);
0x117e: Return(); Pop(6)

0x117f: Stack[-1] = (int) 515531
0x1180: Return(); Pop(0)

0x1181: Stack[-1] = (int) 502857
0x1182: Return(); Pop(0)

0x1183: Stack[-1] = "ui/NPC_BigVlad.png"
0x1184: Return(); Pop(0)

0x1185: Stack[-1] = "ui/NPC_BigVlad_b.png"
0x1186: Return(); Pop(0)

0x1187: Stack[-1] = (bool) 1
0x1188: Return(); Pop(0)

0x1189: PushEmpty(object, object)
0x118a: Push("b3q01")
0x118b: Push((int) 1)
0x118c: @ SetVariable(Stack[-2], Stack[-1])
0x118d: Pop(2)
0x118e: PushEmpty(object)
0x118f: Call2 0x140d

0x1190: Stack[-2] = Stack[-1]
0x1191: Pop(1)
0x1192: Push("b3q01BigVladGotoOspina")
0x1193: Push("pt_map_ospina")
0x1194: Push((int) 1)
0x1195: Push((int) 519627)
0x1196: PushEmpty(float)
0x1197: Call2 0x1158

0x1198: Pop(0)
0x1199: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x119a: Pop(5)
0x119b: PushEmpty()
0x119c: Call2 0x13b0

0x119d: Pop(0)
0x119e: PushEmpty()
0x119f: Call2 0x13bd

0x11a0: Pop(0)
0x11a1: Return(); Pop(2)

0x11a2: Stack[-1] = 0
0x11a3: PushEmpty()
0x11a4: Push("oob3BigVlad1")
0x11a5: Push((int) 1)
0x11a6: @ SetVariable(Stack[-2], Stack[-1])
0x11a7: Pop(2)
0x11a8: Return(); Pop(0)

0x11a9: PushEmpty()
0x11aa: PushEmpty()
0x11ab: Call2 0x13ca

0x11ac: Pop(0)
0x11ad: PushEmpty(bool, string, string)
0x11ae: Stack[-2] = "quest_b3_01"
0x11af: Stack[-1] = "completed"
0x11b0: Call2 0x1140

0x11b1: Pop(3)
0x11b2: Return(); Pop(0)

0x11b3: PushEmpty()
0x11b4: PushEmpty()
0x11b5: Call2 0x13d7

0x11b6: Pop(0)
0x11b7: PushEmpty(bool, string, string)
0x11b8: Stack[-2] = "quest_b3_01"
0x11b9: Stack[-1] = "completed"
0x11ba: Call2 0x1140

0x11bb: Pop(3)
0x11bc: Return(); Pop(0)

0x11bd: PushEmpty()
0x11be: Push("oob1BigVlad1")
0x11bf: Push((int) 1)
0x11c0: @ SetVariable(Stack[-2], Stack[-1])
0x11c1: Pop(2)
0x11c2: Return(); Pop(0)

0x11c3: PushEmpty()
0x11c4: Push("oob1BigVlad2")
0x11c5: Push((int) 1)
0x11c6: @ SetVariable(Stack[-2], Stack[-1])
0x11c7: Pop(2)
0x11c8: Return(); Pop(0)

0x11c9: PushEmpty()
0x11ca: Push("oob1BigVlad3")
0x11cb: Push((int) 1)
0x11cc: @ SetVariable(Stack[-2], Stack[-1])
0x11cd: Pop(2)
0x11ce: Return(); Pop(0)

0x11cf: PushEmpty()
0x11d0: Push("oob1BigVlad4")
0x11d1: Push((int) 1)
0x11d2: @ SetVariable(Stack[-2], Stack[-1])
0x11d3: Pop(2)
0x11d4: Return(); Pop(0)

0x11d5: PushEmpty(object, object)
0x11d6: Push("b1q01")
0x11d7: Push((int) 1)
0x11d8: @ SetVariable(Stack[-2], Stack[-1])
0x11d9: Pop(2)
0x11da: PushEmpty(object)
0x11db: Call2 0x140d

0x11dc: Stack[-2] = Stack[-1]
0x11dd: Pop(1)
0x11de: Push("b1q01BigVladGotoKapella")
0x11df: Push("pt_map_kapella")
0x11e0: Push((int) 3)
0x11e1: Push((int) 518128)
0x11e2: PushEmpty(float)
0x11e3: Call2 0x1158

0x11e4: Pop(0)
0x11e5: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x11e6: Pop(5)
0x11e7: Push("b1q01BigVladGotoMladVlad")
0x11e8: Push("pt_map_mladvlad")
0x11e9: Push((int) 3)
0x11ea: Push((int) 520041)
0x11eb: PushEmpty(float)
0x11ec: Call2 0x1158

0x11ed: Pop(0)
0x11ee: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x11ef: Pop(5)
0x11f0: PushEmpty()
0x11f1: Call2 0x137c

0x11f2: Pop(0)
0x11f3: PushEmpty()
0x11f4: Call2 0x1389

0x11f5: Pop(0)
0x11f6: Return(); Pop(2)

0x11f7: Stack[-1] = 0
0x11f8: PushEmpty()
0x11f9: PushEmpty(string, bool)
0x11fa: Stack[-2] = "cot_alexandr@door1"
0x11fb: Stack[-1] = (bool) 0
0x11fc: Call2 0x1110

0x11fd: Pop(2)
0x11fe: Return(); Pop(0)

0x11ff: PushEmpty()
0x1200: PushEmpty(string, bool)
0x1201: Stack[-2] = "cot_katerina@door1"
0x1202: Stack[-1] = (bool) 0
0x1203: Call2 0x1110

0x1204: Pop(2)
0x1205: Return(); Pop(0)

0x1206: PushEmpty(object, object)
0x1207: Push("b2q01")
0x1208: Push((int) 1)
0x1209: @ SetVariable(Stack[-2], Stack[-1])
0x120a: Pop(2)
0x120b: PushEmpty(object)
0x120c: Call2 0x140d

0x120d: Stack[-2] = Stack[-1]
0x120e: Pop(1)
0x120f: Push("b2q01BigVladGotoAlexandr")
0x1210: Push("pt_map_alexandr")
0x1211: Push((int) 1)
0x1212: Push((int) 519625)
0x1213: PushEmpty(float)
0x1214: Call2 0x1158

0x1215: Pop(0)
0x1216: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1217: Pop(5)
0x1218: Push("b2q01BigVladGotoKaterina")
0x1219: Push("pt_map_katerina")
0x121a: Push((int) 1)
0x121b: Push((int) 519626)
0x121c: PushEmpty(float)
0x121d: Call2 0x1158

0x121e: Pop(0)
0x121f: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1220: Pop(5)
0x1221: Push("b2q01BigVladGotoMladVlad")
0x1222: Push("pt_map_mladvlad")
0x1223: Push((int) 3)
0x1224: Push((int) 519624)
0x1225: PushEmpty(float)
0x1226: Call2 0x1158

0x1227: Pop(0)
0x1228: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1229: Pop(5)
0x122a: Push("b2q01BigVladGotoDanko")
0x122b: Push("pt_map_eva")
0x122c: Push((int) 3)
0x122d: Push((int) 530806)
0x122e: PushEmpty(float)
0x122f: Call2 0x1158

0x1230: Pop(0)
0x1231: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1232: Pop(5)
0x1233: PushEmpty()
0x1234: Call2 0x1396

0x1235: Pop(0)
0x1236: PushEmpty()
0x1237: Call2 0x13a3

0x1238: Pop(0)
0x1239: Return(); Pop(2)

0x123a: Stack[-1] = 0
0x123b: PushEmpty()
0x123c: Push("b11q01KnowWhoKilled")
0x123d: Push((int) 1)
0x123e: @ SetVariable(Stack[-2], Stack[-1])
0x123f: Pop(2)
0x1240: PushEmpty()
0x1241: Call2 0x136f

0x1242: Pop(0)
0x1243: Return(); Pop(0)

0x1244: PushEmpty()
0x1245: Push("oob11BigVlad1")
0x1246: Push((int) 1)
0x1247: @ SetVariable(Stack[-2], Stack[-1])
0x1248: Pop(2)
0x1249: Return(); Pop(0)

0x124a: PushEmpty()
0x124b: PushEmpty(bool, string, string, string)
0x124c: Stack[-3] = "volonteers_burah"
0x124d: Stack[-2] = "kill"
0x124e: Stack[-1] = "bigvlad"
0x124f: Call2 0x114c

0x1250: Pop(4)
0x1251: Return(); Pop(0)

0x1252: PushEmpty()
0x1253: Push("oob11BigVlad2")
0x1254: Push((int) 1)
0x1255: @ SetVariable(Stack[-2], Stack[-1])
0x1256: Pop(2)
0x1257: Return(); Pop(0)

0x1258: PushEmpty()
0x1259: Push("oob11BigVlad3")
0x125a: Push((int) 1)
0x125b: @ SetVariable(Stack[-2], Stack[-1])
0x125c: Pop(2)
0x125d: Return(); Pop(0)

0x125e: PushEmpty()
0x125f: Push("oob11BigVlad4")
0x1260: Push((int) 1)
0x1261: @ SetVariable(Stack[-2], Stack[-1])
0x1262: Pop(2)
0x1263: Return(); Pop(0)

0x1264: PushEmpty()
0x1265: Push("oob11BigVlad5")
0x1266: Push((int) 1)
0x1267: @ SetVariable(Stack[-2], Stack[-1])
0x1268: Pop(2)
0x1269: Return(); Pop(0)

0x126a: PushEmpty()
0x126b: Push("b3BigVladVisit")
0x126c: Push((int) 1)
0x126d: @ SetVariable(Stack[-2], Stack[-1])
0x126e: Pop(2)
0x126f: Return(); Pop(0)

0x1270: PushEmpty(int, int)
0x1271: Push((int) 30)
0x1272: @ irand(Stack[-2], Stack[-1])
0x1273: Pop(1)
0x1274: PushEmpty(object, int)
0x1275: Stack[-2] = Stack[-6]
0x1276: Push((int) 20)
0x1277: Stack[-2] = Stack[-4] + Stack[-1]; Pop(1);
0x1278: Call2 0x112d

0x1279: Pop(2)
0x127a: Return(); Pop(2)

0x127b: PushEmpty()
0x127c: PushEmpty(object, string, float)
0x127d: PushEmpty(object)
0x127e: Call2 0x140d

0x127f: Stack[-4] = Stack[-1]
0x1280: Pop(1)
0x1281: Stack[-2] = "pt_map_ospina"
0x1282: Stack[-1] = (int) 2
0x1283: Call2 0x141e

0x1284: Pop(3)
0x1285: PushEmpty(object)
0x1286: Call2 0x140d

0x1287: Pop(0)
0x1288: @@ ShowMap(Stack[-1])
0x1289: Pop(1)
0x128a: Return(); Pop(0)

0x128b: PushEmpty()
0x128c: PushEmpty(object, string, float)
0x128d: PushEmpty(object)
0x128e: Call2 0x140d

0x128f: Stack[-4] = Stack[-1]
0x1290: Pop(1)
0x1291: Stack[-2] = "pt_map_alexandr"
0x1292: Stack[-1] = (int) 2
0x1293: Call2 0x141e

0x1294: Pop(3)
0x1295: PushEmpty(object)
0x1296: Call2 0x140d

0x1297: Pop(0)
0x1298: @@ ShowMap(Stack[-1])
0x1299: Pop(1)
0x129a: Return(); Pop(0)

0x129b: PushEmpty()
0x129c: PushEmpty(object, string, float)
0x129d: PushEmpty(object)
0x129e: Call2 0x140d

0x129f: Stack[-4] = Stack[-1]
0x12a0: Pop(1)
0x12a1: Stack[-2] = "pt_map_mladvlad"
0x12a2: Stack[-1] = (int) 2
0x12a3: Call2 0x141e

0x12a4: Pop(3)
0x12a5: PushEmpty(object)
0x12a6: Call2 0x140d

0x12a7: Pop(0)
0x12a8: @@ ShowMap(Stack[-1])
0x12a9: Pop(1)
0x12aa: Return(); Pop(0)

0x12ab: PushEmpty()
0x12ac: PushEmpty(object, string, float)
0x12ad: PushEmpty(object)
0x12ae: Call2 0x140d

0x12af: Stack[-4] = Stack[-1]
0x12b0: Pop(1)
0x12b1: Stack[-2] = "pt_map_kapella"
0x12b2: Stack[-1] = (int) 2
0x12b3: Call2 0x141e

0x12b4: Pop(3)
0x12b5: PushEmpty(object)
0x12b6: Call2 0x140d

0x12b7: Pop(0)
0x12b8: @@ ShowMap(Stack[-1])
0x12b9: Pop(1)
0x12ba: Return(); Pop(0)

0x12bb: PushEmpty()
0x12bc: PushEmpty(int, string)
0x12bd: Stack[-1] = "b11q01"
0x12be: Call2 0x110b

0x12bf: Pop(1)
0x12c0: Push((int) 1000)
0x12c1: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x12c2: IF (Stack[-1] == 0) GOTO 0x12c5; Pop(1)

0x12c3: Stack[-2] = (bool) 1
0x12c4: Return(); Pop(0)

0x12c5: Stack[-2] = (bool) 0
0x12c6: Return(); Pop(0)

0x12c7: PushEmpty()
0x12c8: PushEmpty(int, string)
0x12c9: Stack[-1] = "oob11BigVlad1"
0x12ca: Call2 0x110b

0x12cb: Pop(1)
0x12cc: Push((int) 0)
0x12cd: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x12ce: IF (Stack[-1] == 0) GOTO 0x12d1; Pop(1)

0x12cf: Stack[-2] = (bool) 1
0x12d0: Return(); Pop(0)

0x12d1: Stack[-2] = (bool) 0
0x12d2: Return(); Pop(0)

0x12d3: PushEmpty()
0x12d4: PushEmpty(int, string)
0x12d5: Stack[-1] = "b11KnowBigVladKill"
0x12d6: Call2 0x110b

0x12d7: Pop(1)
0x12d8: Push((int) 0)
0x12d9: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x12da: IF (Stack[-1] == 0) GOTO 0x12dd; Pop(1)

0x12db: Stack[-2] = (bool) 1
0x12dc: Return(); Pop(0)

0x12dd: Stack[-2] = (bool) 0
0x12de: Return(); Pop(0)

0x12df: PushEmpty()
0x12e0: PushEmpty(int, string)
0x12e1: Stack[-1] = "oob11BigVlad2"
0x12e2: Call2 0x110b

0x12e3: Pop(1)
0x12e4: Push((int) 0)
0x12e5: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x12e6: IF (Stack[-1] == 0) GOTO 0x12e9; Pop(1)

0x12e7: Stack[-2] = (bool) 1
0x12e8: Return(); Pop(0)

0x12e9: Stack[-2] = (bool) 0
0x12ea: Return(); Pop(0)

0x12eb: PushEmpty()
0x12ec: PushEmpty(int, string)
0x12ed: Stack[-1] = "oob11BigVlad3"
0x12ee: Call2 0x110b

0x12ef: Pop(1)
0x12f0: Push((int) 0)
0x12f1: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x12f2: IF (Stack[-1] == 0) GOTO 0x12f5; Pop(1)

0x12f3: Stack[-2] = (bool) 1
0x12f4: Return(); Pop(0)

0x12f5: Stack[-2] = (bool) 0
0x12f6: Return(); Pop(0)

0x12f7: PushEmpty()
0x12f8: PushEmpty(int, string)
0x12f9: Stack[-1] = "oob11BigVlad4"
0x12fa: Call2 0x110b

0x12fb: Pop(1)
0x12fc: Push((int) 0)
0x12fd: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x12fe: IF (Stack[-1] == 0) GOTO 0x1301; Pop(1)

0x12ff: Stack[-2] = (bool) 1
0x1300: Return(); Pop(0)

0x1301: Stack[-2] = (bool) 0
0x1302: Return(); Pop(0)

0x1303: PushEmpty()
0x1304: PushEmpty(int, string)
0x1305: Stack[-1] = "oob11BigVlad5"
0x1306: Call2 0x110b

0x1307: Pop(1)
0x1308: Push((int) 0)
0x1309: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x130a: IF (Stack[-1] == 0) GOTO 0x130d; Pop(1)

0x130b: Stack[-2] = (bool) 1
0x130c: Return(); Pop(0)

0x130d: Stack[-2] = (bool) 0
0x130e: Return(); Pop(0)

0x130f: PushEmpty()
0x1310: PushEmpty(int, string)
0x1311: Stack[-1] = "oob3BigVlad1"
0x1312: Call2 0x110b

0x1313: Pop(1)
0x1314: Push((int) 0)
0x1315: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1316: IF (Stack[-1] == 0) GOTO 0x1319; Pop(1)

0x1317: Stack[-2] = (bool) 1
0x1318: Return(); Pop(0)

0x1319: Stack[-2] = (bool) 0
0x131a: Return(); Pop(0)

0x131b: PushEmpty()
0x131c: PushEmpty(int, string)
0x131d: Stack[-1] = "b3q01"
0x131e: Call2 0x110b

0x131f: Pop(1)
0x1320: Push((int) 0)
0x1321: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1322: IF (Stack[-1] == 0) GOTO 0x1325; Pop(1)

0x1323: Stack[-2] = (bool) 1
0x1324: Return(); Pop(0)

0x1325: Stack[-2] = (bool) 0
0x1326: Return(); Pop(0)

0x1327: PushEmpty()
0x1328: PushEmpty(int, string)
0x1329: Stack[-1] = "b3q01"
0x132a: Call2 0x110b

0x132b: Pop(1)
0x132c: Push((int) 3)
0x132d: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x132e: IF (Stack[-1] == 0) GOTO 0x1331; Pop(1)

0x132f: Stack[-2] = (bool) 1
0x1330: Return(); Pop(0)

0x1331: Stack[-2] = (bool) 0
0x1332: Return(); Pop(0)

0x1333: PushEmpty()
0x1334: PushEmpty(int, string)
0x1335: Stack[-1] = "oob1BigVlad1"
0x1336: Call2 0x110b

0x1337: Pop(1)
0x1338: Push((int) 0)
0x1339: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x133a: IF (Stack[-1] == 0) GOTO 0x133d; Pop(1)

0x133b: Stack[-2] = (bool) 1
0x133c: Return(); Pop(0)

0x133d: Stack[-2] = (bool) 0
0x133e: Return(); Pop(0)

0x133f: PushEmpty()
0x1340: PushEmpty(int, string)
0x1341: Stack[-1] = "oob1BigVlad2"
0x1342: Call2 0x110b

0x1343: Pop(1)
0x1344: Push((int) 0)
0x1345: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1346: IF (Stack[-1] == 0) GOTO 0x1349; Pop(1)

0x1347: Stack[-2] = (bool) 1
0x1348: Return(); Pop(0)

0x1349: Stack[-2] = (bool) 0
0x134a: Return(); Pop(0)

0x134b: PushEmpty()
0x134c: PushEmpty(int, string)
0x134d: Stack[-1] = "oob1BigVlad3"
0x134e: Call2 0x110b

0x134f: Pop(1)
0x1350: Push((int) 0)
0x1351: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1352: IF (Stack[-1] == 0) GOTO 0x1355; Pop(1)

0x1353: Stack[-2] = (bool) 1
0x1354: Return(); Pop(0)

0x1355: Stack[-2] = (bool) 0
0x1356: Return(); Pop(0)

0x1357: PushEmpty()
0x1358: PushEmpty(int, string)
0x1359: Stack[-1] = "oob1BigVlad4"
0x135a: Call2 0x110b

0x135b: Pop(1)
0x135c: Push((int) 0)
0x135d: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x135e: IF (Stack[-1] == 0) GOTO 0x1361; Pop(1)

0x135f: Stack[-2] = (bool) 1
0x1360: Return(); Pop(0)

0x1361: Stack[-2] = (bool) 0
0x1362: Return(); Pop(0)

0x1363: PushEmpty()
0x1364: PushEmpty(int, string)
0x1365: Stack[-1] = "b2q01"
0x1366: Call2 0x110b

0x1367: Pop(1)
0x1368: Push((int) 0)
0x1369: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x136a: IF (Stack[-1] == 0) GOTO 0x136d; Pop(1)

0x136b: Stack[-2] = (bool) 1
0x136c: Return(); Pop(0)

0x136d: Stack[-2] = (bool) 0
0x136e: Return(); Pop(0)

0x136f: PushEmpty(object, object)
0x1370: Push((int) 315)
0x1371: Push((int) 1)
0x1372: Push((int) 522057)
0x1373: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1374: Pop(3)
0x1375: PushEmpty(bool, object, int)
0x1376: Stack[-2] = Stack[-4]
0x1377: Stack[-1] = (int) 313
0x1378: Call2 0x13f1

0x1379: Pop(3)
0x137a: Return(); Pop(2)

0x137b: Stack[-1] = 0
0x137c: PushEmpty(object, object)
0x137d: Push((int) 242)
0x137e: Push((int) 1)
0x137f: Push((int) 520039)
0x1380: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1381: Pop(3)
0x1382: PushEmpty(bool, object, int)
0x1383: Stack[-2] = Stack[-4]
0x1384: Stack[-1] = (int) -1
0x1385: Call2 0x13f1

0x1386: Pop(3)
0x1387: Return(); Pop(2)

0x1388: Stack[-1] = 0
0x1389: PushEmpty(object, object)
0x138a: Push((int) 243)
0x138b: Push((int) 1)
0x138c: Push((int) 520040)
0x138d: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x138e: Pop(3)
0x138f: PushEmpty(bool, object, int)
0x1390: Stack[-2] = Stack[-4]
0x1391: Stack[-1] = (int) 242
0x1392: Call2 0x13f1

0x1393: Pop(3)
0x1394: Return(); Pop(2)

0x1395: Stack[-1] = 0
0x1396: PushEmpty(object, object)
0x1397: Push((int) 245)
0x1398: Push((int) 1)
0x1399: Push((int) 520466)
0x139a: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x139b: Pop(3)
0x139c: PushEmpty(bool, object, int)
0x139d: Stack[-2] = Stack[-4]
0x139e: Stack[-1] = (int) -1
0x139f: Call2 0x13f1

0x13a0: Pop(3)
0x13a1: Return(); Pop(2)

0x13a2: Stack[-1] = 0
0x13a3: PushEmpty(object, object)
0x13a4: Push((int) 246)
0x13a5: Push((int) 1)
0x13a6: Push((int) 520467)
0x13a7: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x13a8: Pop(3)
0x13a9: PushEmpty(bool, object, int)
0x13aa: Stack[-2] = Stack[-4]
0x13ab: Stack[-1] = (int) 245
0x13ac: Call2 0x13f1

0x13ad: Pop(3)
0x13ae: Return(); Pop(2)

0x13af: Stack[-1] = 0
0x13b0: PushEmpty(object, object)
0x13b1: Push((int) 221)
0x13b2: Push((int) 1)
0x13b3: Push((int) 519633)
0x13b4: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x13b5: Pop(3)
0x13b6: PushEmpty(bool, object, int)
0x13b7: Stack[-2] = Stack[-4]
0x13b8: Stack[-1] = (int) -1
0x13b9: Call2 0x13f1

0x13ba: Pop(3)
0x13bb: Return(); Pop(2)

0x13bc: Stack[-1] = 0
0x13bd: PushEmpty(object, object)
0x13be: Push((int) 222)
0x13bf: Push((int) 1)
0x13c0: Push((int) 519634)
0x13c1: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x13c2: Pop(3)
0x13c3: PushEmpty(bool, object, int)
0x13c4: Stack[-2] = Stack[-4]
0x13c5: Stack[-1] = (int) 221
0x13c6: Call2 0x13f1

0x13c7: Pop(3)
0x13c8: Return(); Pop(2)

0x13c9: Stack[-1] = 0
0x13ca: PushEmpty(object, object)
0x13cb: Push((int) 225)
0x13cc: Push((int) 1)
0x13cd: Push((int) 519650)
0x13ce: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x13cf: Pop(3)
0x13d0: PushEmpty(bool, object, int)
0x13d1: Stack[-2] = Stack[-4]
0x13d2: Stack[-1] = (int) 221
0x13d3: Call2 0x13f1

0x13d4: Pop(3)
0x13d5: Return(); Pop(2)

0x13d6: Stack[-1] = 0
0x13d7: PushEmpty(object, object)
0x13d8: Push((int) 226)
0x13d9: Push((int) 1)
0x13da: Push((int) 519651)
0x13db: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x13dc: Pop(3)
0x13dd: PushEmpty(bool, object, int)
0x13de: Stack[-2] = Stack[-4]
0x13df: Stack[-1] = (int) 221
0x13e0: Call2 0x13f1

0x13e1: Pop(3)
0x13e2: Return(); Pop(2)

0x13e3: Stack[-1] = 0
0x13e4: PushEmpty(object, object)
0x13e5: @ GetDiaryRoot(Stack[-1])
0x13e6: Pop(0)
0x13e7: Pop(0); Push((bool) Stack[-1] == 0)
0x13e8: IF (Stack[-1] == 0) GOTO 0x13ee; Pop(1)

0x13e9: Push("Can't retrieve diary root")
0x13ea: @ Trace(Stack[-1])
0x13eb: Pop(1)
0x13ec: Stack[-3] = (bool) 0
0x13ed: Return(); Pop(2)

0x13ee: Stack[-3] = Stack[-1]
0x13ef: Return(); Pop(2)

0x13f0: Stack[-1] = 0
0x13f1: PushEmpty(object, object, int, object, object, int)
0x13f2: PushEmpty(object)
0x13f3: Call2 0x13e4

0x13f4: Stack[-4] = Stack[-1]
0x13f5: Pop(1)
0x13f6: @@ Find(Stack[-7], Stack[-2])
0x13f7: Pop(0)
0x13f8: Pop(0); Push((bool) Stack[-2] == 0)
0x13f9: IF (Stack[-1] == 0) GOTO 0x1400; Pop(1)

0x13fa: Push("Can't find diary parent with id: ")
0x13fb: Pop(1); Push(Stack[-1] + Stack[-8]);
0x13fc: @ Trace(Stack[-1])
0x13fd: Pop(1)
0x13fe: Stack[-9] = (bool) 0
0x13ff: Return(); Pop(6)

0x1400: @@ AddChild(Stack[-8])
0x1401: Pop(0)
0x1402: Push((int) 7)
0x1403: @ SendWorldWndMessage(Stack[-1])
0x1404: Pop(1)
0x1405: @@ GetCategory(Stack[-1])
0x1406: Pop(0)
0x1407: @ SetDiarySection(Stack[-1])
0x1408: Pop(0)
0x1409: Stack[-9] = (bool) 0
0x140a: Return(); Pop(6)

0x140b: Stack[-2] = 0
0x140c: Stack[-3] = 0
0x140d: PushEmpty(object, object, object, object)
0x140e: @ GetMainOutdoorScene(Stack[-2])
0x140f: Pop(0)
0x1410: Pop(0); Push((bool) Stack[-2] == 0)
0x1411: IF (Stack[-1] == 0) GOTO 0x1418; Pop(1)

0x1412: Push("Can't find main outdoor scene")
0x1413: @ Trace(Stack[-1])
0x1414: Pop(1)
0x1415: Stack[-1] = 0
0x1416: Stack[-5] = Stack[-1]
0x1417: Return(); Pop(4)

0x1418: @@ GetMap(Stack[-1])
0x1419: Pop(0)
0x141a: Stack[-5] = Stack[-1]
0x141b: Return(); Pop(4)

0x141c: Stack[-1] = 0
0x141d: Stack[-2] = 0
0x141e: PushEmpty(cvector, cvector, object, bool, cvector, cvector, object, bool)
0x141f: @ GetMainOutdoorScene(Stack[-2])
0x1420: Pop(0)
0x1421: Pop(0); Push((bool) Stack[-2] == 0)
0x1422: IF (Stack[-1] == 0) GOTO 0x1427; Pop(1)

0x1423: Push("Can't find main outdoor scene")
0x1424: @ Trace(Stack[-1])
0x1425: Pop(1)
0x1426: Return(); Pop(8)

0x1427: @@ GetLocator(Stack[-10], Stack[-1], Stack[-4], Stack[-3])
0x1428: Pop(0)
0x1429: Pop(0); Push((bool) Stack[-1] == 0)
0x142a: IF (Stack[-1] == 0) GOTO 0x1431; Pop(1)

0x142b: Push("Warning: outdoor scene locator ")
0x142c: Pop(1); Push(Stack[-1] + Stack[-11]);
0x142d: Push(" doesnt exist")
0x142e: Pop(2); Push(Stack[-2] + Stack[-1]);
0x142f: @ Trace(Stack[-1])
0x1430: Pop(1)
0x1431: @@ GetMap(Stack[-11])
0x1432: Pop(0)
0x1433: Pop(0); Push((bool) Stack[-11] == 0)
0x1434: IF (Stack[-1] == 0) GOTO 0x1439; Pop(1)

0x1435: Push("Can't find map")
0x1436: @ Trace(Stack[-1])
0x1437: Pop(1)
0x1438: Return(); Pop(8)

0x1439: Push(CvectorIndex(Stack[-4], 0))
0x143a: Push(CvectorIndex(Stack[-5], 2))
0x143b: @@ SetMapParams(Stack[-2], Stack[-1], Stack[-11])
0x143c: Pop(2)
0x143d: Return(); Pop(8)

0x143e: Stack[-2] = 0
0x143f: PushEmpty(int, int)
0x1440: Push("branch")
0x1441: @ GetVariable(Stack[-1], Stack[-2])
0x1442: Pop(1)
0x1443: Push((int) 0)
0x1444: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1445: IF (Stack[-1] == 0) GOTO 0x1449; Pop(1)

0x1446: Stack[-3] = (int) 1
0x1447: Return(); Pop(2)

0x1448: GOTO 0x144e

0x1449: Push((int) 1)
0x144a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x144b: IF (Stack[-1] == 0) GOTO 0x144e; Pop(1)

0x144c: Stack[-3] = (int) 2
0x144d: Return(); Pop(2)

0x144e: Stack[-3] = (int) 3
0x144f: Return(); Pop(2)

0x1450: PushEmpty()
0x1451: Push(GlobalVars[1])
0x1452: Pop(1); Push((bool) Stack[-1] == 0)
0x1453: IF (Stack[-1] == 0) GOTO 0x145d; Pop(1)

0x1454: PushEmpty(int, object)
0x1455: Stack[-1] = Stack[-3]
0x1456: Push(-2, 1); TaskCall(6)
0x1457: Call2 0x85b

0x1458: Pop(-2, 1); TaskReturn
0x1459: Pop(2)
0x145a: Push(GlobalVars[1])
0x145b: Stack[-1] = (bool) 1
0x145c: GlobalVars[1] = Stack[-1]; Pop(1)
0x145d: PushEmpty(bool, int)
0x145e: Stack[-1] = (int) 2
0x145f: Call2 0x116c

0x1460: Pop(1)
0x1461: IF (Stack[-1] == 0) GOTO 0x1469; Pop(1)

0x1462: PushEmpty(int, object)
0x1463: Stack[-1] = Stack[-3]
0x1464: Push(-2, 1); TaskCall(10)
0x1465: Call2 0xd37

0x1466: Pop(-2, 1); TaskReturn
0x1467: Pop(2)
0x1468: Return(); Pop(0)

0x1469: PushEmpty(bool, int)
0x146a: Stack[-1] = (int) 3
0x146b: Call2 0x116c

0x146c: Pop(1)
0x146d: IF (Stack[-1] == 0) GOTO 0x1475; Pop(1)

0x146e: PushEmpty(int, object)
0x146f: Stack[-1] = Stack[-3]
0x1470: Push(-2, 1); TaskCall(12)
0x1471: Call2 0xe02

0x1472: Pop(-2, 1); TaskReturn
0x1473: Pop(2)
0x1474: Return(); Pop(0)

0x1475: PushEmpty(bool, int)
0x1476: Stack[-1] = (int) 1
0x1477: Call2 0x1166

0x1478: Pop(1)
0x1479: IF (Stack[-1] == 0) GOTO 0x1481; Pop(1)

0x147a: PushEmpty(int, object)
0x147b: Stack[-1] = Stack[-3]
0x147c: Push(-2, 1); TaskCall(4)
0x147d: Call2 0x510

0x147e: Pop(-2, 1); TaskReturn
0x147f: Pop(2)
0x1480: Return(); Pop(0)

0x1481: PushEmpty(bool, int)
0x1482: Stack[-1] = (int) 2
0x1483: Call2 0x1166

0x1484: Pop(1)
0x1485: IF (Stack[-1] == 0) GOTO 0x148d; Pop(1)

0x1486: PushEmpty(int, object)
0x1487: Stack[-1] = Stack[-3]
0x1488: Push(-2, 1); TaskCall(0)
0x1489: Call2 0x0

0x148a: Pop(-2, 1); TaskReturn
0x148b: Pop(2)
0x148c: Return(); Pop(0)

0x148d: PushEmpty(bool, int)
0x148e: Stack[-1] = (int) 3
0x148f: Call2 0x1166

0x1490: Pop(1)
0x1491: IF (Stack[-1] == 0) GOTO 0x1499; Pop(1)

0x1492: PushEmpty(int, object)
0x1493: Stack[-1] = Stack[-3]
0x1494: Push(-2, 1); TaskCall(2)
0x1495: Call2 0x1df

0x1496: Pop(-2, 1); TaskReturn
0x1497: Pop(2)
0x1498: Return(); Pop(0)

0x1499: PushEmpty(bool, int)
0x149a: Stack[-1] = (int) 11
0x149b: Call2 0x1166

0x149c: Pop(1)
0x149d: IF (Stack[-1] == 0) GOTO 0x14a5; Pop(1)

0x149e: PushEmpty(int, object)
0x149f: Stack[-1] = Stack[-3]
0x14a0: Push(-2, 1); TaskCall(8)
0x14a1: Call2 0x961

0x14a2: Pop(-2, 1); TaskReturn
0x14a3: Pop(2)
0x14a4: Return(); Pop(0)

0x14a5: PushEmpty(int, object)
0x14a6: Stack[-1] = Stack[-3]
0x14a7: Push(-2, 1); TaskCall(14)
0x14a8: Call2 0xecd

0x14a9: Pop(-2, 1); TaskReturn
0x14aa: Pop(2)
0x14ab: Return(); Pop(0)

