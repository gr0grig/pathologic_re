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
	Door 
	 not found
	locked
	SetProperty
	ui/NPC_bmask.png
	ui/NPC_bmask_b.png
	ook7Birdmask1
	k7q01CorpseMark
	k7q01BirdmaskGotoCorpse
	pt_d7q02_corpse
	AddMark
	quest_k7_01
	place_corpse
	ShowMap
	ook7Birdmask2
	ook7Birdmask3
	sobor@door1
	GetItemCount
	bird_mask
	bird_balahon
	GetItem
	GetItemID
	IsItemSelected
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
	GetGameTime (1 args)
	HasAnimation (3 args)
	SetVariable (2 args)
	GetInvItemByName (2 args)
	GetMainOutdoorScene (1 args)

RunOp = 0x2aa
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x10b Vars = (int, int)
	GTASK_2 Vars = (int, int, bool, bool, object) Params = 0
		EVENT_0 Op = 0x2b4 Vars = (object)
		EVENT_7 Op = 0x2e9 Vars = (int)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 130.0
0x5: Call2 0x371

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x43d

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x43b

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x43f

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x441

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x566

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
0x41: Call2 0x3b6

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
0x4f: IF (Stack[-1] == 0) GOTO 0xd7; Pop(1)

0x50: PushEmpty(bool, object)
0x51: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x52: Call2 0x4a6

0x53: Pop(1)
0x54: IF (Stack[-1] == 0) GOTO 0x69; Pop(1)

0x55: PushEmpty(object, object)
0x56: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x57: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x58: Call2 0x45d

0x59: Pop(2)
0x5a: PushEmpty(string)
0x5b: Stack[-1] = "Neutral"
0x5c: Call2 0xf5

0x5d: Pop(1)
0x5e: Push((int) 530193)
0x5f: @@ SetMessage(Stack[-1])
0x60: Pop(1)
0x61: @@ ClearReplies()
0x62: Pop(0)
0x63: Push((int) 526124)
0x64: Push((int) 27404)
0x65: Push((int) 27403)
0x66: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x67: Pop(3)
0x68: GOTO 0xd7

0x69: PushEmpty(bool)
0x6a: Stack[-1] = (bool) 0
0x6b: PushEmpty(bool, object)
0x6c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6d: Call2 0x4d4

0x6e: Pop(1)
0x6f: IF (Stack[-1] == 0) GOTO 0x76; Pop(1)

0x70: PushEmpty(bool, object)
0x71: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x72: Call2 0x4de

0x73: Pop(1)
0x74: IF (Stack[-1] == 0) GOTO 0x76; Pop(1)

0x75: Stack[-1] = (bool) 1
0x76: IF (Stack[-1] == 0) GOTO 0x9e; Pop(1)

0x77: PushEmpty(string)
0x78: Stack[-1] = "Neutral"
0x79: Call2 0xf5

0x7a: Pop(1)
0x7b: Push((int) 526123)
0x7c: @@ SetMessage(Stack[-1])
0x7d: Pop(1)
0x7e: @@ ClearReplies()
0x7f: Pop(0)
0x80: PushEmpty(bool)
0x81: Stack[-1] = (bool) 0
0x82: PushEmpty(bool, object)
0x83: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x84: Call2 0x4ca

0x85: Pop(1)
0x86: IF (Stack[-1] == 0) GOTO 0x8d; Pop(1)

0x87: PushEmpty(bool, object)
0x88: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x89: Call2 0x4b2

0x8a: Pop(1)
0x8b: IF (Stack[-1] == 0) GOTO 0x8d; Pop(1)

0x8c: Stack[-1] = (bool) 1
0x8d: IF (Stack[-1] == 0) GOTO 0x93; Pop(1)

0x8e: Push((int) 528266)
0x8f: Push((int) 29631)
0x90: Push((int) 29630)
0x91: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x92: Pop(3)
0x93: Push((int) 528258)
0x94: Push((int) -1)
0x95: Push((int) 29621)
0x96: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x97: Pop(3)
0x98: Push((int) 526135)
0x99: Push((int) -1)
0x9a: Push((int) 27414)
0x9b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9c: Pop(3)
0x9d: GOTO 0xd7

0x9e: PushEmpty(bool, object)
0x9f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa0: Call2 0x4ca

0xa1: Pop(1)
0xa2: IF (Stack[-1] == 0) GOTO 0xc6; Pop(1)

0xa3: PushEmpty(object, object)
0xa4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xa5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xa6: Call2 0x49f

0xa7: Pop(2)
0xa8: PushEmpty(string)
0xa9: Stack[-1] = "Neutral"
0xaa: Call2 0xf5

0xab: Pop(1)
0xac: Push((int) 526136)
0xad: @@ SetMessage(Stack[-1])
0xae: Pop(1)
0xaf: @@ ClearReplies()
0xb0: Pop(0)
0xb1: PushEmpty(bool, object)
0xb2: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb3: Call2 0x4be

0xb4: Pop(1)
0xb5: IF (Stack[-1] == 0) GOTO 0xbb; Pop(1)

0xb6: Push((int) 528269)
0xb7: Push((int) 29634)
0xb8: Push((int) 29633)
0xb9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xba: Pop(3)
0xbb: Push((int) 526137)
0xbc: Push((int) -1)
0xbd: Push((int) 27416)
0xbe: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbf: Pop(3)
0xc0: Push((int) 528259)
0xc1: Push((int) -1)
0xc2: Push((int) 29622)
0xc3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc4: Pop(3)
0xc5: GOTO 0xd7

0xc6: PushEmpty(string)
0xc7: Stack[-1] = "Neutral"
0xc8: Call2 0xf5

0xc9: Pop(1)
0xca: Push((int) 530191)
0xcb: @@ SetMessage(Stack[-1])
0xcc: Pop(1)
0xcd: @@ ClearReplies()
0xce: Pop(0)
0xcf: Push((int) 530192)
0xd0: Push((int) -1)
0xd1: Push((int) 31581)
0xd2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd3: Pop(3)
0xd4: GOTO 0xd7

0xd5: Return(); Pop(0)

0xd6: GOTO 0x4e

0xd7: PushEmpty(bool)
0xd8: Call2 0x443

0xd9: Pop(0)
0xda: IF (Stack[-1] == 0) GOTO 0xe6; Pop(1)

0xdb: @ lshWaitForAnimEnd()
0xdc: Pop(0)
0xdd: Push( Stack[3 + Tasks[-1].StackPointer] )
0xde: IF (Stack[-1] == 0) GOTO 0xe0; Pop(1)

0xdf: GOTO 0xe5

0xe0: PushEmpty(string)
0xe1: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xe2: Call2 0x3c8

0xe3: Pop(1)
0xe4: GOTO 0xdb

0xe5: GOTO 0xf4

0xe6: Push("all")
0xe7: Push("idle")
0xe8: @ PlayAnimation(Stack[-2], Stack[-1])
0xe9: Pop(2)
0xea: @ WaitForAnimEnd()
0xeb: Pop(0)
0xec: Push( Stack[3 + Tasks[-1].StackPointer] )
0xed: IF (Stack[-1] == 0) GOTO 0xef; Pop(1)

0xee: GOTO 0xf4

0xef: Push("all")
0xf0: Push("idle")
0xf1: @ PlayAnimation(Stack[-2], Stack[-1])
0xf2: Pop(2)
0xf3: GOTO 0xea

0xf4: Return(); Pop(0)

0xf5: PushEmpty()
0xf6: PushEmpty(bool)
0xf7: Call2 0x443

0xf8: Pop(0)
0xf9: Pop(1); Push((bool) Stack[-1] == 0)
0xfa: IF (Stack[-1] == 0) GOTO 0xfc; Pop(1)

0xfb: Return(); Pop(0)

0xfc: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xfd: IF (Stack[-1] == 0) GOTO 0xff; Pop(1)

0xfe: Return(); Pop(0)

0xff: PushEmpty(string, bool)
0x100: Stack[-2] = Stack[-3]
0x101: Push("")
0x102: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x103: IF (Stack[-1] == 0) GOTO 0x106; Pop(1)

0x104: Stack[-1] = (bool) 0
0x105: GOTO 0x107

0x106: Stack[-1] = (bool) 1
0x107: Call2 0x3d8

0x108: Pop(2)
0x109: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x10a: Return(); Pop(0)

0x10b: PushEmpty()
0x10c: Push((int) 1)
0x10d: IF (Stack[-1] == 0) GOTO 0x2a9; Pop(1)

0x10e: PushEmpty()
0x10f: Call2 0x3f2

0x110: Pop(0)
0x111: Push((int) 27413)
0x112: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x113: IF (Stack[-1] == 0) GOTO 0x11e; Pop(1)

0x114: PushEmpty(object, object)
0x115: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x116: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x117: Call2 0x463

0x118: Pop(2)
0x119: PushEmpty(object, object)
0x11a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x11b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x11c: Call2 0x483

0x11d: Pop(2)
0x11e: Push((int) 43962)
0x11f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x120: IF (Stack[-1] == 0) GOTO 0x12b; Pop(1)

0x121: PushEmpty(object, object)
0x122: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x123: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x124: Call2 0x463

0x125: Pop(2)
0x126: PushEmpty(object, object)
0x127: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x128: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x129: Call2 0x483

0x12a: Pop(2)
0x12b: Push((int) 29630)
0x12c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x12d: IF (Stack[-1] == 0) GOTO 0x133; Pop(1)

0x12e: PushEmpty(object, object)
0x12f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x130: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x131: Call2 0x493

0x132: Pop(2)
0x133: Push((int) 29633)
0x134: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x135: IF (Stack[-1] == 0) GOTO 0x13b; Pop(1)

0x136: PushEmpty(object, object)
0x137: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x138: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x139: Call2 0x499

0x13a: Pop(2)
0x13b: Push((int) 31582)
0x13c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x13d: IF (Stack[-1] == 0) GOTO 0x1c3; Pop(1)

0x13e: PushEmpty(bool, object)
0x13f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x140: Call2 0x4a6

0x141: Pop(1)
0x142: IF (Stack[-1] == 0) GOTO 0x157; Pop(1)

0x143: PushEmpty(object, object)
0x144: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x145: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x146: Call2 0x45d

0x147: Pop(2)
0x148: PushEmpty(string)
0x149: Stack[-1] = "Neutral"
0x14a: Call2 0xf5

0x14b: Pop(1)
0x14c: Push((int) 530193)
0x14d: @@ SetMessage(Stack[-1])
0x14e: Pop(1)
0x14f: @@ ClearReplies()
0x150: Pop(0)
0x151: Push((int) 526124)
0x152: Push((int) 27404)
0x153: Push((int) 27403)
0x154: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x155: Pop(3)
0x156: Return(); Pop(0)

0x157: PushEmpty(bool)
0x158: Stack[-1] = (bool) 0
0x159: PushEmpty(bool, object)
0x15a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x15b: Call2 0x4d4

0x15c: Pop(1)
0x15d: IF (Stack[-1] == 0) GOTO 0x164; Pop(1)

0x15e: PushEmpty(bool, object)
0x15f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x160: Call2 0x4de

0x161: Pop(1)
0x162: IF (Stack[-1] == 0) GOTO 0x164; Pop(1)

0x163: Stack[-1] = (bool) 1
0x164: IF (Stack[-1] == 0) GOTO 0x18c; Pop(1)

0x165: PushEmpty(string)
0x166: Stack[-1] = "Neutral"
0x167: Call2 0xf5

0x168: Pop(1)
0x169: Push((int) 526123)
0x16a: @@ SetMessage(Stack[-1])
0x16b: Pop(1)
0x16c: @@ ClearReplies()
0x16d: Pop(0)
0x16e: PushEmpty(bool)
0x16f: Stack[-1] = (bool) 0
0x170: PushEmpty(bool, object)
0x171: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x172: Call2 0x4ca

0x173: Pop(1)
0x174: IF (Stack[-1] == 0) GOTO 0x17b; Pop(1)

0x175: PushEmpty(bool, object)
0x176: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x177: Call2 0x4b2

0x178: Pop(1)
0x179: IF (Stack[-1] == 0) GOTO 0x17b; Pop(1)

0x17a: Stack[-1] = (bool) 1
0x17b: IF (Stack[-1] == 0) GOTO 0x181; Pop(1)

0x17c: Push((int) 528266)
0x17d: Push((int) 29631)
0x17e: Push((int) 29630)
0x17f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x180: Pop(3)
0x181: Push((int) 528258)
0x182: Push((int) -1)
0x183: Push((int) 29621)
0x184: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x185: Pop(3)
0x186: Push((int) 526135)
0x187: Push((int) -1)
0x188: Push((int) 27414)
0x189: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x18a: Pop(3)
0x18b: Return(); Pop(0)

0x18c: PushEmpty(bool, object)
0x18d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x18e: Call2 0x4ca

0x18f: Pop(1)
0x190: IF (Stack[-1] == 0) GOTO 0x1b4; Pop(1)

0x191: PushEmpty(object, object)
0x192: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x193: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x194: Call2 0x49f

0x195: Pop(2)
0x196: PushEmpty(string)
0x197: Stack[-1] = "Neutral"
0x198: Call2 0xf5

0x199: Pop(1)
0x19a: Push((int) 526136)
0x19b: @@ SetMessage(Stack[-1])
0x19c: Pop(1)
0x19d: @@ ClearReplies()
0x19e: Pop(0)
0x19f: PushEmpty(bool, object)
0x1a0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1a1: Call2 0x4be

0x1a2: Pop(1)
0x1a3: IF (Stack[-1] == 0) GOTO 0x1a9; Pop(1)

0x1a4: Push((int) 528269)
0x1a5: Push((int) 29634)
0x1a6: Push((int) 29633)
0x1a7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1a8: Pop(3)
0x1a9: Push((int) 526137)
0x1aa: Push((int) -1)
0x1ab: Push((int) 27416)
0x1ac: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ad: Pop(3)
0x1ae: Push((int) 528259)
0x1af: Push((int) -1)
0x1b0: Push((int) 29622)
0x1b1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1b2: Pop(3)
0x1b3: Return(); Pop(0)

0x1b4: PushEmpty(string)
0x1b5: Stack[-1] = "Neutral"
0x1b6: Call2 0xf5

0x1b7: Pop(1)
0x1b8: Push((int) 530191)
0x1b9: @@ SetMessage(Stack[-1])
0x1ba: Pop(1)
0x1bb: @@ ClearReplies()
0x1bc: Pop(0)
0x1bd: Push((int) 530192)
0x1be: Push((int) -1)
0x1bf: Push((int) 31581)
0x1c0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1c1: Pop(3)
0x1c2: Return(); Pop(0)

0x1c3: Push((int) 29634)
0x1c4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1c5: IF (Stack[-1] == 0) GOTO 0x1d5; Pop(1)

0x1c6: PushEmpty(string)
0x1c7: Stack[-1] = "Neutral"
0x1c8: Call2 0xf5

0x1c9: Pop(1)
0x1ca: Push((int) 528270)
0x1cb: @@ SetMessage(Stack[-1])
0x1cc: Pop(1)
0x1cd: @@ ClearReplies()
0x1ce: Pop(0)
0x1cf: Push((int) 528271)
0x1d0: Push((int) 29636)
0x1d1: Push((int) 29635)
0x1d2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1d3: Pop(3)
0x1d4: Return(); Pop(0)

0x1d5: Push((int) 29636)
0x1d6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1d7: IF (Stack[-1] == 0) GOTO 0x1ec; Pop(1)

0x1d8: PushEmpty(string)
0x1d9: Stack[-1] = "Neutral"
0x1da: Call2 0xf5

0x1db: Pop(1)
0x1dc: Push((int) 528272)
0x1dd: @@ SetMessage(Stack[-1])
0x1de: Pop(1)
0x1df: @@ ClearReplies()
0x1e0: Pop(0)
0x1e1: Push((int) 528273)
0x1e2: Push((int) -1)
0x1e3: Push((int) 29637)
0x1e4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1e5: Pop(3)
0x1e6: Push((int) 528274)
0x1e7: Push((int) -1)
0x1e8: Push((int) 29638)
0x1e9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ea: Pop(3)
0x1eb: Return(); Pop(0)

0x1ec: Push((int) 29631)
0x1ed: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1ee: IF (Stack[-1] == 0) GOTO 0x1fe; Pop(1)

0x1ef: PushEmpty(string)
0x1f0: Stack[-1] = "Neutral"
0x1f1: Call2 0xf5

0x1f2: Pop(1)
0x1f3: Push((int) 528267)
0x1f4: @@ SetMessage(Stack[-1])
0x1f5: Pop(1)
0x1f6: @@ ClearReplies()
0x1f7: Pop(0)
0x1f8: Push((int) 526132)
0x1f9: Push((int) 27412)
0x1fa: Push((int) 27411)
0x1fb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1fc: Pop(3)
0x1fd: Return(); Pop(0)

0x1fe: Push((int) 27412)
0x1ff: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x200: IF (Stack[-1] == 0) GOTO 0x210; Pop(1)

0x201: PushEmpty(string)
0x202: Stack[-1] = "Neutral"
0x203: Call2 0xf5

0x204: Pop(1)
0x205: Push((int) 526133)
0x206: @@ SetMessage(Stack[-1])
0x207: Pop(1)
0x208: @@ ClearReplies()
0x209: Pop(0)
0x20a: Push((int) 528268)
0x20b: Push((int) -1)
0x20c: Push((int) 29632)
0x20d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x20e: Pop(3)
0x20f: Return(); Pop(0)

0x210: Push((int) 27404)
0x211: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x212: IF (Stack[-1] == 0) GOTO 0x222; Pop(1)

0x213: PushEmpty(string)
0x214: Stack[-1] = "Neutral"
0x215: Call2 0xf5

0x216: Pop(1)
0x217: Push((int) 526125)
0x218: @@ SetMessage(Stack[-1])
0x219: Pop(1)
0x21a: @@ ClearReplies()
0x21b: Pop(0)
0x21c: Push((int) 528260)
0x21d: Push((int) 29624)
0x21e: Push((int) 29623)
0x21f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x220: Pop(3)
0x221: Return(); Pop(0)

0x222: Push((int) 29624)
0x223: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x224: IF (Stack[-1] == 0) GOTO 0x239; Pop(1)

0x225: PushEmpty(string)
0x226: Stack[-1] = "Neutral"
0x227: Call2 0xf5

0x228: Pop(1)
0x229: Push((int) 528261)
0x22a: @@ SetMessage(Stack[-1])
0x22b: Pop(1)
0x22c: @@ ClearReplies()
0x22d: Pop(0)
0x22e: Push((int) 526126)
0x22f: Push((int) 27406)
0x230: Push((int) 27405)
0x231: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x232: Pop(3)
0x233: Push((int) 528262)
0x234: Push((int) 29626)
0x235: Push((int) 29625)
0x236: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x237: Pop(3)
0x238: Return(); Pop(0)

0x239: Push((int) 29626)
0x23a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x23b: IF (Stack[-1] == 0) GOTO 0x24b; Pop(1)

0x23c: PushEmpty(string)
0x23d: Stack[-1] = "Neutral"
0x23e: Call2 0xf5

0x23f: Pop(1)
0x240: Push((int) 528263)
0x241: @@ SetMessage(Stack[-1])
0x242: Pop(1)
0x243: @@ ClearReplies()
0x244: Pop(0)
0x245: Push((int) 528264)
0x246: Push((int) 27408)
0x247: Push((int) 29627)
0x248: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x249: Pop(3)
0x24a: Return(); Pop(0)

0x24b: Push((int) 27406)
0x24c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x24d: IF (Stack[-1] == 0) GOTO 0x262; Pop(1)

0x24e: PushEmpty(string)
0x24f: Stack[-1] = "Neutral"
0x250: Call2 0xf5

0x251: Pop(1)
0x252: Push((int) 526127)
0x253: @@ SetMessage(Stack[-1])
0x254: Pop(1)
0x255: @@ ClearReplies()
0x256: Pop(0)
0x257: Push((int) 526128)
0x258: Push((int) 27408)
0x259: Push((int) 27407)
0x25a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x25b: Pop(3)
0x25c: Push((int) 528265)
0x25d: Push((int) 27408)
0x25e: Push((int) 29629)
0x25f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x260: Pop(3)
0x261: Return(); Pop(0)

0x262: Push((int) 27408)
0x263: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x264: IF (Stack[-1] == 0) GOTO 0x279; Pop(1)

0x265: PushEmpty(string)
0x266: Stack[-1] = "Neutral"
0x267: Call2 0xf5

0x268: Pop(1)
0x269: Push((int) 526129)
0x26a: @@ SetMessage(Stack[-1])
0x26b: Pop(1)
0x26c: @@ ClearReplies()
0x26d: Pop(0)
0x26e: Push((int) 526130)
0x26f: Push((int) 27410)
0x270: Push((int) 27409)
0x271: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x272: Pop(3)
0x273: Push((int) 541756)
0x274: Push((int) 43961)
0x275: Push((int) 43960)
0x276: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x277: Pop(3)
0x278: Return(); Pop(0)

0x279: Push((int) 43961)
0x27a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x27b: IF (Stack[-1] == 0) GOTO 0x28b; Pop(1)

0x27c: PushEmpty(string)
0x27d: Stack[-1] = "Neutral"
0x27e: Call2 0xf5

0x27f: Pop(1)
0x280: Push((int) 541757)
0x281: @@ SetMessage(Stack[-1])
0x282: Pop(1)
0x283: @@ ClearReplies()
0x284: Pop(0)
0x285: Push((int) 541758)
0x286: Push((int) -1)
0x287: Push((int) 43962)
0x288: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x289: Pop(3)
0x28a: Return(); Pop(0)

0x28b: Push((int) 27410)
0x28c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x28d: IF (Stack[-1] == 0) GOTO 0x29d; Pop(1)

0x28e: PushEmpty(string)
0x28f: Stack[-1] = "Neutral"
0x290: Call2 0xf5

0x291: Pop(1)
0x292: Push((int) 526131)
0x293: @@ SetMessage(Stack[-1])
0x294: Pop(1)
0x295: @@ ClearReplies()
0x296: Pop(0)
0x297: Push((int) 526134)
0x298: Push((int) -1)
0x299: Push((int) 27413)
0x29a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x29b: Pop(3)
0x29c: Return(); Pop(0)

0x29d: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x29e: PushEmpty(bool)
0x29f: Call2 0x443

0x2a0: Pop(0)
0x2a1: IF (Stack[-1] == 0) GOTO 0x2a5; Pop(1)

0x2a2: @ lshStopAnimation()
0x2a3: Pop(0)
0x2a4: GOTO 0x2a7

0x2a5: @ StopAnimation()
0x2a6: Pop(0)
0x2a7: Return(); Pop(0)

0x2a8: GOTO 0x10c

0x2a9: Return(); Pop(0)

0x2aa: PushEmpty(float, float)
0x2ab: Stack[-2] = (int) 300
0x2ac: Stack[-1] = (int) 100
0x2ad: Call2 0x2bf

0x2ae: Pop(2)
0x2af: Push((int) 3)
0x2b0: @ Sleep(Stack[-1])
0x2b1: Pop(1)
0x2b2: GOTO 0x2aa

0x2b3: Return(); Pop(0)

0x2b4: PushEmpty()
0x2b5: PushEmpty()
0x2b6: Call2 0x300

0x2b7: Pop(0)
0x2b8: PushEmpty(int, object)
0x2b9: Stack[-1] = Stack[-3]
0x2ba: Push(-2, 1); TaskCall(0)
0x2bb: Call2 0x0

0x2bc: Pop(-2, 1); TaskReturn
0x2bd: Pop(2)
0x2be: Return(); Pop(0)

0x2bf: PushEmpty()
0x2c0: PushEmpty(bool)
0x2c1: Call2 0x36c

0x2c2: Pop(0)
0x2c3: Pop(1); Push((bool) Stack[-1] == 0)
0x2c4: IF (Stack[-1] == 0) GOTO 0x2c6; Pop(1)

0x2c5: Return(); Pop(0)

0x2c6: Push("player")
0x2c7: @ FindActor(Stack[-4], Stack[-1])
0x2c8: Pop(1)
0x2c9: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x2ca: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x2cb: Stack[0 + Tasks[-1].StackPointer] = Stack[-2]
0x2cc: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x2cd: Push((int) 10)
0x2ce: Push((float)1.0)
0x2cf: @ SetTimer(Stack[-2], Stack[-1])
0x2d0: Pop(2)
0x2d1: PushEmpty()
0x2d2: Call2 0x30e

0x2d3: Pop(0)
0x2d4: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x2d5: IF (Stack[-1] == 0) GOTO 0x2d9; Pop(1)

0x2d6: Push((int) 10)
0x2d7: @ KillTimer(Stack[-1])
0x2d8: Pop(1)
0x2d9: Return(); Pop(0)

0x2da: PushEmpty(float, float)
0x2db: Pop(0); Push((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0x2dc: IF (Stack[-1] == 0) GOTO 0x2df; Pop(1)

0x2dd: Stack[-3] = (bool) 0
0x2de: Return(); Pop(2)

0x2df: PushEmpty(float, object)
0x2e0: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x2e1: Call2 0x364

0x2e2: Pop(1)
0x2e3: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x2e4: Push( Stack[2 + Tasks[-1].StackPointer] )
0x2e5: IF (Stack[-1] == 0) GOTO 0x2e7; Pop(1)

0x2e6: Stack[-1] = Stack[-1] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x2e7: Stack[-3] = Stack[-1] < Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x2e8: Return(); Pop(2)

0x2e9: PushEmpty()
0x2ea: Push((int) 10)
0x2eb: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2ec: IF (Stack[-1] == 0) GOTO 0x2ff; Pop(1)

0x2ed: PushEmpty(bool)
0x2ee: Call2 0x2da

0x2ef: Pop(0)
0x2f0: IF (Stack[-1] == 0) GOTO 0x2f9; Pop(1)

0x2f1: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x2f2: IF (Stack[-1] == 0) GOTO 0x2f8; Pop(1)

0x2f3: PushEmpty(object)
0x2f4: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x2f5: Call2 0x3e7

0x2f6: Pop(1)
0x2f7: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x2f8: GOTO 0x2ff

0x2f9: Push( Stack[2 + Tasks[-1].StackPointer] )
0x2fa: IF (Stack[-1] == 0) GOTO 0x2ff; Pop(1)

0x2fb: Push("head")
0x2fc: @ UnlookAsync(Stack[-1])
0x2fd: Pop(1)
0x2fe: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x2ff: Return(); Pop(0)

0x300: PushEmpty()
0x301: Call2 0x35f

0x302: Pop(0)
0x303: Push((int) 10)
0x304: @ KillTimer(Stack[-1])
0x305: Pop(1)
0x306: Push( Stack[2 + Tasks[-1].StackPointer] )
0x307: IF (Stack[-1] == 0) GOTO 0x30c; Pop(1)

0x308: Push("head")
0x309: @ UnlookAsync(Stack[-1])
0x30a: Pop(1)
0x30b: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x30c: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x30d: Return(); Pop(0)

0x30e: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x30f: @ WaitForAnimEnd()
0x310: Pop(0)
0x311: PushEmpty(bool)
0x312: Call2 0x36c

0x313: Pop(0)
0x314: Pop(1); Push((bool) Stack[-1] == 0)
0x315: IF (Stack[-1] == 0) GOTO 0x317; Pop(1)

0x316: Return(); Pop(14)

0x317: PushEmpty(int)
0x318: Call2 0x44c

0x319: Stack[-8] = Stack[-1]
0x31a: Pop(1)
0x31b: Stack[-6] = (int) 0
0x31c: PushEmpty(bool)
0x31d: Stack[-1] = (bool) 0
0x31e: Push((int) 5)
0x31f: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x320: IF (Stack[-1] == 0) GOTO 0x326; Pop(1)

0x321: PushEmpty(bool)
0x322: Call2 0x36c

0x323: Pop(0)
0x324: IF (Stack[-1] == 0) GOTO 0x326; Pop(1)

0x325: Stack[-1] = (bool) 1
0x326: IF (Stack[-1] == 0) GOTO 0x35a; Pop(1)

0x327: Push((int) 3)
0x328: @ irand(Stack[-6], Stack[-1])
0x329: Pop(1)
0x32a: Push((int) 0)
0x32b: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x32c: IF (Stack[-1] == 0) GOTO 0x33e; Pop(1)

0x32d: Push(Stack[-7])
0x32e: IF (Stack[-1] == 0) GOTO 0x33d; Pop(1)

0x32f: @ irand(Stack[-4], Stack[-7])
0x330: Pop(0)
0x331: Push("all")
0x332: PushEmpty(string, int)
0x333: Stack[-1] = Stack[-7]
0x334: Call2 0x445

0x335: Pop(1)
0x336: @ PlayAnimation(Stack[-2], Stack[-1])
0x337: Pop(2)
0x338: @ WaitForAnimEnd(Stack[-3])
0x339: Pop(0)
0x33a: Pop(0); Push((bool) Stack[-3] == 0)
0x33b: IF (Stack[-1] == 0) GOTO 0x33d; Pop(1)

0x33c: GOTO 0x35a

0x33d: GOTO 0x34f

0x33e: Push((int) 1)
0x33f: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x340: IF (Stack[-1] == 0) GOTO 0x34c; Pop(1)

0x341: Push((int) 4)
0x342: @ rand(Stack[-3], Stack[-1])
0x343: Pop(1)
0x344: Push((int) 1)
0x345: Pop(1); Push(Stack[-3] + Stack[-1]);
0x346: @ Sleep(Stack[-1], Stack[-2])
0x347: Pop(1)
0x348: Pop(0); Push((bool) Stack[-1] == 0)
0x349: IF (Stack[-1] == 0) GOTO 0x34b; Pop(1)

0x34a: GOTO 0x35a

0x34b: GOTO 0x34f

0x34c: Push(Stack[-6])
0x34d: IF (Stack[-1] == 0) GOTO 0x34f; Pop(1)

0x34e: GOTO 0x35a

0x34f: PushEmpty(bool)
0x350: Call2 0x35d

0x351: Pop(0)
0x352: Pop(1); Push((bool) Stack[-1] == 0)
0x353: IF (Stack[-1] == 0) GOTO 0x355; Pop(1)

0x354: GOTO 0x35a

0x355: @ ResetAAS()
0x356: Pop(0)
0x357: Push((int) 1)
0x358: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x359: GOTO 0x31c

0x35a: @ ResetAAS()
0x35b: Pop(0)
0x35c: Return(); Pop(14)

0x35d: Stack[-1] = (bool) 1
0x35e: Return(); Pop(0)

0x35f: @ StopAnimation()
0x360: Pop(0)
0x361: @ StopGroup0()
0x362: Pop(0)
0x363: Return(); Pop(0)

0x364: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x365: @ GetPosition(Stack[-3])
0x366: Pop(0)
0x367: @@ GetPosition(Stack[-2])
0x368: Pop(0)
0x369: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x36a: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x36b: Return(); Pop(6)

0x36c: PushEmpty(bool, bool)
0x36d: @ IsLoaded(Stack[-1])
0x36e: Pop(0)
0x36f: Stack[-3] = Stack[-1]
0x370: Return(); Pop(2)

0x371: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x372: @@ GetPosition(Stack[-8])
0x373: Pop(0)
0x374: @@ GetEyesHeight(Stack[-9])
0x375: Pop(0)
0x376: Push(CvectorIndex(Stack[-8], 1))
0x377: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x378: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x379: @ GetPosition(Stack[-7])
0x37a: Pop(0)
0x37b: @ GetEyesHeight(Stack[-9])
0x37c: Pop(0)
0x37d: Push(CvectorIndex(Stack[-7], 1))
0x37e: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x37f: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x380: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x381: Push(CvectorIndex(Stack[-6], 1))
0x382: Stack[-1] = (int) 0
0x383: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x384: Pop(0); Push(Stack[-6] | Stack[-6]);
0x385: Pop(1); Push(Sqrt(Stack[-1]))
0x386: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x387: Stack[-5] = -Stack[-6]; Pop(0);
0x388: Pop(0); Push(Stack[-6] * Stack[-19]);
0x389: PushEmpty(cvector, cvector)
0x38a: Push(CVector(0.0, 1.0, 0.0))
0x38b: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x38c: Call2 0x3f9

0x38d: Pop(1)
0x38e: Push((int) 25)
0x38f: Pop(2); Push(Stack[-2] * Stack[-1]);
0x390: Pop(2); Push(Stack[-2] + Stack[-1]);
0x391: Push(CVector(0.0, 10.0, 0.0))
0x392: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x393: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x394: @ IsOverrideActive(Stack[-2])
0x395: Pop(0)
0x396: Push(Stack[-2])
0x397: IF (Stack[-1] == 0) GOTO 0x39a; Pop(1)

0x398: Stack[-21] = (bool) 0
0x399: Return(); Pop(18)

0x39a: @ StopWorld()
0x39b: Pop(0)
0x39c: Push((bool) 1)
0x39d: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0x39e: Pop(1)
0x39f: Push(CvectorIndex(Stack[-4], 0))
0x3a0: Push(CvectorIndex(Stack[-5], 2))
0x3a1: @ Rotate(Stack[-2], Stack[-1])
0x3a2: Pop(2)
0x3a3: PushEmpty(bool)
0x3a4: Call2 0x443

0x3a5: Pop(0)
0x3a6: IF (Stack[-1] == 0) GOTO 0x3a8; Pop(1)

0x3a7: GOTO 0x3b0

0x3a8: Push("head")
0x3a9: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x3aa: Pop(1)
0x3ab: Push(Stack[-1])
0x3ac: IF (Stack[-1] == 0) GOTO 0x3b0; Pop(1)

0x3ad: Push("head")
0x3ae: @ LookAsyncCamera(Stack[-1])
0x3af: Pop(1)
0x3b0: @ CameraWaitForPlayFinish()
0x3b1: Pop(0)
0x3b2: @ ResumeWorld()
0x3b3: Pop(0)
0x3b4: Stack[-21] = (bool) 1
0x3b5: Return(); Pop(18)

0x3b6: PushEmpty(bool, bool)
0x3b7: Push((bool) 1)
0x3b8: @ CameraSwitchToNormal(Stack[-1])
0x3b9: Pop(1)
0x3ba: PushEmpty(bool)
0x3bb: Call2 0x443

0x3bc: Pop(0)
0x3bd: IF (Stack[-1] == 0) GOTO 0x3bf; Pop(1)

0x3be: GOTO 0x3c7

0x3bf: Push("head")
0x3c0: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x3c1: Pop(1)
0x3c2: Push(Stack[-1])
0x3c3: IF (Stack[-1] == 0) GOTO 0x3c7; Pop(1)

0x3c4: Push("head")
0x3c5: @ UnlookAsync(Stack[-1])
0x3c6: Pop(1)
0x3c7: Return(); Pop(2)

0x3c8: PushEmpty(bool, float, float, bool, float, float)
0x3c9: @ lshHasAnimation(Stack[-3], Stack[-7])
0x3ca: Pop(0)
0x3cb: Push(Stack[-3])
0x3cc: IF (Stack[-1] == 0) GOTO 0x3d3; Pop(1)

0x3cd: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x3ce: Pop(0)
0x3cf: Push((bool) 0)
0x3d0: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x3d1: Pop(1)
0x3d2: GOTO 0x3d7

0x3d3: Push("Can't find lsh animation : ")
0x3d4: Pop(1); Push(Stack[-1] + Stack[-8]);
0x3d5: @ Trace(Stack[-1])
0x3d6: Pop(1)
0x3d7: Return(); Pop(6)

0x3d8: PushEmpty(bool, float, float, bool, float, float)
0x3d9: @ lshHasAnimation(Stack[-3], Stack[-8])
0x3da: Pop(0)
0x3db: Push(Stack[-3])
0x3dc: IF (Stack[-1] == 0) GOTO 0x3e2; Pop(1)

0x3dd: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x3de: Pop(0)
0x3df: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x3e0: Pop(0)
0x3e1: GOTO 0x3e6

0x3e2: Push("Can't find lsh animation : ")
0x3e3: Pop(1); Push(Stack[-1] + Stack[-9]);
0x3e4: @ Trace(Stack[-1])
0x3e5: Pop(1)
0x3e6: Return(); Pop(6)

0x3e7: PushEmpty(float, cvector, float, cvector)
0x3e8: @@ GetEyesHeight(Stack[-2])
0x3e9: Pop(0)
0x3ea: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x3eb: Push(CvectorIndex(Stack[-1], 1))
0x3ec: Stack[-1] = Stack[-3]
0x3ed: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x3ee: Push("head")
0x3ef: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x3f0: Pop(1)
0x3f1: Return(); Pop(4)

0x3f2: PushEmpty(bool)
0x3f3: Call2 0x443

0x3f4: Pop(0)
0x3f5: IF (Stack[-1] == 0) GOTO 0x3f8; Pop(1)

0x3f6: @ lshStopSpeech()
0x3f7: Pop(0)
0x3f8: Return(); Pop(0)

0x3f9: PushEmpty(float, float)
0x3fa: Pop(0); Push(Stack[-3] | Stack[-3]);
0x3fb: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x3fc: Push((float)0.0)
0x3fd: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x3fe: IF (Stack[-1] == 0) GOTO 0x401; Pop(1)

0x3ff: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x400: Return(); Pop(2)

0x401: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x402: Return(); Pop(2)

0x403: PushEmpty(int, int)
0x404: @ GetVariable(Stack[-3], Stack[-1])
0x405: Pop(0)
0x406: Stack[-4] = Stack[-1]
0x407: Return(); Pop(2)

0x408: PushEmpty(object, object)
0x409: @ FindActor(Stack[-1], Stack[-4])
0x40a: Pop(0)
0x40b: Pop(0); Push((bool) Stack[-1] == 0)
0x40c: IF (Stack[-1] == 0) GOTO 0x414; Pop(1)

0x40d: Push("Door ")
0x40e: Pop(1); Push(Stack[-1] + Stack[-5]);
0x40f: Push(" not found")
0x410: Pop(2); Push(Stack[-2] + Stack[-1]);
0x411: @ Trace(Stack[-1])
0x412: Pop(1)
0x413: GOTO 0x417

0x414: Push("locked")
0x415: @@ SetProperty(Stack[-1], Stack[-4])
0x416: Pop(1)
0x417: Return(); Pop(2)

0x418: Stack[-1] = 0
0x419: PushEmpty(object, object)
0x41a: @ FindActor(Stack[-1], Stack[-4])
0x41b: Pop(0)
0x41c: Pop(0); Push((bool) Stack[-1] == 0)
0x41d: IF (Stack[-1] == 0) GOTO 0x420; Pop(1)

0x41e: Stack[-5] = (bool) 0
0x41f: Return(); Pop(2)

0x420: @ Trigger(Stack[-1], Stack[-3])
0x421: Pop(0)
0x422: Stack[-5] = (bool) 1
0x423: Return(); Pop(2)

0x424: Stack[-1] = 0
0x425: PushEmpty(float, float)
0x426: @ GetGameTime(Stack[-1])
0x427: Pop(0)
0x428: Stack[-3] = Stack[-1]
0x429: Return(); Pop(2)

0x42a: PushEmpty(float, float)
0x42b: @ GetGameTime(Stack[-1])
0x42c: Pop(0)
0x42d: Push((int) 1)
0x42e: PushEmpty(int)
0x42f: Push((int) 24)
0x430: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x431: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x432: Return(); Pop(2)

0x433: PushEmpty(float, float)
0x434: @ GetGameTime(Stack[-1])
0x435: Pop(0)
0x436: PushEmpty(int)
0x437: Stack[-1] = Stack[-2]
0x438: Push((int) 24)
0x439: Stack[-5] = Stack[-2] % Stack[-1]; Pop(2);
0x43a: Return(); Pop(2)

0x43b: Stack[-1] = (int) 515571
0x43c: Return(); Pop(0)

0x43d: Stack[-1] = (int) 504029
0x43e: Return(); Pop(0)

0x43f: Stack[-1] = "ui/NPC_bmask.png"
0x440: Return(); Pop(0)

0x441: Stack[-1] = "ui/NPC_bmask_b.png"
0x442: Return(); Pop(0)

0x443: Stack[-1] = (bool) 0
0x444: Return(); Pop(0)

0x445: PushEmpty(string, string)
0x446: Stack[-1] = "idle"
0x447: Push(Stack[-3])
0x448: IF (Stack[-1] == 0) GOTO 0x44a; Pop(1)

0x449: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x44a: Stack[-4] = Stack[-1]
0x44b: Return(); Pop(2)

0x44c: PushEmpty(int, bool, int, bool)
0x44d: Stack[-2] = (int) 0
0x44e: Push("all")
0x44f: PushEmpty(string, int)
0x450: Stack[-1] = Stack[-5]
0x451: Call2 0x445

0x452: Pop(1)
0x453: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x454: Pop(2)
0x455: Pop(0); Push((bool) Stack[-1] == 0)
0x456: IF (Stack[-1] == 0) GOTO 0x458; Pop(1)

0x457: GOTO 0x45b

0x458: Push((int) 1)
0x459: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x45a: GOTO 0x44e

0x45b: Stack[-5] = Stack[-2]
0x45c: Return(); Pop(4)

0x45d: PushEmpty()
0x45e: Push("ook7Birdmask1")
0x45f: Push((int) 1)
0x460: @ SetVariable(Stack[-2], Stack[-1])
0x461: Pop(2)
0x462: Return(); Pop(0)

0x463: PushEmpty(object, object)
0x464: PushEmpty(int, string)
0x465: Stack[-1] = "k7q01CorpseMark"
0x466: Call2 0x403

0x467: Pop(1)
0x468: Push((int) 0)
0x469: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x46a: IF (Stack[-1] == 0) GOTO 0x482; Pop(1)

0x46b: Push("k7q01CorpseMark")
0x46c: Push((int) 1)
0x46d: @ SetVariable(Stack[-2], Stack[-1])
0x46e: Pop(2)
0x46f: PushEmpty(object)
0x470: Call2 0x534

0x471: Stack[-2] = Stack[-1]
0x472: Pop(1)
0x473: Push("k7q01BirdmaskGotoCorpse")
0x474: Push("pt_d7q02_corpse")
0x475: Push((int) 3)
0x476: Push((int) 526214)
0x477: PushEmpty(float)
0x478: Call2 0x425

0x479: Pop(0)
0x47a: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x47b: Pop(5)
0x47c: PushEmpty(bool, string, string)
0x47d: Stack[-2] = "quest_k7_01"
0x47e: Stack[-1] = "place_corpse"
0x47f: Call2 0x419

0x480: Pop(3)
0x481: Stack[-1] = 0
0x482: Return(); Pop(2)

0x483: PushEmpty()
0x484: PushEmpty(object, string, float)
0x485: PushEmpty(object)
0x486: Call2 0x534

0x487: Stack[-4] = Stack[-1]
0x488: Pop(1)
0x489: Stack[-2] = "pt_d7q02_corpse"
0x48a: Stack[-1] = (int) 2
0x48b: Call2 0x545

0x48c: Pop(3)
0x48d: PushEmpty(object)
0x48e: Call2 0x534

0x48f: Pop(0)
0x490: @@ ShowMap(Stack[-1])
0x491: Pop(1)
0x492: Return(); Pop(0)

0x493: PushEmpty()
0x494: Push("ook7Birdmask2")
0x495: Push((int) 1)
0x496: @ SetVariable(Stack[-2], Stack[-1])
0x497: Pop(2)
0x498: Return(); Pop(0)

0x499: PushEmpty()
0x49a: Push("ook7Birdmask3")
0x49b: Push((int) 1)
0x49c: @ SetVariable(Stack[-2], Stack[-1])
0x49d: Pop(2)
0x49e: Return(); Pop(0)

0x49f: PushEmpty()
0x4a0: PushEmpty(string, bool)
0x4a1: Stack[-2] = "sobor@door1"
0x4a2: Stack[-1] = (bool) 0
0x4a3: Call2 0x408

0x4a4: Pop(2)
0x4a5: Return(); Pop(0)

0x4a6: PushEmpty()
0x4a7: PushEmpty(int, string)
0x4a8: Stack[-1] = "ook7Birdmask1"
0x4a9: Call2 0x403

0x4aa: Pop(1)
0x4ab: Push((int) 0)
0x4ac: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x4ad: IF (Stack[-1] == 0) GOTO 0x4b0; Pop(1)

0x4ae: Stack[-2] = (bool) 1
0x4af: Return(); Pop(0)

0x4b0: Stack[-2] = (bool) 0
0x4b1: Return(); Pop(0)

0x4b2: PushEmpty()
0x4b3: PushEmpty(int, string)
0x4b4: Stack[-1] = "ook7Birdmask2"
0x4b5: Call2 0x403

0x4b6: Pop(1)
0x4b7: Push((int) 0)
0x4b8: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x4b9: IF (Stack[-1] == 0) GOTO 0x4bc; Pop(1)

0x4ba: Stack[-2] = (bool) 1
0x4bb: Return(); Pop(0)

0x4bc: Stack[-2] = (bool) 0
0x4bd: Return(); Pop(0)

0x4be: PushEmpty()
0x4bf: PushEmpty(int, string)
0x4c0: Stack[-1] = "ook7Birdmask3"
0x4c1: Call2 0x403

0x4c2: Pop(1)
0x4c3: Push((int) 0)
0x4c4: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x4c5: IF (Stack[-1] == 0) GOTO 0x4c8; Pop(1)

0x4c6: Stack[-2] = (bool) 1
0x4c7: Return(); Pop(0)

0x4c8: Stack[-2] = (bool) 0
0x4c9: Return(); Pop(0)

0x4ca: PushEmpty()
0x4cb: PushEmpty(bool, object)
0x4cc: Stack[-1] = Stack[-3]
0x4cd: Call2 0x4e8

0x4ce: Pop(1)
0x4cf: IF (Stack[-1] == 0) GOTO 0x4d2; Pop(1)

0x4d0: Stack[-2] = (bool) 1
0x4d1: Return(); Pop(0)

0x4d2: Stack[-2] = (bool) 0
0x4d3: Return(); Pop(0)

0x4d4: PushEmpty()
0x4d5: PushEmpty(bool, object)
0x4d6: Stack[-1] = Stack[-3]
0x4d7: Call2 0x518

0x4d8: Pop(1)
0x4d9: IF (Stack[-1] == 0) GOTO 0x4dc; Pop(1)

0x4da: Stack[-2] = (bool) 1
0x4db: Return(); Pop(0)

0x4dc: Stack[-2] = (bool) 0
0x4dd: Return(); Pop(0)

0x4de: PushEmpty()
0x4df: PushEmpty(bool, object)
0x4e0: Stack[-1] = Stack[-3]
0x4e1: Call2 0x51f

0x4e2: Pop(1)
0x4e3: IF (Stack[-1] == 0) GOTO 0x4e6; Pop(1)

0x4e4: Stack[-2] = (bool) 1
0x4e5: Return(); Pop(0)

0x4e6: Stack[-2] = (bool) 0
0x4e7: Return(); Pop(0)

0x4e8: PushEmpty(int, int, int, bool, bool, int, object, int, bool, bool, int, int, int, bool, bool, int, object, int, bool, bool)
0x4e9: Push((int) 1)
0x4ea: @@ GetItemCount(Stack[-11], Stack[-1])
0x4eb: Pop(1)
0x4ec: Push("bird_mask")
0x4ed: @ GetInvItemByName(Stack[-10], Stack[-1])
0x4ee: Pop(1)
0x4ef: Push("bird_balahon")
0x4f0: @ GetInvItemByName(Stack[-9], Stack[-1])
0x4f1: Pop(1)
0x4f2: Stack[-7] = (bool) 0
0x4f3: Stack[-6] = (bool) 0
0x4f4: Stack[-5] = (int) 0
0x4f5: Pop(0); Push((bool) Stack[-5] < Stack[-10])
0x4f6: IF (Stack[-1] == 0) GOTO 0x511; Pop(1)

0x4f7: Push((int) 1)
0x4f8: @@ GetItem(Stack[-5], Stack[-6], Stack[-1])
0x4f9: Pop(1)
0x4fa: @@ GetItemID(Stack[-3])
0x4fb: Pop(0)
0x4fc: Pop(0); Push((bool) Stack[-3] == Stack[-9])
0x4fd: IF (Stack[-1] == 0) GOTO 0x505; Pop(1)

0x4fe: Push((int) 1)
0x4ff: @@ IsItemSelected(Stack[-3], Stack[-6], Stack[-1])
0x500: Pop(1)
0x501: Push(Stack[-2])
0x502: IF (Stack[-1] == 0) GOTO 0x504; Pop(1)

0x503: Stack[-7] = (bool) 1
0x504: GOTO 0x50d

0x505: Pop(0); Push((bool) Stack[-3] == Stack[-8])
0x506: IF (Stack[-1] == 0) GOTO 0x50d; Pop(1)

0x507: Push((int) 1)
0x508: @@ IsItemSelected(Stack[-2], Stack[-6], Stack[-1])
0x509: Pop(1)
0x50a: Push(Stack[-1])
0x50b: IF (Stack[-1] == 0) GOTO 0x50d; Pop(1)

0x50c: Stack[-6] = (bool) 1
0x50d: Stack[-4] = 0
0x50e: Push((int) 1)
0x50f: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x510: GOTO 0x4f5

0x511: Stack[-22] = (bool) 0
0x512: Push(Stack[-7])
0x513: IF (Stack[-1] == 0) GOTO 0x517; Pop(1)

0x514: Push(Stack[-6])
0x515: IF (Stack[-1] == 0) GOTO 0x517; Pop(1)

0x516: Stack[-22] = (bool) 1
0x517: Return(); Pop(20)

0x518: PushEmpty()
0x519: PushEmpty(int)
0x51a: Call2 0x42a

0x51b: Pop(0)
0x51c: Push((int) 7)
0x51d: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x51e: Return(); Pop(0)

0x51f: PushEmpty()
0x520: PushEmpty(bool)
0x521: Stack[-1] = (bool) 0
0x522: PushEmpty(int)
0x523: Call2 0x433

0x524: Pop(0)
0x525: Push((int) 0)
0x526: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x527: IF (Stack[-1] == 0) GOTO 0x52f; Pop(1)

0x528: PushEmpty(int)
0x529: Call2 0x433

0x52a: Pop(0)
0x52b: Push((int) 12)
0x52c: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0x52d: IF (Stack[-1] == 0) GOTO 0x52f; Pop(1)

0x52e: Stack[-1] = (bool) 1
0x52f: IF (Stack[-1] == 0) GOTO 0x532; Pop(1)

0x530: Stack[-2] = (bool) 1
0x531: Return(); Pop(0)

0x532: Stack[-2] = (bool) 0
0x533: Return(); Pop(0)

0x534: PushEmpty(object, object, object, object)
0x535: @ GetMainOutdoorScene(Stack[-2])
0x536: Pop(0)
0x537: Pop(0); Push((bool) Stack[-2] == 0)
0x538: IF (Stack[-1] == 0) GOTO 0x53f; Pop(1)

0x539: Push("Can't find main outdoor scene")
0x53a: @ Trace(Stack[-1])
0x53b: Pop(1)
0x53c: Stack[-1] = 0
0x53d: Stack[-5] = Stack[-1]
0x53e: Return(); Pop(4)

0x53f: @@ GetMap(Stack[-1])
0x540: Pop(0)
0x541: Stack[-5] = Stack[-1]
0x542: Return(); Pop(4)

0x543: Stack[-1] = 0
0x544: Stack[-2] = 0
0x545: PushEmpty(cvector, cvector, object, bool, cvector, cvector, object, bool)
0x546: @ GetMainOutdoorScene(Stack[-2])
0x547: Pop(0)
0x548: Pop(0); Push((bool) Stack[-2] == 0)
0x549: IF (Stack[-1] == 0) GOTO 0x54e; Pop(1)

0x54a: Push("Can't find main outdoor scene")
0x54b: @ Trace(Stack[-1])
0x54c: Pop(1)
0x54d: Return(); Pop(8)

0x54e: @@ GetLocator(Stack[-10], Stack[-1], Stack[-4], Stack[-3])
0x54f: Pop(0)
0x550: Pop(0); Push((bool) Stack[-1] == 0)
0x551: IF (Stack[-1] == 0) GOTO 0x558; Pop(1)

0x552: Push("Warning: outdoor scene locator ")
0x553: Pop(1); Push(Stack[-1] + Stack[-11]);
0x554: Push(" doesnt exist")
0x555: Pop(2); Push(Stack[-2] + Stack[-1]);
0x556: @ Trace(Stack[-1])
0x557: Pop(1)
0x558: @@ GetMap(Stack[-11])
0x559: Pop(0)
0x55a: Pop(0); Push((bool) Stack[-11] == 0)
0x55b: IF (Stack[-1] == 0) GOTO 0x560; Pop(1)

0x55c: Push("Can't find map")
0x55d: @ Trace(Stack[-1])
0x55e: Pop(1)
0x55f: Return(); Pop(8)

0x560: Push(CvectorIndex(Stack[-4], 0))
0x561: Push(CvectorIndex(Stack[-5], 2))
0x562: @@ SetMapParams(Stack[-2], Stack[-1], Stack[-11])
0x563: Pop(2)
0x564: Return(); Pop(8)

0x565: Stack[-2] = 0
0x566: PushEmpty(int, int)
0x567: Push("branch")
0x568: @ GetVariable(Stack[-1], Stack[-2])
0x569: Pop(1)
0x56a: Push((int) 0)
0x56b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x56c: IF (Stack[-1] == 0) GOTO 0x570; Pop(1)

0x56d: Stack[-3] = (int) 1
0x56e: Return(); Pop(2)

0x56f: GOTO 0x575

0x570: Push((int) 1)
0x571: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x572: IF (Stack[-1] == 0) GOTO 0x575; Pop(1)

0x573: Stack[-3] = (int) 2
0x574: Return(); Pop(2)

0x575: Stack[-3] = (int) 3
0x576: Return(); Pop(2)

