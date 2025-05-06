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
	Neutral
	SetMessage
	ClearReplies
	AddReply
	all
	idle
	Distrust
	Repentance
	Patronage
	Anger
	GetPosition
	GetEyesHeight
	head
	voice_common
	c
	HasProperty
	GetProperty
	m
	Can't find lsh animation : 
	Door 
	 not found
	locked
	SetProperty
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
	CameraTransit (2 args)
	Rotate (2 args)
	HasAnimationTrack (2 args)
	LookAsyncCamera (1 args)
	CameraWaitForPlayFinish (0 args)
	ResumeWorld (0 args)
	CameraSwitchToNormal (0 args)
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
	Trigger (2 args)
	Trigger (3 args)
	GetGameTime (1 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)
	GetMainOutdoorScene (1 args)

RunOp = 0xf3a
RunTask = 16

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xa1 Vars = (int, int)
	GTASK_2 Vars = (object) Params = 2
	GTASK_3 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x16c Vars = (int, int)
	GTASK_4 Vars = (object) Params = 2
	GTASK_5 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x246 Vars = (int, int)
	GTASK_6 Vars = (object) Params = 2
	GTASK_7 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x448 Vars = (int, int)
	GTASK_8 Vars = (object) Params = 2
	GTASK_9 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x76a Vars = (int, int)
	GTASK_10 Vars = (object) Params = 2
	GTASK_11 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xa34 Vars = (int, int)
	GTASK_12 Vars = (object) Params = 2
	GTASK_13 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xba4 Vars = (int, int)
	GTASK_14 Vars = (object) Params = 2
	GTASK_15 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xf10 Vars = (int, int)
	GTASK_16  Params = 0
		EVENT_6 Op = 0xf52 Vars = ()
		EVENT_5 Op = 0xf55 Vars = ()
		EVENT_0 Op = 0xf58 Vars = (object)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0xf80

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x10fb

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x10f9

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x10fd

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x10ff

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x138a

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
0x31: Call2 0x1094

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0xfd5

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
0x48: Call2 0xfc4

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
0x56: IF (Stack[-1] == 0) GOTO 0x6d; Pop(1)

0x57: PushEmpty(string)
0x58: Stack[-1] = "Neutral"
0x59: Call2 0x8b

0x5a: Pop(1)
0x5b: Push((int) 529898)
0x5c: @@ SetMessage(Stack[-1])
0x5d: Pop(1)
0x5e: @@ ClearReplies()
0x5f: Pop(0)
0x60: Push((int) 529899)
0x61: Push((int) -1)
0x62: Push((int) 31282)
0x63: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x64: Pop(3)
0x65: Push((int) 529900)
0x66: Push((int) -1)
0x67: Push((int) 31283)
0x68: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x69: Pop(3)
0x6a: GOTO 0x6d

0x6b: Return(); Pop(0)

0x6c: GOTO 0x55

0x6d: PushEmpty(bool)
0x6e: Call2 0x1101

0x6f: Pop(0)
0x70: IF (Stack[-1] == 0) GOTO 0x7c; Pop(1)

0x71: @ lshWaitForAnimEnd()
0x72: Pop(0)
0x73: Push( Stack[3 + Tasks[-1].StackPointer] )
0x74: IF (Stack[-1] == 0) GOTO 0x76; Pop(1)

0x75: GOTO 0x7b

0x76: PushEmpty(string)
0x77: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x78: Call2 0x105f

0x79: Pop(1)
0x7a: GOTO 0x71

0x7b: GOTO 0x8a

0x7c: Push("all")
0x7d: Push("idle")
0x7e: @ PlayAnimation(Stack[-2], Stack[-1])
0x7f: Pop(2)
0x80: @ WaitForAnimEnd()
0x81: Pop(0)
0x82: Push( Stack[3 + Tasks[-1].StackPointer] )
0x83: IF (Stack[-1] == 0) GOTO 0x85; Pop(1)

0x84: GOTO 0x8a

0x85: Push("all")
0x86: Push("idle")
0x87: @ PlayAnimation(Stack[-2], Stack[-1])
0x88: Pop(2)
0x89: GOTO 0x80

0x8a: Return(); Pop(0)

0x8b: PushEmpty()
0x8c: PushEmpty(bool)
0x8d: Call2 0x1101

0x8e: Pop(0)
0x8f: Pop(1); Push((bool) Stack[-1] == 0)
0x90: IF (Stack[-1] == 0) GOTO 0x92; Pop(1)

0x91: Return(); Pop(0)

0x92: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x93: IF (Stack[-1] == 0) GOTO 0x95; Pop(1)

0x94: Return(); Pop(0)

0x95: PushEmpty(string, bool)
0x96: Stack[-2] = Stack[-3]
0x97: Push("")
0x98: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x99: IF (Stack[-1] == 0) GOTO 0x9c; Pop(1)

0x9a: Stack[-1] = (bool) 0
0x9b: GOTO 0x9d

0x9c: Stack[-1] = (bool) 1
0x9d: Call2 0x106f

0x9e: Pop(2)
0x9f: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xa0: Return(); Pop(0)

0xa1: PushEmpty()
0xa2: Push((int) 1)
0xa3: IF (Stack[-1] == 0) GOTO 0xca; Pop(1)

0xa4: PushEmpty()
0xa5: Call2 0x108d

0xa6: Pop(0)
0xa7: Push((int) 31281)
0xa8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa9: IF (Stack[-1] == 0) GOTO 0xbe; Pop(1)

0xaa: PushEmpty(string)
0xab: Stack[-1] = "Neutral"
0xac: Call2 0x8b

0xad: Pop(1)
0xae: Push((int) 529898)
0xaf: @@ SetMessage(Stack[-1])
0xb0: Pop(1)
0xb1: @@ ClearReplies()
0xb2: Pop(0)
0xb3: Push((int) 529899)
0xb4: Push((int) -1)
0xb5: Push((int) 31282)
0xb6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb7: Pop(3)
0xb8: Push((int) 529900)
0xb9: Push((int) -1)
0xba: Push((int) 31283)
0xbb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbc: Pop(3)
0xbd: Return(); Pop(0)

0xbe: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xbf: PushEmpty(bool)
0xc0: Call2 0x1101

0xc1: Pop(0)
0xc2: IF (Stack[-1] == 0) GOTO 0xc6; Pop(1)

0xc3: @ lshStopAnimation()
0xc4: Pop(0)
0xc5: GOTO 0xc8

0xc6: @ StopAnimation()
0xc7: Pop(0)
0xc8: Return(); Pop(0)

0xc9: GOTO 0xa2

0xca: Return(); Pop(0)

0xcb: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0xcc: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0xcd: PushEmpty(bool, object, float)
0xce: Stack[-2] = Stack[-12]
0xcf: Stack[-1] = (float) 70.0
0xd0: Call2 0xf80

0xd1: Pop(2)
0xd2: Pop(1); Push((bool) Stack[-1] == 0)
0xd3: IF (Stack[-1] == 0) GOTO 0xd6; Pop(1)

0xd4: Stack[-10] = (int) -2
0xd5: Return(); Pop(8)

0xd6: @ CreateDialog(Stack[-4])
0xd7: Pop(0)
0xd8: PushEmpty(int)
0xd9: Call2 0x10fb

0xda: Pop(0)
0xdb: @@ SetNPCName(Stack[-1])
0xdc: Pop(1)
0xdd: PushEmpty(int)
0xde: Call2 0x10f9

0xdf: Pop(0)
0xe0: @@ SetNPCDescription(Stack[-1])
0xe1: Pop(1)
0xe2: PushEmpty(string)
0xe3: Call2 0x10fd

0xe4: Pop(0)
0xe5: @@ SetPhoto(Stack[-1])
0xe6: Pop(1)
0xe7: PushEmpty(string)
0xe8: Call2 0x10ff

0xe9: Pop(0)
0xea: @@ SetPhoto2(Stack[-1])
0xeb: Pop(1)
0xec: PushEmpty(int)
0xed: Call2 0x138a

0xee: Pop(0)
0xef: @@ SetPlayerName(Stack[-1])
0xf0: Pop(1)
0xf1: Stack[-2] = (int) -1
0xf2: @ IsOverrideActive(Stack[-3])
0xf3: Pop(0)
0xf4: Push(Stack[-3])
0xf5: IF (Stack[-1] == 0) GOTO 0xf8; Pop(1)

0xf6: Stack[-10] = (int) -2
0xf7: Return(); Pop(8)

0xf8: @ DoDialog(Stack[-4])
0xf9: Pop(0)
0xfa: PushEmpty(bool, object)
0xfb: PushEmpty(object)
0xfc: Call2 0x1094

0xfd: Stack[-2] = Stack[-1]
0xfe: Pop(1)
0xff: Call2 0xfd5

0x100: Pop(2)
0x101: PushEmpty(object, object)
0x102: Stack[-2] = Stack[-11]
0x103: Stack[-1] = Stack[-6]
0x104: Push(-2, 4); TaskCall(3)
0x105: Call2 0x11c

0x106: Pop(-2, 4); TaskReturn
0x107: Pop(2)
0x108: @@ IsDialogEnd(Stack[-1])
0x109: Pop(0)
0x10a: Pop(0); Push((bool) Stack[-1] == 0)
0x10b: IF (Stack[-1] == 0) GOTO 0x111; Pop(1)

0x10c: @ sync()
0x10d: Pop(0)
0x10e: @@ IsDialogEnd(Stack[-1])
0x10f: Pop(0)
0x110: GOTO 0x10a

0x111: PushEmpty(object)
0x112: Stack[-1] = Stack[-10]
0x113: Call2 0xfc4

0x114: Pop(1)
0x115: @ StopDialog(Stack[-4])
0x116: Pop(0)
0x117: @@ GetReturnValue(Stack[-2])
0x118: Pop(0)
0x119: Stack[-10] = Stack[-2]
0x11a: Return(); Pop(8)

0x11b: Stack[-4] = 0
0x11c: PushEmpty()
0x11d: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x11e: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x11f: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x120: Push((int) 1)
0x121: IF (Stack[-1] == 0) GOTO 0x138; Pop(1)

0x122: PushEmpty(string)
0x123: Stack[-1] = "Neutral"
0x124: Call2 0x156

0x125: Pop(1)
0x126: Push((int) 529902)
0x127: @@ SetMessage(Stack[-1])
0x128: Pop(1)
0x129: @@ ClearReplies()
0x12a: Pop(0)
0x12b: Push((int) 529903)
0x12c: Push((int) -1)
0x12d: Push((int) 31286)
0x12e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x12f: Pop(3)
0x130: Push((int) 529904)
0x131: Push((int) -1)
0x132: Push((int) 31287)
0x133: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x134: Pop(3)
0x135: GOTO 0x138

0x136: Return(); Pop(0)

0x137: GOTO 0x120

0x138: PushEmpty(bool)
0x139: Call2 0x1101

0x13a: Pop(0)
0x13b: IF (Stack[-1] == 0) GOTO 0x147; Pop(1)

0x13c: @ lshWaitForAnimEnd()
0x13d: Pop(0)
0x13e: Push( Stack[3 + Tasks[-1].StackPointer] )
0x13f: IF (Stack[-1] == 0) GOTO 0x141; Pop(1)

0x140: GOTO 0x146

0x141: PushEmpty(string)
0x142: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x143: Call2 0x105f

0x144: Pop(1)
0x145: GOTO 0x13c

0x146: GOTO 0x155

0x147: Push("all")
0x148: Push("idle")
0x149: @ PlayAnimation(Stack[-2], Stack[-1])
0x14a: Pop(2)
0x14b: @ WaitForAnimEnd()
0x14c: Pop(0)
0x14d: Push( Stack[3 + Tasks[-1].StackPointer] )
0x14e: IF (Stack[-1] == 0) GOTO 0x150; Pop(1)

0x14f: GOTO 0x155

0x150: Push("all")
0x151: Push("idle")
0x152: @ PlayAnimation(Stack[-2], Stack[-1])
0x153: Pop(2)
0x154: GOTO 0x14b

0x155: Return(); Pop(0)

0x156: PushEmpty()
0x157: PushEmpty(bool)
0x158: Call2 0x1101

0x159: Pop(0)
0x15a: Pop(1); Push((bool) Stack[-1] == 0)
0x15b: IF (Stack[-1] == 0) GOTO 0x15d; Pop(1)

0x15c: Return(); Pop(0)

0x15d: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x15e: IF (Stack[-1] == 0) GOTO 0x160; Pop(1)

0x15f: Return(); Pop(0)

0x160: PushEmpty(string, bool)
0x161: Stack[-2] = Stack[-3]
0x162: Push("")
0x163: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x164: IF (Stack[-1] == 0) GOTO 0x167; Pop(1)

0x165: Stack[-1] = (bool) 0
0x166: GOTO 0x168

0x167: Stack[-1] = (bool) 1
0x168: Call2 0x106f

0x169: Pop(2)
0x16a: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x16b: Return(); Pop(0)

0x16c: PushEmpty()
0x16d: Push((int) 1)
0x16e: IF (Stack[-1] == 0) GOTO 0x195; Pop(1)

0x16f: PushEmpty()
0x170: Call2 0x108d

0x171: Pop(0)
0x172: Push((int) 31285)
0x173: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x174: IF (Stack[-1] == 0) GOTO 0x189; Pop(1)

0x175: PushEmpty(string)
0x176: Stack[-1] = "Neutral"
0x177: Call2 0x156

0x178: Pop(1)
0x179: Push((int) 529902)
0x17a: @@ SetMessage(Stack[-1])
0x17b: Pop(1)
0x17c: @@ ClearReplies()
0x17d: Pop(0)
0x17e: Push((int) 529903)
0x17f: Push((int) -1)
0x180: Push((int) 31286)
0x181: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x182: Pop(3)
0x183: Push((int) 529904)
0x184: Push((int) -1)
0x185: Push((int) 31287)
0x186: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x187: Pop(3)
0x188: Return(); Pop(0)

0x189: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x18a: PushEmpty(bool)
0x18b: Call2 0x1101

0x18c: Pop(0)
0x18d: IF (Stack[-1] == 0) GOTO 0x191; Pop(1)

0x18e: @ lshStopAnimation()
0x18f: Pop(0)
0x190: GOTO 0x193

0x191: @ StopAnimation()
0x192: Pop(0)
0x193: Return(); Pop(0)

0x194: GOTO 0x16d

0x195: Return(); Pop(0)

0x196: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x197: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x198: PushEmpty(bool, object, float)
0x199: Stack[-2] = Stack[-12]
0x19a: Stack[-1] = (float) 70.0
0x19b: Call2 0xf80

0x19c: Pop(2)
0x19d: Pop(1); Push((bool) Stack[-1] == 0)
0x19e: IF (Stack[-1] == 0) GOTO 0x1a1; Pop(1)

0x19f: Stack[-10] = (int) -2
0x1a0: Return(); Pop(8)

0x1a1: @ CreateDialog(Stack[-4])
0x1a2: Pop(0)
0x1a3: PushEmpty(int)
0x1a4: Call2 0x10fb

0x1a5: Pop(0)
0x1a6: @@ SetNPCName(Stack[-1])
0x1a7: Pop(1)
0x1a8: PushEmpty(int)
0x1a9: Call2 0x10f9

0x1aa: Pop(0)
0x1ab: @@ SetNPCDescription(Stack[-1])
0x1ac: Pop(1)
0x1ad: PushEmpty(string)
0x1ae: Call2 0x10fd

0x1af: Pop(0)
0x1b0: @@ SetPhoto(Stack[-1])
0x1b1: Pop(1)
0x1b2: PushEmpty(string)
0x1b3: Call2 0x10ff

0x1b4: Pop(0)
0x1b5: @@ SetPhoto2(Stack[-1])
0x1b6: Pop(1)
0x1b7: PushEmpty(int)
0x1b8: Call2 0x138a

0x1b9: Pop(0)
0x1ba: @@ SetPlayerName(Stack[-1])
0x1bb: Pop(1)
0x1bc: Stack[-2] = (int) -1
0x1bd: @ IsOverrideActive(Stack[-3])
0x1be: Pop(0)
0x1bf: Push(Stack[-3])
0x1c0: IF (Stack[-1] == 0) GOTO 0x1c3; Pop(1)

0x1c1: Stack[-10] = (int) -2
0x1c2: Return(); Pop(8)

0x1c3: @ DoDialog(Stack[-4])
0x1c4: Pop(0)
0x1c5: PushEmpty(bool, object)
0x1c6: PushEmpty(object)
0x1c7: Call2 0x1094

0x1c8: Stack[-2] = Stack[-1]
0x1c9: Pop(1)
0x1ca: Call2 0xfd5

0x1cb: Pop(2)
0x1cc: PushEmpty(object, object)
0x1cd: Stack[-2] = Stack[-11]
0x1ce: Stack[-1] = Stack[-6]
0x1cf: Push(-2, 4); TaskCall(5)
0x1d0: Call2 0x1e7

0x1d1: Pop(-2, 4); TaskReturn
0x1d2: Pop(2)
0x1d3: @@ IsDialogEnd(Stack[-1])
0x1d4: Pop(0)
0x1d5: Pop(0); Push((bool) Stack[-1] == 0)
0x1d6: IF (Stack[-1] == 0) GOTO 0x1dc; Pop(1)

0x1d7: @ sync()
0x1d8: Pop(0)
0x1d9: @@ IsDialogEnd(Stack[-1])
0x1da: Pop(0)
0x1db: GOTO 0x1d5

0x1dc: PushEmpty(object)
0x1dd: Stack[-1] = Stack[-10]
0x1de: Call2 0xfc4

0x1df: Pop(1)
0x1e0: @ StopDialog(Stack[-4])
0x1e1: Pop(0)
0x1e2: @@ GetReturnValue(Stack[-2])
0x1e3: Pop(0)
0x1e4: Stack[-10] = Stack[-2]
0x1e5: Return(); Pop(8)

0x1e6: Stack[-4] = 0
0x1e7: PushEmpty()
0x1e8: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x1e9: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x1ea: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x1eb: Push((int) 1)
0x1ec: IF (Stack[-1] == 0) GOTO 0x212; Pop(1)

0x1ed: PushEmpty(bool, object)
0x1ee: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1ef: Call2 0x12ae

0x1f0: Pop(1)
0x1f1: IF (Stack[-1] == 0) GOTO 0x201; Pop(1)

0x1f2: PushEmpty(string)
0x1f3: Stack[-1] = "Distrust"
0x1f4: Call2 0x230

0x1f5: Pop(1)
0x1f6: Push((int) 518234)
0x1f7: @@ SetMessage(Stack[-1])
0x1f8: Pop(1)
0x1f9: @@ ClearReplies()
0x1fa: Pop(0)
0x1fb: Push((int) 518235)
0x1fc: Push((int) 20742)
0x1fd: Push((int) 19344)
0x1fe: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ff: Pop(3)
0x200: GOTO 0x212

0x201: PushEmpty(string)
0x202: Stack[-1] = "Neutral"
0x203: Call2 0x230

0x204: Pop(1)
0x205: Push((int) 518236)
0x206: @@ SetMessage(Stack[-1])
0x207: Pop(1)
0x208: @@ ClearReplies()
0x209: Pop(0)
0x20a: Push((int) 518237)
0x20b: Push((int) -1)
0x20c: Push((int) 19346)
0x20d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x20e: Pop(3)
0x20f: GOTO 0x212

0x210: Return(); Pop(0)

0x211: GOTO 0x1eb

0x212: PushEmpty(bool)
0x213: Call2 0x1101

0x214: Pop(0)
0x215: IF (Stack[-1] == 0) GOTO 0x221; Pop(1)

0x216: @ lshWaitForAnimEnd()
0x217: Pop(0)
0x218: Push( Stack[3 + Tasks[-1].StackPointer] )
0x219: IF (Stack[-1] == 0) GOTO 0x21b; Pop(1)

0x21a: GOTO 0x220

0x21b: PushEmpty(string)
0x21c: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x21d: Call2 0x105f

0x21e: Pop(1)
0x21f: GOTO 0x216

0x220: GOTO 0x22f

0x221: Push("all")
0x222: Push("idle")
0x223: @ PlayAnimation(Stack[-2], Stack[-1])
0x224: Pop(2)
0x225: @ WaitForAnimEnd()
0x226: Pop(0)
0x227: Push( Stack[3 + Tasks[-1].StackPointer] )
0x228: IF (Stack[-1] == 0) GOTO 0x22a; Pop(1)

0x229: GOTO 0x22f

0x22a: Push("all")
0x22b: Push("idle")
0x22c: @ PlayAnimation(Stack[-2], Stack[-1])
0x22d: Pop(2)
0x22e: GOTO 0x225

0x22f: Return(); Pop(0)

0x230: PushEmpty()
0x231: PushEmpty(bool)
0x232: Call2 0x1101

0x233: Pop(0)
0x234: Pop(1); Push((bool) Stack[-1] == 0)
0x235: IF (Stack[-1] == 0) GOTO 0x237; Pop(1)

0x236: Return(); Pop(0)

0x237: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x238: IF (Stack[-1] == 0) GOTO 0x23a; Pop(1)

0x239: Return(); Pop(0)

0x23a: PushEmpty(string, bool)
0x23b: Stack[-2] = Stack[-3]
0x23c: Push("")
0x23d: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x23e: IF (Stack[-1] == 0) GOTO 0x241; Pop(1)

0x23f: Stack[-1] = (bool) 0
0x240: GOTO 0x242

0x241: Stack[-1] = (bool) 1
0x242: Call2 0x106f

0x243: Pop(2)
0x244: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x245: Return(); Pop(0)

0x246: PushEmpty()
0x247: Push((int) 1)
0x248: IF (Stack[-1] == 0) GOTO 0x374; Pop(1)

0x249: PushEmpty()
0x24a: Call2 0x108d

0x24b: Pop(0)
0x24c: Push((int) 20759)
0x24d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x24e: IF (Stack[-1] == 0) GOTO 0x263; Pop(1)

0x24f: PushEmpty(object, object)
0x250: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x251: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x252: Call2 0x1174

0x253: Pop(2)
0x254: PushEmpty(object, object)
0x255: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x256: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x257: Call2 0x11ee

0x258: Pop(2)
0x259: PushEmpty(object, object)
0x25a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x25b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x25c: Call2 0x1166

0x25d: Pop(2)
0x25e: PushEmpty(object, object)
0x25f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x260: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x261: Call2 0x116d

0x262: Pop(2)
0x263: Push((int) 20765)
0x264: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x265: IF (Stack[-1] == 0) GOTO 0x27a; Pop(1)

0x266: PushEmpty(object, object)
0x267: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x268: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x269: Call2 0x1174

0x26a: Pop(2)
0x26b: PushEmpty(object, object)
0x26c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x26d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x26e: Call2 0x11ee

0x26f: Pop(2)
0x270: PushEmpty(object, object)
0x271: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x272: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x273: Call2 0x1166

0x274: Pop(2)
0x275: PushEmpty(object, object)
0x276: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x277: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x278: Call2 0x116d

0x279: Pop(2)
0x27a: Push((int) 19343)
0x27b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x27c: IF (Stack[-1] == 0) GOTO 0x2a0; Pop(1)

0x27d: PushEmpty(bool, object)
0x27e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x27f: Call2 0x12ae

0x280: Pop(1)
0x281: IF (Stack[-1] == 0) GOTO 0x291; Pop(1)

0x282: PushEmpty(string)
0x283: Stack[-1] = "Distrust"
0x284: Call2 0x230

0x285: Pop(1)
0x286: Push((int) 518234)
0x287: @@ SetMessage(Stack[-1])
0x288: Pop(1)
0x289: @@ ClearReplies()
0x28a: Pop(0)
0x28b: Push((int) 518235)
0x28c: Push((int) 20742)
0x28d: Push((int) 19344)
0x28e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x28f: Pop(3)
0x290: Return(); Pop(0)

0x291: PushEmpty(string)
0x292: Stack[-1] = "Neutral"
0x293: Call2 0x230

0x294: Pop(1)
0x295: Push((int) 518236)
0x296: @@ SetMessage(Stack[-1])
0x297: Pop(1)
0x298: @@ ClearReplies()
0x299: Pop(0)
0x29a: Push((int) 518237)
0x29b: Push((int) -1)
0x29c: Push((int) 19346)
0x29d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x29e: Pop(3)
0x29f: Return(); Pop(0)

0x2a0: Push((int) 20742)
0x2a1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2a2: IF (Stack[-1] == 0) GOTO 0x2b7; Pop(1)

0x2a3: PushEmpty(string)
0x2a4: Stack[-1] = "Neutral"
0x2a5: Call2 0x230

0x2a6: Pop(1)
0x2a7: Push((int) 519566)
0x2a8: @@ SetMessage(Stack[-1])
0x2a9: Pop(1)
0x2aa: @@ ClearReplies()
0x2ab: Pop(0)
0x2ac: Push((int) 519567)
0x2ad: Push((int) 20744)
0x2ae: Push((int) 20743)
0x2af: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2b0: Pop(3)
0x2b1: Push((int) 519584)
0x2b2: Push((int) 20746)
0x2b3: Push((int) 20760)
0x2b4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2b5: Pop(3)
0x2b6: Return(); Pop(0)

0x2b7: Push((int) 20744)
0x2b8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2b9: IF (Stack[-1] == 0) GOTO 0x2c9; Pop(1)

0x2ba: PushEmpty(string)
0x2bb: Stack[-1] = "Repentance"
0x2bc: Call2 0x230

0x2bd: Pop(1)
0x2be: Push((int) 519568)
0x2bf: @@ SetMessage(Stack[-1])
0x2c0: Pop(1)
0x2c1: @@ ClearReplies()
0x2c2: Pop(0)
0x2c3: Push((int) 519569)
0x2c4: Push((int) 20746)
0x2c5: Push((int) 20745)
0x2c6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2c7: Pop(3)
0x2c8: Return(); Pop(0)

0x2c9: Push((int) 20746)
0x2ca: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2cb: IF (Stack[-1] == 0) GOTO 0x2db; Pop(1)

0x2cc: PushEmpty(string)
0x2cd: Stack[-1] = "Neutral"
0x2ce: Call2 0x230

0x2cf: Pop(1)
0x2d0: Push((int) 519570)
0x2d1: @@ SetMessage(Stack[-1])
0x2d2: Pop(1)
0x2d3: @@ ClearReplies()
0x2d4: Pop(0)
0x2d5: Push((int) 519571)
0x2d6: Push((int) 20748)
0x2d7: Push((int) 20747)
0x2d8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2d9: Pop(3)
0x2da: Return(); Pop(0)

0x2db: Push((int) 20748)
0x2dc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2dd: IF (Stack[-1] == 0) GOTO 0x2f2; Pop(1)

0x2de: PushEmpty(string)
0x2df: Stack[-1] = "Neutral"
0x2e0: Call2 0x230

0x2e1: Pop(1)
0x2e2: Push((int) 519572)
0x2e3: @@ SetMessage(Stack[-1])
0x2e4: Pop(1)
0x2e5: @@ ClearReplies()
0x2e6: Pop(0)
0x2e7: Push((int) 519574)
0x2e8: Push((int) 20752)
0x2e9: Push((int) 20750)
0x2ea: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2eb: Pop(3)
0x2ec: Push((int) 519575)
0x2ed: Push((int) 20752)
0x2ee: Push((int) 20751)
0x2ef: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2f0: Pop(3)
0x2f1: Return(); Pop(0)

0x2f2: Push((int) 20752)
0x2f3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2f4: IF (Stack[-1] == 0) GOTO 0x304; Pop(1)

0x2f5: PushEmpty(string)
0x2f6: Stack[-1] = "Patronage"
0x2f7: Call2 0x230

0x2f8: Pop(1)
0x2f9: Push((int) 519576)
0x2fa: @@ SetMessage(Stack[-1])
0x2fb: Pop(1)
0x2fc: @@ ClearReplies()
0x2fd: Pop(0)
0x2fe: Push((int) 519577)
0x2ff: Push((int) 20754)
0x300: Push((int) 20753)
0x301: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x302: Pop(3)
0x303: Return(); Pop(0)

0x304: Push((int) 20754)
0x305: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x306: IF (Stack[-1] == 0) GOTO 0x316; Pop(1)

0x307: PushEmpty(string)
0x308: Stack[-1] = "Neutral"
0x309: Call2 0x230

0x30a: Pop(1)
0x30b: Push((int) 519578)
0x30c: @@ SetMessage(Stack[-1])
0x30d: Pop(1)
0x30e: @@ ClearReplies()
0x30f: Pop(0)
0x310: Push((int) 519579)
0x311: Push((int) 20756)
0x312: Push((int) 20755)
0x313: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x314: Pop(3)
0x315: Return(); Pop(0)

0x316: Push((int) 20756)
0x317: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x318: IF (Stack[-1] == 0) GOTO 0x32d; Pop(1)

0x319: PushEmpty(string)
0x31a: Stack[-1] = "Neutral"
0x31b: Call2 0x230

0x31c: Pop(1)
0x31d: Push((int) 519580)
0x31e: @@ SetMessage(Stack[-1])
0x31f: Pop(1)
0x320: @@ ClearReplies()
0x321: Pop(0)
0x322: Push((int) 527722)
0x323: Push((int) 29071)
0x324: Push((int) 29070)
0x325: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x326: Pop(3)
0x327: Push((int) 519587)
0x328: Push((int) 20758)
0x329: Push((int) 20766)
0x32a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x32b: Pop(3)
0x32c: Return(); Pop(0)

0x32d: Push((int) 29071)
0x32e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x32f: IF (Stack[-1] == 0) GOTO 0x33f; Pop(1)

0x330: PushEmpty(string)
0x331: Stack[-1] = "Neutral"
0x332: Call2 0x230

0x333: Pop(1)
0x334: Push((int) 527723)
0x335: @@ SetMessage(Stack[-1])
0x336: Pop(1)
0x337: @@ ClearReplies()
0x338: Pop(0)
0x339: Push((int) 530603)
0x33a: Push((int) 31907)
0x33b: Push((int) 31906)
0x33c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x33d: Pop(3)
0x33e: Return(); Pop(0)

0x33f: Push((int) 31907)
0x340: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x341: IF (Stack[-1] == 0) GOTO 0x351; Pop(1)

0x342: PushEmpty(string)
0x343: Stack[-1] = "Anger"
0x344: Call2 0x230

0x345: Pop(1)
0x346: Push((int) 530604)
0x347: @@ SetMessage(Stack[-1])
0x348: Pop(1)
0x349: @@ ClearReplies()
0x34a: Pop(0)
0x34b: Push((int) 519581)
0x34c: Push((int) 20758)
0x34d: Push((int) 20757)
0x34e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x34f: Pop(3)
0x350: Return(); Pop(0)

0x351: Push((int) 20758)
0x352: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x353: IF (Stack[-1] == 0) GOTO 0x368; Pop(1)

0x354: PushEmpty(string)
0x355: Stack[-1] = "Neutral"
0x356: Call2 0x230

0x357: Pop(1)
0x358: Push((int) 519582)
0x359: @@ SetMessage(Stack[-1])
0x35a: Pop(1)
0x35b: @@ ClearReplies()
0x35c: Pop(0)
0x35d: Push((int) 519583)
0x35e: Push((int) -1)
0x35f: Push((int) 20759)
0x360: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x361: Pop(3)
0x362: Push((int) 519586)
0x363: Push((int) -1)
0x364: Push((int) 20765)
0x365: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x366: Pop(3)
0x367: Return(); Pop(0)

0x368: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x369: PushEmpty(bool)
0x36a: Call2 0x1101

0x36b: Pop(0)
0x36c: IF (Stack[-1] == 0) GOTO 0x370; Pop(1)

0x36d: @ lshStopAnimation()
0x36e: Pop(0)
0x36f: GOTO 0x372

0x370: @ StopAnimation()
0x371: Pop(0)
0x372: Return(); Pop(0)

0x373: GOTO 0x247

0x374: Return(); Pop(0)

0x375: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x376: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x377: PushEmpty(bool, object, float)
0x378: Stack[-2] = Stack[-12]
0x379: Stack[-1] = (float) 70.0
0x37a: Call2 0xf80

0x37b: Pop(2)
0x37c: Pop(1); Push((bool) Stack[-1] == 0)
0x37d: IF (Stack[-1] == 0) GOTO 0x380; Pop(1)

0x37e: Stack[-10] = (int) -2
0x37f: Return(); Pop(8)

0x380: @ CreateDialog(Stack[-4])
0x381: Pop(0)
0x382: PushEmpty(int)
0x383: Call2 0x10fb

0x384: Pop(0)
0x385: @@ SetNPCName(Stack[-1])
0x386: Pop(1)
0x387: PushEmpty(int)
0x388: Call2 0x10f9

0x389: Pop(0)
0x38a: @@ SetNPCDescription(Stack[-1])
0x38b: Pop(1)
0x38c: PushEmpty(string)
0x38d: Call2 0x10fd

0x38e: Pop(0)
0x38f: @@ SetPhoto(Stack[-1])
0x390: Pop(1)
0x391: PushEmpty(string)
0x392: Call2 0x10ff

0x393: Pop(0)
0x394: @@ SetPhoto2(Stack[-1])
0x395: Pop(1)
0x396: PushEmpty(int)
0x397: Call2 0x138a

0x398: Pop(0)
0x399: @@ SetPlayerName(Stack[-1])
0x39a: Pop(1)
0x39b: Stack[-2] = (int) -1
0x39c: @ IsOverrideActive(Stack[-3])
0x39d: Pop(0)
0x39e: Push(Stack[-3])
0x39f: IF (Stack[-1] == 0) GOTO 0x3a2; Pop(1)

0x3a0: Stack[-10] = (int) -2
0x3a1: Return(); Pop(8)

0x3a2: @ DoDialog(Stack[-4])
0x3a3: Pop(0)
0x3a4: PushEmpty(bool, object)
0x3a5: PushEmpty(object)
0x3a6: Call2 0x1094

0x3a7: Stack[-2] = Stack[-1]
0x3a8: Pop(1)
0x3a9: Call2 0xfd5

0x3aa: Pop(2)
0x3ab: PushEmpty(object, object)
0x3ac: Stack[-2] = Stack[-11]
0x3ad: Stack[-1] = Stack[-6]
0x3ae: Push(-2, 4); TaskCall(7)
0x3af: Call2 0x3c6

0x3b0: Pop(-2, 4); TaskReturn
0x3b1: Pop(2)
0x3b2: @@ IsDialogEnd(Stack[-1])
0x3b3: Pop(0)
0x3b4: Pop(0); Push((bool) Stack[-1] == 0)
0x3b5: IF (Stack[-1] == 0) GOTO 0x3bb; Pop(1)

0x3b6: @ sync()
0x3b7: Pop(0)
0x3b8: @@ IsDialogEnd(Stack[-1])
0x3b9: Pop(0)
0x3ba: GOTO 0x3b4

0x3bb: PushEmpty(object)
0x3bc: Stack[-1] = Stack[-10]
0x3bd: Call2 0xfc4

0x3be: Pop(1)
0x3bf: @ StopDialog(Stack[-4])
0x3c0: Pop(0)
0x3c1: @@ GetReturnValue(Stack[-2])
0x3c2: Pop(0)
0x3c3: Stack[-10] = Stack[-2]
0x3c4: Return(); Pop(8)

0x3c5: Stack[-4] = 0
0x3c6: PushEmpty()
0x3c7: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x3c8: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x3c9: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x3ca: Push((int) 1)
0x3cb: IF (Stack[-1] == 0) GOTO 0x414; Pop(1)

0x3cc: PushEmpty(bool, object)
0x3cd: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3ce: Call2 0x1272

0x3cf: Pop(1)
0x3d0: IF (Stack[-1] == 0) GOTO 0x3ef; Pop(1)

0x3d1: PushEmpty(object, object)
0x3d2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x3d3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3d4: Call2 0x111d

0x3d5: Pop(2)
0x3d6: PushEmpty(object, object)
0x3d7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x3d8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3d9: Call2 0x11d8

0x3da: Pop(2)
0x3db: PushEmpty(string)
0x3dc: Stack[-1] = "Neutral"
0x3dd: Call2 0x432

0x3de: Pop(1)
0x3df: Push((int) 519215)
0x3e0: @@ SetMessage(Stack[-1])
0x3e1: Pop(1)
0x3e2: @@ ClearReplies()
0x3e3: Pop(0)
0x3e4: Push((int) 519216)
0x3e5: Push((int) 29206)
0x3e6: Push((int) 20358)
0x3e7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3e8: Pop(3)
0x3e9: Push((int) 519240)
0x3ea: Push((int) 20385)
0x3eb: Push((int) 20384)
0x3ec: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3ed: Pop(3)
0x3ee: GOTO 0x414

0x3ef: PushEmpty(string)
0x3f0: Stack[-1] = "Neutral"
0x3f1: Call2 0x432

0x3f2: Pop(1)
0x3f3: Push((int) 519247)
0x3f4: @@ SetMessage(Stack[-1])
0x3f5: Pop(1)
0x3f6: @@ ClearReplies()
0x3f7: Pop(0)
0x3f8: PushEmpty(bool, object)
0x3f9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3fa: Call2 0x127e

0x3fb: Pop(1)
0x3fc: IF (Stack[-1] == 0) GOTO 0x402; Pop(1)

0x3fd: Push((int) 519628)
0x3fe: Push((int) 20811)
0x3ff: Push((int) 20810)
0x400: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x401: Pop(3)
0x402: PushEmpty(bool, object)
0x403: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x404: Call2 0x128a

0x405: Pop(1)
0x406: IF (Stack[-1] == 0) GOTO 0x40c; Pop(1)

0x407: Push((int) 519248)
0x408: Push((int) 20399)
0x409: Push((int) 20397)
0x40a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x40b: Pop(3)
0x40c: Push((int) 519249)
0x40d: Push((int) -1)
0x40e: Push((int) 20398)
0x40f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x410: Pop(3)
0x411: GOTO 0x414

0x412: Return(); Pop(0)

0x413: GOTO 0x3ca

0x414: PushEmpty(bool)
0x415: Call2 0x1101

0x416: Pop(0)
0x417: IF (Stack[-1] == 0) GOTO 0x423; Pop(1)

0x418: @ lshWaitForAnimEnd()
0x419: Pop(0)
0x41a: Push( Stack[3 + Tasks[-1].StackPointer] )
0x41b: IF (Stack[-1] == 0) GOTO 0x41d; Pop(1)

0x41c: GOTO 0x422

0x41d: PushEmpty(string)
0x41e: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x41f: Call2 0x105f

0x420: Pop(1)
0x421: GOTO 0x418

0x422: GOTO 0x431

0x423: Push("all")
0x424: Push("idle")
0x425: @ PlayAnimation(Stack[-2], Stack[-1])
0x426: Pop(2)
0x427: @ WaitForAnimEnd()
0x428: Pop(0)
0x429: Push( Stack[3 + Tasks[-1].StackPointer] )
0x42a: IF (Stack[-1] == 0) GOTO 0x42c; Pop(1)

0x42b: GOTO 0x431

0x42c: Push("all")
0x42d: Push("idle")
0x42e: @ PlayAnimation(Stack[-2], Stack[-1])
0x42f: Pop(2)
0x430: GOTO 0x427

0x431: Return(); Pop(0)

0x432: PushEmpty()
0x433: PushEmpty(bool)
0x434: Call2 0x1101

0x435: Pop(0)
0x436: Pop(1); Push((bool) Stack[-1] == 0)
0x437: IF (Stack[-1] == 0) GOTO 0x439; Pop(1)

0x438: Return(); Pop(0)

0x439: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x43a: IF (Stack[-1] == 0) GOTO 0x43c; Pop(1)

0x43b: Return(); Pop(0)

0x43c: PushEmpty(string, bool)
0x43d: Stack[-2] = Stack[-3]
0x43e: Push("")
0x43f: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x440: IF (Stack[-1] == 0) GOTO 0x443; Pop(1)

0x441: Stack[-1] = (bool) 0
0x442: GOTO 0x444

0x443: Stack[-1] = (bool) 1
0x444: Call2 0x106f

0x445: Pop(2)
0x446: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x447: Return(); Pop(0)

0x448: PushEmpty()
0x449: Push((int) 1)
0x44a: IF (Stack[-1] == 0) GOTO 0x6a5; Pop(1)

0x44b: PushEmpty()
0x44c: Call2 0x108d

0x44d: Pop(0)
0x44e: Push((int) 20378)
0x44f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x450: IF (Stack[-1] == 0) GOTO 0x45b; Pop(1)

0x451: PushEmpty(object, object)
0x452: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x453: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x454: Call2 0x1103

0x455: Pop(2)
0x456: PushEmpty(object, object)
0x457: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x458: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x459: Call2 0x11de

0x45a: Pop(2)
0x45b: Push((int) 20814)
0x45c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x45d: IF (Stack[-1] == 0) GOTO 0x468; Pop(1)

0x45e: PushEmpty(object, object)
0x45f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x460: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x461: Call2 0x1103

0x462: Pop(2)
0x463: PushEmpty(object, object)
0x464: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x465: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x466: Call2 0x11de

0x467: Pop(2)
0x468: Push((int) 20422)
0x469: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x46a: IF (Stack[-1] == 0) GOTO 0x470; Pop(1)

0x46b: PushEmpty(object, object)
0x46c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x46d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x46e: Call2 0x1123

0x46f: Pop(2)
0x470: Push((int) 20423)
0x471: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x472: IF (Stack[-1] == 0) GOTO 0x478; Pop(1)

0x473: PushEmpty(object, object)
0x474: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x475: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x476: Call2 0x1123

0x477: Pop(2)
0x478: Push((int) 20420)
0x479: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x47a: IF (Stack[-1] == 0) GOTO 0x480; Pop(1)

0x47b: PushEmpty(object, object)
0x47c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x47d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x47e: Call2 0x1123

0x47f: Pop(2)
0x480: Push((int) 20409)
0x481: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x482: IF (Stack[-1] == 0) GOTO 0x488; Pop(1)

0x483: PushEmpty(object, object)
0x484: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x485: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x486: Call2 0x112d

0x487: Pop(2)
0x488: Push((int) 20357)
0x489: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x48a: IF (Stack[-1] == 0) GOTO 0x4d1; Pop(1)

0x48b: PushEmpty(bool, object)
0x48c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x48d: Call2 0x1272

0x48e: Pop(1)
0x48f: IF (Stack[-1] == 0) GOTO 0x4ae; Pop(1)

0x490: PushEmpty(object, object)
0x491: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x492: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x493: Call2 0x111d

0x494: Pop(2)
0x495: PushEmpty(object, object)
0x496: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x497: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x498: Call2 0x11d8

0x499: Pop(2)
0x49a: PushEmpty(string)
0x49b: Stack[-1] = "Neutral"
0x49c: Call2 0x432

0x49d: Pop(1)
0x49e: Push((int) 519215)
0x49f: @@ SetMessage(Stack[-1])
0x4a0: Pop(1)
0x4a1: @@ ClearReplies()
0x4a2: Pop(0)
0x4a3: Push((int) 519216)
0x4a4: Push((int) 29206)
0x4a5: Push((int) 20358)
0x4a6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4a7: Pop(3)
0x4a8: Push((int) 519240)
0x4a9: Push((int) 20385)
0x4aa: Push((int) 20384)
0x4ab: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4ac: Pop(3)
0x4ad: Return(); Pop(0)

0x4ae: PushEmpty(string)
0x4af: Stack[-1] = "Neutral"
0x4b0: Call2 0x432

0x4b1: Pop(1)
0x4b2: Push((int) 519247)
0x4b3: @@ SetMessage(Stack[-1])
0x4b4: Pop(1)
0x4b5: @@ ClearReplies()
0x4b6: Pop(0)
0x4b7: PushEmpty(bool, object)
0x4b8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4b9: Call2 0x127e

0x4ba: Pop(1)
0x4bb: IF (Stack[-1] == 0) GOTO 0x4c1; Pop(1)

0x4bc: Push((int) 519628)
0x4bd: Push((int) 20811)
0x4be: Push((int) 20810)
0x4bf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4c0: Pop(3)
0x4c1: PushEmpty(bool, object)
0x4c2: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4c3: Call2 0x128a

0x4c4: Pop(1)
0x4c5: IF (Stack[-1] == 0) GOTO 0x4cb; Pop(1)

0x4c6: Push((int) 519248)
0x4c7: Push((int) 20399)
0x4c8: Push((int) 20397)
0x4c9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4ca: Pop(3)
0x4cb: Push((int) 519249)
0x4cc: Push((int) -1)
0x4cd: Push((int) 20398)
0x4ce: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4cf: Pop(3)
0x4d0: Return(); Pop(0)

0x4d1: Push((int) 20399)
0x4d2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4d3: IF (Stack[-1] == 0) GOTO 0x4e8; Pop(1)

0x4d4: PushEmpty(string)
0x4d5: Stack[-1] = "Anger"
0x4d6: Call2 0x432

0x4d7: Pop(1)
0x4d8: Push((int) 519250)
0x4d9: @@ SetMessage(Stack[-1])
0x4da: Pop(1)
0x4db: @@ ClearReplies()
0x4dc: Pop(0)
0x4dd: Push((int) 519251)
0x4de: Push((int) 20402)
0x4df: Push((int) 20400)
0x4e0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4e1: Pop(3)
0x4e2: Push((int) 519252)
0x4e3: Push((int) 20402)
0x4e4: Push((int) 20401)
0x4e5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4e6: Pop(3)
0x4e7: Return(); Pop(0)

0x4e8: Push((int) 20402)
0x4e9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4ea: IF (Stack[-1] == 0) GOTO 0x4ff; Pop(1)

0x4eb: PushEmpty(string)
0x4ec: Stack[-1] = "Neutral"
0x4ed: Call2 0x432

0x4ee: Pop(1)
0x4ef: Push((int) 519253)
0x4f0: @@ SetMessage(Stack[-1])
0x4f1: Pop(1)
0x4f2: @@ ClearReplies()
0x4f3: Pop(0)
0x4f4: Push((int) 519254)
0x4f5: Push((int) 20405)
0x4f6: Push((int) 20404)
0x4f7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4f8: Pop(3)
0x4f9: Push((int) 519256)
0x4fa: Push((int) 20407)
0x4fb: Push((int) 20406)
0x4fc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4fd: Pop(3)
0x4fe: Return(); Pop(0)

0x4ff: Push((int) 20407)
0x500: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x501: IF (Stack[-1] == 0) GOTO 0x516; Pop(1)

0x502: PushEmpty(string)
0x503: Stack[-1] = "Neutral"
0x504: Call2 0x432

0x505: Pop(1)
0x506: Push((int) 519257)
0x507: @@ SetMessage(Stack[-1])
0x508: Pop(1)
0x509: @@ ClearReplies()
0x50a: Pop(0)
0x50b: Push((int) 519258)
0x50c: Push((int) 20413)
0x50d: Push((int) 20408)
0x50e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x50f: Pop(3)
0x510: Push((int) 519259)
0x511: Push((int) -1)
0x512: Push((int) 20409)
0x513: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x514: Pop(3)
0x515: Return(); Pop(0)

0x516: Push((int) 20405)
0x517: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x518: IF (Stack[-1] == 0) GOTO 0x52d; Pop(1)

0x519: PushEmpty(string)
0x51a: Stack[-1] = "Neutral"
0x51b: Call2 0x432

0x51c: Pop(1)
0x51d: Push((int) 519255)
0x51e: @@ SetMessage(Stack[-1])
0x51f: Pop(1)
0x520: @@ ClearReplies()
0x521: Pop(0)
0x522: Push((int) 519260)
0x523: Push((int) 20413)
0x524: Push((int) 20410)
0x525: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x526: Pop(3)
0x527: Push((int) 519261)
0x528: Push((int) 20412)
0x529: Push((int) 20411)
0x52a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x52b: Pop(3)
0x52c: Return(); Pop(0)

0x52d: Push((int) 20412)
0x52e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x52f: IF (Stack[-1] == 0) GOTO 0x53f; Pop(1)

0x530: PushEmpty(string)
0x531: Stack[-1] = "Neutral"
0x532: Call2 0x432

0x533: Pop(1)
0x534: Push((int) 519262)
0x535: @@ SetMessage(Stack[-1])
0x536: Pop(1)
0x537: @@ ClearReplies()
0x538: Pop(0)
0x539: Push((int) 519264)
0x53a: Push((int) 20413)
0x53b: Push((int) 20415)
0x53c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x53d: Pop(3)
0x53e: Return(); Pop(0)

0x53f: Push((int) 20413)
0x540: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x541: IF (Stack[-1] == 0) GOTO 0x551; Pop(1)

0x542: PushEmpty(string)
0x543: Stack[-1] = "Neutral"
0x544: Call2 0x432

0x545: Pop(1)
0x546: Push((int) 519263)
0x547: @@ SetMessage(Stack[-1])
0x548: Pop(1)
0x549: @@ ClearReplies()
0x54a: Pop(0)
0x54b: Push((int) 519265)
0x54c: Push((int) 20418)
0x54d: Push((int) 20417)
0x54e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x54f: Pop(3)
0x550: Return(); Pop(0)

0x551: Push((int) 20418)
0x552: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x553: IF (Stack[-1] == 0) GOTO 0x568; Pop(1)

0x554: PushEmpty(string)
0x555: Stack[-1] = "Neutral"
0x556: Call2 0x432

0x557: Pop(1)
0x558: Push((int) 519266)
0x559: @@ SetMessage(Stack[-1])
0x55a: Pop(1)
0x55b: @@ ClearReplies()
0x55c: Pop(0)
0x55d: Push((int) 519267)
0x55e: Push((int) 20421)
0x55f: Push((int) 20419)
0x560: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x561: Pop(3)
0x562: Push((int) 519268)
0x563: Push((int) -1)
0x564: Push((int) 20420)
0x565: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x566: Pop(3)
0x567: Return(); Pop(0)

0x568: Push((int) 20421)
0x569: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x56a: IF (Stack[-1] == 0) GOTO 0x57f; Pop(1)

0x56b: PushEmpty(string)
0x56c: Stack[-1] = "Repentance"
0x56d: Call2 0x432

0x56e: Pop(1)
0x56f: Push((int) 519269)
0x570: @@ SetMessage(Stack[-1])
0x571: Pop(1)
0x572: @@ ClearReplies()
0x573: Pop(0)
0x574: Push((int) 519270)
0x575: Push((int) -1)
0x576: Push((int) 20422)
0x577: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x578: Pop(3)
0x579: Push((int) 519271)
0x57a: Push((int) -1)
0x57b: Push((int) 20423)
0x57c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x57d: Pop(3)
0x57e: Return(); Pop(0)

0x57f: Push((int) 20811)
0x580: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x581: IF (Stack[-1] == 0) GOTO 0x591; Pop(1)

0x582: PushEmpty(string)
0x583: Stack[-1] = "Neutral"
0x584: Call2 0x432

0x585: Pop(1)
0x586: Push((int) 519629)
0x587: @@ SetMessage(Stack[-1])
0x588: Pop(1)
0x589: @@ ClearReplies()
0x58a: Pop(0)
0x58b: Push((int) 519630)
0x58c: Push((int) 20813)
0x58d: Push((int) 20812)
0x58e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x58f: Pop(3)
0x590: Return(); Pop(0)

0x591: Push((int) 20813)
0x592: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x593: IF (Stack[-1] == 0) GOTO 0x5a3; Pop(1)

0x594: PushEmpty(string)
0x595: Stack[-1] = "Anger"
0x596: Call2 0x432

0x597: Pop(1)
0x598: Push((int) 519631)
0x599: @@ SetMessage(Stack[-1])
0x59a: Pop(1)
0x59b: @@ ClearReplies()
0x59c: Pop(0)
0x59d: Push((int) 519632)
0x59e: Push((int) -1)
0x59f: Push((int) 20814)
0x5a0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5a1: Pop(3)
0x5a2: Return(); Pop(0)

0x5a3: Push((int) 20385)
0x5a4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5a5: IF (Stack[-1] == 0) GOTO 0x5b5; Pop(1)

0x5a6: PushEmpty(string)
0x5a7: Stack[-1] = "Neutral"
0x5a8: Call2 0x432

0x5a9: Pop(1)
0x5aa: Push((int) 519241)
0x5ab: @@ SetMessage(Stack[-1])
0x5ac: Pop(1)
0x5ad: @@ ClearReplies()
0x5ae: Pop(0)
0x5af: Push((int) 519242)
0x5b0: Push((int) 20359)
0x5b1: Push((int) 20386)
0x5b2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5b3: Pop(3)
0x5b4: Return(); Pop(0)

0x5b5: Push((int) 29206)
0x5b6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5b7: IF (Stack[-1] == 0) GOTO 0x5c7; Pop(1)

0x5b8: PushEmpty(string)
0x5b9: Stack[-1] = "Neutral"
0x5ba: Call2 0x432

0x5bb: Pop(1)
0x5bc: Push((int) 527862)
0x5bd: @@ SetMessage(Stack[-1])
0x5be: Pop(1)
0x5bf: @@ ClearReplies()
0x5c0: Pop(0)
0x5c1: Push((int) 527863)
0x5c2: Push((int) 20359)
0x5c3: Push((int) 29207)
0x5c4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5c5: Pop(3)
0x5c6: Return(); Pop(0)

0x5c7: Push((int) 20359)
0x5c8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5c9: IF (Stack[-1] == 0) GOTO 0x5de; Pop(1)

0x5ca: PushEmpty(string)
0x5cb: Stack[-1] = "Patronage"
0x5cc: Call2 0x432

0x5cd: Pop(1)
0x5ce: Push((int) 519217)
0x5cf: @@ SetMessage(Stack[-1])
0x5d0: Pop(1)
0x5d1: @@ ClearReplies()
0x5d2: Pop(0)
0x5d3: Push((int) 519218)
0x5d4: Push((int) 20361)
0x5d5: Push((int) 20360)
0x5d6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5d7: Pop(3)
0x5d8: Push((int) 519244)
0x5d9: Push((int) 20363)
0x5da: Push((int) 20389)
0x5db: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5dc: Pop(3)
0x5dd: Return(); Pop(0)

0x5de: Push((int) 20361)
0x5df: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5e0: IF (Stack[-1] == 0) GOTO 0x5f0; Pop(1)

0x5e1: PushEmpty(string)
0x5e2: Stack[-1] = "Neutral"
0x5e3: Call2 0x432

0x5e4: Pop(1)
0x5e5: Push((int) 519219)
0x5e6: @@ SetMessage(Stack[-1])
0x5e7: Pop(1)
0x5e8: @@ ClearReplies()
0x5e9: Pop(0)
0x5ea: Push((int) 519220)
0x5eb: Push((int) 20363)
0x5ec: Push((int) 20362)
0x5ed: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5ee: Pop(3)
0x5ef: Return(); Pop(0)

0x5f0: Push((int) 20363)
0x5f1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5f2: IF (Stack[-1] == 0) GOTO 0x607; Pop(1)

0x5f3: PushEmpty(string)
0x5f4: Stack[-1] = "Neutral"
0x5f5: Call2 0x432

0x5f6: Pop(1)
0x5f7: Push((int) 519221)
0x5f8: @@ SetMessage(Stack[-1])
0x5f9: Pop(1)
0x5fa: @@ ClearReplies()
0x5fb: Pop(0)
0x5fc: Push((int) 519222)
0x5fd: Push((int) 20365)
0x5fe: Push((int) 20364)
0x5ff: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x600: Pop(3)
0x601: Push((int) 519245)
0x602: Push((int) 20365)
0x603: Push((int) 20391)
0x604: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x605: Pop(3)
0x606: Return(); Pop(0)

0x607: Push((int) 20365)
0x608: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x609: IF (Stack[-1] == 0) GOTO 0x61e; Pop(1)

0x60a: PushEmpty(string)
0x60b: Stack[-1] = "Neutral"
0x60c: Call2 0x432

0x60d: Pop(1)
0x60e: Push((int) 519223)
0x60f: @@ SetMessage(Stack[-1])
0x610: Pop(1)
0x611: @@ ClearReplies()
0x612: Pop(0)
0x613: Push((int) 519224)
0x614: Push((int) 20367)
0x615: Push((int) 20366)
0x616: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x617: Pop(3)
0x618: Push((int) 519246)
0x619: Push((int) 20369)
0x61a: Push((int) 20394)
0x61b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x61c: Pop(3)
0x61d: Return(); Pop(0)

0x61e: Push((int) 20367)
0x61f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x620: IF (Stack[-1] == 0) GOTO 0x630; Pop(1)

0x621: PushEmpty(string)
0x622: Stack[-1] = "Anger"
0x623: Call2 0x432

0x624: Pop(1)
0x625: Push((int) 519225)
0x626: @@ SetMessage(Stack[-1])
0x627: Pop(1)
0x628: @@ ClearReplies()
0x629: Pop(0)
0x62a: Push((int) 519226)
0x62b: Push((int) 20369)
0x62c: Push((int) 20368)
0x62d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x62e: Pop(3)
0x62f: Return(); Pop(0)

0x630: Push((int) 20369)
0x631: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x632: IF (Stack[-1] == 0) GOTO 0x647; Pop(1)

0x633: PushEmpty(string)
0x634: Stack[-1] = "Neutral"
0x635: Call2 0x432

0x636: Pop(1)
0x637: Push((int) 519227)
0x638: @@ SetMessage(Stack[-1])
0x639: Pop(1)
0x63a: @@ ClearReplies()
0x63b: Pop(0)
0x63c: Push((int) 519228)
0x63d: Push((int) 20375)
0x63e: Push((int) 20370)
0x63f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x640: Pop(3)
0x641: Push((int) 519229)
0x642: Push((int) 20372)
0x643: Push((int) 20371)
0x644: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x645: Pop(3)
0x646: Return(); Pop(0)

0x647: Push((int) 20372)
0x648: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x649: IF (Stack[-1] == 0) GOTO 0x65e; Pop(1)

0x64a: PushEmpty(string)
0x64b: Stack[-1] = "Neutral"
0x64c: Call2 0x432

0x64d: Pop(1)
0x64e: Push((int) 519230)
0x64f: @@ SetMessage(Stack[-1])
0x650: Pop(1)
0x651: @@ ClearReplies()
0x652: Pop(0)
0x653: Push((int) 519231)
0x654: Push((int) 20375)
0x655: Push((int) 20373)
0x656: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x657: Pop(3)
0x658: Push((int) 519232)
0x659: Push((int) -1)
0x65a: Push((int) 20374)
0x65b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x65c: Pop(3)
0x65d: Return(); Pop(0)

0x65e: Push((int) 20375)
0x65f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x660: IF (Stack[-1] == 0) GOTO 0x675; Pop(1)

0x661: PushEmpty(string)
0x662: Stack[-1] = "Neutral"
0x663: Call2 0x432

0x664: Pop(1)
0x665: Push((int) 519233)
0x666: @@ SetMessage(Stack[-1])
0x667: Pop(1)
0x668: @@ ClearReplies()
0x669: Pop(0)
0x66a: Push((int) 519234)
0x66b: Push((int) 20377)
0x66c: Push((int) 20376)
0x66d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x66e: Pop(3)
0x66f: Push((int) 519237)
0x670: Push((int) 20381)
0x671: Push((int) 20380)
0x672: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x673: Pop(3)
0x674: Return(); Pop(0)

0x675: Push((int) 20381)
0x676: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x677: IF (Stack[-1] == 0) GOTO 0x687; Pop(1)

0x678: PushEmpty(string)
0x679: Stack[-1] = "Repentance"
0x67a: Call2 0x432

0x67b: Pop(1)
0x67c: Push((int) 519238)
0x67d: @@ SetMessage(Stack[-1])
0x67e: Pop(1)
0x67f: @@ ClearReplies()
0x680: Pop(0)
0x681: Push((int) 519239)
0x682: Push((int) 20377)
0x683: Push((int) 20382)
0x684: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x685: Pop(3)
0x686: Return(); Pop(0)

0x687: Push((int) 20377)
0x688: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x689: IF (Stack[-1] == 0) GOTO 0x699; Pop(1)

0x68a: PushEmpty(string)
0x68b: Stack[-1] = "Neutral"
0x68c: Call2 0x432

0x68d: Pop(1)
0x68e: Push((int) 519235)
0x68f: @@ SetMessage(Stack[-1])
0x690: Pop(1)
0x691: @@ ClearReplies()
0x692: Pop(0)
0x693: Push((int) 519236)
0x694: Push((int) -1)
0x695: Push((int) 20378)
0x696: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x697: Pop(3)
0x698: Return(); Pop(0)

0x699: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x69a: PushEmpty(bool)
0x69b: Call2 0x1101

0x69c: Pop(0)
0x69d: IF (Stack[-1] == 0) GOTO 0x6a1; Pop(1)

0x69e: @ lshStopAnimation()
0x69f: Pop(0)
0x6a0: GOTO 0x6a3

0x6a1: @ StopAnimation()
0x6a2: Pop(0)
0x6a3: Return(); Pop(0)

0x6a4: GOTO 0x449

0x6a5: Return(); Pop(0)

0x6a6: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x6a7: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x6a8: PushEmpty(bool, object, float)
0x6a9: Stack[-2] = Stack[-12]
0x6aa: Stack[-1] = (float) 70.0
0x6ab: Call2 0xf80

0x6ac: Pop(2)
0x6ad: Pop(1); Push((bool) Stack[-1] == 0)
0x6ae: IF (Stack[-1] == 0) GOTO 0x6b1; Pop(1)

0x6af: Stack[-10] = (int) -2
0x6b0: Return(); Pop(8)

0x6b1: @ CreateDialog(Stack[-4])
0x6b2: Pop(0)
0x6b3: PushEmpty(int)
0x6b4: Call2 0x10fb

0x6b5: Pop(0)
0x6b6: @@ SetNPCName(Stack[-1])
0x6b7: Pop(1)
0x6b8: PushEmpty(int)
0x6b9: Call2 0x10f9

0x6ba: Pop(0)
0x6bb: @@ SetNPCDescription(Stack[-1])
0x6bc: Pop(1)
0x6bd: PushEmpty(string)
0x6be: Call2 0x10fd

0x6bf: Pop(0)
0x6c0: @@ SetPhoto(Stack[-1])
0x6c1: Pop(1)
0x6c2: PushEmpty(string)
0x6c3: Call2 0x10ff

0x6c4: Pop(0)
0x6c5: @@ SetPhoto2(Stack[-1])
0x6c6: Pop(1)
0x6c7: PushEmpty(int)
0x6c8: Call2 0x138a

0x6c9: Pop(0)
0x6ca: @@ SetPlayerName(Stack[-1])
0x6cb: Pop(1)
0x6cc: Stack[-2] = (int) -1
0x6cd: @ IsOverrideActive(Stack[-3])
0x6ce: Pop(0)
0x6cf: Push(Stack[-3])
0x6d0: IF (Stack[-1] == 0) GOTO 0x6d3; Pop(1)

0x6d1: Stack[-10] = (int) -2
0x6d2: Return(); Pop(8)

0x6d3: @ DoDialog(Stack[-4])
0x6d4: Pop(0)
0x6d5: PushEmpty(bool, object)
0x6d6: PushEmpty(object)
0x6d7: Call2 0x1094

0x6d8: Stack[-2] = Stack[-1]
0x6d9: Pop(1)
0x6da: Call2 0xfd5

0x6db: Pop(2)
0x6dc: PushEmpty(object, object)
0x6dd: Stack[-2] = Stack[-11]
0x6de: Stack[-1] = Stack[-6]
0x6df: Push(-2, 4); TaskCall(9)
0x6e0: Call2 0x6f7

0x6e1: Pop(-2, 4); TaskReturn
0x6e2: Pop(2)
0x6e3: @@ IsDialogEnd(Stack[-1])
0x6e4: Pop(0)
0x6e5: Pop(0); Push((bool) Stack[-1] == 0)
0x6e6: IF (Stack[-1] == 0) GOTO 0x6ec; Pop(1)

0x6e7: @ sync()
0x6e8: Pop(0)
0x6e9: @@ IsDialogEnd(Stack[-1])
0x6ea: Pop(0)
0x6eb: GOTO 0x6e5

0x6ec: PushEmpty(object)
0x6ed: Stack[-1] = Stack[-10]
0x6ee: Call2 0xfc4

0x6ef: Pop(1)
0x6f0: @ StopDialog(Stack[-4])
0x6f1: Pop(0)
0x6f2: @@ GetReturnValue(Stack[-2])
0x6f3: Pop(0)
0x6f4: Stack[-10] = Stack[-2]
0x6f5: Return(); Pop(8)

0x6f6: Stack[-4] = 0
0x6f7: PushEmpty()
0x6f8: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x6f9: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x6fa: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x6fb: Push((int) 1)
0x6fc: IF (Stack[-1] == 0) GOTO 0x736; Pop(1)

0x6fd: PushEmpty(bool, object)
0x6fe: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6ff: Call2 0x1296

0x700: Pop(1)
0x701: IF (Stack[-1] == 0) GOTO 0x71b; Pop(1)

0x702: PushEmpty(object, object)
0x703: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x704: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x705: Call2 0x1137

0x706: Pop(2)
0x707: PushEmpty(string)
0x708: Stack[-1] = "Neutral"
0x709: Call2 0x754

0x70a: Pop(1)
0x70b: Push((int) 519752)
0x70c: @@ SetMessage(Stack[-1])
0x70d: Pop(1)
0x70e: @@ ClearReplies()
0x70f: Pop(0)
0x710: Push((int) 519753)
0x711: Push((int) 20908)
0x712: Push((int) 20907)
0x713: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x714: Pop(3)
0x715: Push((int) 519791)
0x716: Push((int) 20910)
0x717: Push((int) 20951)
0x718: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x719: Pop(3)
0x71a: GOTO 0x736

0x71b: PushEmpty(string)
0x71c: Stack[-1] = "Neutral"
0x71d: Call2 0x754

0x71e: Pop(1)
0x71f: Push((int) 519792)
0x720: @@ SetMessage(Stack[-1])
0x721: Pop(1)
0x722: @@ ClearReplies()
0x723: Pop(0)
0x724: PushEmpty(bool, object)
0x725: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x726: Call2 0x12a2

0x727: Pop(1)
0x728: IF (Stack[-1] == 0) GOTO 0x72e; Pop(1)

0x729: Push((int) 519793)
0x72a: Push((int) 20954)
0x72b: Push((int) 20953)
0x72c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x72d: Pop(3)
0x72e: Push((int) 519810)
0x72f: Push((int) -1)
0x730: Push((int) 20970)
0x731: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x732: Pop(3)
0x733: GOTO 0x736

0x734: Return(); Pop(0)

0x735: GOTO 0x6fb

0x736: PushEmpty(bool)
0x737: Call2 0x1101

0x738: Pop(0)
0x739: IF (Stack[-1] == 0) GOTO 0x745; Pop(1)

0x73a: @ lshWaitForAnimEnd()
0x73b: Pop(0)
0x73c: Push( Stack[3 + Tasks[-1].StackPointer] )
0x73d: IF (Stack[-1] == 0) GOTO 0x73f; Pop(1)

0x73e: GOTO 0x744

0x73f: PushEmpty(string)
0x740: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x741: Call2 0x105f

0x742: Pop(1)
0x743: GOTO 0x73a

0x744: GOTO 0x753

0x745: Push("all")
0x746: Push("idle")
0x747: @ PlayAnimation(Stack[-2], Stack[-1])
0x748: Pop(2)
0x749: @ WaitForAnimEnd()
0x74a: Pop(0)
0x74b: Push( Stack[3 + Tasks[-1].StackPointer] )
0x74c: IF (Stack[-1] == 0) GOTO 0x74e; Pop(1)

0x74d: GOTO 0x753

0x74e: Push("all")
0x74f: Push("idle")
0x750: @ PlayAnimation(Stack[-2], Stack[-1])
0x751: Pop(2)
0x752: GOTO 0x749

0x753: Return(); Pop(0)

0x754: PushEmpty()
0x755: PushEmpty(bool)
0x756: Call2 0x1101

0x757: Pop(0)
0x758: Pop(1); Push((bool) Stack[-1] == 0)
0x759: IF (Stack[-1] == 0) GOTO 0x75b; Pop(1)

0x75a: Return(); Pop(0)

0x75b: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x75c: IF (Stack[-1] == 0) GOTO 0x75e; Pop(1)

0x75d: Return(); Pop(0)

0x75e: PushEmpty(string, bool)
0x75f: Stack[-2] = Stack[-3]
0x760: Push("")
0x761: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x762: IF (Stack[-1] == 0) GOTO 0x765; Pop(1)

0x763: Stack[-1] = (bool) 0
0x764: GOTO 0x766

0x765: Stack[-1] = (bool) 1
0x766: Call2 0x106f

0x767: Pop(2)
0x768: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x769: Return(); Pop(0)

0x76a: PushEmpty()
0x76b: Push((int) 1)
0x76c: IF (Stack[-1] == 0) GOTO 0x992; Pop(1)

0x76d: PushEmpty()
0x76e: Call2 0x108d

0x76f: Pop(0)
0x770: Push((int) 20926)
0x771: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x772: IF (Stack[-1] == 0) GOTO 0x77d; Pop(1)

0x773: PushEmpty(object, object)
0x774: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x775: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x776: Call2 0x1143

0x777: Pop(2)
0x778: PushEmpty(object, object)
0x779: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x77a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x77b: Call2 0x120e

0x77c: Pop(2)
0x77d: Push((int) 28438)
0x77e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x77f: IF (Stack[-1] == 0) GOTO 0x78a; Pop(1)

0x780: PushEmpty(object, object)
0x781: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x782: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x783: Call2 0x1143

0x784: Pop(2)
0x785: PushEmpty(object, object)
0x786: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x787: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x788: Call2 0x120e

0x789: Pop(2)
0x78a: Push((int) 20953)
0x78b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x78c: IF (Stack[-1] == 0) GOTO 0x792; Pop(1)

0x78d: PushEmpty(object, object)
0x78e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x78f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x790: Call2 0x113d

0x791: Pop(2)
0x792: Push((int) 20957)
0x793: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x794: IF (Stack[-1] == 0) GOTO 0x79a; Pop(1)

0x795: PushEmpty(object, object)
0x796: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x797: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x798: Call2 0x11fe

0x799: Pop(2)
0x79a: Push((int) 20906)
0x79b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x79c: IF (Stack[-1] == 0) GOTO 0x7d4; Pop(1)

0x79d: PushEmpty(bool, object)
0x79e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x79f: Call2 0x1296

0x7a0: Pop(1)
0x7a1: IF (Stack[-1] == 0) GOTO 0x7bb; Pop(1)

0x7a2: PushEmpty(object, object)
0x7a3: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x7a4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x7a5: Call2 0x1137

0x7a6: Pop(2)
0x7a7: PushEmpty(string)
0x7a8: Stack[-1] = "Neutral"
0x7a9: Call2 0x754

0x7aa: Pop(1)
0x7ab: Push((int) 519752)
0x7ac: @@ SetMessage(Stack[-1])
0x7ad: Pop(1)
0x7ae: @@ ClearReplies()
0x7af: Pop(0)
0x7b0: Push((int) 519753)
0x7b1: Push((int) 20908)
0x7b2: Push((int) 20907)
0x7b3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7b4: Pop(3)
0x7b5: Push((int) 519791)
0x7b6: Push((int) 20910)
0x7b7: Push((int) 20951)
0x7b8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7b9: Pop(3)
0x7ba: Return(); Pop(0)

0x7bb: PushEmpty(string)
0x7bc: Stack[-1] = "Neutral"
0x7bd: Call2 0x754

0x7be: Pop(1)
0x7bf: Push((int) 519792)
0x7c0: @@ SetMessage(Stack[-1])
0x7c1: Pop(1)
0x7c2: @@ ClearReplies()
0x7c3: Pop(0)
0x7c4: PushEmpty(bool, object)
0x7c5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7c6: Call2 0x12a2

0x7c7: Pop(1)
0x7c8: IF (Stack[-1] == 0) GOTO 0x7ce; Pop(1)

0x7c9: Push((int) 519793)
0x7ca: Push((int) 20954)
0x7cb: Push((int) 20953)
0x7cc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7cd: Pop(3)
0x7ce: Push((int) 519810)
0x7cf: Push((int) -1)
0x7d0: Push((int) 20970)
0x7d1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7d2: Pop(3)
0x7d3: Return(); Pop(0)

0x7d4: Push((int) 20968)
0x7d5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7d6: IF (Stack[-1] == 0) GOTO 0x7d7; Pop(1)

0x7d7: Push((int) 28439)
0x7d8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7d9: IF (Stack[-1] == 0) GOTO 0x7da; Pop(1)

0x7da: Push((int) 28441)
0x7db: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7dc: IF (Stack[-1] == 0) GOTO 0x7f1; Pop(1)

0x7dd: PushEmpty(string)
0x7de: Stack[-1] = "Patronage"
0x7df: Call2 0x754

0x7e0: Pop(1)
0x7e1: Push((int) 527142)
0x7e2: @@ SetMessage(Stack[-1])
0x7e3: Pop(1)
0x7e4: @@ ClearReplies()
0x7e5: Pop(0)
0x7e6: Push((int) 519802)
0x7e7: Push((int) 20963)
0x7e8: Push((int) 20962)
0x7e9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7ea: Pop(3)
0x7eb: Push((int) 519806)
0x7ec: Push((int) -1)
0x7ed: Push((int) 20966)
0x7ee: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7ef: Pop(3)
0x7f0: Return(); Pop(0)

0x7f1: Push((int) 20963)
0x7f2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7f3: IF (Stack[-1] == 0) GOTO 0x808; Pop(1)

0x7f4: PushEmpty(string)
0x7f5: Stack[-1] = "Neutral"
0x7f6: Call2 0x754

0x7f7: Pop(1)
0x7f8: Push((int) 519803)
0x7f9: @@ SetMessage(Stack[-1])
0x7fa: Pop(1)
0x7fb: @@ ClearReplies()
0x7fc: Pop(0)
0x7fd: Push((int) 519804)
0x7fe: Push((int) -1)
0x7ff: Push((int) 20964)
0x800: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x801: Pop(3)
0x802: Push((int) 519805)
0x803: Push((int) -1)
0x804: Push((int) 20965)
0x805: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x806: Pop(3)
0x807: Return(); Pop(0)

0x808: Push((int) 20954)
0x809: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x80a: IF (Stack[-1] == 0) GOTO 0x81a; Pop(1)

0x80b: PushEmpty(string)
0x80c: Stack[-1] = "Neutral"
0x80d: Call2 0x754

0x80e: Pop(1)
0x80f: Push((int) 519794)
0x810: @@ SetMessage(Stack[-1])
0x811: Pop(1)
0x812: @@ ClearReplies()
0x813: Pop(0)
0x814: Push((int) 519795)
0x815: Push((int) 20956)
0x816: Push((int) 20955)
0x817: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x818: Pop(3)
0x819: Return(); Pop(0)

0x81a: Push((int) 20956)
0x81b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x81c: IF (Stack[-1] == 0) GOTO 0x82c; Pop(1)

0x81d: PushEmpty(string)
0x81e: Stack[-1] = "Neutral"
0x81f: Call2 0x754

0x820: Pop(1)
0x821: Push((int) 519796)
0x822: @@ SetMessage(Stack[-1])
0x823: Pop(1)
0x824: @@ ClearReplies()
0x825: Pop(0)
0x826: Push((int) 519797)
0x827: Push((int) -1)
0x828: Push((int) 20957)
0x829: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x82a: Pop(3)
0x82b: Return(); Pop(0)

0x82c: Push((int) 20908)
0x82d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x82e: IF (Stack[-1] == 0) GOTO 0x843; Pop(1)

0x82f: PushEmpty(string)
0x830: Stack[-1] = "Patronage"
0x831: Call2 0x754

0x832: Pop(1)
0x833: Push((int) 519754)
0x834: @@ SetMessage(Stack[-1])
0x835: Pop(1)
0x836: @@ ClearReplies()
0x837: Pop(0)
0x838: Push((int) 519755)
0x839: Push((int) 20910)
0x83a: Push((int) 20909)
0x83b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x83c: Pop(3)
0x83d: Push((int) 519788)
0x83e: Push((int) 20948)
0x83f: Push((int) 20947)
0x840: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x841: Pop(3)
0x842: Return(); Pop(0)

0x843: Push((int) 20948)
0x844: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x845: IF (Stack[-1] == 0) GOTO 0x855; Pop(1)

0x846: PushEmpty(string)
0x847: Stack[-1] = "Anger"
0x848: Call2 0x754

0x849: Pop(1)
0x84a: Push((int) 519789)
0x84b: @@ SetMessage(Stack[-1])
0x84c: Pop(1)
0x84d: @@ ClearReplies()
0x84e: Pop(0)
0x84f: Push((int) 519790)
0x850: Push((int) 20910)
0x851: Push((int) 20949)
0x852: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x853: Pop(3)
0x854: Return(); Pop(0)

0x855: Push((int) 20910)
0x856: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x857: IF (Stack[-1] == 0) GOTO 0x86c; Pop(1)

0x858: PushEmpty(string)
0x859: Stack[-1] = "Neutral"
0x85a: Call2 0x754

0x85b: Pop(1)
0x85c: Push((int) 519756)
0x85d: @@ SetMessage(Stack[-1])
0x85e: Pop(1)
0x85f: @@ ClearReplies()
0x860: Pop(0)
0x861: Push((int) 519757)
0x862: Push((int) 20912)
0x863: Push((int) 20911)
0x864: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x865: Pop(3)
0x866: Push((int) 519783)
0x867: Push((int) 20942)
0x868: Push((int) 20941)
0x869: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x86a: Pop(3)
0x86b: Return(); Pop(0)

0x86c: Push((int) 20942)
0x86d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x86e: IF (Stack[-1] == 0) GOTO 0x87e; Pop(1)

0x86f: PushEmpty(string)
0x870: Stack[-1] = "Neutral"
0x871: Call2 0x754

0x872: Pop(1)
0x873: Push((int) 519784)
0x874: @@ SetMessage(Stack[-1])
0x875: Pop(1)
0x876: @@ ClearReplies()
0x877: Pop(0)
0x878: Push((int) 519785)
0x879: Push((int) 20944)
0x87a: Push((int) 20943)
0x87b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x87c: Pop(3)
0x87d: Return(); Pop(0)

0x87e: Push((int) 20944)
0x87f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x880: IF (Stack[-1] == 0) GOTO 0x890; Pop(1)

0x881: PushEmpty(string)
0x882: Stack[-1] = "Neutral"
0x883: Call2 0x754

0x884: Pop(1)
0x885: Push((int) 519786)
0x886: @@ SetMessage(Stack[-1])
0x887: Pop(1)
0x888: @@ ClearReplies()
0x889: Pop(0)
0x88a: Push((int) 519787)
0x88b: Push((int) 20912)
0x88c: Push((int) 20945)
0x88d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x88e: Pop(3)
0x88f: Return(); Pop(0)

0x890: Push((int) 20912)
0x891: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x892: IF (Stack[-1] == 0) GOTO 0x8a7; Pop(1)

0x893: PushEmpty(string)
0x894: Stack[-1] = "Neutral"
0x895: Call2 0x754

0x896: Pop(1)
0x897: Push((int) 519758)
0x898: @@ SetMessage(Stack[-1])
0x899: Pop(1)
0x89a: @@ ClearReplies()
0x89b: Pop(0)
0x89c: Push((int) 519759)
0x89d: Push((int) 20914)
0x89e: Push((int) 20913)
0x89f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8a0: Pop(3)
0x8a1: Push((int) 519782)
0x8a2: Push((int) 20920)
0x8a3: Push((int) 20939)
0x8a4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8a5: Pop(3)
0x8a6: Return(); Pop(0)

0x8a7: Push((int) 20914)
0x8a8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8a9: IF (Stack[-1] == 0) GOTO 0x8be; Pop(1)

0x8aa: PushEmpty(string)
0x8ab: Stack[-1] = "Neutral"
0x8ac: Call2 0x754

0x8ad: Pop(1)
0x8ae: Push((int) 519760)
0x8af: @@ SetMessage(Stack[-1])
0x8b0: Pop(1)
0x8b1: @@ ClearReplies()
0x8b2: Pop(0)
0x8b3: Push((int) 519761)
0x8b4: Push((int) 20916)
0x8b5: Push((int) 20915)
0x8b6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8b7: Pop(3)
0x8b8: Push((int) 519777)
0x8b9: Push((int) 20934)
0x8ba: Push((int) 20933)
0x8bb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8bc: Pop(3)
0x8bd: Return(); Pop(0)

0x8be: Push((int) 20934)
0x8bf: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8c0: IF (Stack[-1] == 0) GOTO 0x8d0; Pop(1)

0x8c1: PushEmpty(string)
0x8c2: Stack[-1] = "Patronage"
0x8c3: Call2 0x754

0x8c4: Pop(1)
0x8c5: Push((int) 519778)
0x8c6: @@ SetMessage(Stack[-1])
0x8c7: Pop(1)
0x8c8: @@ ClearReplies()
0x8c9: Pop(0)
0x8ca: Push((int) 519779)
0x8cb: Push((int) 20936)
0x8cc: Push((int) 20935)
0x8cd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8ce: Pop(3)
0x8cf: Return(); Pop(0)

0x8d0: Push((int) 20936)
0x8d1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8d2: IF (Stack[-1] == 0) GOTO 0x8e2; Pop(1)

0x8d3: PushEmpty(string)
0x8d4: Stack[-1] = "Neutral"
0x8d5: Call2 0x754

0x8d6: Pop(1)
0x8d7: Push((int) 519780)
0x8d8: @@ SetMessage(Stack[-1])
0x8d9: Pop(1)
0x8da: @@ ClearReplies()
0x8db: Pop(0)
0x8dc: Push((int) 519781)
0x8dd: Push((int) 20916)
0x8de: Push((int) 20937)
0x8df: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8e0: Pop(3)
0x8e1: Return(); Pop(0)

0x8e2: Push((int) 20916)
0x8e3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8e4: IF (Stack[-1] == 0) GOTO 0x8f9; Pop(1)

0x8e5: PushEmpty(string)
0x8e6: Stack[-1] = "Neutral"
0x8e7: Call2 0x754

0x8e8: Pop(1)
0x8e9: Push((int) 519762)
0x8ea: @@ SetMessage(Stack[-1])
0x8eb: Pop(1)
0x8ec: @@ ClearReplies()
0x8ed: Pop(0)
0x8ee: Push((int) 519763)
0x8ef: Push((int) 20918)
0x8f0: Push((int) 20917)
0x8f1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8f2: Pop(3)
0x8f3: Push((int) 519773)
0x8f4: Push((int) 20928)
0x8f5: Push((int) 20927)
0x8f6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8f7: Pop(3)
0x8f8: Return(); Pop(0)

0x8f9: Push((int) 20928)
0x8fa: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8fb: IF (Stack[-1] == 0) GOTO 0x910; Pop(1)

0x8fc: PushEmpty(string)
0x8fd: Stack[-1] = "Patronage"
0x8fe: Call2 0x754

0x8ff: Pop(1)
0x900: Push((int) 519774)
0x901: @@ SetMessage(Stack[-1])
0x902: Pop(1)
0x903: @@ ClearReplies()
0x904: Pop(0)
0x905: Push((int) 519775)
0x906: Push((int) 20920)
0x907: Push((int) 20929)
0x908: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x909: Pop(3)
0x90a: Push((int) 519776)
0x90b: Push((int) 20920)
0x90c: Push((int) 20931)
0x90d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x90e: Pop(3)
0x90f: Return(); Pop(0)

0x910: Push((int) 20918)
0x911: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x912: IF (Stack[-1] == 0) GOTO 0x927; Pop(1)

0x913: PushEmpty(string)
0x914: Stack[-1] = "Repentance"
0x915: Call2 0x754

0x916: Pop(1)
0x917: Push((int) 519764)
0x918: @@ SetMessage(Stack[-1])
0x919: Pop(1)
0x91a: @@ ClearReplies()
0x91b: Pop(0)
0x91c: Push((int) 519765)
0x91d: Push((int) 20920)
0x91e: Push((int) 20919)
0x91f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x920: Pop(3)
0x921: Push((int) 527079)
0x922: Push((int) 28377)
0x923: Push((int) 28376)
0x924: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x925: Pop(3)
0x926: Return(); Pop(0)

0x927: Push((int) 28377)
0x928: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x929: IF (Stack[-1] == 0) GOTO 0x939; Pop(1)

0x92a: PushEmpty(string)
0x92b: Stack[-1] = "Neutral"
0x92c: Call2 0x754

0x92d: Pop(1)
0x92e: Push((int) 527080)
0x92f: @@ SetMessage(Stack[-1])
0x930: Pop(1)
0x931: @@ ClearReplies()
0x932: Pop(0)
0x933: Push((int) 527081)
0x934: Push((int) 20920)
0x935: Push((int) 28378)
0x936: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x937: Pop(3)
0x938: Return(); Pop(0)

0x939: Push((int) 20920)
0x93a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x93b: IF (Stack[-1] == 0) GOTO 0x94b; Pop(1)

0x93c: PushEmpty(string)
0x93d: Stack[-1] = "Neutral"
0x93e: Call2 0x754

0x93f: Pop(1)
0x940: Push((int) 519766)
0x941: @@ SetMessage(Stack[-1])
0x942: Pop(1)
0x943: @@ ClearReplies()
0x944: Pop(0)
0x945: Push((int) 519767)
0x946: Push((int) 20922)
0x947: Push((int) 20921)
0x948: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x949: Pop(3)
0x94a: Return(); Pop(0)

0x94b: Push((int) 20922)
0x94c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x94d: IF (Stack[-1] == 0) GOTO 0x95d; Pop(1)

0x94e: PushEmpty(string)
0x94f: Stack[-1] = "Neutral"
0x950: Call2 0x754

0x951: Pop(1)
0x952: Push((int) 519768)
0x953: @@ SetMessage(Stack[-1])
0x954: Pop(1)
0x955: @@ ClearReplies()
0x956: Pop(0)
0x957: Push((int) 519769)
0x958: Push((int) 20924)
0x959: Push((int) 20923)
0x95a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x95b: Pop(3)
0x95c: Return(); Pop(0)

0x95d: Push((int) 20924)
0x95e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x95f: IF (Stack[-1] == 0) GOTO 0x96f; Pop(1)

0x960: PushEmpty(string)
0x961: Stack[-1] = "Anger"
0x962: Call2 0x754

0x963: Pop(1)
0x964: Push((int) 519770)
0x965: @@ SetMessage(Stack[-1])
0x966: Pop(1)
0x967: @@ ClearReplies()
0x968: Pop(0)
0x969: Push((int) 527082)
0x96a: Push((int) 28381)
0x96b: Push((int) 28380)
0x96c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x96d: Pop(3)
0x96e: Return(); Pop(0)

0x96f: Push((int) 28381)
0x970: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x971: IF (Stack[-1] == 0) GOTO 0x986; Pop(1)

0x972: PushEmpty(string)
0x973: Stack[-1] = "Neutral"
0x974: Call2 0x754

0x975: Pop(1)
0x976: Push((int) 527083)
0x977: @@ SetMessage(Stack[-1])
0x978: Pop(1)
0x979: @@ ClearReplies()
0x97a: Pop(0)
0x97b: Push((int) 519772)
0x97c: Push((int) -1)
0x97d: Push((int) 20926)
0x97e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x97f: Pop(3)
0x980: Push((int) 527139)
0x981: Push((int) -1)
0x982: Push((int) 28438)
0x983: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x984: Pop(3)
0x985: Return(); Pop(0)

0x986: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x987: PushEmpty(bool)
0x988: Call2 0x1101

0x989: Pop(0)
0x98a: IF (Stack[-1] == 0) GOTO 0x98e; Pop(1)

0x98b: @ lshStopAnimation()
0x98c: Pop(0)
0x98d: GOTO 0x990

0x98e: @ StopAnimation()
0x98f: Pop(0)
0x990: Return(); Pop(0)

0x991: GOTO 0x76b

0x992: Return(); Pop(0)

0x993: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x994: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x995: PushEmpty(bool, object, float)
0x996: Stack[-2] = Stack[-12]
0x997: Stack[-1] = (float) 70.0
0x998: Call2 0xf80

0x999: Pop(2)
0x99a: Pop(1); Push((bool) Stack[-1] == 0)
0x99b: IF (Stack[-1] == 0) GOTO 0x99e; Pop(1)

0x99c: Stack[-10] = (int) -2
0x99d: Return(); Pop(8)

0x99e: @ CreateDialog(Stack[-4])
0x99f: Pop(0)
0x9a0: PushEmpty(int)
0x9a1: Call2 0x10fb

0x9a2: Pop(0)
0x9a3: @@ SetNPCName(Stack[-1])
0x9a4: Pop(1)
0x9a5: PushEmpty(int)
0x9a6: Call2 0x10f9

0x9a7: Pop(0)
0x9a8: @@ SetNPCDescription(Stack[-1])
0x9a9: Pop(1)
0x9aa: PushEmpty(string)
0x9ab: Call2 0x10fd

0x9ac: Pop(0)
0x9ad: @@ SetPhoto(Stack[-1])
0x9ae: Pop(1)
0x9af: PushEmpty(string)
0x9b0: Call2 0x10ff

0x9b1: Pop(0)
0x9b2: @@ SetPhoto2(Stack[-1])
0x9b3: Pop(1)
0x9b4: PushEmpty(int)
0x9b5: Call2 0x138a

0x9b6: Pop(0)
0x9b7: @@ SetPlayerName(Stack[-1])
0x9b8: Pop(1)
0x9b9: Stack[-2] = (int) -1
0x9ba: @ IsOverrideActive(Stack[-3])
0x9bb: Pop(0)
0x9bc: Push(Stack[-3])
0x9bd: IF (Stack[-1] == 0) GOTO 0x9c0; Pop(1)

0x9be: Stack[-10] = (int) -2
0x9bf: Return(); Pop(8)

0x9c0: @ DoDialog(Stack[-4])
0x9c1: Pop(0)
0x9c2: PushEmpty(bool, object)
0x9c3: PushEmpty(object)
0x9c4: Call2 0x1094

0x9c5: Stack[-2] = Stack[-1]
0x9c6: Pop(1)
0x9c7: Call2 0xfd5

0x9c8: Pop(2)
0x9c9: PushEmpty(object, object)
0x9ca: Stack[-2] = Stack[-11]
0x9cb: Stack[-1] = Stack[-6]
0x9cc: Push(-2, 4); TaskCall(11)
0x9cd: Call2 0x9e4

0x9ce: Pop(-2, 4); TaskReturn
0x9cf: Pop(2)
0x9d0: @@ IsDialogEnd(Stack[-1])
0x9d1: Pop(0)
0x9d2: Pop(0); Push((bool) Stack[-1] == 0)
0x9d3: IF (Stack[-1] == 0) GOTO 0x9d9; Pop(1)

0x9d4: @ sync()
0x9d5: Pop(0)
0x9d6: @@ IsDialogEnd(Stack[-1])
0x9d7: Pop(0)
0x9d8: GOTO 0x9d2

0x9d9: PushEmpty(object)
0x9da: Stack[-1] = Stack[-10]
0x9db: Call2 0xfc4

0x9dc: Pop(1)
0x9dd: @ StopDialog(Stack[-4])
0x9de: Pop(0)
0x9df: @@ GetReturnValue(Stack[-2])
0x9e0: Pop(0)
0x9e1: Stack[-10] = Stack[-2]
0x9e2: Return(); Pop(8)

0x9e3: Stack[-4] = 0
0x9e4: PushEmpty()
0x9e5: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x9e6: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x9e7: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x9e8: Push((int) 1)
0x9e9: IF (Stack[-1] == 0) GOTO 0xa00; Pop(1)

0x9ea: PushEmpty(string)
0x9eb: Stack[-1] = "Neutral"
0x9ec: Call2 0xa1e

0x9ed: Pop(1)
0x9ee: Push((int) 520698)
0x9ef: @@ SetMessage(Stack[-1])
0x9f0: Pop(1)
0x9f1: @@ ClearReplies()
0x9f2: Pop(0)
0x9f3: Push((int) 520699)
0x9f4: Push((int) 21910)
0x9f5: Push((int) 21909)
0x9f6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9f7: Pop(3)
0x9f8: Push((int) 520705)
0x9f9: Push((int) 21916)
0x9fa: Push((int) 21915)
0x9fb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9fc: Pop(3)
0x9fd: GOTO 0xa00

0x9fe: Return(); Pop(0)

0x9ff: GOTO 0x9e8

0xa00: PushEmpty(bool)
0xa01: Call2 0x1101

0xa02: Pop(0)
0xa03: IF (Stack[-1] == 0) GOTO 0xa0f; Pop(1)

0xa04: @ lshWaitForAnimEnd()
0xa05: Pop(0)
0xa06: Push( Stack[3 + Tasks[-1].StackPointer] )
0xa07: IF (Stack[-1] == 0) GOTO 0xa09; Pop(1)

0xa08: GOTO 0xa0e

0xa09: PushEmpty(string)
0xa0a: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xa0b: Call2 0x105f

0xa0c: Pop(1)
0xa0d: GOTO 0xa04

0xa0e: GOTO 0xa1d

0xa0f: Push("all")
0xa10: Push("idle")
0xa11: @ PlayAnimation(Stack[-2], Stack[-1])
0xa12: Pop(2)
0xa13: @ WaitForAnimEnd()
0xa14: Pop(0)
0xa15: Push( Stack[3 + Tasks[-1].StackPointer] )
0xa16: IF (Stack[-1] == 0) GOTO 0xa18; Pop(1)

0xa17: GOTO 0xa1d

0xa18: Push("all")
0xa19: Push("idle")
0xa1a: @ PlayAnimation(Stack[-2], Stack[-1])
0xa1b: Pop(2)
0xa1c: GOTO 0xa13

0xa1d: Return(); Pop(0)

0xa1e: PushEmpty()
0xa1f: PushEmpty(bool)
0xa20: Call2 0x1101

0xa21: Pop(0)
0xa22: Pop(1); Push((bool) Stack[-1] == 0)
0xa23: IF (Stack[-1] == 0) GOTO 0xa25; Pop(1)

0xa24: Return(); Pop(0)

0xa25: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xa26: IF (Stack[-1] == 0) GOTO 0xa28; Pop(1)

0xa27: Return(); Pop(0)

0xa28: PushEmpty(string, bool)
0xa29: Stack[-2] = Stack[-3]
0xa2a: Push("")
0xa2b: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xa2c: IF (Stack[-1] == 0) GOTO 0xa2f; Pop(1)

0xa2d: Stack[-1] = (bool) 0
0xa2e: GOTO 0xa30

0xa2f: Stack[-1] = (bool) 1
0xa30: Call2 0x106f

0xa31: Pop(2)
0xa32: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xa33: Return(); Pop(0)

0xa34: PushEmpty()
0xa35: Push((int) 1)
0xa36: IF (Stack[-1] == 0) GOTO 0xa98; Pop(1)

0xa37: PushEmpty()
0xa38: Call2 0x108d

0xa39: Pop(0)
0xa3a: Push((int) 21908)
0xa3b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa3c: IF (Stack[-1] == 0) GOTO 0xa51; Pop(1)

0xa3d: PushEmpty(string)
0xa3e: Stack[-1] = "Neutral"
0xa3f: Call2 0xa1e

0xa40: Pop(1)
0xa41: Push((int) 520698)
0xa42: @@ SetMessage(Stack[-1])
0xa43: Pop(1)
0xa44: @@ ClearReplies()
0xa45: Pop(0)
0xa46: Push((int) 520699)
0xa47: Push((int) 21910)
0xa48: Push((int) 21909)
0xa49: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa4a: Pop(3)
0xa4b: Push((int) 520705)
0xa4c: Push((int) 21916)
0xa4d: Push((int) 21915)
0xa4e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa4f: Pop(3)
0xa50: Return(); Pop(0)

0xa51: Push((int) 21916)
0xa52: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa53: IF (Stack[-1] == 0) GOTO 0xa63; Pop(1)

0xa54: PushEmpty(string)
0xa55: Stack[-1] = "Neutral"
0xa56: Call2 0xa1e

0xa57: Pop(1)
0xa58: Push((int) 520706)
0xa59: @@ SetMessage(Stack[-1])
0xa5a: Pop(1)
0xa5b: @@ ClearReplies()
0xa5c: Pop(0)
0xa5d: Push((int) 520707)
0xa5e: Push((int) 21912)
0xa5f: Push((int) 21917)
0xa60: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa61: Pop(3)
0xa62: Return(); Pop(0)

0xa63: Push((int) 21910)
0xa64: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa65: IF (Stack[-1] == 0) GOTO 0xa75; Pop(1)

0xa66: PushEmpty(string)
0xa67: Stack[-1] = "Neutral"
0xa68: Call2 0xa1e

0xa69: Pop(1)
0xa6a: Push((int) 520700)
0xa6b: @@ SetMessage(Stack[-1])
0xa6c: Pop(1)
0xa6d: @@ ClearReplies()
0xa6e: Pop(0)
0xa6f: Push((int) 520701)
0xa70: Push((int) 21912)
0xa71: Push((int) 21911)
0xa72: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa73: Pop(3)
0xa74: Return(); Pop(0)

0xa75: Push((int) 21912)
0xa76: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa77: IF (Stack[-1] == 0) GOTO 0xa8c; Pop(1)

0xa78: PushEmpty(string)
0xa79: Stack[-1] = "Neutral"
0xa7a: Call2 0xa1e

0xa7b: Pop(1)
0xa7c: Push((int) 520702)
0xa7d: @@ SetMessage(Stack[-1])
0xa7e: Pop(1)
0xa7f: @@ ClearReplies()
0xa80: Pop(0)
0xa81: Push((int) 520703)
0xa82: Push((int) -1)
0xa83: Push((int) 21913)
0xa84: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa85: Pop(3)
0xa86: Push((int) 520704)
0xa87: Push((int) -1)
0xa88: Push((int) 21914)
0xa89: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa8a: Pop(3)
0xa8b: Return(); Pop(0)

0xa8c: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xa8d: PushEmpty(bool)
0xa8e: Call2 0x1101

0xa8f: Pop(0)
0xa90: IF (Stack[-1] == 0) GOTO 0xa94; Pop(1)

0xa91: @ lshStopAnimation()
0xa92: Pop(0)
0xa93: GOTO 0xa96

0xa94: @ StopAnimation()
0xa95: Pop(0)
0xa96: Return(); Pop(0)

0xa97: GOTO 0xa35

0xa98: Return(); Pop(0)

0xa99: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0xa9a: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0xa9b: PushEmpty(bool, object, float)
0xa9c: Stack[-2] = Stack[-12]
0xa9d: Stack[-1] = (float) 70.0
0xa9e: Call2 0xf80

0xa9f: Pop(2)
0xaa0: Pop(1); Push((bool) Stack[-1] == 0)
0xaa1: IF (Stack[-1] == 0) GOTO 0xaa4; Pop(1)

0xaa2: Stack[-10] = (int) -2
0xaa3: Return(); Pop(8)

0xaa4: @ CreateDialog(Stack[-4])
0xaa5: Pop(0)
0xaa6: PushEmpty(int)
0xaa7: Call2 0x10fb

0xaa8: Pop(0)
0xaa9: @@ SetNPCName(Stack[-1])
0xaaa: Pop(1)
0xaab: PushEmpty(int)
0xaac: Call2 0x10f9

0xaad: Pop(0)
0xaae: @@ SetNPCDescription(Stack[-1])
0xaaf: Pop(1)
0xab0: PushEmpty(string)
0xab1: Call2 0x10fd

0xab2: Pop(0)
0xab3: @@ SetPhoto(Stack[-1])
0xab4: Pop(1)
0xab5: PushEmpty(string)
0xab6: Call2 0x10ff

0xab7: Pop(0)
0xab8: @@ SetPhoto2(Stack[-1])
0xab9: Pop(1)
0xaba: PushEmpty(int)
0xabb: Call2 0x138a

0xabc: Pop(0)
0xabd: @@ SetPlayerName(Stack[-1])
0xabe: Pop(1)
0xabf: Stack[-2] = (int) -1
0xac0: @ IsOverrideActive(Stack[-3])
0xac1: Pop(0)
0xac2: Push(Stack[-3])
0xac3: IF (Stack[-1] == 0) GOTO 0xac6; Pop(1)

0xac4: Stack[-10] = (int) -2
0xac5: Return(); Pop(8)

0xac6: @ DoDialog(Stack[-4])
0xac7: Pop(0)
0xac8: PushEmpty(bool, object)
0xac9: PushEmpty(object)
0xaca: Call2 0x1094

0xacb: Stack[-2] = Stack[-1]
0xacc: Pop(1)
0xacd: Call2 0xfd5

0xace: Pop(2)
0xacf: PushEmpty(object, object)
0xad0: Stack[-2] = Stack[-11]
0xad1: Stack[-1] = Stack[-6]
0xad2: Push(-2, 4); TaskCall(13)
0xad3: Call2 0xaea

0xad4: Pop(-2, 4); TaskReturn
0xad5: Pop(2)
0xad6: @@ IsDialogEnd(Stack[-1])
0xad7: Pop(0)
0xad8: Pop(0); Push((bool) Stack[-1] == 0)
0xad9: IF (Stack[-1] == 0) GOTO 0xadf; Pop(1)

0xada: @ sync()
0xadb: Pop(0)
0xadc: @@ IsDialogEnd(Stack[-1])
0xadd: Pop(0)
0xade: GOTO 0xad8

0xadf: PushEmpty(object)
0xae0: Stack[-1] = Stack[-10]
0xae1: Call2 0xfc4

0xae2: Pop(1)
0xae3: @ StopDialog(Stack[-4])
0xae4: Pop(0)
0xae5: @@ GetReturnValue(Stack[-2])
0xae6: Pop(0)
0xae7: Stack[-10] = Stack[-2]
0xae8: Return(); Pop(8)

0xae9: Stack[-4] = 0
0xaea: PushEmpty()
0xaeb: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0xaec: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0xaed: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0xaee: Push((int) 1)
0xaef: IF (Stack[-1] == 0) GOTO 0xb70; Pop(1)

0xaf0: PushEmpty(bool, object)
0xaf1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xaf2: Call2 0x122a

0xaf3: Pop(1)
0xaf4: IF (Stack[-1] == 0) GOTO 0xb13; Pop(1)

0xaf5: PushEmpty(object, object)
0xaf6: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xaf7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xaf8: Call2 0x11b2

0xaf9: Pop(2)
0xafa: PushEmpty(string)
0xafb: Stack[-1] = "Neutral"
0xafc: Call2 0xb8e

0xafd: Pop(1)
0xafe: Push((int) 522082)
0xaff: @@ SetMessage(Stack[-1])
0xb00: Pop(1)
0xb01: @@ ClearReplies()
0xb02: Pop(0)
0xb03: Push((int) 523463)
0xb04: Push((int) 24690)
0xb05: Push((int) 24689)
0xb06: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb07: Pop(3)
0xb08: Push((int) 523518)
0xb09: Push((int) 24749)
0xb0a: Push((int) 24748)
0xb0b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb0c: Pop(3)
0xb0d: Push((int) 523517)
0xb0e: Push((int) 24750)
0xb0f: Push((int) 24747)
0xb10: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb11: Pop(3)
0xb12: GOTO 0xb70

0xb13: PushEmpty(string)
0xb14: Stack[-1] = "Neutral"
0xb15: Call2 0xb8e

0xb16: Pop(1)
0xb17: Push((int) 522085)
0xb18: @@ SetMessage(Stack[-1])
0xb19: Pop(1)
0xb1a: @@ ClearReplies()
0xb1b: Pop(0)
0xb1c: PushEmpty(bool)
0xb1d: Stack[-1] = (bool) 0
0xb1e: PushEmpty(bool, object)
0xb1f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb20: Call2 0x1236

0xb21: Pop(1)
0xb22: IF (Stack[-1] == 0) GOTO 0xb29; Pop(1)

0xb23: PushEmpty(bool, object)
0xb24: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb25: Call2 0x1242

0xb26: Pop(1)
0xb27: IF (Stack[-1] == 0) GOTO 0xb29; Pop(1)

0xb28: Stack[-1] = (bool) 1
0xb29: IF (Stack[-1] == 0) GOTO 0xb2f; Pop(1)

0xb2a: Push((int) 523467)
0xb2b: Push((int) 24695)
0xb2c: Push((int) 24693)
0xb2d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb2e: Pop(3)
0xb2f: PushEmpty(bool)
0xb30: Stack[-1] = (bool) 0
0xb31: PushEmpty(bool, object)
0xb32: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb33: Call2 0x1236

0xb34: Pop(1)
0xb35: IF (Stack[-1] == 0) GOTO 0xb3c; Pop(1)

0xb36: PushEmpty(bool, object)
0xb37: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb38: Call2 0x124e

0xb39: Pop(1)
0xb3a: IF (Stack[-1] == 0) GOTO 0xb3c; Pop(1)

0xb3b: Stack[-1] = (bool) 1
0xb3c: IF (Stack[-1] == 0) GOTO 0xb42; Pop(1)

0xb3d: Push((int) 523468)
0xb3e: Push((int) 24699)
0xb3f: Push((int) 24694)
0xb40: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb41: Pop(3)
0xb42: PushEmpty(bool)
0xb43: Stack[-1] = (bool) 0
0xb44: PushEmpty(bool, object)
0xb45: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb46: Call2 0x1236

0xb47: Pop(1)
0xb48: IF (Stack[-1] == 0) GOTO 0xb4f; Pop(1)

0xb49: PushEmpty(bool, object)
0xb4a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb4b: Call2 0x125a

0xb4c: Pop(1)
0xb4d: IF (Stack[-1] == 0) GOTO 0xb4f; Pop(1)

0xb4e: Stack[-1] = (bool) 1
0xb4f: IF (Stack[-1] == 0) GOTO 0xb55; Pop(1)

0xb50: Push((int) 523479)
0xb51: Push((int) 24706)
0xb52: Push((int) 24705)
0xb53: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb54: Pop(3)
0xb55: PushEmpty(bool)
0xb56: Stack[-1] = (bool) 0
0xb57: PushEmpty(bool, object)
0xb58: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb59: Call2 0x1236

0xb5a: Pop(1)
0xb5b: IF (Stack[-1] == 0) GOTO 0xb62; Pop(1)

0xb5c: PushEmpty(bool, object)
0xb5d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb5e: Call2 0x1266

0xb5f: Pop(1)
0xb60: IF (Stack[-1] == 0) GOTO 0xb62; Pop(1)

0xb61: Stack[-1] = (bool) 1
0xb62: IF (Stack[-1] == 0) GOTO 0xb68; Pop(1)

0xb63: Push((int) 523508)
0xb64: Push((int) 24739)
0xb65: Push((int) 24738)
0xb66: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb67: Pop(3)
0xb68: Push((int) 522086)
0xb69: Push((int) -1)
0xb6a: Push((int) 23255)
0xb6b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb6c: Pop(3)
0xb6d: GOTO 0xb70

0xb6e: Return(); Pop(0)

0xb6f: GOTO 0xaee

0xb70: PushEmpty(bool)
0xb71: Call2 0x1101

0xb72: Pop(0)
0xb73: IF (Stack[-1] == 0) GOTO 0xb7f; Pop(1)

0xb74: @ lshWaitForAnimEnd()
0xb75: Pop(0)
0xb76: Push( Stack[3 + Tasks[-1].StackPointer] )
0xb77: IF (Stack[-1] == 0) GOTO 0xb79; Pop(1)

0xb78: GOTO 0xb7e

0xb79: PushEmpty(string)
0xb7a: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xb7b: Call2 0x105f

0xb7c: Pop(1)
0xb7d: GOTO 0xb74

0xb7e: GOTO 0xb8d

0xb7f: Push("all")
0xb80: Push("idle")
0xb81: @ PlayAnimation(Stack[-2], Stack[-1])
0xb82: Pop(2)
0xb83: @ WaitForAnimEnd()
0xb84: Pop(0)
0xb85: Push( Stack[3 + Tasks[-1].StackPointer] )
0xb86: IF (Stack[-1] == 0) GOTO 0xb88; Pop(1)

0xb87: GOTO 0xb8d

0xb88: Push("all")
0xb89: Push("idle")
0xb8a: @ PlayAnimation(Stack[-2], Stack[-1])
0xb8b: Pop(2)
0xb8c: GOTO 0xb83

0xb8d: Return(); Pop(0)

0xb8e: PushEmpty()
0xb8f: PushEmpty(bool)
0xb90: Call2 0x1101

0xb91: Pop(0)
0xb92: Pop(1); Push((bool) Stack[-1] == 0)
0xb93: IF (Stack[-1] == 0) GOTO 0xb95; Pop(1)

0xb94: Return(); Pop(0)

0xb95: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xb96: IF (Stack[-1] == 0) GOTO 0xb98; Pop(1)

0xb97: Return(); Pop(0)

0xb98: PushEmpty(string, bool)
0xb99: Stack[-2] = Stack[-3]
0xb9a: Push("")
0xb9b: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xb9c: IF (Stack[-1] == 0) GOTO 0xb9f; Pop(1)

0xb9d: Stack[-1] = (bool) 0
0xb9e: GOTO 0xba0

0xb9f: Stack[-1] = (bool) 1
0xba0: Call2 0x106f

0xba1: Pop(2)
0xba2: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xba3: Return(); Pop(0)

0xba4: PushEmpty()
0xba5: Push((int) 1)
0xba6: IF (Stack[-1] == 0) GOTO 0xe6e; Pop(1)

0xba7: PushEmpty()
0xba8: Call2 0x108d

0xba9: Pop(0)
0xbaa: Push((int) 23252)
0xbab: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xbac: IF (Stack[-1] == 0) GOTO 0xbb2; Pop(1)

0xbad: PushEmpty(object, object)
0xbae: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xbaf: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xbb0: Call2 0x11a9

0xbb1: Pop(2)
0xbb2: Push((int) 24761)
0xbb3: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xbb4: IF (Stack[-1] == 0) GOTO 0xbba; Pop(1)

0xbb5: PushEmpty(object, object)
0xbb6: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xbb7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xbb8: Call2 0x11a9

0xbb9: Pop(2)
0xbba: Push((int) 24693)
0xbbb: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xbbc: IF (Stack[-1] == 0) GOTO 0xbc2; Pop(1)

0xbbd: PushEmpty(object, object)
0xbbe: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xbbf: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xbc0: Call2 0x11c0

0xbc1: Pop(2)
0xbc2: Push((int) 24694)
0xbc3: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xbc4: IF (Stack[-1] == 0) GOTO 0xbca; Pop(1)

0xbc5: PushEmpty(object, object)
0xbc6: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xbc7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xbc8: Call2 0x11c6

0xbc9: Pop(2)
0xbca: Push((int) 24705)
0xbcb: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xbcc: IF (Stack[-1] == 0) GOTO 0xbd2; Pop(1)

0xbcd: PushEmpty(object, object)
0xbce: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xbcf: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xbd0: Call2 0x11cc

0xbd1: Pop(2)
0xbd2: Push((int) 24714)
0xbd3: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xbd4: IF (Stack[-1] == 0) GOTO 0xbda; Pop(1)

0xbd5: PushEmpty(object, object)
0xbd6: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xbd7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xbd8: Call2 0x11b8

0xbd9: Pop(2)
0xbda: Push((int) 24715)
0xbdb: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xbdc: IF (Stack[-1] == 0) GOTO 0xbe2; Pop(1)

0xbdd: PushEmpty(object, object)
0xbde: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xbdf: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xbe0: Call2 0x11b8

0xbe1: Pop(2)
0xbe2: Push((int) 24738)
0xbe3: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xbe4: IF (Stack[-1] == 0) GOTO 0xbea; Pop(1)

0xbe5: PushEmpty(object, object)
0xbe6: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xbe7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xbe8: Call2 0x11d2

0xbe9: Pop(2)
0xbea: Push((int) 23251)
0xbeb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xbec: IF (Stack[-1] == 0) GOTO 0xc6b; Pop(1)

0xbed: PushEmpty(bool, object)
0xbee: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xbef: Call2 0x122a

0xbf0: Pop(1)
0xbf1: IF (Stack[-1] == 0) GOTO 0xc10; Pop(1)

0xbf2: PushEmpty(object, object)
0xbf3: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xbf4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xbf5: Call2 0x11b2

0xbf6: Pop(2)
0xbf7: PushEmpty(string)
0xbf8: Stack[-1] = "Neutral"
0xbf9: Call2 0xb8e

0xbfa: Pop(1)
0xbfb: Push((int) 522082)
0xbfc: @@ SetMessage(Stack[-1])
0xbfd: Pop(1)
0xbfe: @@ ClearReplies()
0xbff: Pop(0)
0xc00: Push((int) 523463)
0xc01: Push((int) 24690)
0xc02: Push((int) 24689)
0xc03: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc04: Pop(3)
0xc05: Push((int) 523518)
0xc06: Push((int) 24749)
0xc07: Push((int) 24748)
0xc08: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc09: Pop(3)
0xc0a: Push((int) 523517)
0xc0b: Push((int) 24750)
0xc0c: Push((int) 24747)
0xc0d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc0e: Pop(3)
0xc0f: Return(); Pop(0)

0xc10: PushEmpty(string)
0xc11: Stack[-1] = "Neutral"
0xc12: Call2 0xb8e

0xc13: Pop(1)
0xc14: Push((int) 522085)
0xc15: @@ SetMessage(Stack[-1])
0xc16: Pop(1)
0xc17: @@ ClearReplies()
0xc18: Pop(0)
0xc19: PushEmpty(bool)
0xc1a: Stack[-1] = (bool) 0
0xc1b: PushEmpty(bool, object)
0xc1c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xc1d: Call2 0x1236

0xc1e: Pop(1)
0xc1f: IF (Stack[-1] == 0) GOTO 0xc26; Pop(1)

0xc20: PushEmpty(bool, object)
0xc21: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xc22: Call2 0x1242

0xc23: Pop(1)
0xc24: IF (Stack[-1] == 0) GOTO 0xc26; Pop(1)

0xc25: Stack[-1] = (bool) 1
0xc26: IF (Stack[-1] == 0) GOTO 0xc2c; Pop(1)

0xc27: Push((int) 523467)
0xc28: Push((int) 24695)
0xc29: Push((int) 24693)
0xc2a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc2b: Pop(3)
0xc2c: PushEmpty(bool)
0xc2d: Stack[-1] = (bool) 0
0xc2e: PushEmpty(bool, object)
0xc2f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xc30: Call2 0x1236

0xc31: Pop(1)
0xc32: IF (Stack[-1] == 0) GOTO 0xc39; Pop(1)

0xc33: PushEmpty(bool, object)
0xc34: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xc35: Call2 0x124e

0xc36: Pop(1)
0xc37: IF (Stack[-1] == 0) GOTO 0xc39; Pop(1)

0xc38: Stack[-1] = (bool) 1
0xc39: IF (Stack[-1] == 0) GOTO 0xc3f; Pop(1)

0xc3a: Push((int) 523468)
0xc3b: Push((int) 24699)
0xc3c: Push((int) 24694)
0xc3d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc3e: Pop(3)
0xc3f: PushEmpty(bool)
0xc40: Stack[-1] = (bool) 0
0xc41: PushEmpty(bool, object)
0xc42: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xc43: Call2 0x1236

0xc44: Pop(1)
0xc45: IF (Stack[-1] == 0) GOTO 0xc4c; Pop(1)

0xc46: PushEmpty(bool, object)
0xc47: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xc48: Call2 0x125a

0xc49: Pop(1)
0xc4a: IF (Stack[-1] == 0) GOTO 0xc4c; Pop(1)

0xc4b: Stack[-1] = (bool) 1
0xc4c: IF (Stack[-1] == 0) GOTO 0xc52; Pop(1)

0xc4d: Push((int) 523479)
0xc4e: Push((int) 24706)
0xc4f: Push((int) 24705)
0xc50: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc51: Pop(3)
0xc52: PushEmpty(bool)
0xc53: Stack[-1] = (bool) 0
0xc54: PushEmpty(bool, object)
0xc55: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xc56: Call2 0x1236

0xc57: Pop(1)
0xc58: IF (Stack[-1] == 0) GOTO 0xc5f; Pop(1)

0xc59: PushEmpty(bool, object)
0xc5a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xc5b: Call2 0x1266

0xc5c: Pop(1)
0xc5d: IF (Stack[-1] == 0) GOTO 0xc5f; Pop(1)

0xc5e: Stack[-1] = (bool) 1
0xc5f: IF (Stack[-1] == 0) GOTO 0xc65; Pop(1)

0xc60: Push((int) 523508)
0xc61: Push((int) 24739)
0xc62: Push((int) 24738)
0xc63: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc64: Pop(3)
0xc65: Push((int) 522086)
0xc66: Push((int) -1)
0xc67: Push((int) 23255)
0xc68: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc69: Pop(3)
0xc6a: Return(); Pop(0)

0xc6b: Push((int) 24739)
0xc6c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc6d: IF (Stack[-1] == 0) GOTO 0xc82; Pop(1)

0xc6e: PushEmpty(string)
0xc6f: Stack[-1] = "Neutral"
0xc70: Call2 0xb8e

0xc71: Pop(1)
0xc72: Push((int) 523509)
0xc73: @@ SetMessage(Stack[-1])
0xc74: Pop(1)
0xc75: @@ ClearReplies()
0xc76: Pop(0)
0xc77: Push((int) 523510)
0xc78: Push((int) 24742)
0xc79: Push((int) 24740)
0xc7a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc7b: Pop(3)
0xc7c: Push((int) 523511)
0xc7d: Push((int) -1)
0xc7e: Push((int) 24741)
0xc7f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc80: Pop(3)
0xc81: Return(); Pop(0)

0xc82: Push((int) 24742)
0xc83: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc84: IF (Stack[-1] == 0) GOTO 0xc99; Pop(1)

0xc85: PushEmpty(string)
0xc86: Stack[-1] = "Neutral"
0xc87: Call2 0xb8e

0xc88: Pop(1)
0xc89: Push((int) 523512)
0xc8a: @@ SetMessage(Stack[-1])
0xc8b: Pop(1)
0xc8c: @@ ClearReplies()
0xc8d: Pop(0)
0xc8e: Push((int) 523513)
0xc8f: Push((int) -1)
0xc90: Push((int) 24743)
0xc91: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc92: Pop(3)
0xc93: Push((int) 523514)
0xc94: Push((int) 24745)
0xc95: Push((int) 24744)
0xc96: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc97: Pop(3)
0xc98: Return(); Pop(0)

0xc99: Push((int) 24745)
0xc9a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc9b: IF (Stack[-1] == 0) GOTO 0xcab; Pop(1)

0xc9c: PushEmpty(string)
0xc9d: Stack[-1] = "Neutral"
0xc9e: Call2 0xb8e

0xc9f: Pop(1)
0xca0: Push((int) 523515)
0xca1: @@ SetMessage(Stack[-1])
0xca2: Pop(1)
0xca3: @@ ClearReplies()
0xca4: Pop(0)
0xca5: Push((int) 523516)
0xca6: Push((int) -1)
0xca7: Push((int) 24746)
0xca8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xca9: Pop(3)
0xcaa: Return(); Pop(0)

0xcab: Push((int) 24706)
0xcac: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xcad: IF (Stack[-1] == 0) GOTO 0xcc2; Pop(1)

0xcae: PushEmpty(string)
0xcaf: Stack[-1] = "Neutral"
0xcb0: Call2 0xb8e

0xcb1: Pop(1)
0xcb2: Push((int) 523480)
0xcb3: @@ SetMessage(Stack[-1])
0xcb4: Pop(1)
0xcb5: @@ ClearReplies()
0xcb6: Pop(0)
0xcb7: Push((int) 523481)
0xcb8: Push((int) 24709)
0xcb9: Push((int) 24707)
0xcba: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcbb: Pop(3)
0xcbc: Push((int) 523482)
0xcbd: Push((int) 24709)
0xcbe: Push((int) 24708)
0xcbf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcc0: Pop(3)
0xcc1: Return(); Pop(0)

0xcc2: Push((int) 24709)
0xcc3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xcc4: IF (Stack[-1] == 0) GOTO 0xcd9; Pop(1)

0xcc5: PushEmpty(string)
0xcc6: Stack[-1] = "Neutral"
0xcc7: Call2 0xb8e

0xcc8: Pop(1)
0xcc9: Push((int) 523483)
0xcca: @@ SetMessage(Stack[-1])
0xccb: Pop(1)
0xccc: @@ ClearReplies()
0xccd: Pop(0)
0xcce: Push((int) 523484)
0xccf: Push((int) 24713)
0xcd0: Push((int) 24710)
0xcd1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcd2: Pop(3)
0xcd3: Push((int) 523485)
0xcd4: Push((int) 24713)
0xcd5: Push((int) 24711)
0xcd6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcd7: Pop(3)
0xcd8: Return(); Pop(0)

0xcd9: Push((int) 24713)
0xcda: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xcdb: IF (Stack[-1] == 0) GOTO 0xcf0; Pop(1)

0xcdc: PushEmpty(string)
0xcdd: Stack[-1] = "Neutral"
0xcde: Call2 0xb8e

0xcdf: Pop(1)
0xce0: Push((int) 523487)
0xce1: @@ SetMessage(Stack[-1])
0xce2: Pop(1)
0xce3: @@ ClearReplies()
0xce4: Pop(0)
0xce5: Push((int) 523488)
0xce6: Push((int) -1)
0xce7: Push((int) 24714)
0xce8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xce9: Pop(3)
0xcea: Push((int) 523489)
0xceb: Push((int) -1)
0xcec: Push((int) 24715)
0xced: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcee: Pop(3)
0xcef: Return(); Pop(0)

0xcf0: Push((int) 24699)
0xcf1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xcf2: IF (Stack[-1] == 0) GOTO 0xd02; Pop(1)

0xcf3: PushEmpty(string)
0xcf4: Stack[-1] = "Neutral"
0xcf5: Call2 0xb8e

0xcf6: Pop(1)
0xcf7: Push((int) 523473)
0xcf8: @@ SetMessage(Stack[-1])
0xcf9: Pop(1)
0xcfa: @@ ClearReplies()
0xcfb: Pop(0)
0xcfc: Push((int) 523474)
0xcfd: Push((int) 24701)
0xcfe: Push((int) 24700)
0xcff: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd00: Pop(3)
0xd01: Return(); Pop(0)

0xd02: Push((int) 24701)
0xd03: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd04: IF (Stack[-1] == 0) GOTO 0xd14; Pop(1)

0xd05: PushEmpty(string)
0xd06: Stack[-1] = "Patronage"
0xd07: Call2 0xb8e

0xd08: Pop(1)
0xd09: Push((int) 523475)
0xd0a: @@ SetMessage(Stack[-1])
0xd0b: Pop(1)
0xd0c: @@ ClearReplies()
0xd0d: Pop(0)
0xd0e: Push((int) 523476)
0xd0f: Push((int) 24703)
0xd10: Push((int) 24702)
0xd11: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd12: Pop(3)
0xd13: Return(); Pop(0)

0xd14: Push((int) 24703)
0xd15: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd16: IF (Stack[-1] == 0) GOTO 0xd2b; Pop(1)

0xd17: PushEmpty(string)
0xd18: Stack[-1] = "Neutral"
0xd19: Call2 0xb8e

0xd1a: Pop(1)
0xd1b: Push((int) 523477)
0xd1c: @@ SetMessage(Stack[-1])
0xd1d: Pop(1)
0xd1e: @@ ClearReplies()
0xd1f: Pop(0)
0xd20: Push((int) 523490)
0xd21: Push((int) 24720)
0xd22: Push((int) 24718)
0xd23: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd24: Pop(3)
0xd25: Push((int) 523491)
0xd26: Push((int) -1)
0xd27: Push((int) 24719)
0xd28: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd29: Pop(3)
0xd2a: Return(); Pop(0)

0xd2b: Push((int) 24720)
0xd2c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd2d: IF (Stack[-1] == 0) GOTO 0xd3d; Pop(1)

0xd2e: PushEmpty(string)
0xd2f: Stack[-1] = "Neutral"
0xd30: Call2 0xb8e

0xd31: Pop(1)
0xd32: Push((int) 523492)
0xd33: @@ SetMessage(Stack[-1])
0xd34: Pop(1)
0xd35: @@ ClearReplies()
0xd36: Pop(0)
0xd37: Push((int) 523493)
0xd38: Push((int) -1)
0xd39: Push((int) 24721)
0xd3a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd3b: Pop(3)
0xd3c: Return(); Pop(0)

0xd3d: Push((int) 24695)
0xd3e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd3f: IF (Stack[-1] == 0) GOTO 0xd4f; Pop(1)

0xd40: PushEmpty(string)
0xd41: Stack[-1] = "Neutral"
0xd42: Call2 0xb8e

0xd43: Pop(1)
0xd44: Push((int) 523469)
0xd45: @@ SetMessage(Stack[-1])
0xd46: Pop(1)
0xd47: @@ ClearReplies()
0xd48: Pop(0)
0xd49: Push((int) 523470)
0xd4a: Push((int) 24697)
0xd4b: Push((int) 24696)
0xd4c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd4d: Pop(3)
0xd4e: Return(); Pop(0)

0xd4f: Push((int) 24697)
0xd50: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd51: IF (Stack[-1] == 0) GOTO 0xd61; Pop(1)

0xd52: PushEmpty(string)
0xd53: Stack[-1] = "Repentance"
0xd54: Call2 0xb8e

0xd55: Pop(1)
0xd56: Push((int) 523471)
0xd57: @@ SetMessage(Stack[-1])
0xd58: Pop(1)
0xd59: @@ ClearReplies()
0xd5a: Pop(0)
0xd5b: Push((int) 523472)
0xd5c: Push((int) 24704)
0xd5d: Push((int) 24698)
0xd5e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd5f: Pop(3)
0xd60: Return(); Pop(0)

0xd61: Push((int) 24704)
0xd62: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd63: IF (Stack[-1] == 0) GOTO 0xd78; Pop(1)

0xd64: PushEmpty(string)
0xd65: Stack[-1] = "Neutral"
0xd66: Call2 0xb8e

0xd67: Pop(1)
0xd68: Push((int) 523478)
0xd69: @@ SetMessage(Stack[-1])
0xd6a: Pop(1)
0xd6b: @@ ClearReplies()
0xd6c: Pop(0)
0xd6d: Push((int) 523494)
0xd6e: Push((int) 24723)
0xd6f: Push((int) 24722)
0xd70: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd71: Pop(3)
0xd72: Push((int) 523501)
0xd73: Push((int) 24730)
0xd74: Push((int) 24729)
0xd75: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd76: Pop(3)
0xd77: Return(); Pop(0)

0xd78: Push((int) 24730)
0xd79: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd7a: IF (Stack[-1] == 0) GOTO 0xd8a; Pop(1)

0xd7b: PushEmpty(string)
0xd7c: Stack[-1] = "Neutral"
0xd7d: Call2 0xb8e

0xd7e: Pop(1)
0xd7f: Push((int) 523502)
0xd80: @@ SetMessage(Stack[-1])
0xd81: Pop(1)
0xd82: @@ ClearReplies()
0xd83: Pop(0)
0xd84: Push((int) 523503)
0xd85: Push((int) 24723)
0xd86: Push((int) 24731)
0xd87: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd88: Pop(3)
0xd89: Return(); Pop(0)

0xd8a: Push((int) 24723)
0xd8b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd8c: IF (Stack[-1] == 0) GOTO 0xda1; Pop(1)

0xd8d: PushEmpty(string)
0xd8e: Stack[-1] = "Anger"
0xd8f: Call2 0xb8e

0xd90: Pop(1)
0xd91: Push((int) 523495)
0xd92: @@ SetMessage(Stack[-1])
0xd93: Pop(1)
0xd94: @@ ClearReplies()
0xd95: Pop(0)
0xd96: Push((int) 523499)
0xd97: Push((int) 24728)
0xd98: Push((int) 24727)
0xd99: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd9a: Pop(3)
0xd9b: Push((int) 523496)
0xd9c: Push((int) 24725)
0xd9d: Push((int) 24724)
0xd9e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd9f: Pop(3)
0xda0: Return(); Pop(0)

0xda1: Push((int) 24725)
0xda2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xda3: IF (Stack[-1] == 0) GOTO 0xdb3; Pop(1)

0xda4: PushEmpty(string)
0xda5: Stack[-1] = "Repentance"
0xda6: Call2 0xb8e

0xda7: Pop(1)
0xda8: Push((int) 523497)
0xda9: @@ SetMessage(Stack[-1])
0xdaa: Pop(1)
0xdab: @@ ClearReplies()
0xdac: Pop(0)
0xdad: Push((int) 523498)
0xdae: Push((int) 24728)
0xdaf: Push((int) 24726)
0xdb0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdb1: Pop(3)
0xdb2: Return(); Pop(0)

0xdb3: Push((int) 24728)
0xdb4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xdb5: IF (Stack[-1] == 0) GOTO 0xdc5; Pop(1)

0xdb6: PushEmpty(string)
0xdb7: Stack[-1] = "Neutral"
0xdb8: Call2 0xb8e

0xdb9: Pop(1)
0xdba: Push((int) 523500)
0xdbb: @@ SetMessage(Stack[-1])
0xdbc: Pop(1)
0xdbd: @@ ClearReplies()
0xdbe: Pop(0)
0xdbf: Push((int) 523504)
0xdc0: Push((int) 24735)
0xdc1: Push((int) 24734)
0xdc2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdc3: Pop(3)
0xdc4: Return(); Pop(0)

0xdc5: Push((int) 24735)
0xdc6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xdc7: IF (Stack[-1] == 0) GOTO 0xddc; Pop(1)

0xdc8: PushEmpty(string)
0xdc9: Stack[-1] = "Neutral"
0xdca: Call2 0xb8e

0xdcb: Pop(1)
0xdcc: Push((int) 523505)
0xdcd: @@ SetMessage(Stack[-1])
0xdce: Pop(1)
0xdcf: @@ ClearReplies()
0xdd0: Pop(0)
0xdd1: Push((int) 523506)
0xdd2: Push((int) -1)
0xdd3: Push((int) 24736)
0xdd4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdd5: Pop(3)
0xdd6: Push((int) 523507)
0xdd7: Push((int) -1)
0xdd8: Push((int) 24737)
0xdd9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdda: Pop(3)
0xddb: Return(); Pop(0)

0xddc: Push((int) 24750)
0xddd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xdde: IF (Stack[-1] == 0) GOTO 0xdf3; Pop(1)

0xddf: PushEmpty(string)
0xde0: Stack[-1] = "Neutral"
0xde1: Call2 0xb8e

0xde2: Pop(1)
0xde3: Push((int) 523520)
0xde4: @@ SetMessage(Stack[-1])
0xde5: Pop(1)
0xde6: @@ ClearReplies()
0xde7: Pop(0)
0xde8: Push((int) 523521)
0xde9: Push((int) 24752)
0xdea: Push((int) 24751)
0xdeb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdec: Pop(3)
0xded: Push((int) 523527)
0xdee: Push((int) 24690)
0xdef: Push((int) 24759)
0xdf0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdf1: Pop(3)
0xdf2: Return(); Pop(0)

0xdf3: Push((int) 24752)
0xdf4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xdf5: IF (Stack[-1] == 0) GOTO 0xe05; Pop(1)

0xdf6: PushEmpty(string)
0xdf7: Stack[-1] = "Neutral"
0xdf8: Call2 0xb8e

0xdf9: Pop(1)
0xdfa: Push((int) 523522)
0xdfb: @@ SetMessage(Stack[-1])
0xdfc: Pop(1)
0xdfd: @@ ClearReplies()
0xdfe: Pop(0)
0xdff: Push((int) 523523)
0xe00: Push((int) 24754)
0xe01: Push((int) 24753)
0xe02: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe03: Pop(3)
0xe04: Return(); Pop(0)

0xe05: Push((int) 24754)
0xe06: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe07: IF (Stack[-1] == 0) GOTO 0xe17; Pop(1)

0xe08: PushEmpty(string)
0xe09: Stack[-1] = "Neutral"
0xe0a: Call2 0xb8e

0xe0b: Pop(1)
0xe0c: Push((int) 523524)
0xe0d: @@ SetMessage(Stack[-1])
0xe0e: Pop(1)
0xe0f: @@ ClearReplies()
0xe10: Pop(0)
0xe11: Push((int) 523525)
0xe12: Push((int) 24690)
0xe13: Push((int) 24755)
0xe14: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe15: Pop(3)
0xe16: Return(); Pop(0)

0xe17: Push((int) 24749)
0xe18: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe19: IF (Stack[-1] == 0) GOTO 0xe29; Pop(1)

0xe1a: PushEmpty(string)
0xe1b: Stack[-1] = "Neutral"
0xe1c: Call2 0xb8e

0xe1d: Pop(1)
0xe1e: Push((int) 523519)
0xe1f: @@ SetMessage(Stack[-1])
0xe20: Pop(1)
0xe21: @@ ClearReplies()
0xe22: Pop(0)
0xe23: Push((int) 523526)
0xe24: Push((int) 24750)
0xe25: Push((int) 24757)
0xe26: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe27: Pop(3)
0xe28: Return(); Pop(0)

0xe29: Push((int) 24690)
0xe2a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe2b: IF (Stack[-1] == 0) GOTO 0xe4b; Pop(1)

0xe2c: PushEmpty(string)
0xe2d: Stack[-1] = "Neutral"
0xe2e: Call2 0xb8e

0xe2f: Pop(1)
0xe30: Push((int) 523464)
0xe31: @@ SetMessage(Stack[-1])
0xe32: Pop(1)
0xe33: @@ ClearReplies()
0xe34: Pop(0)
0xe35: PushEmpty(bool, object)
0xe36: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xe37: Call2 0x121e

0xe38: Pop(1)
0xe39: Pop(1); Push((bool) Stack[-1] == 0)
0xe3a: IF (Stack[-1] == 0) GOTO 0xe40; Pop(1)

0xe3b: Push((int) 523465)
0xe3c: Push((int) 24692)
0xe3d: Push((int) 24691)
0xe3e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe3f: Pop(3)
0xe40: PushEmpty(bool, object)
0xe41: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xe42: Call2 0x121e

0xe43: Pop(1)
0xe44: IF (Stack[-1] == 0) GOTO 0xe4a; Pop(1)

0xe45: Push((int) 522084)
0xe46: Push((int) -1)
0xe47: Push((int) 23253)
0xe48: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe49: Pop(3)
0xe4a: Return(); Pop(0)

0xe4b: Push((int) 24692)
0xe4c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe4d: IF (Stack[-1] == 0) GOTO 0xe62; Pop(1)

0xe4e: PushEmpty(string)
0xe4f: Stack[-1] = "Repentance"
0xe50: Call2 0xb8e

0xe51: Pop(1)
0xe52: Push((int) 523466)
0xe53: @@ SetMessage(Stack[-1])
0xe54: Pop(1)
0xe55: @@ ClearReplies()
0xe56: Pop(0)
0xe57: Push((int) 522083)
0xe58: Push((int) -1)
0xe59: Push((int) 23252)
0xe5a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe5b: Pop(3)
0xe5c: Push((int) 523528)
0xe5d: Push((int) -1)
0xe5e: Push((int) 24761)
0xe5f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe60: Pop(3)
0xe61: Return(); Pop(0)

0xe62: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xe63: PushEmpty(bool)
0xe64: Call2 0x1101

0xe65: Pop(0)
0xe66: IF (Stack[-1] == 0) GOTO 0xe6a; Pop(1)

0xe67: @ lshStopAnimation()
0xe68: Pop(0)
0xe69: GOTO 0xe6c

0xe6a: @ StopAnimation()
0xe6b: Pop(0)
0xe6c: Return(); Pop(0)

0xe6d: GOTO 0xba5

0xe6e: Return(); Pop(0)

0xe6f: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0xe70: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0xe71: PushEmpty(bool, object, float)
0xe72: Stack[-2] = Stack[-12]
0xe73: Stack[-1] = (float) 70.0
0xe74: Call2 0xf80

0xe75: Pop(2)
0xe76: Pop(1); Push((bool) Stack[-1] == 0)
0xe77: IF (Stack[-1] == 0) GOTO 0xe7a; Pop(1)

0xe78: Stack[-10] = (int) -2
0xe79: Return(); Pop(8)

0xe7a: @ CreateDialog(Stack[-4])
0xe7b: Pop(0)
0xe7c: PushEmpty(int)
0xe7d: Call2 0x10fb

0xe7e: Pop(0)
0xe7f: @@ SetNPCName(Stack[-1])
0xe80: Pop(1)
0xe81: PushEmpty(int)
0xe82: Call2 0x10f9

0xe83: Pop(0)
0xe84: @@ SetNPCDescription(Stack[-1])
0xe85: Pop(1)
0xe86: PushEmpty(string)
0xe87: Call2 0x10fd

0xe88: Pop(0)
0xe89: @@ SetPhoto(Stack[-1])
0xe8a: Pop(1)
0xe8b: PushEmpty(string)
0xe8c: Call2 0x10ff

0xe8d: Pop(0)
0xe8e: @@ SetPhoto2(Stack[-1])
0xe8f: Pop(1)
0xe90: PushEmpty(int)
0xe91: Call2 0x138a

0xe92: Pop(0)
0xe93: @@ SetPlayerName(Stack[-1])
0xe94: Pop(1)
0xe95: Stack[-2] = (int) -1
0xe96: @ IsOverrideActive(Stack[-3])
0xe97: Pop(0)
0xe98: Push(Stack[-3])
0xe99: IF (Stack[-1] == 0) GOTO 0xe9c; Pop(1)

0xe9a: Stack[-10] = (int) -2
0xe9b: Return(); Pop(8)

0xe9c: @ DoDialog(Stack[-4])
0xe9d: Pop(0)
0xe9e: PushEmpty(bool, object)
0xe9f: PushEmpty(object)
0xea0: Call2 0x1094

0xea1: Stack[-2] = Stack[-1]
0xea2: Pop(1)
0xea3: Call2 0xfd5

0xea4: Pop(2)
0xea5: PushEmpty(object, object)
0xea6: Stack[-2] = Stack[-11]
0xea7: Stack[-1] = Stack[-6]
0xea8: Push(-2, 4); TaskCall(15)
0xea9: Call2 0xec0

0xeaa: Pop(-2, 4); TaskReturn
0xeab: Pop(2)
0xeac: @@ IsDialogEnd(Stack[-1])
0xead: Pop(0)
0xeae: Pop(0); Push((bool) Stack[-1] == 0)
0xeaf: IF (Stack[-1] == 0) GOTO 0xeb5; Pop(1)

0xeb0: @ sync()
0xeb1: Pop(0)
0xeb2: @@ IsDialogEnd(Stack[-1])
0xeb3: Pop(0)
0xeb4: GOTO 0xeae

0xeb5: PushEmpty(object)
0xeb6: Stack[-1] = Stack[-10]
0xeb7: Call2 0xfc4

0xeb8: Pop(1)
0xeb9: @ StopDialog(Stack[-4])
0xeba: Pop(0)
0xebb: @@ GetReturnValue(Stack[-2])
0xebc: Pop(0)
0xebd: Stack[-10] = Stack[-2]
0xebe: Return(); Pop(8)

0xebf: Stack[-4] = 0
0xec0: PushEmpty()
0xec1: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0xec2: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0xec3: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0xec4: Push((int) 1)
0xec5: IF (Stack[-1] == 0) GOTO 0xedc; Pop(1)

0xec6: PushEmpty(string)
0xec7: Stack[-1] = "Neutral"
0xec8: Call2 0xefa

0xec9: Pop(1)
0xeca: Push((int) 540554)
0xecb: @@ SetMessage(Stack[-1])
0xecc: Pop(1)
0xecd: @@ ClearReplies()
0xece: Pop(0)
0xecf: Push((int) 540555)
0xed0: Push((int) -1)
0xed1: Push((int) 42564)
0xed2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xed3: Pop(3)
0xed4: Push((int) 540794)
0xed5: Push((int) -1)
0xed6: Push((int) 42843)
0xed7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xed8: Pop(3)
0xed9: GOTO 0xedc

0xeda: Return(); Pop(0)

0xedb: GOTO 0xec4

0xedc: PushEmpty(bool)
0xedd: Call2 0x1101

0xede: Pop(0)
0xedf: IF (Stack[-1] == 0) GOTO 0xeeb; Pop(1)

0xee0: @ lshWaitForAnimEnd()
0xee1: Pop(0)
0xee2: Push( Stack[3 + Tasks[-1].StackPointer] )
0xee3: IF (Stack[-1] == 0) GOTO 0xee5; Pop(1)

0xee4: GOTO 0xeea

0xee5: PushEmpty(string)
0xee6: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xee7: Call2 0x105f

0xee8: Pop(1)
0xee9: GOTO 0xee0

0xeea: GOTO 0xef9

0xeeb: Push("all")
0xeec: Push("idle")
0xeed: @ PlayAnimation(Stack[-2], Stack[-1])
0xeee: Pop(2)
0xeef: @ WaitForAnimEnd()
0xef0: Pop(0)
0xef1: Push( Stack[3 + Tasks[-1].StackPointer] )
0xef2: IF (Stack[-1] == 0) GOTO 0xef4; Pop(1)

0xef3: GOTO 0xef9

0xef4: Push("all")
0xef5: Push("idle")
0xef6: @ PlayAnimation(Stack[-2], Stack[-1])
0xef7: Pop(2)
0xef8: GOTO 0xeef

0xef9: Return(); Pop(0)

0xefa: PushEmpty()
0xefb: PushEmpty(bool)
0xefc: Call2 0x1101

0xefd: Pop(0)
0xefe: Pop(1); Push((bool) Stack[-1] == 0)
0xeff: IF (Stack[-1] == 0) GOTO 0xf01; Pop(1)

0xf00: Return(); Pop(0)

0xf01: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xf02: IF (Stack[-1] == 0) GOTO 0xf04; Pop(1)

0xf03: Return(); Pop(0)

0xf04: PushEmpty(string, bool)
0xf05: Stack[-2] = Stack[-3]
0xf06: Push("")
0xf07: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xf08: IF (Stack[-1] == 0) GOTO 0xf0b; Pop(1)

0xf09: Stack[-1] = (bool) 0
0xf0a: GOTO 0xf0c

0xf0b: Stack[-1] = (bool) 1
0xf0c: Call2 0x106f

0xf0d: Pop(2)
0xf0e: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xf0f: Return(); Pop(0)

0xf10: PushEmpty()
0xf11: Push((int) 1)
0xf12: IF (Stack[-1] == 0) GOTO 0xf39; Pop(1)

0xf13: PushEmpty()
0xf14: Call2 0x108d

0xf15: Pop(0)
0xf16: Push((int) 42563)
0xf17: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf18: IF (Stack[-1] == 0) GOTO 0xf2d; Pop(1)

0xf19: PushEmpty(string)
0xf1a: Stack[-1] = "Neutral"
0xf1b: Call2 0xefa

0xf1c: Pop(1)
0xf1d: Push((int) 540554)
0xf1e: @@ SetMessage(Stack[-1])
0xf1f: Pop(1)
0xf20: @@ ClearReplies()
0xf21: Pop(0)
0xf22: Push((int) 540555)
0xf23: Push((int) -1)
0xf24: Push((int) 42564)
0xf25: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf26: Pop(3)
0xf27: Push((int) 540794)
0xf28: Push((int) -1)
0xf29: Push((int) 42843)
0xf2a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf2b: Pop(3)
0xf2c: Return(); Pop(0)

0xf2d: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xf2e: PushEmpty(bool)
0xf2f: Call2 0x1101

0xf30: Pop(0)
0xf31: IF (Stack[-1] == 0) GOTO 0xf35; Pop(1)

0xf32: @ lshStopAnimation()
0xf33: Pop(0)
0xf34: GOTO 0xf37

0xf35: @ StopAnimation()
0xf36: Pop(0)
0xf37: Return(); Pop(0)

0xf38: GOTO 0xf11

0xf39: Return(); Pop(0)

0xf3a: Push(GlobalVars[1])
0xf3b: Stack[-1] = (bool) 0
0xf3c: GlobalVars[1] = Stack[-1]; Pop(1)
0xf3d: PushEmpty()
0xf3e: Call2 0xf41

0xf3f: Pop(0)
0xf40: Return(); Pop(0)

0xf41: PushEmpty(bool)
0xf42: Call2 0xf7b

0xf43: Pop(0)
0xf44: Pop(1); Push((bool) Stack[-1] == 0)
0xf45: IF (Stack[-1] == 0) GOTO 0xf48; Pop(1)

0xf46: @ Hold()
0xf47: Pop(0)
0xf48: PushEmpty(string)
0xf49: Stack[-1] = "Neutral"
0xf4a: Call2 0x105f

0xf4b: Pop(1)
0xf4c: @ lshWaitForAnimEnd()
0xf4d: Pop(0)
0xf4e: GOTO 0xf48

0xf4f: @ Hold()
0xf50: Pop(0)
0xf51: Return(); Pop(0)

0xf52: @ Hold()
0xf53: Pop(0)
0xf54: Return(); Pop(0)

0xf55: @ StopGroup0()
0xf56: Pop(0)
0xf57: Return(); Pop(0)

0xf58: PushEmpty(bool, bool)
0xf59: @ IsOverrideActive(Stack[-1])
0xf5a: Pop(0)
0xf5b: Pop(0); Push((bool) Stack[-1] == 0)
0xf5c: IF (Stack[-1] == 0) GOTO 0xf67; Pop(1)

0xf5d: EventDisable(0)
0xf5e: PushEmpty(bool, object)
0xf5f: Stack[-1] = Stack[-5]
0xf60: Call2 0xf72

0xf61: Pop(2)
0xf62: EventEnable(0)
0xf63: PushEmpty(object)
0xf64: Stack[-1] = Stack[-4]
0xf65: Call2 0x139b

0xf66: Pop(1)
0xf67: Return(); Pop(2)

0xf68: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0xf69: @ GetPosition(Stack[-3])
0xf6a: Pop(0)
0xf6b: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0xf6c: Push(CvectorIndex(Stack[-2], 0))
0xf6d: Push(CvectorIndex(Stack[-3], 2))
0xf6e: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0xf6f: Pop(2)
0xf70: Stack[-8] = Stack[-1]
0xf71: Return(); Pop(6)

0xf72: PushEmpty(cvector, cvector)
0xf73: @@ GetPosition(Stack[-1])
0xf74: Pop(0)
0xf75: PushEmpty(bool, cvector)
0xf76: Stack[-1] = Stack[-3]
0xf77: Call2 0xf68

0xf78: Stack[-6] = Stack[-2]
0xf79: Pop(2)
0xf7a: Return(); Pop(2)

0xf7b: PushEmpty(bool, bool)
0xf7c: @ IsLoaded(Stack[-1])
0xf7d: Pop(0)
0xf7e: Stack[-3] = Stack[-1]
0xf7f: Return(); Pop(2)

0xf80: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0xf81: @@ GetPosition(Stack[-8])
0xf82: Pop(0)
0xf83: @@ GetEyesHeight(Stack[-9])
0xf84: Pop(0)
0xf85: Push(CvectorIndex(Stack[-8], 1))
0xf86: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0xf87: CvectorIndex(Stack[-9], 1) = Stack[-1];
0xf88: @ GetPosition(Stack[-7])
0xf89: Pop(0)
0xf8a: @ GetEyesHeight(Stack[-9])
0xf8b: Pop(0)
0xf8c: Push(CvectorIndex(Stack[-7], 1))
0xf8d: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0xf8e: CvectorIndex(Stack[-8], 1) = Stack[-1];
0xf8f: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0xf90: Push(CvectorIndex(Stack[-6], 1))
0xf91: Stack[-1] = (int) 0
0xf92: CvectorIndex(Stack[-7], 1) = Stack[-1];
0xf93: Pop(0); Push(Stack[-6] | Stack[-6]);
0xf94: Pop(1); Push(Sqrt(Stack[-1]))
0xf95: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0xf96: Stack[-5] = -Stack[-6]; Pop(0);
0xf97: Pop(0); Push(Stack[-6] * Stack[-19]);
0xf98: PushEmpty(cvector, cvector)
0xf99: Push(CVector(0.0, 1.0, 0.0))
0xf9a: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0xf9b: Call2 0x109a

0xf9c: Pop(1)
0xf9d: Push((int) 25)
0xf9e: Pop(2); Push(Stack[-2] * Stack[-1]);
0xf9f: Pop(2); Push(Stack[-2] + Stack[-1]);
0xfa0: Push(CVector(0.0, 10.0, 0.0))
0xfa1: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0xfa2: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0xfa3: @ IsOverrideActive(Stack[-2])
0xfa4: Pop(0)
0xfa5: Push(Stack[-2])
0xfa6: IF (Stack[-1] == 0) GOTO 0xfa9; Pop(1)

0xfa7: Stack[-21] = (bool) 0
0xfa8: Return(); Pop(18)

0xfa9: @ StopWorld()
0xfaa: Pop(0)
0xfab: @ CameraTransit(Stack[-3], Stack[-5])
0xfac: Pop(0)
0xfad: Push(CvectorIndex(Stack[-4], 0))
0xfae: Push(CvectorIndex(Stack[-5], 2))
0xfaf: @ Rotate(Stack[-2], Stack[-1])
0xfb0: Pop(2)
0xfb1: PushEmpty(bool)
0xfb2: Call2 0x1101

0xfb3: Pop(0)
0xfb4: IF (Stack[-1] == 0) GOTO 0xfb6; Pop(1)

0xfb5: GOTO 0xfbe

0xfb6: Push("head")
0xfb7: @ HasAnimationTrack(Stack[-2], Stack[-1])
0xfb8: Pop(1)
0xfb9: Push(Stack[-1])
0xfba: IF (Stack[-1] == 0) GOTO 0xfbe; Pop(1)

0xfbb: Push("head")
0xfbc: @ LookAsyncCamera(Stack[-1])
0xfbd: Pop(1)
0xfbe: @ CameraWaitForPlayFinish()
0xfbf: Pop(0)
0xfc0: @ ResumeWorld()
0xfc1: Pop(0)
0xfc2: Stack[-21] = (bool) 1
0xfc3: Return(); Pop(18)

0xfc4: PushEmpty(bool, bool)
0xfc5: @ CameraSwitchToNormal()
0xfc6: Pop(0)
0xfc7: PushEmpty(bool)
0xfc8: Call2 0x1101

0xfc9: Pop(0)
0xfca: IF (Stack[-1] == 0) GOTO 0xfcc; Pop(1)

0xfcb: GOTO 0xfd4

0xfcc: Push("head")
0xfcd: @ HasAnimationTrack(Stack[-2], Stack[-1])
0xfce: Pop(1)
0xfcf: Push(Stack[-1])
0xfd0: IF (Stack[-1] == 0) GOTO 0xfd4; Pop(1)

0xfd1: Push("head")
0xfd2: @ UnlookAsync(Stack[-1])
0xfd3: Pop(1)
0xfd4: Return(); Pop(2)

0xfd5: PushEmpty(int, int, int, int)
0xfd6: Push("voice_common")
0xfd7: @ GetVariable(Stack[-1], Stack[-3])
0xfd8: Pop(1)
0xfd9: Push(Stack[-2])
0xfda: IF (Stack[-1] == 0) GOTO 0xffb; Pop(1)

0xfdb: PushEmpty(bool, object)
0xfdc: Stack[-1] = Stack[-7]
0xfdd: Call2 0x100f

0xfde: Pop(1)
0xfdf: Pop(1); Push((bool) Stack[-1] == 0)
0xfe0: IF (Stack[-1] == 0) GOTO 0xfe9; Pop(1)

0xfe1: PushEmpty(bool, object)
0xfe2: Stack[-1] = Stack[-7]
0xfe3: Call2 0x1034

0xfe4: Pop(1)
0xfe5: Pop(1); Push((bool) Stack[-1] == 0)
0xfe6: IF (Stack[-1] == 0) GOTO 0xfe9; Pop(1)

0xfe7: Stack[-6] = (bool) 0
0xfe8: Return(); Pop(4)

0xfe9: Push((int) 2)
0xfea: @ irand(Stack[-2], Stack[-1])
0xfeb: Pop(1)
0xfec: Push(Stack[-1])
0xfed: IF (Stack[-1] == 0) GOTO 0xff6; Pop(1)

0xfee: Push("voice_common")
0xfef: Push((int) 1)
0xff0: Pop(1); Push(Stack[-4] + Stack[-1]);
0xff1: Push((int) 3)
0xff2: Pop(2); Push(Stack[-2] % Stack[-1]);
0xff3: @ SetVariable(Stack[-2], Stack[-1])
0xff4: Pop(2)
0xff5: GOTO 0xffa

0xff6: Push("voice_common")
0xff7: Push((int) 0)
0xff8: @ SetVariable(Stack[-2], Stack[-1])
0xff9: Pop(2)
0xffa: GOTO 0x100d

0xffb: PushEmpty(bool, object)
0xffc: Stack[-1] = Stack[-7]
0xffd: Call2 0x1034

0xffe: Pop(1)
0xfff: Pop(1); Push((bool) Stack[-1] == 0)
0x1000: IF (Stack[-1] == 0) GOTO 0x1009; Pop(1)

0x1001: PushEmpty(bool, object)
0x1002: Stack[-1] = Stack[-7]
0x1003: Call2 0x100f

0x1004: Pop(1)
0x1005: Pop(1); Push((bool) Stack[-1] == 0)
0x1006: IF (Stack[-1] == 0) GOTO 0x1009; Pop(1)

0x1007: Stack[-6] = (bool) 0
0x1008: Return(); Pop(4)

0x1009: Push("voice_common")
0x100a: Push((int) 1)
0x100b: @ SetVariable(Stack[-2], Stack[-1])
0x100c: Pop(2)
0x100d: Stack[-6] = (bool) 1
0x100e: Return(); Pop(4)

0x100f: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x1010: Stack[-5] = "c"
0x1011: Stack[-4] = (int) 0
0x1012: Push((int) 1)
0x1013: IF (Stack[-1] == 0) GOTO 0x101f; Pop(1)

0x1014: Push((int) 1)
0x1015: Pop(1); Push(Stack[-5] + Stack[-1]);
0x1016: Pop(1); Push(Stack[-6] + Stack[-1]);
0x1017: @@ HasProperty(Stack[-1], Stack[-4])
0x1018: Pop(1)
0x1019: Pop(0); Push((bool) Stack[-3] == 0)
0x101a: IF (Stack[-1] == 0) GOTO 0x101c; Pop(1)

0x101b: GOTO 0x101f

0x101c: Push((int) 1)
0x101d: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x101e: GOTO 0x1012

0x101f: Pop(0); Push((bool) Stack[-4] == 0)
0x1020: IF (Stack[-1] == 0) GOTO 0x1023; Pop(1)

0x1021: Stack[-12] = (bool) 0
0x1022: Return(); Pop(10)

0x1023: Stack[-2] = (int) 0
0x1024: Push((int) 1)
0x1025: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x1026: IF (Stack[-1] == 0) GOTO 0x1029; Pop(1)

0x1027: @ irand(Stack[-2], Stack[-4])
0x1028: Pop(0)
0x1029: Push((int) 1)
0x102a: Pop(1); Push(Stack[-3] + Stack[-1]);
0x102b: Pop(1); Push(Stack[-6] + Stack[-1]);
0x102c: @@ GetProperty(Stack[-1], Stack[-2])
0x102d: Pop(1)
0x102e: PushEmpty(bool, string)
0x102f: Stack[-1] = Stack[-3]
0x1030: Call2 0x107e

0x1031: Stack[-14] = Stack[-2]
0x1032: Pop(2)
0x1033: Return(); Pop(10)

0x1034: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x1035: Push("d")
0x1036: PushEmpty(int)
0x1037: Call2 0x10d7

0x1038: Pop(0)
0x1039: Pop(2); Push(Stack[-2] + Stack[-1]);
0x103a: Push("m")
0x103b: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x103c: Stack[-4] = (int) 0
0x103d: Push((int) 1)
0x103e: IF (Stack[-1] == 0) GOTO 0x104a; Pop(1)

0x103f: Push((int) 1)
0x1040: Pop(1); Push(Stack[-5] + Stack[-1]);
0x1041: Pop(1); Push(Stack[-6] + Stack[-1]);
0x1042: @@ HasProperty(Stack[-1], Stack[-4])
0x1043: Pop(1)
0x1044: Pop(0); Push((bool) Stack[-3] == 0)
0x1045: IF (Stack[-1] == 0) GOTO 0x1047; Pop(1)

0x1046: GOTO 0x104a

0x1047: Push((int) 1)
0x1048: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x1049: GOTO 0x103d

0x104a: Pop(0); Push((bool) Stack[-4] == 0)
0x104b: IF (Stack[-1] == 0) GOTO 0x104e; Pop(1)

0x104c: Stack[-12] = (bool) 0
0x104d: Return(); Pop(10)

0x104e: Stack[-2] = (int) 0
0x104f: Push((int) 1)
0x1050: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x1051: IF (Stack[-1] == 0) GOTO 0x1054; Pop(1)

0x1052: @ irand(Stack[-2], Stack[-4])
0x1053: Pop(0)
0x1054: Push((int) 1)
0x1055: Pop(1); Push(Stack[-3] + Stack[-1]);
0x1056: Pop(1); Push(Stack[-6] + Stack[-1]);
0x1057: @@ GetProperty(Stack[-1], Stack[-2])
0x1058: Pop(1)
0x1059: PushEmpty(bool, string)
0x105a: Stack[-1] = Stack[-3]
0x105b: Call2 0x107e

0x105c: Stack[-14] = Stack[-2]
0x105d: Pop(2)
0x105e: Return(); Pop(10)

0x105f: PushEmpty(bool, float, float, bool, float, float)
0x1060: @ lshHasAnimation(Stack[-3], Stack[-7])
0x1061: Pop(0)
0x1062: Push(Stack[-3])
0x1063: IF (Stack[-1] == 0) GOTO 0x106a; Pop(1)

0x1064: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x1065: Pop(0)
0x1066: Push((bool) 0)
0x1067: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x1068: Pop(1)
0x1069: GOTO 0x106e

0x106a: Push("Can't find lsh animation : ")
0x106b: Pop(1); Push(Stack[-1] + Stack[-8]);
0x106c: @ Trace(Stack[-1])
0x106d: Pop(1)
0x106e: Return(); Pop(6)

0x106f: PushEmpty(bool, float, float, bool, float, float)
0x1070: @ lshHasAnimation(Stack[-3], Stack[-8])
0x1071: Pop(0)
0x1072: Push(Stack[-3])
0x1073: IF (Stack[-1] == 0) GOTO 0x1079; Pop(1)

0x1074: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x1075: Pop(0)
0x1076: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x1077: Pop(0)
0x1078: GOTO 0x107d

0x1079: Push("Can't find lsh animation : ")
0x107a: Pop(1); Push(Stack[-1] + Stack[-9]);
0x107b: @ Trace(Stack[-1])
0x107c: Pop(1)
0x107d: Return(); Pop(6)

0x107e: PushEmpty(bool, bool)
0x107f: PushEmpty(bool)
0x1080: Call2 0x1101

0x1081: Pop(0)
0x1082: IF (Stack[-1] == 0) GOTO 0x108b; Pop(1)

0x1083: @ lshHasSpeech(Stack[-1], Stack[-3])
0x1084: Pop(0)
0x1085: Push(Stack[-1])
0x1086: IF (Stack[-1] == 0) GOTO 0x108b; Pop(1)

0x1087: @ lshPlaySpeech(Stack[-3])
0x1088: Pop(0)
0x1089: Stack[-4] = (bool) 1
0x108a: Return(); Pop(2)

0x108b: Stack[-4] = (bool) 0
0x108c: Return(); Pop(2)

0x108d: PushEmpty(bool)
0x108e: Call2 0x1101

0x108f: Pop(0)
0x1090: IF (Stack[-1] == 0) GOTO 0x1093; Pop(1)

0x1091: @ lshStopSpeech()
0x1092: Pop(0)
0x1093: Return(); Pop(0)

0x1094: PushEmpty(object, object)
0x1095: @ self(Stack[-1])
0x1096: Pop(0)
0x1097: Stack[-3] = Stack[-1]
0x1098: Return(); Pop(2)

0x1099: Stack[-1] = 0
0x109a: PushEmpty(float, float)
0x109b: Pop(0); Push(Stack[-3] | Stack[-3]);
0x109c: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x109d: Push((float)0.0)
0x109e: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x109f: IF (Stack[-1] == 0) GOTO 0x10a2; Pop(1)

0x10a0: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x10a1: Return(); Pop(2)

0x10a2: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x10a3: Return(); Pop(2)

0x10a4: PushEmpty(int, int)
0x10a5: @ GetVariable(Stack[-3], Stack[-1])
0x10a6: Pop(0)
0x10a7: Stack[-4] = Stack[-1]
0x10a8: Return(); Pop(2)

0x10a9: PushEmpty(object, object)
0x10aa: @ FindActor(Stack[-1], Stack[-4])
0x10ab: Pop(0)
0x10ac: Pop(0); Push((bool) Stack[-1] == 0)
0x10ad: IF (Stack[-1] == 0) GOTO 0x10b5; Pop(1)

0x10ae: Push("Door ")
0x10af: Pop(1); Push(Stack[-1] + Stack[-5]);
0x10b0: Push(" not found")
0x10b1: Pop(2); Push(Stack[-2] + Stack[-1]);
0x10b2: @ Trace(Stack[-1])
0x10b3: Pop(1)
0x10b4: GOTO 0x10b8

0x10b5: Push("locked")
0x10b6: @@ SetProperty(Stack[-1], Stack[-4])
0x10b7: Pop(1)
0x10b8: Return(); Pop(2)

0x10b9: Stack[-1] = 0
0x10ba: PushEmpty(object, object)
0x10bb: @ FindActor(Stack[-1], Stack[-4])
0x10bc: Pop(0)
0x10bd: Pop(0); Push((bool) Stack[-1] == 0)
0x10be: IF (Stack[-1] == 0) GOTO 0x10c1; Pop(1)

0x10bf: Stack[-5] = (bool) 0
0x10c0: Return(); Pop(2)

0x10c1: @ Trigger(Stack[-1], Stack[-3])
0x10c2: Pop(0)
0x10c3: Stack[-5] = (bool) 1
0x10c4: Return(); Pop(2)

0x10c5: Stack[-1] = 0
0x10c6: PushEmpty(object, object)
0x10c7: @ FindActor(Stack[-1], Stack[-5])
0x10c8: Pop(0)
0x10c9: Pop(0); Push((bool) Stack[-1] == 0)
0x10ca: IF (Stack[-1] == 0) GOTO 0x10cd; Pop(1)

0x10cb: Stack[-6] = (bool) 0
0x10cc: Return(); Pop(2)

0x10cd: @ Trigger(Stack[-1], Stack[-4], Stack[-3])
0x10ce: Pop(0)
0x10cf: Stack[-6] = (bool) 1
0x10d0: Return(); Pop(2)

0x10d1: Stack[-1] = 0
0x10d2: PushEmpty(float, float)
0x10d3: @ GetGameTime(Stack[-1])
0x10d4: Pop(0)
0x10d5: Stack[-3] = Stack[-1]
0x10d6: Return(); Pop(2)

0x10d7: PushEmpty(float, float)
0x10d8: @ GetGameTime(Stack[-1])
0x10d9: Pop(0)
0x10da: Push((int) 1)
0x10db: PushEmpty(int)
0x10dc: Push((int) 24)
0x10dd: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x10de: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x10df: Return(); Pop(2)

0x10e0: PushEmpty()
0x10e1: PushEmpty(int)
0x10e2: Call2 0x10d7

0x10e3: Pop(0)
0x10e4: Stack[-3] = Stack[-1] == Stack[-2]; Pop(1);
0x10e5: Return(); Pop(0)

0x10e6: PushEmpty(float, int, int, float, int, int)
0x10e7: @ GetGameTime(Stack[-3])
0x10e8: Pop(0)
0x10e9: Push((int) 1)
0x10ea: PushEmpty(int)
0x10eb: Push((int) 24)
0x10ec: Stack[-2] = Stack[-6] / Stack[-1]; Pop(1);
0x10ed: Stack[-4] = Stack[-2] + Stack[-1]; Pop(2);
0x10ee: Pop(0); Push((bool) Stack[-2] != Stack[-7])
0x10ef: IF (Stack[-1] == 0) GOTO 0x10f2; Pop(1)

0x10f0: Stack[-8] = (bool) 0
0x10f1: Return(); Pop(6)

0x10f2: PushEmpty(int)
0x10f3: Stack[-1] = Stack[-4]
0x10f4: Push((int) 24)
0x10f5: Stack[-3] = Stack[-2] % Stack[-1]; Pop(2);
0x10f6: Push((int) 7)
0x10f7: Stack[-9] = Stack[-2] < Stack[-1]; Pop(1);
0x10f8: Return(); Pop(6)

0x10f9: Stack[-1] = (int) 515531
0x10fa: Return(); Pop(0)

0x10fb: Stack[-1] = (int) 502857
0x10fc: Return(); Pop(0)

0x10fd: Stack[-1] = "ui/NPC_BigVlad.png"
0x10fe: Return(); Pop(0)

0x10ff: Stack[-1] = "ui/NPC_BigVlad_b.png"
0x1100: Return(); Pop(0)

0x1101: Stack[-1] = (bool) 1
0x1102: Return(); Pop(0)

0x1103: PushEmpty(object, object)
0x1104: Push("b3q01")
0x1105: Push((int) 1)
0x1106: @ SetVariable(Stack[-2], Stack[-1])
0x1107: Pop(2)
0x1108: PushEmpty(object)
0x1109: Call2 0x1358

0x110a: Stack[-2] = Stack[-1]
0x110b: Pop(1)
0x110c: Push("b3q01BigVladGotoOspina")
0x110d: Push("pt_map_ospina")
0x110e: Push((int) 1)
0x110f: Push((int) 519627)
0x1110: PushEmpty(float)
0x1111: Call2 0x10d2

0x1112: Pop(0)
0x1113: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1114: Pop(5)
0x1115: PushEmpty()
0x1116: Call2 0x12fb

0x1117: Pop(0)
0x1118: PushEmpty()
0x1119: Call2 0x1308

0x111a: Pop(0)
0x111b: Return(); Pop(2)

0x111c: Stack[-1] = 0
0x111d: PushEmpty()
0x111e: Push("oob3BigVlad1")
0x111f: Push((int) 1)
0x1120: @ SetVariable(Stack[-2], Stack[-1])
0x1121: Pop(2)
0x1122: Return(); Pop(0)

0x1123: PushEmpty()
0x1124: PushEmpty()
0x1125: Call2 0x1315

0x1126: Pop(0)
0x1127: PushEmpty(bool, string, string)
0x1128: Stack[-2] = "quest_b3_01"
0x1129: Stack[-1] = "completed"
0x112a: Call2 0x10ba

0x112b: Pop(3)
0x112c: Return(); Pop(0)

0x112d: PushEmpty()
0x112e: PushEmpty()
0x112f: Call2 0x1322

0x1130: Pop(0)
0x1131: PushEmpty(bool, string, string)
0x1132: Stack[-2] = "quest_b3_01"
0x1133: Stack[-1] = "completed"
0x1134: Call2 0x10ba

0x1135: Pop(3)
0x1136: Return(); Pop(0)

0x1137: PushEmpty()
0x1138: Push("oob1BigVlad1")
0x1139: Push((int) 1)
0x113a: @ SetVariable(Stack[-2], Stack[-1])
0x113b: Pop(2)
0x113c: Return(); Pop(0)

0x113d: PushEmpty()
0x113e: Push("oob1BigVlad2")
0x113f: Push((int) 1)
0x1140: @ SetVariable(Stack[-2], Stack[-1])
0x1141: Pop(2)
0x1142: Return(); Pop(0)

0x1143: PushEmpty(object, object)
0x1144: Push("b1q01")
0x1145: Push((int) 1)
0x1146: @ SetVariable(Stack[-2], Stack[-1])
0x1147: Pop(2)
0x1148: PushEmpty(object)
0x1149: Call2 0x1358

0x114a: Stack[-2] = Stack[-1]
0x114b: Pop(1)
0x114c: Push("b1q01BigVladGotoKapella")
0x114d: Push("pt_map_kapella")
0x114e: Push((int) 3)
0x114f: Push((int) 518128)
0x1150: PushEmpty(float)
0x1151: Call2 0x10d2

0x1152: Pop(0)
0x1153: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1154: Pop(5)
0x1155: Push("b1q01BigVladGotoMladVlad")
0x1156: Push("pt_map_mladvlad")
0x1157: Push((int) 3)
0x1158: Push((int) 520041)
0x1159: PushEmpty(float)
0x115a: Call2 0x10d2

0x115b: Pop(0)
0x115c: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x115d: Pop(5)
0x115e: PushEmpty()
0x115f: Call2 0x12c7

0x1160: Pop(0)
0x1161: PushEmpty()
0x1162: Call2 0x12d4

0x1163: Pop(0)
0x1164: Return(); Pop(2)

0x1165: Stack[-1] = 0
0x1166: PushEmpty()
0x1167: PushEmpty(string, bool)
0x1168: Stack[-2] = "cot_alexandr@door1"
0x1169: Stack[-1] = (bool) 0
0x116a: Call2 0x10a9

0x116b: Pop(2)
0x116c: Return(); Pop(0)

0x116d: PushEmpty()
0x116e: PushEmpty(string, bool)
0x116f: Stack[-2] = "cot_katerina@door1"
0x1170: Stack[-1] = (bool) 0
0x1171: Call2 0x10a9

0x1172: Pop(2)
0x1173: Return(); Pop(0)

0x1174: PushEmpty(object, object)
0x1175: Push("b2q01")
0x1176: Push((int) 1)
0x1177: @ SetVariable(Stack[-2], Stack[-1])
0x1178: Pop(2)
0x1179: PushEmpty(object)
0x117a: Call2 0x1358

0x117b: Stack[-2] = Stack[-1]
0x117c: Pop(1)
0x117d: Push("b2q01BigVladGotoAlexandr")
0x117e: Push("pt_map_alexandr")
0x117f: Push((int) 1)
0x1180: Push((int) 519625)
0x1181: PushEmpty(float)
0x1182: Call2 0x10d2

0x1183: Pop(0)
0x1184: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1185: Pop(5)
0x1186: Push("b2q01BigVladGotoKaterina")
0x1187: Push("pt_map_katerina")
0x1188: Push((int) 1)
0x1189: Push((int) 519626)
0x118a: PushEmpty(float)
0x118b: Call2 0x10d2

0x118c: Pop(0)
0x118d: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x118e: Pop(5)
0x118f: Push("b2q01BigVladGotoMladVlad")
0x1190: Push("pt_map_mladvlad")
0x1191: Push((int) 3)
0x1192: Push((int) 519624)
0x1193: PushEmpty(float)
0x1194: Call2 0x10d2

0x1195: Pop(0)
0x1196: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1197: Pop(5)
0x1198: Push("b2q01BigVladGotoDanko")
0x1199: Push("pt_map_eva")
0x119a: Push((int) 3)
0x119b: Push((int) 530806)
0x119c: PushEmpty(float)
0x119d: Call2 0x10d2

0x119e: Pop(0)
0x119f: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x11a0: Pop(5)
0x11a1: PushEmpty()
0x11a2: Call2 0x12e1

0x11a3: Pop(0)
0x11a4: PushEmpty()
0x11a5: Call2 0x12ee

0x11a6: Pop(0)
0x11a7: Return(); Pop(2)

0x11a8: Stack[-1] = 0
0x11a9: PushEmpty()
0x11aa: Push("b11q01KnowWhoKilled")
0x11ab: Push((int) 1)
0x11ac: @ SetVariable(Stack[-2], Stack[-1])
0x11ad: Pop(2)
0x11ae: PushEmpty()
0x11af: Call2 0x12ba

0x11b0: Pop(0)
0x11b1: Return(); Pop(0)

0x11b2: PushEmpty()
0x11b3: Push("oob11BigVlad1")
0x11b4: Push((int) 1)
0x11b5: @ SetVariable(Stack[-2], Stack[-1])
0x11b6: Pop(2)
0x11b7: Return(); Pop(0)

0x11b8: PushEmpty()
0x11b9: PushEmpty(bool, string, string, string)
0x11ba: Stack[-3] = "volonteers_burah"
0x11bb: Stack[-2] = "kill"
0x11bc: Stack[-1] = "bigvlad"
0x11bd: Call2 0x10c6

0x11be: Pop(4)
0x11bf: Return(); Pop(0)

0x11c0: PushEmpty()
0x11c1: Push("oob11BigVlad2")
0x11c2: Push((int) 1)
0x11c3: @ SetVariable(Stack[-2], Stack[-1])
0x11c4: Pop(2)
0x11c5: Return(); Pop(0)

0x11c6: PushEmpty()
0x11c7: Push("oob11BigVlad3")
0x11c8: Push((int) 1)
0x11c9: @ SetVariable(Stack[-2], Stack[-1])
0x11ca: Pop(2)
0x11cb: Return(); Pop(0)

0x11cc: PushEmpty()
0x11cd: Push("oob11BigVlad4")
0x11ce: Push((int) 1)
0x11cf: @ SetVariable(Stack[-2], Stack[-1])
0x11d0: Pop(2)
0x11d1: Return(); Pop(0)

0x11d2: PushEmpty()
0x11d3: Push("oob11BigVlad5")
0x11d4: Push((int) 1)
0x11d5: @ SetVariable(Stack[-2], Stack[-1])
0x11d6: Pop(2)
0x11d7: Return(); Pop(0)

0x11d8: PushEmpty()
0x11d9: Push("b3BigVladVisit")
0x11da: Push((int) 1)
0x11db: @ SetVariable(Stack[-2], Stack[-1])
0x11dc: Pop(2)
0x11dd: Return(); Pop(0)

0x11de: PushEmpty()
0x11df: PushEmpty(object, string, float)
0x11e0: PushEmpty(object)
0x11e1: Call2 0x1358

0x11e2: Stack[-4] = Stack[-1]
0x11e3: Pop(1)
0x11e4: Stack[-2] = "pt_map_ospina"
0x11e5: Stack[-1] = (int) 2
0x11e6: Call2 0x1369

0x11e7: Pop(3)
0x11e8: PushEmpty(object)
0x11e9: Call2 0x1358

0x11ea: Pop(0)
0x11eb: @@ ShowMap(Stack[-1])
0x11ec: Pop(1)
0x11ed: Return(); Pop(0)

0x11ee: PushEmpty()
0x11ef: PushEmpty(object, string, float)
0x11f0: PushEmpty(object)
0x11f1: Call2 0x1358

0x11f2: Stack[-4] = Stack[-1]
0x11f3: Pop(1)
0x11f4: Stack[-2] = "pt_map_alexandr"
0x11f5: Stack[-1] = (int) 2
0x11f6: Call2 0x1369

0x11f7: Pop(3)
0x11f8: PushEmpty(object)
0x11f9: Call2 0x1358

0x11fa: Pop(0)
0x11fb: @@ ShowMap(Stack[-1])
0x11fc: Pop(1)
0x11fd: Return(); Pop(0)

0x11fe: PushEmpty()
0x11ff: PushEmpty(object, string, float)
0x1200: PushEmpty(object)
0x1201: Call2 0x1358

0x1202: Stack[-4] = Stack[-1]
0x1203: Pop(1)
0x1204: Stack[-2] = "pt_map_mladvlad"
0x1205: Stack[-1] = (int) 2
0x1206: Call2 0x1369

0x1207: Pop(3)
0x1208: PushEmpty(object)
0x1209: Call2 0x1358

0x120a: Pop(0)
0x120b: @@ ShowMap(Stack[-1])
0x120c: Pop(1)
0x120d: Return(); Pop(0)

0x120e: PushEmpty()
0x120f: PushEmpty(object, string, float)
0x1210: PushEmpty(object)
0x1211: Call2 0x1358

0x1212: Stack[-4] = Stack[-1]
0x1213: Pop(1)
0x1214: Stack[-2] = "pt_map_kapella"
0x1215: Stack[-1] = (int) 2
0x1216: Call2 0x1369

0x1217: Pop(3)
0x1218: PushEmpty(object)
0x1219: Call2 0x1358

0x121a: Pop(0)
0x121b: @@ ShowMap(Stack[-1])
0x121c: Pop(1)
0x121d: Return(); Pop(0)

0x121e: PushEmpty()
0x121f: PushEmpty(int, string)
0x1220: Stack[-1] = "b11q01"
0x1221: Call2 0x10a4

0x1222: Pop(1)
0x1223: Push((int) 1000)
0x1224: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1225: IF (Stack[-1] == 0) GOTO 0x1228; Pop(1)

0x1226: Stack[-2] = (bool) 1
0x1227: Return(); Pop(0)

0x1228: Stack[-2] = (bool) 0
0x1229: Return(); Pop(0)

0x122a: PushEmpty()
0x122b: PushEmpty(int, string)
0x122c: Stack[-1] = "oob11BigVlad1"
0x122d: Call2 0x10a4

0x122e: Pop(1)
0x122f: Push((int) 0)
0x1230: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1231: IF (Stack[-1] == 0) GOTO 0x1234; Pop(1)

0x1232: Stack[-2] = (bool) 1
0x1233: Return(); Pop(0)

0x1234: Stack[-2] = (bool) 0
0x1235: Return(); Pop(0)

0x1236: PushEmpty()
0x1237: PushEmpty(int, string)
0x1238: Stack[-1] = "b11KnowBigVladKill"
0x1239: Call2 0x10a4

0x123a: Pop(1)
0x123b: Push((int) 0)
0x123c: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x123d: IF (Stack[-1] == 0) GOTO 0x1240; Pop(1)

0x123e: Stack[-2] = (bool) 1
0x123f: Return(); Pop(0)

0x1240: Stack[-2] = (bool) 0
0x1241: Return(); Pop(0)

0x1242: PushEmpty()
0x1243: PushEmpty(int, string)
0x1244: Stack[-1] = "oob11BigVlad2"
0x1245: Call2 0x10a4

0x1246: Pop(1)
0x1247: Push((int) 0)
0x1248: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1249: IF (Stack[-1] == 0) GOTO 0x124c; Pop(1)

0x124a: Stack[-2] = (bool) 1
0x124b: Return(); Pop(0)

0x124c: Stack[-2] = (bool) 0
0x124d: Return(); Pop(0)

0x124e: PushEmpty()
0x124f: PushEmpty(int, string)
0x1250: Stack[-1] = "oob11BigVlad3"
0x1251: Call2 0x10a4

0x1252: Pop(1)
0x1253: Push((int) 0)
0x1254: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1255: IF (Stack[-1] == 0) GOTO 0x1258; Pop(1)

0x1256: Stack[-2] = (bool) 1
0x1257: Return(); Pop(0)

0x1258: Stack[-2] = (bool) 0
0x1259: Return(); Pop(0)

0x125a: PushEmpty()
0x125b: PushEmpty(int, string)
0x125c: Stack[-1] = "oob11BigVlad4"
0x125d: Call2 0x10a4

0x125e: Pop(1)
0x125f: Push((int) 0)
0x1260: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1261: IF (Stack[-1] == 0) GOTO 0x1264; Pop(1)

0x1262: Stack[-2] = (bool) 1
0x1263: Return(); Pop(0)

0x1264: Stack[-2] = (bool) 0
0x1265: Return(); Pop(0)

0x1266: PushEmpty()
0x1267: PushEmpty(int, string)
0x1268: Stack[-1] = "oob11BigVlad5"
0x1269: Call2 0x10a4

0x126a: Pop(1)
0x126b: Push((int) 0)
0x126c: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x126d: IF (Stack[-1] == 0) GOTO 0x1270; Pop(1)

0x126e: Stack[-2] = (bool) 1
0x126f: Return(); Pop(0)

0x1270: Stack[-2] = (bool) 0
0x1271: Return(); Pop(0)

0x1272: PushEmpty()
0x1273: PushEmpty(int, string)
0x1274: Stack[-1] = "oob3BigVlad1"
0x1275: Call2 0x10a4

0x1276: Pop(1)
0x1277: Push((int) 0)
0x1278: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1279: IF (Stack[-1] == 0) GOTO 0x127c; Pop(1)

0x127a: Stack[-2] = (bool) 1
0x127b: Return(); Pop(0)

0x127c: Stack[-2] = (bool) 0
0x127d: Return(); Pop(0)

0x127e: PushEmpty()
0x127f: PushEmpty(int, string)
0x1280: Stack[-1] = "b3q01"
0x1281: Call2 0x10a4

0x1282: Pop(1)
0x1283: Push((int) 0)
0x1284: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1285: IF (Stack[-1] == 0) GOTO 0x1288; Pop(1)

0x1286: Stack[-2] = (bool) 1
0x1287: Return(); Pop(0)

0x1288: Stack[-2] = (bool) 0
0x1289: Return(); Pop(0)

0x128a: PushEmpty()
0x128b: PushEmpty(int, string)
0x128c: Stack[-1] = "b3q01"
0x128d: Call2 0x10a4

0x128e: Pop(1)
0x128f: Push((int) 3)
0x1290: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1291: IF (Stack[-1] == 0) GOTO 0x1294; Pop(1)

0x1292: Stack[-2] = (bool) 1
0x1293: Return(); Pop(0)

0x1294: Stack[-2] = (bool) 0
0x1295: Return(); Pop(0)

0x1296: PushEmpty()
0x1297: PushEmpty(int, string)
0x1298: Stack[-1] = "oob1BigVlad1"
0x1299: Call2 0x10a4

0x129a: Pop(1)
0x129b: Push((int) 0)
0x129c: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x129d: IF (Stack[-1] == 0) GOTO 0x12a0; Pop(1)

0x129e: Stack[-2] = (bool) 1
0x129f: Return(); Pop(0)

0x12a0: Stack[-2] = (bool) 0
0x12a1: Return(); Pop(0)

0x12a2: PushEmpty()
0x12a3: PushEmpty(int, string)
0x12a4: Stack[-1] = "oob1BigVlad2"
0x12a5: Call2 0x10a4

0x12a6: Pop(1)
0x12a7: Push((int) 0)
0x12a8: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x12a9: IF (Stack[-1] == 0) GOTO 0x12ac; Pop(1)

0x12aa: Stack[-2] = (bool) 1
0x12ab: Return(); Pop(0)

0x12ac: Stack[-2] = (bool) 0
0x12ad: Return(); Pop(0)

0x12ae: PushEmpty()
0x12af: PushEmpty(int, string)
0x12b0: Stack[-1] = "b2q01"
0x12b1: Call2 0x10a4

0x12b2: Pop(1)
0x12b3: Push((int) 0)
0x12b4: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x12b5: IF (Stack[-1] == 0) GOTO 0x12b8; Pop(1)

0x12b6: Stack[-2] = (bool) 1
0x12b7: Return(); Pop(0)

0x12b8: Stack[-2] = (bool) 0
0x12b9: Return(); Pop(0)

0x12ba: PushEmpty(object, object)
0x12bb: Push((int) 315)
0x12bc: Push((int) 1)
0x12bd: Push((int) 522057)
0x12be: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x12bf: Pop(3)
0x12c0: PushEmpty(bool, object, int)
0x12c1: Stack[-2] = Stack[-4]
0x12c2: Stack[-1] = (int) 313
0x12c3: Call2 0x133c

0x12c4: Pop(3)
0x12c5: Return(); Pop(2)

0x12c6: Stack[-1] = 0
0x12c7: PushEmpty(object, object)
0x12c8: Push((int) 242)
0x12c9: Push((int) 1)
0x12ca: Push((int) 520039)
0x12cb: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x12cc: Pop(3)
0x12cd: PushEmpty(bool, object, int)
0x12ce: Stack[-2] = Stack[-4]
0x12cf: Stack[-1] = (int) -1
0x12d0: Call2 0x133c

0x12d1: Pop(3)
0x12d2: Return(); Pop(2)

0x12d3: Stack[-1] = 0
0x12d4: PushEmpty(object, object)
0x12d5: Push((int) 243)
0x12d6: Push((int) 1)
0x12d7: Push((int) 520040)
0x12d8: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x12d9: Pop(3)
0x12da: PushEmpty(bool, object, int)
0x12db: Stack[-2] = Stack[-4]
0x12dc: Stack[-1] = (int) 242
0x12dd: Call2 0x133c

0x12de: Pop(3)
0x12df: Return(); Pop(2)

0x12e0: Stack[-1] = 0
0x12e1: PushEmpty(object, object)
0x12e2: Push((int) 245)
0x12e3: Push((int) 1)
0x12e4: Push((int) 520466)
0x12e5: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x12e6: Pop(3)
0x12e7: PushEmpty(bool, object, int)
0x12e8: Stack[-2] = Stack[-4]
0x12e9: Stack[-1] = (int) -1
0x12ea: Call2 0x133c

0x12eb: Pop(3)
0x12ec: Return(); Pop(2)

0x12ed: Stack[-1] = 0
0x12ee: PushEmpty(object, object)
0x12ef: Push((int) 246)
0x12f0: Push((int) 1)
0x12f1: Push((int) 520467)
0x12f2: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x12f3: Pop(3)
0x12f4: PushEmpty(bool, object, int)
0x12f5: Stack[-2] = Stack[-4]
0x12f6: Stack[-1] = (int) 245
0x12f7: Call2 0x133c

0x12f8: Pop(3)
0x12f9: Return(); Pop(2)

0x12fa: Stack[-1] = 0
0x12fb: PushEmpty(object, object)
0x12fc: Push((int) 221)
0x12fd: Push((int) 1)
0x12fe: Push((int) 519633)
0x12ff: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1300: Pop(3)
0x1301: PushEmpty(bool, object, int)
0x1302: Stack[-2] = Stack[-4]
0x1303: Stack[-1] = (int) -1
0x1304: Call2 0x133c

0x1305: Pop(3)
0x1306: Return(); Pop(2)

0x1307: Stack[-1] = 0
0x1308: PushEmpty(object, object)
0x1309: Push((int) 222)
0x130a: Push((int) 1)
0x130b: Push((int) 519634)
0x130c: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x130d: Pop(3)
0x130e: PushEmpty(bool, object, int)
0x130f: Stack[-2] = Stack[-4]
0x1310: Stack[-1] = (int) 221
0x1311: Call2 0x133c

0x1312: Pop(3)
0x1313: Return(); Pop(2)

0x1314: Stack[-1] = 0
0x1315: PushEmpty(object, object)
0x1316: Push((int) 225)
0x1317: Push((int) 1)
0x1318: Push((int) 519650)
0x1319: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x131a: Pop(3)
0x131b: PushEmpty(bool, object, int)
0x131c: Stack[-2] = Stack[-4]
0x131d: Stack[-1] = (int) 221
0x131e: Call2 0x133c

0x131f: Pop(3)
0x1320: Return(); Pop(2)

0x1321: Stack[-1] = 0
0x1322: PushEmpty(object, object)
0x1323: Push((int) 226)
0x1324: Push((int) 1)
0x1325: Push((int) 519651)
0x1326: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1327: Pop(3)
0x1328: PushEmpty(bool, object, int)
0x1329: Stack[-2] = Stack[-4]
0x132a: Stack[-1] = (int) 221
0x132b: Call2 0x133c

0x132c: Pop(3)
0x132d: Return(); Pop(2)

0x132e: Stack[-1] = 0
0x132f: PushEmpty(object, object)
0x1330: @ GetDiaryRoot(Stack[-1])
0x1331: Pop(0)
0x1332: Pop(0); Push((bool) Stack[-1] == 0)
0x1333: IF (Stack[-1] == 0) GOTO 0x1339; Pop(1)

0x1334: Push("Can't retrieve diary root")
0x1335: @ Trace(Stack[-1])
0x1336: Pop(1)
0x1337: Stack[-3] = (bool) 0
0x1338: Return(); Pop(2)

0x1339: Stack[-3] = Stack[-1]
0x133a: Return(); Pop(2)

0x133b: Stack[-1] = 0
0x133c: PushEmpty(object, object, int, object, object, int)
0x133d: PushEmpty(object)
0x133e: Call2 0x132f

0x133f: Stack[-4] = Stack[-1]
0x1340: Pop(1)
0x1341: @@ Find(Stack[-7], Stack[-2])
0x1342: Pop(0)
0x1343: Pop(0); Push((bool) Stack[-2] == 0)
0x1344: IF (Stack[-1] == 0) GOTO 0x134b; Pop(1)

0x1345: Push("Can't find diary parent with id: ")
0x1346: Pop(1); Push(Stack[-1] + Stack[-8]);
0x1347: @ Trace(Stack[-1])
0x1348: Pop(1)
0x1349: Stack[-9] = (bool) 0
0x134a: Return(); Pop(6)

0x134b: @@ AddChild(Stack[-8])
0x134c: Pop(0)
0x134d: Push((int) 7)
0x134e: @ SendWorldWndMessage(Stack[-1])
0x134f: Pop(1)
0x1350: @@ GetCategory(Stack[-1])
0x1351: Pop(0)
0x1352: @ SetDiarySection(Stack[-1])
0x1353: Pop(0)
0x1354: Stack[-9] = (bool) 0
0x1355: Return(); Pop(6)

0x1356: Stack[-2] = 0
0x1357: Stack[-3] = 0
0x1358: PushEmpty(object, object, object, object)
0x1359: @ GetMainOutdoorScene(Stack[-2])
0x135a: Pop(0)
0x135b: Pop(0); Push((bool) Stack[-2] == 0)
0x135c: IF (Stack[-1] == 0) GOTO 0x1363; Pop(1)

0x135d: Push("Can't find main outdoor scene")
0x135e: @ Trace(Stack[-1])
0x135f: Pop(1)
0x1360: Stack[-1] = 0
0x1361: Stack[-5] = Stack[-1]
0x1362: Return(); Pop(4)

0x1363: @@ GetMap(Stack[-1])
0x1364: Pop(0)
0x1365: Stack[-5] = Stack[-1]
0x1366: Return(); Pop(4)

0x1367: Stack[-1] = 0
0x1368: Stack[-2] = 0
0x1369: PushEmpty(cvector, cvector, object, bool, cvector, cvector, object, bool)
0x136a: @ GetMainOutdoorScene(Stack[-2])
0x136b: Pop(0)
0x136c: Pop(0); Push((bool) Stack[-2] == 0)
0x136d: IF (Stack[-1] == 0) GOTO 0x1372; Pop(1)

0x136e: Push("Can't find main outdoor scene")
0x136f: @ Trace(Stack[-1])
0x1370: Pop(1)
0x1371: Return(); Pop(8)

0x1372: @@ GetLocator(Stack[-10], Stack[-1], Stack[-4], Stack[-3])
0x1373: Pop(0)
0x1374: Pop(0); Push((bool) Stack[-1] == 0)
0x1375: IF (Stack[-1] == 0) GOTO 0x137c; Pop(1)

0x1376: Push("Warning: outdoor scene locator ")
0x1377: Pop(1); Push(Stack[-1] + Stack[-11]);
0x1378: Push(" doesnt exist")
0x1379: Pop(2); Push(Stack[-2] + Stack[-1]);
0x137a: @ Trace(Stack[-1])
0x137b: Pop(1)
0x137c: @@ GetMap(Stack[-11])
0x137d: Pop(0)
0x137e: Pop(0); Push((bool) Stack[-11] == 0)
0x137f: IF (Stack[-1] == 0) GOTO 0x1384; Pop(1)

0x1380: Push("Can't find map")
0x1381: @ Trace(Stack[-1])
0x1382: Pop(1)
0x1383: Return(); Pop(8)

0x1384: Push(CvectorIndex(Stack[-4], 0))
0x1385: Push(CvectorIndex(Stack[-5], 2))
0x1386: @@ SetMapParams(Stack[-2], Stack[-1], Stack[-11])
0x1387: Pop(2)
0x1388: Return(); Pop(8)

0x1389: Stack[-2] = 0
0x138a: PushEmpty(int, int)
0x138b: Push("branch")
0x138c: @ GetVariable(Stack[-1], Stack[-2])
0x138d: Pop(1)
0x138e: Push((int) 0)
0x138f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1390: IF (Stack[-1] == 0) GOTO 0x1394; Pop(1)

0x1391: Stack[-3] = (int) 1
0x1392: Return(); Pop(2)

0x1393: GOTO 0x1399

0x1394: Push((int) 1)
0x1395: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1396: IF (Stack[-1] == 0) GOTO 0x1399; Pop(1)

0x1397: Stack[-3] = (int) 2
0x1398: Return(); Pop(2)

0x1399: Stack[-3] = (int) 3
0x139a: Return(); Pop(2)

0x139b: PushEmpty()
0x139c: Push(GlobalVars[1])
0x139d: Pop(1); Push((bool) Stack[-1] == 0)
0x139e: IF (Stack[-1] == 0) GOTO 0x13a8; Pop(1)

0x139f: PushEmpty(int, object)
0x13a0: Stack[-1] = Stack[-3]
0x13a1: Push(-2, 1); TaskCall(10)
0x13a2: Call2 0x993

0x13a3: Pop(-2, 1); TaskReturn
0x13a4: Pop(2)
0x13a5: Push(GlobalVars[1])
0x13a6: Stack[-1] = (bool) 1
0x13a7: GlobalVars[1] = Stack[-1]; Pop(1)
0x13a8: PushEmpty(bool, int)
0x13a9: Stack[-1] = (int) 2
0x13aa: Call2 0x10e6

0x13ab: Pop(1)
0x13ac: IF (Stack[-1] == 0) GOTO 0x13b4; Pop(1)

0x13ad: PushEmpty(int, object)
0x13ae: Stack[-1] = Stack[-3]
0x13af: Push(-2, 1); TaskCall(0)
0x13b0: Call2 0x0

0x13b1: Pop(-2, 1); TaskReturn
0x13b2: Pop(2)
0x13b3: Return(); Pop(0)

0x13b4: PushEmpty(bool, int)
0x13b5: Stack[-1] = (int) 3
0x13b6: Call2 0x10e6

0x13b7: Pop(1)
0x13b8: IF (Stack[-1] == 0) GOTO 0x13c0; Pop(1)

0x13b9: PushEmpty(int, object)
0x13ba: Stack[-1] = Stack[-3]
0x13bb: Push(-2, 1); TaskCall(2)
0x13bc: Call2 0xcb

0x13bd: Pop(-2, 1); TaskReturn
0x13be: Pop(2)
0x13bf: Return(); Pop(0)

0x13c0: PushEmpty(bool, int)
0x13c1: Stack[-1] = (int) 1
0x13c2: Call2 0x10e0

0x13c3: Pop(1)
0x13c4: IF (Stack[-1] == 0) GOTO 0x13cc; Pop(1)

0x13c5: PushEmpty(int, object)
0x13c6: Stack[-1] = Stack[-3]
0x13c7: Push(-2, 1); TaskCall(8)
0x13c8: Call2 0x6a6

0x13c9: Pop(-2, 1); TaskReturn
0x13ca: Pop(2)
0x13cb: Return(); Pop(0)

0x13cc: PushEmpty(bool, int)
0x13cd: Stack[-1] = (int) 2
0x13ce: Call2 0x10e0

0x13cf: Pop(1)
0x13d0: IF (Stack[-1] == 0) GOTO 0x13d8; Pop(1)

0x13d1: PushEmpty(int, object)
0x13d2: Stack[-1] = Stack[-3]
0x13d3: Push(-2, 1); TaskCall(4)
0x13d4: Call2 0x196

0x13d5: Pop(-2, 1); TaskReturn
0x13d6: Pop(2)
0x13d7: Return(); Pop(0)

0x13d8: PushEmpty(bool, int)
0x13d9: Stack[-1] = (int) 3
0x13da: Call2 0x10e0

0x13db: Pop(1)
0x13dc: IF (Stack[-1] == 0) GOTO 0x13e4; Pop(1)

0x13dd: PushEmpty(int, object)
0x13de: Stack[-1] = Stack[-3]
0x13df: Push(-2, 1); TaskCall(6)
0x13e0: Call2 0x375

0x13e1: Pop(-2, 1); TaskReturn
0x13e2: Pop(2)
0x13e3: Return(); Pop(0)

0x13e4: PushEmpty(bool, int)
0x13e5: Stack[-1] = (int) 11
0x13e6: Call2 0x10e0

0x13e7: Pop(1)
0x13e8: IF (Stack[-1] == 0) GOTO 0x13f0; Pop(1)

0x13e9: PushEmpty(int, object)
0x13ea: Stack[-1] = Stack[-3]
0x13eb: Push(-2, 1); TaskCall(12)
0x13ec: Call2 0xa99

0x13ed: Pop(-2, 1); TaskReturn
0x13ee: Pop(2)
0x13ef: Return(); Pop(0)

0x13f0: PushEmpty(int, object)
0x13f1: Stack[-1] = Stack[-3]
0x13f2: Push(-2, 1); TaskCall(14)
0x13f3: Call2 0xe6f

0x13f4: Pop(-2, 1); TaskReturn
0x13f5: Pop(2)
0x13f6: Return(); Pop(0)

