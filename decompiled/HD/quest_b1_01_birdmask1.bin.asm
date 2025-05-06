GlobalVarCount = 1
	G_VAR_0 object 

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
	player
	head
	GetPosition
	GetEyesHeight
	Can't find lsh animation : 
	ui/NPC_bmask.png
	ui/NPC_bmask_b.png
	oob1Birdmask1_1
	quest_b1_01
	remove1
	pt_map_bigvlad
	ShowMap
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
	Sleep (1 args)
	FindActor (2 args)
	SetTimer (2 args)
	KillTimer (1 args)
	UnlookAsync (1 args)
	irand (2 args)
	WaitForAnimEnd (1 args)
	rand (2 args)
	Sleep (2 args)
	ResetAAS (0 args)
	StopGroup0 (0 args)
	GetPosition (1 args)
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
	lshHasAnimation (2 args)
	lshGetAnimTimes (3 args)
	lshPlayAnimation (3 args)
	Trace (1 args)
	LookAsync (3 args)
	lshStopSpeech (0 args)
	GetVariable (2 args)
	Trigger (2 args)
	HasAnimation (3 args)
	SetVariable (2 args)
	GetMainOutdoorScene (1 args)

RunOp = 0x267
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xb8 Vars = (int, int)
	GTASK_2 Vars = (int, int, bool, bool, object) Params = 0
		EVENT_0 Op = 0x271 Vars = (object)
		EVENT_7 Op = 0x2a6 Vars = (int)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 130.0
0x5: Call2 0x32e

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x3d3

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x3d1

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x3d5

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x3d7

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x44c

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
0x2f: PushEmpty(object, object)
0x30: Stack[-2] = Stack[-11]
0x31: Stack[-1] = Stack[-6]
0x32: Push(-2, 4); TaskCall(1)
0x33: Call2 0x4a

0x34: Pop(-2, 4); TaskReturn
0x35: Pop(2)
0x36: @@ IsDialogEnd(Stack[-1])
0x37: Pop(0)
0x38: Pop(0); Push((bool) Stack[-1] == 0)
0x39: IF (Stack[-1] == 0) GOTO 0x3f; Pop(1)

0x3a: @ sync()
0x3b: Pop(0)
0x3c: @@ IsDialogEnd(Stack[-1])
0x3d: Pop(0)
0x3e: GOTO 0x38

0x3f: PushEmpty(object)
0x40: Stack[-1] = Stack[-10]
0x41: Call2 0x373

0x42: Pop(1)
0x43: @ StopDialog(Stack[-4])
0x44: Pop(0)
0x45: @@ GetReturnValue(Stack[-2])
0x46: Pop(0)
0x47: Stack[-10] = Stack[-2]
0x48: Return(); Pop(8)

0x49: Stack[-4] = 0
0x4a: PushEmpty()
0x4b: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x4c: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x4d: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x4e: Push((int) 1)
0x4f: IF (Stack[-1] == 0) GOTO 0x84; Pop(1)

0x50: PushEmpty(bool, object)
0x51: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x52: Call2 0x40e

0x53: Pop(1)
0x54: IF (Stack[-1] == 0) GOTO 0x6e; Pop(1)

0x55: PushEmpty(object, object)
0x56: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x57: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x58: Call2 0x3f3

0x59: Pop(2)
0x5a: PushEmpty(string)
0x5b: Stack[-1] = "Neutral"
0x5c: Call2 0xa2

0x5d: Pop(1)
0x5e: Push((int) 518119)
0x5f: @@ SetMessage(Stack[-1])
0x60: Pop(1)
0x61: @@ ClearReplies()
0x62: Pop(0)
0x63: Push((int) 518120)
0x64: Push((int) 19389)
0x65: Push((int) 19239)
0x66: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x67: Pop(3)
0x68: Push((int) 518319)
0x69: Push((int) 19426)
0x6a: Push((int) 19423)
0x6b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6c: Pop(3)
0x6d: GOTO 0x84

0x6e: PushEmpty(string)
0x6f: Stack[-1] = "Neutral"
0x70: Call2 0xa2

0x71: Pop(1)
0x72: Push((int) 520033)
0x73: @@ SetMessage(Stack[-1])
0x74: Pop(1)
0x75: @@ ClearReplies()
0x76: Pop(0)
0x77: Push((int) 520034)
0x78: Push((int) -1)
0x79: Push((int) 21218)
0x7a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7b: Pop(3)
0x7c: Push((int) 527016)
0x7d: Push((int) -1)
0x7e: Push((int) 28299)
0x7f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x80: Pop(3)
0x81: GOTO 0x84

0x82: Return(); Pop(0)

0x83: GOTO 0x4e

0x84: PushEmpty(bool)
0x85: Call2 0x3d9

0x86: Pop(0)
0x87: IF (Stack[-1] == 0) GOTO 0x93; Pop(1)

0x88: @ lshWaitForAnimEnd()
0x89: Pop(0)
0x8a: Push( Stack[3 + Tasks[-1].StackPointer] )
0x8b: IF (Stack[-1] == 0) GOTO 0x8d; Pop(1)

0x8c: GOTO 0x92

0x8d: PushEmpty(string)
0x8e: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x8f: Call2 0x385

0x90: Pop(1)
0x91: GOTO 0x88

0x92: GOTO 0xa1

0x93: Push("all")
0x94: Push("idle")
0x95: @ PlayAnimation(Stack[-2], Stack[-1])
0x96: Pop(2)
0x97: @ WaitForAnimEnd()
0x98: Pop(0)
0x99: Push( Stack[3 + Tasks[-1].StackPointer] )
0x9a: IF (Stack[-1] == 0) GOTO 0x9c; Pop(1)

0x9b: GOTO 0xa1

0x9c: Push("all")
0x9d: Push("idle")
0x9e: @ PlayAnimation(Stack[-2], Stack[-1])
0x9f: Pop(2)
0xa0: GOTO 0x97

0xa1: Return(); Pop(0)

0xa2: PushEmpty()
0xa3: PushEmpty(bool)
0xa4: Call2 0x3d9

0xa5: Pop(0)
0xa6: Pop(1); Push((bool) Stack[-1] == 0)
0xa7: IF (Stack[-1] == 0) GOTO 0xa9; Pop(1)

0xa8: Return(); Pop(0)

0xa9: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xaa: IF (Stack[-1] == 0) GOTO 0xac; Pop(1)

0xab: Return(); Pop(0)

0xac: PushEmpty(string, bool)
0xad: Stack[-2] = Stack[-3]
0xae: Push("")
0xaf: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xb0: IF (Stack[-1] == 0) GOTO 0xb3; Pop(1)

0xb1: Stack[-1] = (bool) 0
0xb2: GOTO 0xb4

0xb3: Stack[-1] = (bool) 1
0xb4: Call2 0x395

0xb5: Pop(2)
0xb6: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xb7: Return(); Pop(0)

0xb8: PushEmpty()
0xb9: Push((int) 1)
0xba: IF (Stack[-1] == 0) GOTO 0x266; Pop(1)

0xbb: PushEmpty()
0xbc: Call2 0x3af

0xbd: Pop(0)
0xbe: Push((int) 19421)
0xbf: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xc0: IF (Stack[-1] == 0) GOTO 0xc6; Pop(1)

0xc1: PushEmpty(object, object)
0xc2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc4: Call2 0x3fe

0xc5: Pop(2)
0xc6: Push((int) 19422)
0xc7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xc8: IF (Stack[-1] == 0) GOTO 0xce; Pop(1)

0xc9: PushEmpty(object, object)
0xca: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xcb: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xcc: Call2 0x3fe

0xcd: Pop(2)
0xce: Push((int) 19238)
0xcf: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd0: IF (Stack[-1] == 0) GOTO 0x103; Pop(1)

0xd1: PushEmpty(bool, object)
0xd2: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xd3: Call2 0x40e

0xd4: Pop(1)
0xd5: IF (Stack[-1] == 0) GOTO 0xef; Pop(1)

0xd6: PushEmpty(object, object)
0xd7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd9: Call2 0x3f3

0xda: Pop(2)
0xdb: PushEmpty(string)
0xdc: Stack[-1] = "Neutral"
0xdd: Call2 0xa2

0xde: Pop(1)
0xdf: Push((int) 518119)
0xe0: @@ SetMessage(Stack[-1])
0xe1: Pop(1)
0xe2: @@ ClearReplies()
0xe3: Pop(0)
0xe4: Push((int) 518120)
0xe5: Push((int) 19389)
0xe6: Push((int) 19239)
0xe7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe8: Pop(3)
0xe9: Push((int) 518319)
0xea: Push((int) 19426)
0xeb: Push((int) 19423)
0xec: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xed: Pop(3)
0xee: Return(); Pop(0)

0xef: PushEmpty(string)
0xf0: Stack[-1] = "Neutral"
0xf1: Call2 0xa2

0xf2: Pop(1)
0xf3: Push((int) 520033)
0xf4: @@ SetMessage(Stack[-1])
0xf5: Pop(1)
0xf6: @@ ClearReplies()
0xf7: Pop(0)
0xf8: Push((int) 520034)
0xf9: Push((int) -1)
0xfa: Push((int) 21218)
0xfb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfc: Pop(3)
0xfd: Push((int) 527016)
0xfe: Push((int) -1)
0xff: Push((int) 28299)
0x100: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x101: Pop(3)
0x102: Return(); Pop(0)

0x103: Push((int) 19426)
0x104: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x105: IF (Stack[-1] == 0) GOTO 0x11a; Pop(1)

0x106: PushEmpty(string)
0x107: Stack[-1] = "Neutral"
0x108: Call2 0xa2

0x109: Pop(1)
0x10a: Push((int) 518322)
0x10b: @@ SetMessage(Stack[-1])
0x10c: Pop(1)
0x10d: @@ ClearReplies()
0x10e: Pop(0)
0x10f: Push((int) 518323)
0x110: Push((int) 19429)
0x111: Push((int) 19427)
0x112: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x113: Pop(3)
0x114: Push((int) 518328)
0x115: Push((int) 28297)
0x116: Push((int) 19433)
0x117: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x118: Pop(3)
0x119: Return(); Pop(0)

0x11a: Push((int) 28297)
0x11b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x11c: IF (Stack[-1] == 0) GOTO 0x12c; Pop(1)

0x11d: PushEmpty(string)
0x11e: Stack[-1] = "Neutral"
0x11f: Call2 0xa2

0x120: Pop(1)
0x121: Push((int) 527014)
0x122: @@ SetMessage(Stack[-1])
0x123: Pop(1)
0x124: @@ ClearReplies()
0x125: Pop(0)
0x126: Push((int) 527015)
0x127: Push((int) 19389)
0x128: Push((int) 28298)
0x129: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x12a: Pop(3)
0x12b: Return(); Pop(0)

0x12c: Push((int) 19429)
0x12d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x12e: IF (Stack[-1] == 0) GOTO 0x13e; Pop(1)

0x12f: PushEmpty(string)
0x130: Stack[-1] = "Neutral"
0x131: Call2 0xa2

0x132: Pop(1)
0x133: Push((int) 518325)
0x134: @@ SetMessage(Stack[-1])
0x135: Pop(1)
0x136: @@ ClearReplies()
0x137: Pop(0)
0x138: Push((int) 518326)
0x139: Push((int) 19389)
0x13a: Push((int) 19430)
0x13b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x13c: Pop(3)
0x13d: Return(); Pop(0)

0x13e: Push((int) 19389)
0x13f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x140: IF (Stack[-1] == 0) GOTO 0x15a; Pop(1)

0x141: PushEmpty(string)
0x142: Stack[-1] = "Neutral"
0x143: Call2 0xa2

0x144: Pop(1)
0x145: Push((int) 518286)
0x146: @@ SetMessage(Stack[-1])
0x147: Pop(1)
0x148: @@ ClearReplies()
0x149: Pop(0)
0x14a: Push((int) 518287)
0x14b: Push((int) 19391)
0x14c: Push((int) 19390)
0x14d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x14e: Pop(3)
0x14f: Push((int) 518320)
0x150: Push((int) 19391)
0x151: Push((int) 19424)
0x152: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x153: Pop(3)
0x154: Push((int) 518327)
0x155: Push((int) 19391)
0x156: Push((int) 19432)
0x157: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x158: Pop(3)
0x159: Return(); Pop(0)

0x15a: Push((int) 19391)
0x15b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x15c: IF (Stack[-1] == 0) GOTO 0x171; Pop(1)

0x15d: PushEmpty(string)
0x15e: Stack[-1] = "Neutral"
0x15f: Call2 0xa2

0x160: Pop(1)
0x161: Push((int) 518288)
0x162: @@ SetMessage(Stack[-1])
0x163: Pop(1)
0x164: @@ ClearReplies()
0x165: Pop(0)
0x166: Push((int) 518307)
0x167: Push((int) 19412)
0x168: Push((int) 19411)
0x169: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x16a: Pop(3)
0x16b: Push((int) 518321)
0x16c: Push((int) 19436)
0x16d: Push((int) 19425)
0x16e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x16f: Pop(3)
0x170: Return(); Pop(0)

0x171: Push((int) 19436)
0x172: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x173: IF (Stack[-1] == 0) GOTO 0x188; Pop(1)

0x174: PushEmpty(string)
0x175: Stack[-1] = "Neutral"
0x176: Call2 0xa2

0x177: Pop(1)
0x178: Push((int) 518330)
0x179: @@ SetMessage(Stack[-1])
0x17a: Pop(1)
0x17b: @@ ClearReplies()
0x17c: Pop(0)
0x17d: Push((int) 518332)
0x17e: Push((int) 19412)
0x17f: Push((int) 19440)
0x180: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x181: Pop(3)
0x182: Push((int) 518333)
0x183: Push((int) -1)
0x184: Push((int) 19441)
0x185: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x186: Pop(3)
0x187: Return(); Pop(0)

0x188: Push((int) 19412)
0x189: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x18a: IF (Stack[-1] == 0) GOTO 0x19a; Pop(1)

0x18b: PushEmpty(string)
0x18c: Stack[-1] = "Neutral"
0x18d: Call2 0xa2

0x18e: Pop(1)
0x18f: Push((int) 518308)
0x190: @@ SetMessage(Stack[-1])
0x191: Pop(1)
0x192: @@ ClearReplies()
0x193: Pop(0)
0x194: Push((int) 518334)
0x195: Push((int) 19444)
0x196: Push((int) 19443)
0x197: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x198: Pop(3)
0x199: Return(); Pop(0)

0x19a: Push((int) 19444)
0x19b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x19c: IF (Stack[-1] == 0) GOTO 0x1b1; Pop(1)

0x19d: PushEmpty(string)
0x19e: Stack[-1] = "Neutral"
0x19f: Call2 0xa2

0x1a0: Pop(1)
0x1a1: Push((int) 518335)
0x1a2: @@ SetMessage(Stack[-1])
0x1a3: Pop(1)
0x1a4: @@ ClearReplies()
0x1a5: Pop(0)
0x1a6: Push((int) 518309)
0x1a7: Push((int) 19414)
0x1a8: Push((int) 19413)
0x1a9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1aa: Pop(3)
0x1ab: Push((int) 518340)
0x1ac: Push((int) 19451)
0x1ad: Push((int) 19450)
0x1ae: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1af: Pop(3)
0x1b0: Return(); Pop(0)

0x1b1: Push((int) 19451)
0x1b2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1b3: IF (Stack[-1] == 0) GOTO 0x1c3; Pop(1)

0x1b4: PushEmpty(string)
0x1b5: Stack[-1] = "Neutral"
0x1b6: Call2 0xa2

0x1b7: Pop(1)
0x1b8: Push((int) 518341)
0x1b9: @@ SetMessage(Stack[-1])
0x1ba: Pop(1)
0x1bb: @@ ClearReplies()
0x1bc: Pop(0)
0x1bd: Push((int) 518342)
0x1be: Push((int) 19414)
0x1bf: Push((int) 19452)
0x1c0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1c1: Pop(3)
0x1c2: Return(); Pop(0)

0x1c3: Push((int) 19414)
0x1c4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1c5: IF (Stack[-1] == 0) GOTO 0x1da; Pop(1)

0x1c6: PushEmpty(string)
0x1c7: Stack[-1] = "Neutral"
0x1c8: Call2 0xa2

0x1c9: Pop(1)
0x1ca: Push((int) 518310)
0x1cb: @@ SetMessage(Stack[-1])
0x1cc: Pop(1)
0x1cd: @@ ClearReplies()
0x1ce: Pop(0)
0x1cf: Push((int) 518311)
0x1d0: Push((int) 19417)
0x1d1: Push((int) 19415)
0x1d2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1d3: Pop(3)
0x1d4: Push((int) 527138)
0x1d5: Push((int) 19417)
0x1d6: Push((int) 28436)
0x1d7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1d8: Pop(3)
0x1d9: Return(); Pop(0)

0x1da: Push((int) 19417)
0x1db: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1dc: IF (Stack[-1] == 0) GOTO 0x1f1; Pop(1)

0x1dd: PushEmpty(string)
0x1de: Stack[-1] = "Neutral"
0x1df: Call2 0xa2

0x1e0: Pop(1)
0x1e1: Push((int) 518313)
0x1e2: @@ SetMessage(Stack[-1])
0x1e3: Pop(1)
0x1e4: @@ ClearReplies()
0x1e5: Pop(0)
0x1e6: Push((int) 527017)
0x1e7: Push((int) 28301)
0x1e8: Push((int) 28300)
0x1e9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ea: Pop(3)
0x1eb: Push((int) 518343)
0x1ec: Push((int) 19455)
0x1ed: Push((int) 19454)
0x1ee: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ef: Pop(3)
0x1f0: Return(); Pop(0)

0x1f1: Push((int) 19455)
0x1f2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1f3: IF (Stack[-1] == 0) GOTO 0x203; Pop(1)

0x1f4: PushEmpty(string)
0x1f5: Stack[-1] = "Neutral"
0x1f6: Call2 0xa2

0x1f7: Pop(1)
0x1f8: Push((int) 518344)
0x1f9: @@ SetMessage(Stack[-1])
0x1fa: Pop(1)
0x1fb: @@ ClearReplies()
0x1fc: Pop(0)
0x1fd: Push((int) 518345)
0x1fe: Push((int) 19457)
0x1ff: Push((int) 19456)
0x200: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x201: Pop(3)
0x202: Return(); Pop(0)

0x203: Push((int) 19457)
0x204: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x205: IF (Stack[-1] == 0) GOTO 0x21a; Pop(1)

0x206: PushEmpty(string)
0x207: Stack[-1] = "Neutral"
0x208: Call2 0xa2

0x209: Pop(1)
0x20a: Push((int) 518346)
0x20b: @@ SetMessage(Stack[-1])
0x20c: Pop(1)
0x20d: @@ ClearReplies()
0x20e: Pop(0)
0x20f: Push((int) 518347)
0x210: Push((int) 19418)
0x211: Push((int) 19458)
0x212: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x213: Pop(3)
0x214: Push((int) 518348)
0x215: Push((int) -1)
0x216: Push((int) 19459)
0x217: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x218: Pop(3)
0x219: Return(); Pop(0)

0x21a: Push((int) 28301)
0x21b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x21c: IF (Stack[-1] == 0) GOTO 0x22c; Pop(1)

0x21d: PushEmpty(string)
0x21e: Stack[-1] = "Neutral"
0x21f: Call2 0xa2

0x220: Pop(1)
0x221: Push((int) 527018)
0x222: @@ SetMessage(Stack[-1])
0x223: Pop(1)
0x224: @@ ClearReplies()
0x225: Pop(0)
0x226: Push((int) 518312)
0x227: Push((int) 19418)
0x228: Push((int) 19416)
0x229: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x22a: Pop(3)
0x22b: Return(); Pop(0)

0x22c: Push((int) 19418)
0x22d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x22e: IF (Stack[-1] == 0) GOTO 0x243; Pop(1)

0x22f: PushEmpty(string)
0x230: Stack[-1] = "Neutral"
0x231: Call2 0xa2

0x232: Pop(1)
0x233: Push((int) 518314)
0x234: @@ SetMessage(Stack[-1])
0x235: Pop(1)
0x236: @@ ClearReplies()
0x237: Pop(0)
0x238: Push((int) 518315)
0x239: Push((int) 19420)
0x23a: Push((int) 19419)
0x23b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x23c: Pop(3)
0x23d: Push((int) 518339)
0x23e: Push((int) 19420)
0x23f: Push((int) 19449)
0x240: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x241: Pop(3)
0x242: Return(); Pop(0)

0x243: Push((int) 19420)
0x244: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x245: IF (Stack[-1] == 0) GOTO 0x25a; Pop(1)

0x246: PushEmpty(string)
0x247: Stack[-1] = "Neutral"
0x248: Call2 0xa2

0x249: Pop(1)
0x24a: Push((int) 518316)
0x24b: @@ SetMessage(Stack[-1])
0x24c: Pop(1)
0x24d: @@ ClearReplies()
0x24e: Pop(0)
0x24f: Push((int) 518317)
0x250: Push((int) -1)
0x251: Push((int) 19421)
0x252: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x253: Pop(3)
0x254: Push((int) 518318)
0x255: Push((int) -1)
0x256: Push((int) 19422)
0x257: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x258: Pop(3)
0x259: Return(); Pop(0)

0x25a: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x25b: PushEmpty(bool)
0x25c: Call2 0x3d9

0x25d: Pop(0)
0x25e: IF (Stack[-1] == 0) GOTO 0x262; Pop(1)

0x25f: @ lshStopAnimation()
0x260: Pop(0)
0x261: GOTO 0x264

0x262: @ StopAnimation()
0x263: Pop(0)
0x264: Return(); Pop(0)

0x265: GOTO 0xb9

0x266: Return(); Pop(0)

0x267: PushEmpty(float, float)
0x268: Stack[-2] = (int) 300
0x269: Stack[-1] = (int) 100
0x26a: Call2 0x27c

0x26b: Pop(2)
0x26c: Push((int) 3)
0x26d: @ Sleep(Stack[-1])
0x26e: Pop(1)
0x26f: GOTO 0x267

0x270: Return(); Pop(0)

0x271: PushEmpty()
0x272: PushEmpty()
0x273: Call2 0x2bd

0x274: Pop(0)
0x275: PushEmpty(int, object)
0x276: Stack[-1] = Stack[-3]
0x277: Push(-2, 1); TaskCall(0)
0x278: Call2 0x0

0x279: Pop(-2, 1); TaskReturn
0x27a: Pop(2)
0x27b: Return(); Pop(0)

0x27c: PushEmpty()
0x27d: PushEmpty(bool)
0x27e: Call2 0x329

0x27f: Pop(0)
0x280: Pop(1); Push((bool) Stack[-1] == 0)
0x281: IF (Stack[-1] == 0) GOTO 0x283; Pop(1)

0x282: Return(); Pop(0)

0x283: Push("player")
0x284: @ FindActor(Stack[-4], Stack[-1])
0x285: Pop(1)
0x286: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x287: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x288: Stack[0 + Tasks[-1].StackPointer] = Stack[-2]
0x289: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x28a: Push((int) 10)
0x28b: Push((float)1.0)
0x28c: @ SetTimer(Stack[-2], Stack[-1])
0x28d: Pop(2)
0x28e: PushEmpty()
0x28f: Call2 0x2cb

0x290: Pop(0)
0x291: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x292: IF (Stack[-1] == 0) GOTO 0x296; Pop(1)

0x293: Push((int) 10)
0x294: @ KillTimer(Stack[-1])
0x295: Pop(1)
0x296: Return(); Pop(0)

0x297: PushEmpty(float, float)
0x298: Pop(0); Push((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0x299: IF (Stack[-1] == 0) GOTO 0x29c; Pop(1)

0x29a: Stack[-3] = (bool) 0
0x29b: Return(); Pop(2)

0x29c: PushEmpty(float, object)
0x29d: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x29e: Call2 0x321

0x29f: Pop(1)
0x2a0: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x2a1: Push( Stack[2 + Tasks[-1].StackPointer] )
0x2a2: IF (Stack[-1] == 0) GOTO 0x2a4; Pop(1)

0x2a3: Stack[-1] = Stack[-1] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x2a4: Stack[-3] = Stack[-1] < Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x2a5: Return(); Pop(2)

0x2a6: PushEmpty()
0x2a7: Push((int) 10)
0x2a8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2a9: IF (Stack[-1] == 0) GOTO 0x2bc; Pop(1)

0x2aa: PushEmpty(bool)
0x2ab: Call2 0x297

0x2ac: Pop(0)
0x2ad: IF (Stack[-1] == 0) GOTO 0x2b6; Pop(1)

0x2ae: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x2af: IF (Stack[-1] == 0) GOTO 0x2b5; Pop(1)

0x2b0: PushEmpty(object)
0x2b1: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x2b2: Call2 0x3a4

0x2b3: Pop(1)
0x2b4: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x2b5: GOTO 0x2bc

0x2b6: Push( Stack[2 + Tasks[-1].StackPointer] )
0x2b7: IF (Stack[-1] == 0) GOTO 0x2bc; Pop(1)

0x2b8: Push("head")
0x2b9: @ UnlookAsync(Stack[-1])
0x2ba: Pop(1)
0x2bb: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x2bc: Return(); Pop(0)

0x2bd: PushEmpty()
0x2be: Call2 0x31c

0x2bf: Pop(0)
0x2c0: Push((int) 10)
0x2c1: @ KillTimer(Stack[-1])
0x2c2: Pop(1)
0x2c3: Push( Stack[2 + Tasks[-1].StackPointer] )
0x2c4: IF (Stack[-1] == 0) GOTO 0x2c9; Pop(1)

0x2c5: Push("head")
0x2c6: @ UnlookAsync(Stack[-1])
0x2c7: Pop(1)
0x2c8: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x2c9: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x2ca: Return(); Pop(0)

0x2cb: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x2cc: @ WaitForAnimEnd()
0x2cd: Pop(0)
0x2ce: PushEmpty(bool)
0x2cf: Call2 0x329

0x2d0: Pop(0)
0x2d1: Pop(1); Push((bool) Stack[-1] == 0)
0x2d2: IF (Stack[-1] == 0) GOTO 0x2d4; Pop(1)

0x2d3: Return(); Pop(14)

0x2d4: PushEmpty(int)
0x2d5: Call2 0x3e2

0x2d6: Stack[-8] = Stack[-1]
0x2d7: Pop(1)
0x2d8: Stack[-6] = (int) 0
0x2d9: PushEmpty(bool)
0x2da: Stack[-1] = (bool) 0
0x2db: Push((int) 5)
0x2dc: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x2dd: IF (Stack[-1] == 0) GOTO 0x2e3; Pop(1)

0x2de: PushEmpty(bool)
0x2df: Call2 0x329

0x2e0: Pop(0)
0x2e1: IF (Stack[-1] == 0) GOTO 0x2e3; Pop(1)

0x2e2: Stack[-1] = (bool) 1
0x2e3: IF (Stack[-1] == 0) GOTO 0x317; Pop(1)

0x2e4: Push((int) 3)
0x2e5: @ irand(Stack[-6], Stack[-1])
0x2e6: Pop(1)
0x2e7: Push((int) 0)
0x2e8: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x2e9: IF (Stack[-1] == 0) GOTO 0x2fb; Pop(1)

0x2ea: Push(Stack[-7])
0x2eb: IF (Stack[-1] == 0) GOTO 0x2fa; Pop(1)

0x2ec: @ irand(Stack[-4], Stack[-7])
0x2ed: Pop(0)
0x2ee: Push("all")
0x2ef: PushEmpty(string, int)
0x2f0: Stack[-1] = Stack[-7]
0x2f1: Call2 0x3db

0x2f2: Pop(1)
0x2f3: @ PlayAnimation(Stack[-2], Stack[-1])
0x2f4: Pop(2)
0x2f5: @ WaitForAnimEnd(Stack[-3])
0x2f6: Pop(0)
0x2f7: Pop(0); Push((bool) Stack[-3] == 0)
0x2f8: IF (Stack[-1] == 0) GOTO 0x2fa; Pop(1)

0x2f9: GOTO 0x317

0x2fa: GOTO 0x30c

0x2fb: Push((int) 1)
0x2fc: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x2fd: IF (Stack[-1] == 0) GOTO 0x309; Pop(1)

0x2fe: Push((int) 4)
0x2ff: @ rand(Stack[-3], Stack[-1])
0x300: Pop(1)
0x301: Push((int) 1)
0x302: Pop(1); Push(Stack[-3] + Stack[-1]);
0x303: @ Sleep(Stack[-1], Stack[-2])
0x304: Pop(1)
0x305: Pop(0); Push((bool) Stack[-1] == 0)
0x306: IF (Stack[-1] == 0) GOTO 0x308; Pop(1)

0x307: GOTO 0x317

0x308: GOTO 0x30c

0x309: Push(Stack[-6])
0x30a: IF (Stack[-1] == 0) GOTO 0x30c; Pop(1)

0x30b: GOTO 0x317

0x30c: PushEmpty(bool)
0x30d: Call2 0x31a

0x30e: Pop(0)
0x30f: Pop(1); Push((bool) Stack[-1] == 0)
0x310: IF (Stack[-1] == 0) GOTO 0x312; Pop(1)

0x311: GOTO 0x317

0x312: @ ResetAAS()
0x313: Pop(0)
0x314: Push((int) 1)
0x315: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x316: GOTO 0x2d9

0x317: @ ResetAAS()
0x318: Pop(0)
0x319: Return(); Pop(14)

0x31a: Stack[-1] = (bool) 1
0x31b: Return(); Pop(0)

0x31c: @ StopAnimation()
0x31d: Pop(0)
0x31e: @ StopGroup0()
0x31f: Pop(0)
0x320: Return(); Pop(0)

0x321: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x322: @ GetPosition(Stack[-3])
0x323: Pop(0)
0x324: @@ GetPosition(Stack[-2])
0x325: Pop(0)
0x326: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x327: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x328: Return(); Pop(6)

0x329: PushEmpty(bool, bool)
0x32a: @ IsLoaded(Stack[-1])
0x32b: Pop(0)
0x32c: Stack[-3] = Stack[-1]
0x32d: Return(); Pop(2)

0x32e: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x32f: @@ GetPosition(Stack[-8])
0x330: Pop(0)
0x331: @@ GetEyesHeight(Stack[-9])
0x332: Pop(0)
0x333: Push(CvectorIndex(Stack[-8], 1))
0x334: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x335: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x336: @ GetPosition(Stack[-7])
0x337: Pop(0)
0x338: @ GetEyesHeight(Stack[-9])
0x339: Pop(0)
0x33a: Push(CvectorIndex(Stack[-7], 1))
0x33b: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x33c: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x33d: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x33e: Push(CvectorIndex(Stack[-6], 1))
0x33f: Stack[-1] = (int) 0
0x340: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x341: Pop(0); Push(Stack[-6] | Stack[-6]);
0x342: Pop(1); Push(Sqrt(Stack[-1]))
0x343: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x344: Stack[-5] = -Stack[-6]; Pop(0);
0x345: Pop(0); Push(Stack[-6] * Stack[-19]);
0x346: PushEmpty(cvector, cvector)
0x347: Push(CVector(0.0, 1.0, 0.0))
0x348: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x349: Call2 0x3b6

0x34a: Pop(1)
0x34b: Push((int) 25)
0x34c: Pop(2); Push(Stack[-2] * Stack[-1]);
0x34d: Pop(2); Push(Stack[-2] + Stack[-1]);
0x34e: Push(CVector(0.0, 10.0, 0.0))
0x34f: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x350: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x351: @ IsOverrideActive(Stack[-2])
0x352: Pop(0)
0x353: Push(Stack[-2])
0x354: IF (Stack[-1] == 0) GOTO 0x357; Pop(1)

0x355: Stack[-21] = (bool) 0
0x356: Return(); Pop(18)

0x357: @ StopWorld()
0x358: Pop(0)
0x359: Push((bool) 1)
0x35a: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0x35b: Pop(1)
0x35c: Push(CvectorIndex(Stack[-4], 0))
0x35d: Push(CvectorIndex(Stack[-5], 2))
0x35e: @ Rotate(Stack[-2], Stack[-1])
0x35f: Pop(2)
0x360: PushEmpty(bool)
0x361: Call2 0x3d9

0x362: Pop(0)
0x363: IF (Stack[-1] == 0) GOTO 0x365; Pop(1)

0x364: GOTO 0x36d

0x365: Push("head")
0x366: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x367: Pop(1)
0x368: Push(Stack[-1])
0x369: IF (Stack[-1] == 0) GOTO 0x36d; Pop(1)

0x36a: Push("head")
0x36b: @ LookAsyncCamera(Stack[-1])
0x36c: Pop(1)
0x36d: @ CameraWaitForPlayFinish()
0x36e: Pop(0)
0x36f: @ ResumeWorld()
0x370: Pop(0)
0x371: Stack[-21] = (bool) 1
0x372: Return(); Pop(18)

0x373: PushEmpty(bool, bool)
0x374: Push((bool) 1)
0x375: @ CameraSwitchToNormal(Stack[-1])
0x376: Pop(1)
0x377: PushEmpty(bool)
0x378: Call2 0x3d9

0x379: Pop(0)
0x37a: IF (Stack[-1] == 0) GOTO 0x37c; Pop(1)

0x37b: GOTO 0x384

0x37c: Push("head")
0x37d: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x37e: Pop(1)
0x37f: Push(Stack[-1])
0x380: IF (Stack[-1] == 0) GOTO 0x384; Pop(1)

0x381: Push("head")
0x382: @ UnlookAsync(Stack[-1])
0x383: Pop(1)
0x384: Return(); Pop(2)

0x385: PushEmpty(bool, float, float, bool, float, float)
0x386: @ lshHasAnimation(Stack[-3], Stack[-7])
0x387: Pop(0)
0x388: Push(Stack[-3])
0x389: IF (Stack[-1] == 0) GOTO 0x390; Pop(1)

0x38a: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x38b: Pop(0)
0x38c: Push((bool) 0)
0x38d: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x38e: Pop(1)
0x38f: GOTO 0x394

0x390: Push("Can't find lsh animation : ")
0x391: Pop(1); Push(Stack[-1] + Stack[-8]);
0x392: @ Trace(Stack[-1])
0x393: Pop(1)
0x394: Return(); Pop(6)

0x395: PushEmpty(bool, float, float, bool, float, float)
0x396: @ lshHasAnimation(Stack[-3], Stack[-8])
0x397: Pop(0)
0x398: Push(Stack[-3])
0x399: IF (Stack[-1] == 0) GOTO 0x39f; Pop(1)

0x39a: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x39b: Pop(0)
0x39c: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x39d: Pop(0)
0x39e: GOTO 0x3a3

0x39f: Push("Can't find lsh animation : ")
0x3a0: Pop(1); Push(Stack[-1] + Stack[-9]);
0x3a1: @ Trace(Stack[-1])
0x3a2: Pop(1)
0x3a3: Return(); Pop(6)

0x3a4: PushEmpty(float, cvector, float, cvector)
0x3a5: @@ GetEyesHeight(Stack[-2])
0x3a6: Pop(0)
0x3a7: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x3a8: Push(CvectorIndex(Stack[-1], 1))
0x3a9: Stack[-1] = Stack[-3]
0x3aa: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x3ab: Push("head")
0x3ac: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x3ad: Pop(1)
0x3ae: Return(); Pop(4)

0x3af: PushEmpty(bool)
0x3b0: Call2 0x3d9

0x3b1: Pop(0)
0x3b2: IF (Stack[-1] == 0) GOTO 0x3b5; Pop(1)

0x3b3: @ lshStopSpeech()
0x3b4: Pop(0)
0x3b5: Return(); Pop(0)

0x3b6: PushEmpty(float, float)
0x3b7: Pop(0); Push(Stack[-3] | Stack[-3]);
0x3b8: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x3b9: Push((float)0.0)
0x3ba: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x3bb: IF (Stack[-1] == 0) GOTO 0x3be; Pop(1)

0x3bc: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x3bd: Return(); Pop(2)

0x3be: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x3bf: Return(); Pop(2)

0x3c0: PushEmpty(int, int)
0x3c1: @ GetVariable(Stack[-3], Stack[-1])
0x3c2: Pop(0)
0x3c3: Stack[-4] = Stack[-1]
0x3c4: Return(); Pop(2)

0x3c5: PushEmpty(object, object)
0x3c6: @ FindActor(Stack[-1], Stack[-4])
0x3c7: Pop(0)
0x3c8: Pop(0); Push((bool) Stack[-1] == 0)
0x3c9: IF (Stack[-1] == 0) GOTO 0x3cc; Pop(1)

0x3ca: Stack[-5] = (bool) 0
0x3cb: Return(); Pop(2)

0x3cc: @ Trigger(Stack[-1], Stack[-3])
0x3cd: Pop(0)
0x3ce: Stack[-5] = (bool) 1
0x3cf: Return(); Pop(2)

0x3d0: Stack[-1] = 0
0x3d1: Stack[-1] = (int) 515571
0x3d2: Return(); Pop(0)

0x3d3: Stack[-1] = (int) 504029
0x3d4: Return(); Pop(0)

0x3d5: Stack[-1] = "ui/NPC_bmask.png"
0x3d6: Return(); Pop(0)

0x3d7: Stack[-1] = "ui/NPC_bmask_b.png"
0x3d8: Return(); Pop(0)

0x3d9: Stack[-1] = (bool) 0
0x3da: Return(); Pop(0)

0x3db: PushEmpty(string, string)
0x3dc: Stack[-1] = "idle"
0x3dd: Push(Stack[-3])
0x3de: IF (Stack[-1] == 0) GOTO 0x3e0; Pop(1)

0x3df: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x3e0: Stack[-4] = Stack[-1]
0x3e1: Return(); Pop(2)

0x3e2: PushEmpty(int, bool, int, bool)
0x3e3: Stack[-2] = (int) 0
0x3e4: Push("all")
0x3e5: PushEmpty(string, int)
0x3e6: Stack[-1] = Stack[-5]
0x3e7: Call2 0x3db

0x3e8: Pop(1)
0x3e9: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x3ea: Pop(2)
0x3eb: Pop(0); Push((bool) Stack[-1] == 0)
0x3ec: IF (Stack[-1] == 0) GOTO 0x3ee; Pop(1)

0x3ed: GOTO 0x3f1

0x3ee: Push((int) 1)
0x3ef: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x3f0: GOTO 0x3e4

0x3f1: Stack[-5] = Stack[-2]
0x3f2: Return(); Pop(4)

0x3f3: PushEmpty()
0x3f4: Push("oob1Birdmask1_1")
0x3f5: Push((int) 1)
0x3f6: @ SetVariable(Stack[-2], Stack[-1])
0x3f7: Pop(2)
0x3f8: PushEmpty(bool, string, string)
0x3f9: Stack[-2] = "quest_b1_01"
0x3fa: Stack[-1] = "remove1"
0x3fb: Call2 0x3c5

0x3fc: Pop(3)
0x3fd: Return(); Pop(0)

0x3fe: PushEmpty()
0x3ff: PushEmpty(object, string, float)
0x400: PushEmpty(object)
0x401: Call2 0x41a

0x402: Stack[-4] = Stack[-1]
0x403: Pop(1)
0x404: Stack[-2] = "pt_map_bigvlad"
0x405: Stack[-1] = (int) 2
0x406: Call2 0x42b

0x407: Pop(3)
0x408: PushEmpty(object)
0x409: Call2 0x41a

0x40a: Pop(0)
0x40b: @@ ShowMap(Stack[-1])
0x40c: Pop(1)
0x40d: Return(); Pop(0)

0x40e: PushEmpty()
0x40f: PushEmpty(int, string)
0x410: Stack[-1] = "oob1Birdmask1_1"
0x411: Call2 0x3c0

0x412: Pop(1)
0x413: Push((int) 0)
0x414: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x415: IF (Stack[-1] == 0) GOTO 0x418; Pop(1)

0x416: Stack[-2] = (bool) 1
0x417: Return(); Pop(0)

0x418: Stack[-2] = (bool) 0
0x419: Return(); Pop(0)

0x41a: PushEmpty(object, object, object, object)
0x41b: @ GetMainOutdoorScene(Stack[-2])
0x41c: Pop(0)
0x41d: Pop(0); Push((bool) Stack[-2] == 0)
0x41e: IF (Stack[-1] == 0) GOTO 0x425; Pop(1)

0x41f: Push("Can't find main outdoor scene")
0x420: @ Trace(Stack[-1])
0x421: Pop(1)
0x422: Stack[-1] = 0
0x423: Stack[-5] = Stack[-1]
0x424: Return(); Pop(4)

0x425: @@ GetMap(Stack[-1])
0x426: Pop(0)
0x427: Stack[-5] = Stack[-1]
0x428: Return(); Pop(4)

0x429: Stack[-1] = 0
0x42a: Stack[-2] = 0
0x42b: PushEmpty(cvector, cvector, object, bool, cvector, cvector, object, bool)
0x42c: @ GetMainOutdoorScene(Stack[-2])
0x42d: Pop(0)
0x42e: Pop(0); Push((bool) Stack[-2] == 0)
0x42f: IF (Stack[-1] == 0) GOTO 0x434; Pop(1)

0x430: Push("Can't find main outdoor scene")
0x431: @ Trace(Stack[-1])
0x432: Pop(1)
0x433: Return(); Pop(8)

0x434: @@ GetLocator(Stack[-10], Stack[-1], Stack[-4], Stack[-3])
0x435: Pop(0)
0x436: Pop(0); Push((bool) Stack[-1] == 0)
0x437: IF (Stack[-1] == 0) GOTO 0x43e; Pop(1)

0x438: Push("Warning: outdoor scene locator ")
0x439: Pop(1); Push(Stack[-1] + Stack[-11]);
0x43a: Push(" doesnt exist")
0x43b: Pop(2); Push(Stack[-2] + Stack[-1]);
0x43c: @ Trace(Stack[-1])
0x43d: Pop(1)
0x43e: @@ GetMap(Stack[-11])
0x43f: Pop(0)
0x440: Pop(0); Push((bool) Stack[-11] == 0)
0x441: IF (Stack[-1] == 0) GOTO 0x446; Pop(1)

0x442: Push("Can't find map")
0x443: @ Trace(Stack[-1])
0x444: Pop(1)
0x445: Return(); Pop(8)

0x446: Push(CvectorIndex(Stack[-4], 0))
0x447: Push(CvectorIndex(Stack[-5], 2))
0x448: @@ SetMapParams(Stack[-2], Stack[-1], Stack[-11])
0x449: Pop(2)
0x44a: Return(); Pop(8)

0x44b: Stack[-2] = 0
0x44c: PushEmpty(int, int)
0x44d: Push("branch")
0x44e: @ GetVariable(Stack[-1], Stack[-2])
0x44f: Pop(1)
0x450: Push((int) 0)
0x451: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x452: IF (Stack[-1] == 0) GOTO 0x456; Pop(1)

0x453: Stack[-3] = (int) 1
0x454: Return(); Pop(2)

0x455: GOTO 0x45b

0x456: Push((int) 1)
0x457: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x458: IF (Stack[-1] == 0) GOTO 0x45b; Pop(1)

0x459: Stack[-3] = (int) 2
0x45a: Return(); Pop(2)

0x45b: Stack[-3] = (int) 3
0x45c: Return(); Pop(2)

