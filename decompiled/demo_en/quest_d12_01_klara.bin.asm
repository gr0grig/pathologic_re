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
	Saveyouall
	SetMessage
	ClearReplies
	AddReply
	Neutral
	idle
	Smile
	Fear
	Sly
	cleanup
	restore
	GetPosition
	GetEyesHeight
	head
	voice_common
	c
	HasProperty
	GetProperty
	m
	Can't find lsh animation : 
	ood12KlaraSobor1
	ood12KlaraSobor2
	game_final
	branch
	ui/NPC_Klara.png
	ui/NPC_Klara_b.png

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
	IsLoaded (1 args)
	RemoveActor (1 args)
	GetPosition (1 args)
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
	GetGameTime (1 args)

RunOp = 0x241
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xca Vars = (int, int)
	GTASK_2 Vars = (bool) Params = 0
		EVENT_0 Op = 0x245 Vars = (object)
		EVENT_26 Op = 0x251 Vars = (string)
		EVENT_6 Op = 0x26d Vars = ()


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x27f

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x3f4

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x3f2

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x3f6

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x3f8

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x3e1

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
0x31: Call2 0x393

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0x2d4

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
0x48: Call2 0x2c3

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
0x56: IF (Stack[-1] == 0) GOTO 0x96; Pop(1)

0x57: PushEmpty(bool, object)
0x58: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x59: Call2 0x3bd

0x5a: Pop(1)
0x5b: Pop(1); Push((bool) Stack[-1] == 0)
0x5c: IF (Stack[-1] == 0) GOTO 0x80; Pop(1)

0x5d: PushEmpty(string)
0x5e: Stack[-1] = "Saveyouall"
0x5f: Call2 0xb4

0x60: Pop(1)
0x61: Push((int) 540282)
0x62: @@ SetMessage(Stack[-1])
0x63: Pop(1)
0x64: @@ ClearReplies()
0x65: Pop(0)
0x66: PushEmpty(bool, object)
0x67: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x68: Call2 0x3c9

0x69: Pop(1)
0x6a: IF (Stack[-1] == 0) GOTO 0x70; Pop(1)

0x6b: Push((int) 540283)
0x6c: Push((int) 42264)
0x6d: Push((int) 42263)
0x6e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6f: Pop(3)
0x70: PushEmpty(bool, object)
0x71: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x72: Call2 0x3d5

0x73: Pop(1)
0x74: IF (Stack[-1] == 0) GOTO 0x7a; Pop(1)

0x75: Push((int) 540296)
0x76: Push((int) 42278)
0x77: Push((int) 42277)
0x78: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x79: Pop(3)
0x7a: Push((int) 540305)
0x7b: Push((int) -1)
0x7c: Push((int) 42286)
0x7d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7e: Pop(3)
0x7f: GOTO 0x96

0x80: PushEmpty(string)
0x81: Stack[-1] = "Neutral"
0x82: Call2 0xb4

0x83: Pop(1)
0x84: Push((int) 541639)
0x85: @@ SetMessage(Stack[-1])
0x86: Pop(1)
0x87: @@ ClearReplies()
0x88: Pop(0)
0x89: Push((int) 541640)
0x8a: Push((int) -1)
0x8b: Push((int) 43812)
0x8c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8d: Pop(3)
0x8e: Push((int) 541641)
0x8f: Push((int) -1)
0x90: Push((int) 43813)
0x91: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x92: Pop(3)
0x93: GOTO 0x96

0x94: Return(); Pop(0)

0x95: GOTO 0x55

0x96: PushEmpty(bool)
0x97: Call2 0x3fa

0x98: Pop(0)
0x99: IF (Stack[-1] == 0) GOTO 0xa5; Pop(1)

0x9a: @ lshWaitForAnimEnd()
0x9b: Pop(0)
0x9c: Push( Stack[3 + Tasks[-1].StackPointer] )
0x9d: IF (Stack[-1] == 0) GOTO 0x9f; Pop(1)

0x9e: GOTO 0xa4

0x9f: PushEmpty(string)
0xa0: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xa1: Call2 0x35e

0xa2: Pop(1)
0xa3: GOTO 0x9a

0xa4: GOTO 0xb3

0xa5: Push("all")
0xa6: Push("idle")
0xa7: @ PlayAnimation(Stack[-2], Stack[-1])
0xa8: Pop(2)
0xa9: @ WaitForAnimEnd()
0xaa: Pop(0)
0xab: Push( Stack[3 + Tasks[-1].StackPointer] )
0xac: IF (Stack[-1] == 0) GOTO 0xae; Pop(1)

0xad: GOTO 0xb3

0xae: Push("all")
0xaf: Push("idle")
0xb0: @ PlayAnimation(Stack[-2], Stack[-1])
0xb1: Pop(2)
0xb2: GOTO 0xa9

0xb3: Return(); Pop(0)

0xb4: PushEmpty()
0xb5: PushEmpty(bool)
0xb6: Call2 0x3fa

0xb7: Pop(0)
0xb8: Pop(1); Push((bool) Stack[-1] == 0)
0xb9: IF (Stack[-1] == 0) GOTO 0xbb; Pop(1)

0xba: Return(); Pop(0)

0xbb: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xbc: IF (Stack[-1] == 0) GOTO 0xbe; Pop(1)

0xbd: Return(); Pop(0)

0xbe: PushEmpty(string, bool)
0xbf: Stack[-2] = Stack[-3]
0xc0: Push("")
0xc1: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xc2: IF (Stack[-1] == 0) GOTO 0xc5; Pop(1)

0xc3: Stack[-1] = (bool) 0
0xc4: GOTO 0xc6

0xc5: Stack[-1] = (bool) 1
0xc6: Call2 0x36e

0xc7: Pop(2)
0xc8: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xc9: Return(); Pop(0)

0xca: PushEmpty()
0xcb: Push((int) 1)
0xcc: IF (Stack[-1] == 0) GOTO 0x240; Pop(1)

0xcd: PushEmpty()
0xce: Call2 0x38c

0xcf: Pop(0)
0xd0: Push((int) 42263)
0xd1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd2: IF (Stack[-1] == 0) GOTO 0xd8; Pop(1)

0xd3: PushEmpty(object, object)
0xd4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd6: Call2 0x3b1

0xd7: Pop(2)
0xd8: Push((int) 42277)
0xd9: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xda: IF (Stack[-1] == 0) GOTO 0xe0; Pop(1)

0xdb: PushEmpty(object, object)
0xdc: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xdd: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xde: Call2 0x3b7

0xdf: Pop(2)
0xe0: Push((int) 42262)
0xe1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe2: IF (Stack[-1] == 0) GOTO 0x120; Pop(1)

0xe3: PushEmpty(bool, object)
0xe4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xe5: Call2 0x3bd

0xe6: Pop(1)
0xe7: Pop(1); Push((bool) Stack[-1] == 0)
0xe8: IF (Stack[-1] == 0) GOTO 0x10c; Pop(1)

0xe9: PushEmpty(string)
0xea: Stack[-1] = "Saveyouall"
0xeb: Call2 0xb4

0xec: Pop(1)
0xed: Push((int) 540282)
0xee: @@ SetMessage(Stack[-1])
0xef: Pop(1)
0xf0: @@ ClearReplies()
0xf1: Pop(0)
0xf2: PushEmpty(bool, object)
0xf3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xf4: Call2 0x3c9

0xf5: Pop(1)
0xf6: IF (Stack[-1] == 0) GOTO 0xfc; Pop(1)

0xf7: Push((int) 540283)
0xf8: Push((int) 42264)
0xf9: Push((int) 42263)
0xfa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfb: Pop(3)
0xfc: PushEmpty(bool, object)
0xfd: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xfe: Call2 0x3d5

0xff: Pop(1)
0x100: IF (Stack[-1] == 0) GOTO 0x106; Pop(1)

0x101: Push((int) 540296)
0x102: Push((int) 42278)
0x103: Push((int) 42277)
0x104: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x105: Pop(3)
0x106: Push((int) 540305)
0x107: Push((int) -1)
0x108: Push((int) 42286)
0x109: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10a: Pop(3)
0x10b: Return(); Pop(0)

0x10c: PushEmpty(string)
0x10d: Stack[-1] = "Neutral"
0x10e: Call2 0xb4

0x10f: Pop(1)
0x110: Push((int) 541639)
0x111: @@ SetMessage(Stack[-1])
0x112: Pop(1)
0x113: @@ ClearReplies()
0x114: Pop(0)
0x115: Push((int) 541640)
0x116: Push((int) -1)
0x117: Push((int) 43812)
0x118: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x119: Pop(3)
0x11a: Push((int) 541641)
0x11b: Push((int) -1)
0x11c: Push((int) 43813)
0x11d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11e: Pop(3)
0x11f: Return(); Pop(0)

0x120: Push((int) 42278)
0x121: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x122: IF (Stack[-1] == 0) GOTO 0x137; Pop(1)

0x123: PushEmpty(string)
0x124: Stack[-1] = "Saveyouall"
0x125: Call2 0xb4

0x126: Pop(1)
0x127: Push((int) 540297)
0x128: @@ SetMessage(Stack[-1])
0x129: Pop(1)
0x12a: @@ ClearReplies()
0x12b: Pop(0)
0x12c: Push((int) 540298)
0x12d: Push((int) 42280)
0x12e: Push((int) 42279)
0x12f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x130: Pop(3)
0x131: Push((int) 540479)
0x132: Push((int) 42283)
0x133: Push((int) 42474)
0x134: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x135: Pop(3)
0x136: Return(); Pop(0)

0x137: Push((int) 42280)
0x138: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x139: IF (Stack[-1] == 0) GOTO 0x14e; Pop(1)

0x13a: PushEmpty(string)
0x13b: Stack[-1] = "Smile"
0x13c: Call2 0xb4

0x13d: Pop(1)
0x13e: Push((int) 540299)
0x13f: @@ SetMessage(Stack[-1])
0x140: Pop(1)
0x141: @@ ClearReplies()
0x142: Pop(0)
0x143: Push((int) 540300)
0x144: Push((int) 42476)
0x145: Push((int) 42281)
0x146: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x147: Pop(3)
0x148: Push((int) 540301)
0x149: Push((int) 42283)
0x14a: Push((int) 42282)
0x14b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x14c: Pop(3)
0x14d: Return(); Pop(0)

0x14e: Push((int) 42283)
0x14f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x150: IF (Stack[-1] == 0) GOTO 0x165; Pop(1)

0x151: PushEmpty(string)
0x152: Stack[-1] = "Saveyouall"
0x153: Call2 0xb4

0x154: Pop(1)
0x155: Push((int) 540302)
0x156: @@ SetMessage(Stack[-1])
0x157: Pop(1)
0x158: @@ ClearReplies()
0x159: Pop(0)
0x15a: Push((int) 540303)
0x15b: Push((int) 42476)
0x15c: Push((int) 42284)
0x15d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x15e: Pop(3)
0x15f: Push((int) 540304)
0x160: Push((int) 42478)
0x161: Push((int) 42285)
0x162: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x163: Pop(3)
0x164: Return(); Pop(0)

0x165: Push((int) 42478)
0x166: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x167: IF (Stack[-1] == 0) GOTO 0x17c; Pop(1)

0x168: PushEmpty(string)
0x169: Stack[-1] = "Neutral"
0x16a: Call2 0xb4

0x16b: Pop(1)
0x16c: Push((int) 540481)
0x16d: @@ SetMessage(Stack[-1])
0x16e: Pop(1)
0x16f: @@ ClearReplies()
0x170: Pop(0)
0x171: Push((int) 540482)
0x172: Push((int) -1)
0x173: Push((int) 42479)
0x174: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x175: Pop(3)
0x176: Push((int) 540483)
0x177: Push((int) 42476)
0x178: Push((int) 42480)
0x179: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x17a: Pop(3)
0x17b: Return(); Pop(0)

0x17c: Push((int) 42476)
0x17d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x17e: IF (Stack[-1] == 0) GOTO 0x193; Pop(1)

0x17f: PushEmpty(string)
0x180: Stack[-1] = "Fear"
0x181: Call2 0xb4

0x182: Pop(1)
0x183: Push((int) 540480)
0x184: @@ SetMessage(Stack[-1])
0x185: Pop(1)
0x186: @@ ClearReplies()
0x187: Pop(0)
0x188: Push((int) 540484)
0x189: Push((int) -1)
0x18a: Push((int) 42482)
0x18b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x18c: Pop(3)
0x18d: Push((int) 540485)
0x18e: Push((int) 42484)
0x18f: Push((int) 42483)
0x190: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x191: Pop(3)
0x192: Return(); Pop(0)

0x193: Push((int) 42484)
0x194: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x195: IF (Stack[-1] == 0) GOTO 0x1aa; Pop(1)

0x196: PushEmpty(string)
0x197: Stack[-1] = "Fear"
0x198: Call2 0xb4

0x199: Pop(1)
0x19a: Push((int) 540486)
0x19b: @@ SetMessage(Stack[-1])
0x19c: Pop(1)
0x19d: @@ ClearReplies()
0x19e: Pop(0)
0x19f: Push((int) 540487)
0x1a0: Push((int) -1)
0x1a1: Push((int) 42485)
0x1a2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1a3: Pop(3)
0x1a4: Push((int) 540488)
0x1a5: Push((int) -1)
0x1a6: Push((int) 42486)
0x1a7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1a8: Pop(3)
0x1a9: Return(); Pop(0)

0x1aa: Push((int) 42264)
0x1ab: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1ac: IF (Stack[-1] == 0) GOTO 0x1c1; Pop(1)

0x1ad: PushEmpty(string)
0x1ae: Stack[-1] = "Saveyouall"
0x1af: Call2 0xb4

0x1b0: Pop(1)
0x1b1: Push((int) 540284)
0x1b2: @@ SetMessage(Stack[-1])
0x1b3: Pop(1)
0x1b4: @@ ClearReplies()
0x1b5: Pop(0)
0x1b6: Push((int) 540285)
0x1b7: Push((int) 42266)
0x1b8: Push((int) 42265)
0x1b9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ba: Pop(3)
0x1bb: Push((int) 540489)
0x1bc: Push((int) 42266)
0x1bd: Push((int) 42487)
0x1be: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1bf: Pop(3)
0x1c0: Return(); Pop(0)

0x1c1: Push((int) 42266)
0x1c2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1c3: IF (Stack[-1] == 0) GOTO 0x1d8; Pop(1)

0x1c4: PushEmpty(string)
0x1c5: Stack[-1] = "Saveyouall"
0x1c6: Call2 0xb4

0x1c7: Pop(1)
0x1c8: Push((int) 540286)
0x1c9: @@ SetMessage(Stack[-1])
0x1ca: Pop(1)
0x1cb: @@ ClearReplies()
0x1cc: Pop(0)
0x1cd: Push((int) 540287)
0x1ce: Push((int) 42268)
0x1cf: Push((int) 42267)
0x1d0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1d1: Pop(3)
0x1d2: Push((int) 540295)
0x1d3: Push((int) 42270)
0x1d4: Push((int) 42275)
0x1d5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1d6: Pop(3)
0x1d7: Return(); Pop(0)

0x1d8: Push((int) 42268)
0x1d9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1da: IF (Stack[-1] == 0) GOTO 0x1ef; Pop(1)

0x1db: PushEmpty(string)
0x1dc: Stack[-1] = "Smile"
0x1dd: Call2 0xb4

0x1de: Pop(1)
0x1df: Push((int) 540288)
0x1e0: @@ SetMessage(Stack[-1])
0x1e1: Pop(1)
0x1e2: @@ ClearReplies()
0x1e3: Pop(0)
0x1e4: Push((int) 540289)
0x1e5: Push((int) 42270)
0x1e6: Push((int) 42269)
0x1e7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1e8: Pop(3)
0x1e9: Push((int) 540490)
0x1ea: Push((int) 42490)
0x1eb: Push((int) 42489)
0x1ec: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ed: Pop(3)
0x1ee: Return(); Pop(0)

0x1ef: Push((int) 42490)
0x1f0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1f1: IF (Stack[-1] == 0) GOTO 0x206; Pop(1)

0x1f2: PushEmpty(string)
0x1f3: Stack[-1] = "Sly"
0x1f4: Call2 0xb4

0x1f5: Pop(1)
0x1f6: Push((int) 540491)
0x1f7: @@ SetMessage(Stack[-1])
0x1f8: Pop(1)
0x1f9: @@ ClearReplies()
0x1fa: Pop(0)
0x1fb: Push((int) 540492)
0x1fc: Push((int) -1)
0x1fd: Push((int) 42491)
0x1fe: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ff: Pop(3)
0x200: Push((int) 540493)
0x201: Push((int) -1)
0x202: Push((int) 42492)
0x203: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x204: Pop(3)
0x205: Return(); Pop(0)

0x206: Push((int) 42270)
0x207: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x208: IF (Stack[-1] == 0) GOTO 0x21d; Pop(1)

0x209: PushEmpty(string)
0x20a: Stack[-1] = "Smile"
0x20b: Call2 0xb4

0x20c: Pop(1)
0x20d: Push((int) 540290)
0x20e: @@ SetMessage(Stack[-1])
0x20f: Pop(1)
0x210: @@ ClearReplies()
0x211: Pop(0)
0x212: Push((int) 540291)
0x213: Push((int) 42272)
0x214: Push((int) 42271)
0x215: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x216: Pop(3)
0x217: Push((int) 540494)
0x218: Push((int) -1)
0x219: Push((int) 42493)
0x21a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x21b: Pop(3)
0x21c: Return(); Pop(0)

0x21d: Push((int) 42272)
0x21e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x21f: IF (Stack[-1] == 0) GOTO 0x234; Pop(1)

0x220: PushEmpty(string)
0x221: Stack[-1] = "Sly"
0x222: Call2 0xb4

0x223: Pop(1)
0x224: Push((int) 540292)
0x225: @@ SetMessage(Stack[-1])
0x226: Pop(1)
0x227: @@ ClearReplies()
0x228: Pop(0)
0x229: Push((int) 540293)
0x22a: Push((int) -1)
0x22b: Push((int) 42273)
0x22c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x22d: Pop(3)
0x22e: Push((int) 540294)
0x22f: Push((int) -1)
0x230: Push((int) 42274)
0x231: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x232: Pop(3)
0x233: Return(); Pop(0)

0x234: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x235: PushEmpty(bool)
0x236: Call2 0x3fa

0x237: Pop(0)
0x238: IF (Stack[-1] == 0) GOTO 0x23c; Pop(1)

0x239: @ lshStopAnimation()
0x23a: Pop(0)
0x23b: GOTO 0x23e

0x23c: @ StopAnimation()
0x23d: Pop(0)
0x23e: Return(); Pop(0)

0x23f: GOTO 0xcb

0x240: Return(); Pop(0)

0x241: PushEmpty()
0x242: Call2 0x24d

0x243: Pop(0)
0x244: Return(); Pop(0)

0x245: PushEmpty()
0x246: PushEmpty(int, object)
0x247: Stack[-1] = Stack[-3]
0x248: Push(-2, 1); TaskCall(0)
0x249: Call2 0x0

0x24a: Pop(-2, 1); TaskReturn
0x24b: Pop(2)
0x24c: Return(); Pop(0)

0x24d: @ Hold()
0x24e: Pop(0)
0x24f: GOTO 0x24d

0x250: Return(); Pop(0)

0x251: PushEmpty(bool, bool)
0x252: Push("cleanup")
0x253: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x254: IF (Stack[-1] == 0) GOTO 0x268; Pop(1)

0x255: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x256: @ IsLoaded(Stack[-1])
0x257: Pop(0)
0x258: PushEmpty(bool)
0x259: Stack[-1] = (bool) 0
0x25a: Pop(0); Push((bool) Stack[-2] == 0)
0x25b: IF (Stack[-1] == 0) GOTO 0x261; Pop(1)

0x25c: PushEmpty(bool)
0x25d: Call2 0x27d

0x25e: Pop(0)
0x25f: IF (Stack[-1] == 0) GOTO 0x261; Pop(1)

0x260: Stack[-1] = (bool) 1
0x261: IF (Stack[-1] == 0) GOTO 0x267; Pop(1)

0x262: PushEmpty(object)
0x263: Call2 0x393

0x264: Pop(0)
0x265: @ RemoveActor(Stack[-1])
0x266: Pop(1)
0x267: GOTO 0x26c

0x268: Push("restore")
0x269: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x26a: IF (Stack[-1] == 0) GOTO 0x26c; Pop(1)

0x26b: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x26c: Return(); Pop(2)

0x26d: PushEmpty(bool)
0x26e: Stack[-1] = (bool) 0
0x26f: Push( Stack[0 + Tasks[-1].StackPointer] )
0x270: IF (Stack[-1] == 0) GOTO 0x276; Pop(1)

0x271: PushEmpty(bool)
0x272: Call2 0x27d

0x273: Pop(0)
0x274: IF (Stack[-1] == 0) GOTO 0x276; Pop(1)

0x275: Stack[-1] = (bool) 1
0x276: IF (Stack[-1] == 0) GOTO 0x27c; Pop(1)

0x277: PushEmpty(object)
0x278: Call2 0x393

0x279: Pop(0)
0x27a: @ RemoveActor(Stack[-1])
0x27b: Pop(1)
0x27c: Return(); Pop(0)

0x27d: Stack[-1] = (bool) 1
0x27e: Return(); Pop(0)

0x27f: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x280: @@ GetPosition(Stack[-8])
0x281: Pop(0)
0x282: @@ GetEyesHeight(Stack[-9])
0x283: Pop(0)
0x284: Push(CvectorIndex(Stack[-8], 1))
0x285: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x286: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x287: @ GetPosition(Stack[-7])
0x288: Pop(0)
0x289: @ GetEyesHeight(Stack[-9])
0x28a: Pop(0)
0x28b: Push(CvectorIndex(Stack[-7], 1))
0x28c: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x28d: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x28e: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x28f: Push(CvectorIndex(Stack[-6], 1))
0x290: Stack[-1] = (int) 0
0x291: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x292: Pop(0); Push(Stack[-6] | Stack[-6]);
0x293: Pop(1); Push(Sqrt(Stack[-1]))
0x294: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x295: Stack[-5] = -Stack[-6]; Pop(0);
0x296: Pop(0); Push(Stack[-6] * Stack[-19]);
0x297: PushEmpty(cvector, cvector)
0x298: Push(CVector(0.0, 1.0, 0.0))
0x299: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x29a: Call2 0x399

0x29b: Pop(1)
0x29c: Push((int) 25)
0x29d: Pop(2); Push(Stack[-2] * Stack[-1]);
0x29e: Pop(2); Push(Stack[-2] + Stack[-1]);
0x29f: Push(CVector(0.0, 10.0, 0.0))
0x2a0: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x2a1: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x2a2: @ IsOverrideActive(Stack[-2])
0x2a3: Pop(0)
0x2a4: Push(Stack[-2])
0x2a5: IF (Stack[-1] == 0) GOTO 0x2a8; Pop(1)

0x2a6: Stack[-21] = (bool) 0
0x2a7: Return(); Pop(18)

0x2a8: @ StopWorld()
0x2a9: Pop(0)
0x2aa: @ CameraTransit(Stack[-3], Stack[-5])
0x2ab: Pop(0)
0x2ac: Push(CvectorIndex(Stack[-4], 0))
0x2ad: Push(CvectorIndex(Stack[-5], 2))
0x2ae: @ Rotate(Stack[-2], Stack[-1])
0x2af: Pop(2)
0x2b0: PushEmpty(bool)
0x2b1: Call2 0x3fa

0x2b2: Pop(0)
0x2b3: IF (Stack[-1] == 0) GOTO 0x2b5; Pop(1)

0x2b4: GOTO 0x2bd

0x2b5: Push("head")
0x2b6: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x2b7: Pop(1)
0x2b8: Push(Stack[-1])
0x2b9: IF (Stack[-1] == 0) GOTO 0x2bd; Pop(1)

0x2ba: Push("head")
0x2bb: @ LookAsyncCamera(Stack[-1])
0x2bc: Pop(1)
0x2bd: @ CameraWaitForPlayFinish()
0x2be: Pop(0)
0x2bf: @ ResumeWorld()
0x2c0: Pop(0)
0x2c1: Stack[-21] = (bool) 1
0x2c2: Return(); Pop(18)

0x2c3: PushEmpty(bool, bool)
0x2c4: @ CameraSwitchToNormal()
0x2c5: Pop(0)
0x2c6: PushEmpty(bool)
0x2c7: Call2 0x3fa

0x2c8: Pop(0)
0x2c9: IF (Stack[-1] == 0) GOTO 0x2cb; Pop(1)

0x2ca: GOTO 0x2d3

0x2cb: Push("head")
0x2cc: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x2cd: Pop(1)
0x2ce: Push(Stack[-1])
0x2cf: IF (Stack[-1] == 0) GOTO 0x2d3; Pop(1)

0x2d0: Push("head")
0x2d1: @ UnlookAsync(Stack[-1])
0x2d2: Pop(1)
0x2d3: Return(); Pop(2)

0x2d4: PushEmpty(int, int, int, int)
0x2d5: Push("voice_common")
0x2d6: @ GetVariable(Stack[-1], Stack[-3])
0x2d7: Pop(1)
0x2d8: Push(Stack[-2])
0x2d9: IF (Stack[-1] == 0) GOTO 0x2fa; Pop(1)

0x2da: PushEmpty(bool, object)
0x2db: Stack[-1] = Stack[-7]
0x2dc: Call2 0x30e

0x2dd: Pop(1)
0x2de: Pop(1); Push((bool) Stack[-1] == 0)
0x2df: IF (Stack[-1] == 0) GOTO 0x2e8; Pop(1)

0x2e0: PushEmpty(bool, object)
0x2e1: Stack[-1] = Stack[-7]
0x2e2: Call2 0x333

0x2e3: Pop(1)
0x2e4: Pop(1); Push((bool) Stack[-1] == 0)
0x2e5: IF (Stack[-1] == 0) GOTO 0x2e8; Pop(1)

0x2e6: Stack[-6] = (bool) 0
0x2e7: Return(); Pop(4)

0x2e8: Push((int) 2)
0x2e9: @ irand(Stack[-2], Stack[-1])
0x2ea: Pop(1)
0x2eb: Push(Stack[-1])
0x2ec: IF (Stack[-1] == 0) GOTO 0x2f5; Pop(1)

0x2ed: Push("voice_common")
0x2ee: Push((int) 1)
0x2ef: Pop(1); Push(Stack[-4] + Stack[-1]);
0x2f0: Push((int) 3)
0x2f1: Pop(2); Push(Stack[-2] % Stack[-1]);
0x2f2: @ SetVariable(Stack[-2], Stack[-1])
0x2f3: Pop(2)
0x2f4: GOTO 0x2f9

0x2f5: Push("voice_common")
0x2f6: Push((int) 0)
0x2f7: @ SetVariable(Stack[-2], Stack[-1])
0x2f8: Pop(2)
0x2f9: GOTO 0x30c

0x2fa: PushEmpty(bool, object)
0x2fb: Stack[-1] = Stack[-7]
0x2fc: Call2 0x333

0x2fd: Pop(1)
0x2fe: Pop(1); Push((bool) Stack[-1] == 0)
0x2ff: IF (Stack[-1] == 0) GOTO 0x308; Pop(1)

0x300: PushEmpty(bool, object)
0x301: Stack[-1] = Stack[-7]
0x302: Call2 0x30e

0x303: Pop(1)
0x304: Pop(1); Push((bool) Stack[-1] == 0)
0x305: IF (Stack[-1] == 0) GOTO 0x308; Pop(1)

0x306: Stack[-6] = (bool) 0
0x307: Return(); Pop(4)

0x308: Push("voice_common")
0x309: Push((int) 1)
0x30a: @ SetVariable(Stack[-2], Stack[-1])
0x30b: Pop(2)
0x30c: Stack[-6] = (bool) 1
0x30d: Return(); Pop(4)

0x30e: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x30f: Stack[-5] = "c"
0x310: Stack[-4] = (int) 0
0x311: Push((int) 1)
0x312: IF (Stack[-1] == 0) GOTO 0x31e; Pop(1)

0x313: Push((int) 1)
0x314: Pop(1); Push(Stack[-5] + Stack[-1]);
0x315: Pop(1); Push(Stack[-6] + Stack[-1]);
0x316: @@ HasProperty(Stack[-1], Stack[-4])
0x317: Pop(1)
0x318: Pop(0); Push((bool) Stack[-3] == 0)
0x319: IF (Stack[-1] == 0) GOTO 0x31b; Pop(1)

0x31a: GOTO 0x31e

0x31b: Push((int) 1)
0x31c: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x31d: GOTO 0x311

0x31e: Pop(0); Push((bool) Stack[-4] == 0)
0x31f: IF (Stack[-1] == 0) GOTO 0x322; Pop(1)

0x320: Stack[-12] = (bool) 0
0x321: Return(); Pop(10)

0x322: Stack[-2] = (int) 0
0x323: Push((int) 1)
0x324: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x325: IF (Stack[-1] == 0) GOTO 0x328; Pop(1)

0x326: @ irand(Stack[-2], Stack[-4])
0x327: Pop(0)
0x328: Push((int) 1)
0x329: Pop(1); Push(Stack[-3] + Stack[-1]);
0x32a: Pop(1); Push(Stack[-6] + Stack[-1]);
0x32b: @@ GetProperty(Stack[-1], Stack[-2])
0x32c: Pop(1)
0x32d: PushEmpty(bool, string)
0x32e: Stack[-1] = Stack[-3]
0x32f: Call2 0x37d

0x330: Stack[-14] = Stack[-2]
0x331: Pop(2)
0x332: Return(); Pop(10)

0x333: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x334: Push("d")
0x335: PushEmpty(int)
0x336: Call2 0x3a8

0x337: Pop(0)
0x338: Pop(2); Push(Stack[-2] + Stack[-1]);
0x339: Push("m")
0x33a: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x33b: Stack[-4] = (int) 0
0x33c: Push((int) 1)
0x33d: IF (Stack[-1] == 0) GOTO 0x349; Pop(1)

0x33e: Push((int) 1)
0x33f: Pop(1); Push(Stack[-5] + Stack[-1]);
0x340: Pop(1); Push(Stack[-6] + Stack[-1]);
0x341: @@ HasProperty(Stack[-1], Stack[-4])
0x342: Pop(1)
0x343: Pop(0); Push((bool) Stack[-3] == 0)
0x344: IF (Stack[-1] == 0) GOTO 0x346; Pop(1)

0x345: GOTO 0x349

0x346: Push((int) 1)
0x347: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x348: GOTO 0x33c

0x349: Pop(0); Push((bool) Stack[-4] == 0)
0x34a: IF (Stack[-1] == 0) GOTO 0x34d; Pop(1)

0x34b: Stack[-12] = (bool) 0
0x34c: Return(); Pop(10)

0x34d: Stack[-2] = (int) 0
0x34e: Push((int) 1)
0x34f: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x350: IF (Stack[-1] == 0) GOTO 0x353; Pop(1)

0x351: @ irand(Stack[-2], Stack[-4])
0x352: Pop(0)
0x353: Push((int) 1)
0x354: Pop(1); Push(Stack[-3] + Stack[-1]);
0x355: Pop(1); Push(Stack[-6] + Stack[-1]);
0x356: @@ GetProperty(Stack[-1], Stack[-2])
0x357: Pop(1)
0x358: PushEmpty(bool, string)
0x359: Stack[-1] = Stack[-3]
0x35a: Call2 0x37d

0x35b: Stack[-14] = Stack[-2]
0x35c: Pop(2)
0x35d: Return(); Pop(10)

0x35e: PushEmpty(bool, float, float, bool, float, float)
0x35f: @ lshHasAnimation(Stack[-3], Stack[-7])
0x360: Pop(0)
0x361: Push(Stack[-3])
0x362: IF (Stack[-1] == 0) GOTO 0x369; Pop(1)

0x363: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x364: Pop(0)
0x365: Push((bool) 0)
0x366: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x367: Pop(1)
0x368: GOTO 0x36d

0x369: Push("Can't find lsh animation : ")
0x36a: Pop(1); Push(Stack[-1] + Stack[-8]);
0x36b: @ Trace(Stack[-1])
0x36c: Pop(1)
0x36d: Return(); Pop(6)

0x36e: PushEmpty(bool, float, float, bool, float, float)
0x36f: @ lshHasAnimation(Stack[-3], Stack[-8])
0x370: Pop(0)
0x371: Push(Stack[-3])
0x372: IF (Stack[-1] == 0) GOTO 0x378; Pop(1)

0x373: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x374: Pop(0)
0x375: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x376: Pop(0)
0x377: GOTO 0x37c

0x378: Push("Can't find lsh animation : ")
0x379: Pop(1); Push(Stack[-1] + Stack[-9]);
0x37a: @ Trace(Stack[-1])
0x37b: Pop(1)
0x37c: Return(); Pop(6)

0x37d: PushEmpty(bool, bool)
0x37e: PushEmpty(bool)
0x37f: Call2 0x3fa

0x380: Pop(0)
0x381: IF (Stack[-1] == 0) GOTO 0x38a; Pop(1)

0x382: @ lshHasSpeech(Stack[-1], Stack[-3])
0x383: Pop(0)
0x384: Push(Stack[-1])
0x385: IF (Stack[-1] == 0) GOTO 0x38a; Pop(1)

0x386: @ lshPlaySpeech(Stack[-3])
0x387: Pop(0)
0x388: Stack[-4] = (bool) 1
0x389: Return(); Pop(2)

0x38a: Stack[-4] = (bool) 0
0x38b: Return(); Pop(2)

0x38c: PushEmpty(bool)
0x38d: Call2 0x3fa

0x38e: Pop(0)
0x38f: IF (Stack[-1] == 0) GOTO 0x392; Pop(1)

0x390: @ lshStopSpeech()
0x391: Pop(0)
0x392: Return(); Pop(0)

0x393: PushEmpty(object, object)
0x394: @ self(Stack[-1])
0x395: Pop(0)
0x396: Stack[-3] = Stack[-1]
0x397: Return(); Pop(2)

0x398: Stack[-1] = 0
0x399: PushEmpty(float, float)
0x39a: Pop(0); Push(Stack[-3] | Stack[-3]);
0x39b: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x39c: Push((float)0.0)
0x39d: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x39e: IF (Stack[-1] == 0) GOTO 0x3a1; Pop(1)

0x39f: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x3a0: Return(); Pop(2)

0x3a1: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x3a2: Return(); Pop(2)

0x3a3: PushEmpty(int, int)
0x3a4: @ GetVariable(Stack[-3], Stack[-1])
0x3a5: Pop(0)
0x3a6: Stack[-4] = Stack[-1]
0x3a7: Return(); Pop(2)

0x3a8: PushEmpty(float, float)
0x3a9: @ GetGameTime(Stack[-1])
0x3aa: Pop(0)
0x3ab: Push((int) 1)
0x3ac: PushEmpty(int)
0x3ad: Push((int) 24)
0x3ae: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x3af: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x3b0: Return(); Pop(2)

0x3b1: PushEmpty()
0x3b2: Push("ood12KlaraSobor1")
0x3b3: Push((int) 1)
0x3b4: @ SetVariable(Stack[-2], Stack[-1])
0x3b5: Pop(2)
0x3b6: Return(); Pop(0)

0x3b7: PushEmpty()
0x3b8: Push("ood12KlaraSobor2")
0x3b9: Push((int) 1)
0x3ba: @ SetVariable(Stack[-2], Stack[-1])
0x3bb: Pop(2)
0x3bc: Return(); Pop(0)

0x3bd: PushEmpty()
0x3be: PushEmpty(int, string)
0x3bf: Stack[-1] = "game_final"
0x3c0: Call2 0x3a3

0x3c1: Pop(1)
0x3c2: Push((int) 0)
0x3c3: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x3c4: IF (Stack[-1] == 0) GOTO 0x3c7; Pop(1)

0x3c5: Stack[-2] = (bool) 1
0x3c6: Return(); Pop(0)

0x3c7: Stack[-2] = (bool) 0
0x3c8: Return(); Pop(0)

0x3c9: PushEmpty()
0x3ca: PushEmpty(int, string)
0x3cb: Stack[-1] = "ood12KlaraSobor1"
0x3cc: Call2 0x3a3

0x3cd: Pop(1)
0x3ce: Push((int) 0)
0x3cf: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x3d0: IF (Stack[-1] == 0) GOTO 0x3d3; Pop(1)

0x3d1: Stack[-2] = (bool) 1
0x3d2: Return(); Pop(0)

0x3d3: Stack[-2] = (bool) 0
0x3d4: Return(); Pop(0)

0x3d5: PushEmpty()
0x3d6: PushEmpty(int, string)
0x3d7: Stack[-1] = "ood12KlaraSobor2"
0x3d8: Call2 0x3a3

0x3d9: Pop(1)
0x3da: Push((int) 0)
0x3db: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x3dc: IF (Stack[-1] == 0) GOTO 0x3df; Pop(1)

0x3dd: Stack[-2] = (bool) 1
0x3de: Return(); Pop(0)

0x3df: Stack[-2] = (bool) 0
0x3e0: Return(); Pop(0)

0x3e1: PushEmpty(int, int)
0x3e2: Push("branch")
0x3e3: @ GetVariable(Stack[-1], Stack[-2])
0x3e4: Pop(1)
0x3e5: Push((int) 0)
0x3e6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3e7: IF (Stack[-1] == 0) GOTO 0x3eb; Pop(1)

0x3e8: Stack[-3] = (int) 1
0x3e9: Return(); Pop(2)

0x3ea: GOTO 0x3f0

0x3eb: Push((int) 1)
0x3ec: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3ed: IF (Stack[-1] == 0) GOTO 0x3f0; Pop(1)

0x3ee: Stack[-3] = (int) 2
0x3ef: Return(); Pop(2)

0x3f0: Stack[-3] = (int) 3
0x3f1: Return(); Pop(2)

0x3f2: Stack[-1] = (int) 515540
0x3f3: Return(); Pop(0)

0x3f4: Stack[-1] = (int) 502865
0x3f5: Return(); Pop(0)

0x3f6: Stack[-1] = "ui/NPC_Klara.png"
0x3f7: Return(); Pop(0)

0x3f8: Stack[-1] = "ui/NPC_Klara_b.png"
0x3f9: Return(); Pop(0)

0x3fa: Stack[-1] = (bool) 1
0x3fb: Return(); Pop(0)

