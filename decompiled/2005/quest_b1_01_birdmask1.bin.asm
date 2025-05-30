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
	CameraTransit (2 args)
	Rotate (2 args)
	HasAnimationTrack (2 args)
	LookAsyncCamera (1 args)
	CameraWaitForPlayFinish (0 args)
	ResumeWorld (0 args)
	CameraSwitchToNormal (0 args)
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

RunOp = 0x249
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xb3 Vars = (int, int)
	GTASK_2 Vars = (int, int, bool, bool, object) Params = 0
		EVENT_0 Op = 0x253 Vars = (object)
		EVENT_7 Op = 0x288 Vars = (int)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 130.0
0x5: Call2 0x310

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x3b3

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x3b1

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x3b5

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x3b7

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x42c

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
0x41: Call2 0x354

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
0x4f: IF (Stack[-1] == 0) GOTO 0x7f; Pop(1)

0x50: PushEmpty(bool, object)
0x51: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x52: Call2 0x3ee

0x53: Pop(1)
0x54: IF (Stack[-1] == 0) GOTO 0x69; Pop(1)

0x55: PushEmpty(object, object)
0x56: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x57: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x58: Call2 0x3d3

0x59: Pop(2)
0x5a: PushEmpty(string)
0x5b: Stack[-1] = "Neutral"
0x5c: Call2 0x9d

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
0x68: GOTO 0x7f

0x69: PushEmpty(string)
0x6a: Stack[-1] = "Neutral"
0x6b: Call2 0x9d

0x6c: Pop(1)
0x6d: Push((int) 520033)
0x6e: @@ SetMessage(Stack[-1])
0x6f: Pop(1)
0x70: @@ ClearReplies()
0x71: Pop(0)
0x72: Push((int) 520034)
0x73: Push((int) -1)
0x74: Push((int) 21218)
0x75: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x76: Pop(3)
0x77: Push((int) 527016)
0x78: Push((int) -1)
0x79: Push((int) 28299)
0x7a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7b: Pop(3)
0x7c: GOTO 0x7f

0x7d: Return(); Pop(0)

0x7e: GOTO 0x4e

0x7f: PushEmpty(bool)
0x80: Call2 0x3b9

0x81: Pop(0)
0x82: IF (Stack[-1] == 0) GOTO 0x8e; Pop(1)

0x83: @ lshWaitForAnimEnd()
0x84: Pop(0)
0x85: Push( Stack[3 + Tasks[-1].StackPointer] )
0x86: IF (Stack[-1] == 0) GOTO 0x88; Pop(1)

0x87: GOTO 0x8d

0x88: PushEmpty(string)
0x89: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x8a: Call2 0x365

0x8b: Pop(1)
0x8c: GOTO 0x83

0x8d: GOTO 0x9c

0x8e: Push("all")
0x8f: Push("idle")
0x90: @ PlayAnimation(Stack[-2], Stack[-1])
0x91: Pop(2)
0x92: @ WaitForAnimEnd()
0x93: Pop(0)
0x94: Push( Stack[3 + Tasks[-1].StackPointer] )
0x95: IF (Stack[-1] == 0) GOTO 0x97; Pop(1)

0x96: GOTO 0x9c

0x97: Push("all")
0x98: Push("idle")
0x99: @ PlayAnimation(Stack[-2], Stack[-1])
0x9a: Pop(2)
0x9b: GOTO 0x92

0x9c: Return(); Pop(0)

0x9d: PushEmpty()
0x9e: PushEmpty(bool)
0x9f: Call2 0x3b9

0xa0: Pop(0)
0xa1: Pop(1); Push((bool) Stack[-1] == 0)
0xa2: IF (Stack[-1] == 0) GOTO 0xa4; Pop(1)

0xa3: Return(); Pop(0)

0xa4: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xa5: IF (Stack[-1] == 0) GOTO 0xa7; Pop(1)

0xa6: Return(); Pop(0)

0xa7: PushEmpty(string, bool)
0xa8: Stack[-2] = Stack[-3]
0xa9: Push("")
0xaa: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xab: IF (Stack[-1] == 0) GOTO 0xae; Pop(1)

0xac: Stack[-1] = (bool) 0
0xad: GOTO 0xaf

0xae: Stack[-1] = (bool) 1
0xaf: Call2 0x375

0xb0: Pop(2)
0xb1: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xb2: Return(); Pop(0)

0xb3: PushEmpty()
0xb4: Push((int) 1)
0xb5: IF (Stack[-1] == 0) GOTO 0x248; Pop(1)

0xb6: PushEmpty()
0xb7: Call2 0x38f

0xb8: Pop(0)
0xb9: Push((int) 19421)
0xba: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xbb: IF (Stack[-1] == 0) GOTO 0xc1; Pop(1)

0xbc: PushEmpty(object, object)
0xbd: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xbe: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xbf: Call2 0x3de

0xc0: Pop(2)
0xc1: Push((int) 19422)
0xc2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xc3: IF (Stack[-1] == 0) GOTO 0xc9; Pop(1)

0xc4: PushEmpty(object, object)
0xc5: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc7: Call2 0x3de

0xc8: Pop(2)
0xc9: Push((int) 19238)
0xca: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xcb: IF (Stack[-1] == 0) GOTO 0xf9; Pop(1)

0xcc: PushEmpty(bool, object)
0xcd: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xce: Call2 0x3ee

0xcf: Pop(1)
0xd0: IF (Stack[-1] == 0) GOTO 0xe5; Pop(1)

0xd1: PushEmpty(object, object)
0xd2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd4: Call2 0x3d3

0xd5: Pop(2)
0xd6: PushEmpty(string)
0xd7: Stack[-1] = "Neutral"
0xd8: Call2 0x9d

0xd9: Pop(1)
0xda: Push((int) 518119)
0xdb: @@ SetMessage(Stack[-1])
0xdc: Pop(1)
0xdd: @@ ClearReplies()
0xde: Pop(0)
0xdf: Push((int) 518120)
0xe0: Push((int) 19389)
0xe1: Push((int) 19239)
0xe2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe3: Pop(3)
0xe4: Return(); Pop(0)

0xe5: PushEmpty(string)
0xe6: Stack[-1] = "Neutral"
0xe7: Call2 0x9d

0xe8: Pop(1)
0xe9: Push((int) 520033)
0xea: @@ SetMessage(Stack[-1])
0xeb: Pop(1)
0xec: @@ ClearReplies()
0xed: Pop(0)
0xee: Push((int) 520034)
0xef: Push((int) -1)
0xf0: Push((int) 21218)
0xf1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf2: Pop(3)
0xf3: Push((int) 527016)
0xf4: Push((int) -1)
0xf5: Push((int) 28299)
0xf6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf7: Pop(3)
0xf8: Return(); Pop(0)

0xf9: Push((int) 19426)
0xfa: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xfb: IF (Stack[-1] == 0) GOTO 0xfc; Pop(1)

0xfc: Push((int) 28297)
0xfd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xfe: IF (Stack[-1] == 0) GOTO 0x10e; Pop(1)

0xff: PushEmpty(string)
0x100: Stack[-1] = "Neutral"
0x101: Call2 0x9d

0x102: Pop(1)
0x103: Push((int) 527014)
0x104: @@ SetMessage(Stack[-1])
0x105: Pop(1)
0x106: @@ ClearReplies()
0x107: Pop(0)
0x108: Push((int) 527015)
0x109: Push((int) 19389)
0x10a: Push((int) 28298)
0x10b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10c: Pop(3)
0x10d: Return(); Pop(0)

0x10e: Push((int) 19429)
0x10f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x110: IF (Stack[-1] == 0) GOTO 0x120; Pop(1)

0x111: PushEmpty(string)
0x112: Stack[-1] = "Neutral"
0x113: Call2 0x9d

0x114: Pop(1)
0x115: Push((int) 518325)
0x116: @@ SetMessage(Stack[-1])
0x117: Pop(1)
0x118: @@ ClearReplies()
0x119: Pop(0)
0x11a: Push((int) 518326)
0x11b: Push((int) 19389)
0x11c: Push((int) 19430)
0x11d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11e: Pop(3)
0x11f: Return(); Pop(0)

0x120: Push((int) 19389)
0x121: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x122: IF (Stack[-1] == 0) GOTO 0x13c; Pop(1)

0x123: PushEmpty(string)
0x124: Stack[-1] = "Neutral"
0x125: Call2 0x9d

0x126: Pop(1)
0x127: Push((int) 518286)
0x128: @@ SetMessage(Stack[-1])
0x129: Pop(1)
0x12a: @@ ClearReplies()
0x12b: Pop(0)
0x12c: Push((int) 518287)
0x12d: Push((int) 19391)
0x12e: Push((int) 19390)
0x12f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x130: Pop(3)
0x131: Push((int) 518320)
0x132: Push((int) 19391)
0x133: Push((int) 19424)
0x134: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x135: Pop(3)
0x136: Push((int) 518327)
0x137: Push((int) 19391)
0x138: Push((int) 19432)
0x139: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x13a: Pop(3)
0x13b: Return(); Pop(0)

0x13c: Push((int) 19391)
0x13d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x13e: IF (Stack[-1] == 0) GOTO 0x153; Pop(1)

0x13f: PushEmpty(string)
0x140: Stack[-1] = "Neutral"
0x141: Call2 0x9d

0x142: Pop(1)
0x143: Push((int) 518288)
0x144: @@ SetMessage(Stack[-1])
0x145: Pop(1)
0x146: @@ ClearReplies()
0x147: Pop(0)
0x148: Push((int) 518307)
0x149: Push((int) 19412)
0x14a: Push((int) 19411)
0x14b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x14c: Pop(3)
0x14d: Push((int) 518321)
0x14e: Push((int) 19436)
0x14f: Push((int) 19425)
0x150: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x151: Pop(3)
0x152: Return(); Pop(0)

0x153: Push((int) 19436)
0x154: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x155: IF (Stack[-1] == 0) GOTO 0x16a; Pop(1)

0x156: PushEmpty(string)
0x157: Stack[-1] = "Neutral"
0x158: Call2 0x9d

0x159: Pop(1)
0x15a: Push((int) 518330)
0x15b: @@ SetMessage(Stack[-1])
0x15c: Pop(1)
0x15d: @@ ClearReplies()
0x15e: Pop(0)
0x15f: Push((int) 518332)
0x160: Push((int) 19412)
0x161: Push((int) 19440)
0x162: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x163: Pop(3)
0x164: Push((int) 518333)
0x165: Push((int) -1)
0x166: Push((int) 19441)
0x167: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x168: Pop(3)
0x169: Return(); Pop(0)

0x16a: Push((int) 19412)
0x16b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x16c: IF (Stack[-1] == 0) GOTO 0x17c; Pop(1)

0x16d: PushEmpty(string)
0x16e: Stack[-1] = "Neutral"
0x16f: Call2 0x9d

0x170: Pop(1)
0x171: Push((int) 518308)
0x172: @@ SetMessage(Stack[-1])
0x173: Pop(1)
0x174: @@ ClearReplies()
0x175: Pop(0)
0x176: Push((int) 518334)
0x177: Push((int) 19444)
0x178: Push((int) 19443)
0x179: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x17a: Pop(3)
0x17b: Return(); Pop(0)

0x17c: Push((int) 19444)
0x17d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x17e: IF (Stack[-1] == 0) GOTO 0x193; Pop(1)

0x17f: PushEmpty(string)
0x180: Stack[-1] = "Neutral"
0x181: Call2 0x9d

0x182: Pop(1)
0x183: Push((int) 518335)
0x184: @@ SetMessage(Stack[-1])
0x185: Pop(1)
0x186: @@ ClearReplies()
0x187: Pop(0)
0x188: Push((int) 518309)
0x189: Push((int) 19414)
0x18a: Push((int) 19413)
0x18b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x18c: Pop(3)
0x18d: Push((int) 518340)
0x18e: Push((int) 19451)
0x18f: Push((int) 19450)
0x190: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x191: Pop(3)
0x192: Return(); Pop(0)

0x193: Push((int) 19451)
0x194: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x195: IF (Stack[-1] == 0) GOTO 0x1a5; Pop(1)

0x196: PushEmpty(string)
0x197: Stack[-1] = "Neutral"
0x198: Call2 0x9d

0x199: Pop(1)
0x19a: Push((int) 518341)
0x19b: @@ SetMessage(Stack[-1])
0x19c: Pop(1)
0x19d: @@ ClearReplies()
0x19e: Pop(0)
0x19f: Push((int) 518342)
0x1a0: Push((int) 19414)
0x1a1: Push((int) 19452)
0x1a2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1a3: Pop(3)
0x1a4: Return(); Pop(0)

0x1a5: Push((int) 19414)
0x1a6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1a7: IF (Stack[-1] == 0) GOTO 0x1bc; Pop(1)

0x1a8: PushEmpty(string)
0x1a9: Stack[-1] = "Neutral"
0x1aa: Call2 0x9d

0x1ab: Pop(1)
0x1ac: Push((int) 518310)
0x1ad: @@ SetMessage(Stack[-1])
0x1ae: Pop(1)
0x1af: @@ ClearReplies()
0x1b0: Pop(0)
0x1b1: Push((int) 518311)
0x1b2: Push((int) 19417)
0x1b3: Push((int) 19415)
0x1b4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1b5: Pop(3)
0x1b6: Push((int) 527138)
0x1b7: Push((int) 19417)
0x1b8: Push((int) 28436)
0x1b9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ba: Pop(3)
0x1bb: Return(); Pop(0)

0x1bc: Push((int) 19417)
0x1bd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1be: IF (Stack[-1] == 0) GOTO 0x1d3; Pop(1)

0x1bf: PushEmpty(string)
0x1c0: Stack[-1] = "Neutral"
0x1c1: Call2 0x9d

0x1c2: Pop(1)
0x1c3: Push((int) 518313)
0x1c4: @@ SetMessage(Stack[-1])
0x1c5: Pop(1)
0x1c6: @@ ClearReplies()
0x1c7: Pop(0)
0x1c8: Push((int) 527017)
0x1c9: Push((int) 28301)
0x1ca: Push((int) 28300)
0x1cb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1cc: Pop(3)
0x1cd: Push((int) 518343)
0x1ce: Push((int) 19455)
0x1cf: Push((int) 19454)
0x1d0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1d1: Pop(3)
0x1d2: Return(); Pop(0)

0x1d3: Push((int) 19455)
0x1d4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1d5: IF (Stack[-1] == 0) GOTO 0x1e5; Pop(1)

0x1d6: PushEmpty(string)
0x1d7: Stack[-1] = "Neutral"
0x1d8: Call2 0x9d

0x1d9: Pop(1)
0x1da: Push((int) 518344)
0x1db: @@ SetMessage(Stack[-1])
0x1dc: Pop(1)
0x1dd: @@ ClearReplies()
0x1de: Pop(0)
0x1df: Push((int) 518345)
0x1e0: Push((int) 19457)
0x1e1: Push((int) 19456)
0x1e2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1e3: Pop(3)
0x1e4: Return(); Pop(0)

0x1e5: Push((int) 19457)
0x1e6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1e7: IF (Stack[-1] == 0) GOTO 0x1fc; Pop(1)

0x1e8: PushEmpty(string)
0x1e9: Stack[-1] = "Neutral"
0x1ea: Call2 0x9d

0x1eb: Pop(1)
0x1ec: Push((int) 518346)
0x1ed: @@ SetMessage(Stack[-1])
0x1ee: Pop(1)
0x1ef: @@ ClearReplies()
0x1f0: Pop(0)
0x1f1: Push((int) 518347)
0x1f2: Push((int) 19418)
0x1f3: Push((int) 19458)
0x1f4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1f5: Pop(3)
0x1f6: Push((int) 518348)
0x1f7: Push((int) -1)
0x1f8: Push((int) 19459)
0x1f9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1fa: Pop(3)
0x1fb: Return(); Pop(0)

0x1fc: Push((int) 28301)
0x1fd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1fe: IF (Stack[-1] == 0) GOTO 0x20e; Pop(1)

0x1ff: PushEmpty(string)
0x200: Stack[-1] = "Neutral"
0x201: Call2 0x9d

0x202: Pop(1)
0x203: Push((int) 527018)
0x204: @@ SetMessage(Stack[-1])
0x205: Pop(1)
0x206: @@ ClearReplies()
0x207: Pop(0)
0x208: Push((int) 518312)
0x209: Push((int) 19418)
0x20a: Push((int) 19416)
0x20b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x20c: Pop(3)
0x20d: Return(); Pop(0)

0x20e: Push((int) 19418)
0x20f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x210: IF (Stack[-1] == 0) GOTO 0x225; Pop(1)

0x211: PushEmpty(string)
0x212: Stack[-1] = "Neutral"
0x213: Call2 0x9d

0x214: Pop(1)
0x215: Push((int) 518314)
0x216: @@ SetMessage(Stack[-1])
0x217: Pop(1)
0x218: @@ ClearReplies()
0x219: Pop(0)
0x21a: Push((int) 518315)
0x21b: Push((int) 19420)
0x21c: Push((int) 19419)
0x21d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x21e: Pop(3)
0x21f: Push((int) 518339)
0x220: Push((int) 19420)
0x221: Push((int) 19449)
0x222: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x223: Pop(3)
0x224: Return(); Pop(0)

0x225: Push((int) 19420)
0x226: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x227: IF (Stack[-1] == 0) GOTO 0x23c; Pop(1)

0x228: PushEmpty(string)
0x229: Stack[-1] = "Neutral"
0x22a: Call2 0x9d

0x22b: Pop(1)
0x22c: Push((int) 518316)
0x22d: @@ SetMessage(Stack[-1])
0x22e: Pop(1)
0x22f: @@ ClearReplies()
0x230: Pop(0)
0x231: Push((int) 518317)
0x232: Push((int) -1)
0x233: Push((int) 19421)
0x234: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x235: Pop(3)
0x236: Push((int) 518318)
0x237: Push((int) -1)
0x238: Push((int) 19422)
0x239: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x23a: Pop(3)
0x23b: Return(); Pop(0)

0x23c: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x23d: PushEmpty(bool)
0x23e: Call2 0x3b9

0x23f: Pop(0)
0x240: IF (Stack[-1] == 0) GOTO 0x244; Pop(1)

0x241: @ lshStopAnimation()
0x242: Pop(0)
0x243: GOTO 0x246

0x244: @ StopAnimation()
0x245: Pop(0)
0x246: Return(); Pop(0)

0x247: GOTO 0xb4

0x248: Return(); Pop(0)

0x249: PushEmpty(float, float)
0x24a: Stack[-2] = (int) 300
0x24b: Stack[-1] = (int) 100
0x24c: Call2 0x25e

0x24d: Pop(2)
0x24e: Push((int) 3)
0x24f: @ Sleep(Stack[-1])
0x250: Pop(1)
0x251: GOTO 0x249

0x252: Return(); Pop(0)

0x253: PushEmpty()
0x254: PushEmpty()
0x255: Call2 0x29f

0x256: Pop(0)
0x257: PushEmpty(int, object)
0x258: Stack[-1] = Stack[-3]
0x259: Push(-2, 1); TaskCall(0)
0x25a: Call2 0x0

0x25b: Pop(-2, 1); TaskReturn
0x25c: Pop(2)
0x25d: Return(); Pop(0)

0x25e: PushEmpty()
0x25f: PushEmpty(bool)
0x260: Call2 0x30b

0x261: Pop(0)
0x262: Pop(1); Push((bool) Stack[-1] == 0)
0x263: IF (Stack[-1] == 0) GOTO 0x265; Pop(1)

0x264: Return(); Pop(0)

0x265: Push("player")
0x266: @ FindActor(Stack[-4], Stack[-1])
0x267: Pop(1)
0x268: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x269: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x26a: Stack[0 + Tasks[-1].StackPointer] = Stack[-2]
0x26b: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x26c: Push((int) 10)
0x26d: Push((float)1.0)
0x26e: @ SetTimer(Stack[-2], Stack[-1])
0x26f: Pop(2)
0x270: PushEmpty()
0x271: Call2 0x2ad

0x272: Pop(0)
0x273: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x274: IF (Stack[-1] == 0) GOTO 0x278; Pop(1)

0x275: Push((int) 10)
0x276: @ KillTimer(Stack[-1])
0x277: Pop(1)
0x278: Return(); Pop(0)

0x279: PushEmpty(float, float)
0x27a: Pop(0); Push((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0x27b: IF (Stack[-1] == 0) GOTO 0x27e; Pop(1)

0x27c: Stack[-3] = (bool) 0
0x27d: Return(); Pop(2)

0x27e: PushEmpty(float, object)
0x27f: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x280: Call2 0x303

0x281: Pop(1)
0x282: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x283: Push( Stack[2 + Tasks[-1].StackPointer] )
0x284: IF (Stack[-1] == 0) GOTO 0x286; Pop(1)

0x285: Stack[-1] = Stack[-1] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x286: Stack[-3] = Stack[-1] < Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x287: Return(); Pop(2)

0x288: PushEmpty()
0x289: Push((int) 10)
0x28a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x28b: IF (Stack[-1] == 0) GOTO 0x29e; Pop(1)

0x28c: PushEmpty(bool)
0x28d: Call2 0x279

0x28e: Pop(0)
0x28f: IF (Stack[-1] == 0) GOTO 0x298; Pop(1)

0x290: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x291: IF (Stack[-1] == 0) GOTO 0x297; Pop(1)

0x292: PushEmpty(object)
0x293: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x294: Call2 0x384

0x295: Pop(1)
0x296: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x297: GOTO 0x29e

0x298: Push( Stack[2 + Tasks[-1].StackPointer] )
0x299: IF (Stack[-1] == 0) GOTO 0x29e; Pop(1)

0x29a: Push("head")
0x29b: @ UnlookAsync(Stack[-1])
0x29c: Pop(1)
0x29d: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x29e: Return(); Pop(0)

0x29f: PushEmpty()
0x2a0: Call2 0x2fe

0x2a1: Pop(0)
0x2a2: Push((int) 10)
0x2a3: @ KillTimer(Stack[-1])
0x2a4: Pop(1)
0x2a5: Push( Stack[2 + Tasks[-1].StackPointer] )
0x2a6: IF (Stack[-1] == 0) GOTO 0x2ab; Pop(1)

0x2a7: Push("head")
0x2a8: @ UnlookAsync(Stack[-1])
0x2a9: Pop(1)
0x2aa: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x2ab: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x2ac: Return(); Pop(0)

0x2ad: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x2ae: @ WaitForAnimEnd()
0x2af: Pop(0)
0x2b0: PushEmpty(bool)
0x2b1: Call2 0x30b

0x2b2: Pop(0)
0x2b3: Pop(1); Push((bool) Stack[-1] == 0)
0x2b4: IF (Stack[-1] == 0) GOTO 0x2b6; Pop(1)

0x2b5: Return(); Pop(14)

0x2b6: PushEmpty(int)
0x2b7: Call2 0x3c2

0x2b8: Stack[-8] = Stack[-1]
0x2b9: Pop(1)
0x2ba: Stack[-6] = (int) 0
0x2bb: PushEmpty(bool)
0x2bc: Stack[-1] = (bool) 0
0x2bd: Push((int) 5)
0x2be: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x2bf: IF (Stack[-1] == 0) GOTO 0x2c5; Pop(1)

0x2c0: PushEmpty(bool)
0x2c1: Call2 0x30b

0x2c2: Pop(0)
0x2c3: IF (Stack[-1] == 0) GOTO 0x2c5; Pop(1)

0x2c4: Stack[-1] = (bool) 1
0x2c5: IF (Stack[-1] == 0) GOTO 0x2f9; Pop(1)

0x2c6: Push((int) 3)
0x2c7: @ irand(Stack[-6], Stack[-1])
0x2c8: Pop(1)
0x2c9: Push((int) 0)
0x2ca: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x2cb: IF (Stack[-1] == 0) GOTO 0x2dd; Pop(1)

0x2cc: Push(Stack[-7])
0x2cd: IF (Stack[-1] == 0) GOTO 0x2dc; Pop(1)

0x2ce: @ irand(Stack[-4], Stack[-7])
0x2cf: Pop(0)
0x2d0: Push("all")
0x2d1: PushEmpty(string, int)
0x2d2: Stack[-1] = Stack[-7]
0x2d3: Call2 0x3bb

0x2d4: Pop(1)
0x2d5: @ PlayAnimation(Stack[-2], Stack[-1])
0x2d6: Pop(2)
0x2d7: @ WaitForAnimEnd(Stack[-3])
0x2d8: Pop(0)
0x2d9: Pop(0); Push((bool) Stack[-3] == 0)
0x2da: IF (Stack[-1] == 0) GOTO 0x2dc; Pop(1)

0x2db: GOTO 0x2f9

0x2dc: GOTO 0x2ee

0x2dd: Push((int) 1)
0x2de: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x2df: IF (Stack[-1] == 0) GOTO 0x2eb; Pop(1)

0x2e0: Push((int) 4)
0x2e1: @ rand(Stack[-3], Stack[-1])
0x2e2: Pop(1)
0x2e3: Push((int) 1)
0x2e4: Pop(1); Push(Stack[-3] + Stack[-1]);
0x2e5: @ Sleep(Stack[-1], Stack[-2])
0x2e6: Pop(1)
0x2e7: Pop(0); Push((bool) Stack[-1] == 0)
0x2e8: IF (Stack[-1] == 0) GOTO 0x2ea; Pop(1)

0x2e9: GOTO 0x2f9

0x2ea: GOTO 0x2ee

0x2eb: Push(Stack[-6])
0x2ec: IF (Stack[-1] == 0) GOTO 0x2ee; Pop(1)

0x2ed: GOTO 0x2f9

0x2ee: PushEmpty(bool)
0x2ef: Call2 0x2fc

0x2f0: Pop(0)
0x2f1: Pop(1); Push((bool) Stack[-1] == 0)
0x2f2: IF (Stack[-1] == 0) GOTO 0x2f4; Pop(1)

0x2f3: GOTO 0x2f9

0x2f4: @ ResetAAS()
0x2f5: Pop(0)
0x2f6: Push((int) 1)
0x2f7: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x2f8: GOTO 0x2bb

0x2f9: @ ResetAAS()
0x2fa: Pop(0)
0x2fb: Return(); Pop(14)

0x2fc: Stack[-1] = (bool) 1
0x2fd: Return(); Pop(0)

0x2fe: @ StopAnimation()
0x2ff: Pop(0)
0x300: @ StopGroup0()
0x301: Pop(0)
0x302: Return(); Pop(0)

0x303: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x304: @ GetPosition(Stack[-3])
0x305: Pop(0)
0x306: @@ GetPosition(Stack[-2])
0x307: Pop(0)
0x308: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x309: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x30a: Return(); Pop(6)

0x30b: PushEmpty(bool, bool)
0x30c: @ IsLoaded(Stack[-1])
0x30d: Pop(0)
0x30e: Stack[-3] = Stack[-1]
0x30f: Return(); Pop(2)

0x310: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x311: @@ GetPosition(Stack[-8])
0x312: Pop(0)
0x313: @@ GetEyesHeight(Stack[-9])
0x314: Pop(0)
0x315: Push(CvectorIndex(Stack[-8], 1))
0x316: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x317: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x318: @ GetPosition(Stack[-7])
0x319: Pop(0)
0x31a: @ GetEyesHeight(Stack[-9])
0x31b: Pop(0)
0x31c: Push(CvectorIndex(Stack[-7], 1))
0x31d: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x31e: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x31f: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x320: Push(CvectorIndex(Stack[-6], 1))
0x321: Stack[-1] = (int) 0
0x322: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x323: Pop(0); Push(Stack[-6] | Stack[-6]);
0x324: Pop(1); Push(Sqrt(Stack[-1]))
0x325: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x326: Stack[-5] = -Stack[-6]; Pop(0);
0x327: Pop(0); Push(Stack[-6] * Stack[-19]);
0x328: PushEmpty(cvector, cvector)
0x329: Push(CVector(0.0, 1.0, 0.0))
0x32a: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x32b: Call2 0x396

0x32c: Pop(1)
0x32d: Push((int) 25)
0x32e: Pop(2); Push(Stack[-2] * Stack[-1]);
0x32f: Pop(2); Push(Stack[-2] + Stack[-1]);
0x330: Push(CVector(0.0, 10.0, 0.0))
0x331: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x332: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x333: @ IsOverrideActive(Stack[-2])
0x334: Pop(0)
0x335: Push(Stack[-2])
0x336: IF (Stack[-1] == 0) GOTO 0x339; Pop(1)

0x337: Stack[-21] = (bool) 0
0x338: Return(); Pop(18)

0x339: @ StopWorld()
0x33a: Pop(0)
0x33b: @ CameraTransit(Stack[-3], Stack[-5])
0x33c: Pop(0)
0x33d: Push(CvectorIndex(Stack[-4], 0))
0x33e: Push(CvectorIndex(Stack[-5], 2))
0x33f: @ Rotate(Stack[-2], Stack[-1])
0x340: Pop(2)
0x341: PushEmpty(bool)
0x342: Call2 0x3b9

0x343: Pop(0)
0x344: IF (Stack[-1] == 0) GOTO 0x346; Pop(1)

0x345: GOTO 0x34e

0x346: Push("head")
0x347: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x348: Pop(1)
0x349: Push(Stack[-1])
0x34a: IF (Stack[-1] == 0) GOTO 0x34e; Pop(1)

0x34b: Push("head")
0x34c: @ LookAsyncCamera(Stack[-1])
0x34d: Pop(1)
0x34e: @ CameraWaitForPlayFinish()
0x34f: Pop(0)
0x350: @ ResumeWorld()
0x351: Pop(0)
0x352: Stack[-21] = (bool) 1
0x353: Return(); Pop(18)

0x354: PushEmpty(bool, bool)
0x355: @ CameraSwitchToNormal()
0x356: Pop(0)
0x357: PushEmpty(bool)
0x358: Call2 0x3b9

0x359: Pop(0)
0x35a: IF (Stack[-1] == 0) GOTO 0x35c; Pop(1)

0x35b: GOTO 0x364

0x35c: Push("head")
0x35d: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x35e: Pop(1)
0x35f: Push(Stack[-1])
0x360: IF (Stack[-1] == 0) GOTO 0x364; Pop(1)

0x361: Push("head")
0x362: @ UnlookAsync(Stack[-1])
0x363: Pop(1)
0x364: Return(); Pop(2)

0x365: PushEmpty(bool, float, float, bool, float, float)
0x366: @ lshHasAnimation(Stack[-3], Stack[-7])
0x367: Pop(0)
0x368: Push(Stack[-3])
0x369: IF (Stack[-1] == 0) GOTO 0x370; Pop(1)

0x36a: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x36b: Pop(0)
0x36c: Push((bool) 0)
0x36d: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x36e: Pop(1)
0x36f: GOTO 0x374

0x370: Push("Can't find lsh animation : ")
0x371: Pop(1); Push(Stack[-1] + Stack[-8]);
0x372: @ Trace(Stack[-1])
0x373: Pop(1)
0x374: Return(); Pop(6)

0x375: PushEmpty(bool, float, float, bool, float, float)
0x376: @ lshHasAnimation(Stack[-3], Stack[-8])
0x377: Pop(0)
0x378: Push(Stack[-3])
0x379: IF (Stack[-1] == 0) GOTO 0x37f; Pop(1)

0x37a: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x37b: Pop(0)
0x37c: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x37d: Pop(0)
0x37e: GOTO 0x383

0x37f: Push("Can't find lsh animation : ")
0x380: Pop(1); Push(Stack[-1] + Stack[-9]);
0x381: @ Trace(Stack[-1])
0x382: Pop(1)
0x383: Return(); Pop(6)

0x384: PushEmpty(float, cvector, float, cvector)
0x385: @@ GetEyesHeight(Stack[-2])
0x386: Pop(0)
0x387: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x388: Push(CvectorIndex(Stack[-1], 1))
0x389: Stack[-1] = Stack[-3]
0x38a: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x38b: Push("head")
0x38c: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x38d: Pop(1)
0x38e: Return(); Pop(4)

0x38f: PushEmpty(bool)
0x390: Call2 0x3b9

0x391: Pop(0)
0x392: IF (Stack[-1] == 0) GOTO 0x395; Pop(1)

0x393: @ lshStopSpeech()
0x394: Pop(0)
0x395: Return(); Pop(0)

0x396: PushEmpty(float, float)
0x397: Pop(0); Push(Stack[-3] | Stack[-3]);
0x398: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x399: Push((float)0.0)
0x39a: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x39b: IF (Stack[-1] == 0) GOTO 0x39e; Pop(1)

0x39c: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x39d: Return(); Pop(2)

0x39e: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x39f: Return(); Pop(2)

0x3a0: PushEmpty(int, int)
0x3a1: @ GetVariable(Stack[-3], Stack[-1])
0x3a2: Pop(0)
0x3a3: Stack[-4] = Stack[-1]
0x3a4: Return(); Pop(2)

0x3a5: PushEmpty(object, object)
0x3a6: @ FindActor(Stack[-1], Stack[-4])
0x3a7: Pop(0)
0x3a8: Pop(0); Push((bool) Stack[-1] == 0)
0x3a9: IF (Stack[-1] == 0) GOTO 0x3ac; Pop(1)

0x3aa: Stack[-5] = (bool) 0
0x3ab: Return(); Pop(2)

0x3ac: @ Trigger(Stack[-1], Stack[-3])
0x3ad: Pop(0)
0x3ae: Stack[-5] = (bool) 1
0x3af: Return(); Pop(2)

0x3b0: Stack[-1] = 0
0x3b1: Stack[-1] = (int) 515571
0x3b2: Return(); Pop(0)

0x3b3: Stack[-1] = (int) 504029
0x3b4: Return(); Pop(0)

0x3b5: Stack[-1] = "ui/NPC_bmask.png"
0x3b6: Return(); Pop(0)

0x3b7: Stack[-1] = "ui/NPC_bmask_b.png"
0x3b8: Return(); Pop(0)

0x3b9: Stack[-1] = (bool) 0
0x3ba: Return(); Pop(0)

0x3bb: PushEmpty(string, string)
0x3bc: Stack[-1] = "idle"
0x3bd: Push(Stack[-3])
0x3be: IF (Stack[-1] == 0) GOTO 0x3c0; Pop(1)

0x3bf: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x3c0: Stack[-4] = Stack[-1]
0x3c1: Return(); Pop(2)

0x3c2: PushEmpty(int, bool, int, bool)
0x3c3: Stack[-2] = (int) 0
0x3c4: Push("all")
0x3c5: PushEmpty(string, int)
0x3c6: Stack[-1] = Stack[-5]
0x3c7: Call2 0x3bb

0x3c8: Pop(1)
0x3c9: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x3ca: Pop(2)
0x3cb: Pop(0); Push((bool) Stack[-1] == 0)
0x3cc: IF (Stack[-1] == 0) GOTO 0x3ce; Pop(1)

0x3cd: GOTO 0x3d1

0x3ce: Push((int) 1)
0x3cf: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x3d0: GOTO 0x3c4

0x3d1: Stack[-5] = Stack[-2]
0x3d2: Return(); Pop(4)

0x3d3: PushEmpty()
0x3d4: Push("oob1Birdmask1_1")
0x3d5: Push((int) 1)
0x3d6: @ SetVariable(Stack[-2], Stack[-1])
0x3d7: Pop(2)
0x3d8: PushEmpty(bool, string, string)
0x3d9: Stack[-2] = "quest_b1_01"
0x3da: Stack[-1] = "remove1"
0x3db: Call2 0x3a5

0x3dc: Pop(3)
0x3dd: Return(); Pop(0)

0x3de: PushEmpty()
0x3df: PushEmpty(object, string, float)
0x3e0: PushEmpty(object)
0x3e1: Call2 0x3fa

0x3e2: Stack[-4] = Stack[-1]
0x3e3: Pop(1)
0x3e4: Stack[-2] = "pt_map_bigvlad"
0x3e5: Stack[-1] = (int) 2
0x3e6: Call2 0x40b

0x3e7: Pop(3)
0x3e8: PushEmpty(object)
0x3e9: Call2 0x3fa

0x3ea: Pop(0)
0x3eb: @@ ShowMap(Stack[-1])
0x3ec: Pop(1)
0x3ed: Return(); Pop(0)

0x3ee: PushEmpty()
0x3ef: PushEmpty(int, string)
0x3f0: Stack[-1] = "oob1Birdmask1_1"
0x3f1: Call2 0x3a0

0x3f2: Pop(1)
0x3f3: Push((int) 0)
0x3f4: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x3f5: IF (Stack[-1] == 0) GOTO 0x3f8; Pop(1)

0x3f6: Stack[-2] = (bool) 1
0x3f7: Return(); Pop(0)

0x3f8: Stack[-2] = (bool) 0
0x3f9: Return(); Pop(0)

0x3fa: PushEmpty(object, object, object, object)
0x3fb: @ GetMainOutdoorScene(Stack[-2])
0x3fc: Pop(0)
0x3fd: Pop(0); Push((bool) Stack[-2] == 0)
0x3fe: IF (Stack[-1] == 0) GOTO 0x405; Pop(1)

0x3ff: Push("Can't find main outdoor scene")
0x400: @ Trace(Stack[-1])
0x401: Pop(1)
0x402: Stack[-1] = 0
0x403: Stack[-5] = Stack[-1]
0x404: Return(); Pop(4)

0x405: @@ GetMap(Stack[-1])
0x406: Pop(0)
0x407: Stack[-5] = Stack[-1]
0x408: Return(); Pop(4)

0x409: Stack[-1] = 0
0x40a: Stack[-2] = 0
0x40b: PushEmpty(cvector, cvector, object, bool, cvector, cvector, object, bool)
0x40c: @ GetMainOutdoorScene(Stack[-2])
0x40d: Pop(0)
0x40e: Pop(0); Push((bool) Stack[-2] == 0)
0x40f: IF (Stack[-1] == 0) GOTO 0x414; Pop(1)

0x410: Push("Can't find main outdoor scene")
0x411: @ Trace(Stack[-1])
0x412: Pop(1)
0x413: Return(); Pop(8)

0x414: @@ GetLocator(Stack[-10], Stack[-1], Stack[-4], Stack[-3])
0x415: Pop(0)
0x416: Pop(0); Push((bool) Stack[-1] == 0)
0x417: IF (Stack[-1] == 0) GOTO 0x41e; Pop(1)

0x418: Push("Warning: outdoor scene locator ")
0x419: Pop(1); Push(Stack[-1] + Stack[-11]);
0x41a: Push(" doesnt exist")
0x41b: Pop(2); Push(Stack[-2] + Stack[-1]);
0x41c: @ Trace(Stack[-1])
0x41d: Pop(1)
0x41e: @@ GetMap(Stack[-11])
0x41f: Pop(0)
0x420: Pop(0); Push((bool) Stack[-11] == 0)
0x421: IF (Stack[-1] == 0) GOTO 0x426; Pop(1)

0x422: Push("Can't find map")
0x423: @ Trace(Stack[-1])
0x424: Pop(1)
0x425: Return(); Pop(8)

0x426: Push(CvectorIndex(Stack[-4], 0))
0x427: Push(CvectorIndex(Stack[-5], 2))
0x428: @@ SetMapParams(Stack[-2], Stack[-1], Stack[-11])
0x429: Pop(2)
0x42a: Return(); Pop(8)

0x42b: Stack[-2] = 0
0x42c: PushEmpty(int, int)
0x42d: Push("branch")
0x42e: @ GetVariable(Stack[-1], Stack[-2])
0x42f: Pop(1)
0x430: Push((int) 0)
0x431: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x432: IF (Stack[-1] == 0) GOTO 0x436; Pop(1)

0x433: Stack[-3] = (int) 1
0x434: Return(); Pop(2)

0x435: GOTO 0x43b

0x436: Push((int) 1)
0x437: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x438: IF (Stack[-1] == 0) GOTO 0x43b; Pop(1)

0x439: Stack[-3] = (int) 2
0x43a: Return(); Pop(2)

0x43b: Stack[-3] = (int) 3
0x43c: Return(); Pop(2)

