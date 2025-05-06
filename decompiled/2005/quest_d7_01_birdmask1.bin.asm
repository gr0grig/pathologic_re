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
	GetPosition
	GetEyesHeight
	head
	Can't find lsh animation : 
	add
	GetItemID
	Category
	AddItem
	DropItems
	SetItemName
	playsound
	giveitem
	ood7UBirdmask1
	ureport is given
	d7q01_ureport
	quest_d7_01
	kill_player
	d7q01
	GetItemCount
	bird_mask
	bird_balahon
	GetItem
	IsItemSelected
	branch
	ui/NPC_bmask.png
	ui/NPC_bmask_b.png

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
	lshHasAnimation (2 args)
	lshGetAnimTimes (3 args)
	lshPlayAnimation (3 args)
	Trace (1 args)
	lshStopSpeech (0 args)
	GetVariable (2 args)
	CreateIntVector (1 args)
	SendWorldWndMessage (2 args)
	GetInvItemProperty (3 args)
	CreateInvItem (1 args)
	FindActor (2 args)
	Trigger (2 args)
	TriggerWorld (2 args)
	SetVariable (2 args)
	GetInvItemByName (2 args)

RunOp = 0x26b
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xe8 Vars = (int, int)
	GTASK_2  Params = 0
		EVENT_0 Op = 0x26f Vars = (object)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 130.0
0x5: Call2 0x277

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x3c8

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x3c6

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x3ca

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x3cc

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x3b5

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
0x41: Call2 0x2bb

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
0x4f: IF (Stack[-1] == 0) GOTO 0xb4; Pop(1)

0x50: PushEmpty(bool)
0x51: Stack[-1] = (bool) 0
0x52: PushEmpty(bool, object)
0x53: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x54: Call2 0x363

0x55: Pop(1)
0x56: IF (Stack[-1] == 0) GOTO 0x5d; Pop(1)

0x57: PushEmpty(bool, object)
0x58: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x59: Call2 0x379

0x5a: Pop(1)
0x5b: IF (Stack[-1] == 0) GOTO 0x5d; Pop(1)

0x5c: Stack[-1] = (bool) 1
0x5d: IF (Stack[-1] == 0) GOTO 0x6d; Pop(1)

0x5e: PushEmpty(string)
0x5f: Stack[-1] = "Neutral"
0x60: Call2 0xd2

0x61: Pop(1)
0x62: Push((int) 512188)
0x63: @@ SetMessage(Stack[-1])
0x64: Pop(1)
0x65: @@ ClearReplies()
0x66: Pop(0)
0x67: Push((int) 512189)
0x68: Push((int) 14396)
0x69: Push((int) 13344)
0x6a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6b: Pop(3)
0x6c: GOTO 0xb4

0x6d: PushEmpty(bool)
0x6e: Stack[-1] = (bool) 0
0x6f: PushEmpty(bool, object)
0x70: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x71: Call2 0x36f

0x72: Pop(1)
0x73: IF (Stack[-1] == 0) GOTO 0x7a; Pop(1)

0x74: PushEmpty(bool, object)
0x75: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x76: Call2 0x357

0x77: Pop(1)
0x78: IF (Stack[-1] == 0) GOTO 0x7a; Pop(1)

0x79: Stack[-1] = (bool) 1
0x7a: IF (Stack[-1] == 0) GOTO 0x94; Pop(1)

0x7b: PushEmpty(string)
0x7c: Stack[-1] = "Neutral"
0x7d: Call2 0xd2

0x7e: Pop(1)
0x7f: Push((int) 513197)
0x80: @@ SetMessage(Stack[-1])
0x81: Pop(1)
0x82: @@ ClearReplies()
0x83: Pop(0)
0x84: Push((int) 513198)
0x85: Push((int) 14433)
0x86: Push((int) 14421)
0x87: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x88: Pop(3)
0x89: Push((int) 513199)
0x8a: Push((int) 14428)
0x8b: Push((int) 14422)
0x8c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8d: Pop(3)
0x8e: Push((int) 513200)
0x8f: Push((int) 14424)
0x90: Push((int) 14423)
0x91: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x92: Pop(3)
0x93: GOTO 0xb4

0x94: PushEmpty(bool, object)
0x95: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x96: Call2 0x357

0x97: Pop(1)
0x98: IF (Stack[-1] == 0) GOTO 0xb2; Pop(1)

0x99: PushEmpty(string)
0x9a: Stack[-1] = "Neutral"
0x9b: Call2 0xd2

0x9c: Pop(1)
0x9d: Push((int) 513175)
0x9e: @@ SetMessage(Stack[-1])
0x9f: Pop(1)
0xa0: @@ ClearReplies()
0xa1: Pop(0)
0xa2: Push((int) 513177)
0xa3: Push((int) 14398)
0xa4: Push((int) 14397)
0xa5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa6: Pop(3)
0xa7: Push((int) 513195)
0xa8: Push((int) 14411)
0xa9: Push((int) 14417)
0xaa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xab: Pop(3)
0xac: Push((int) 513193)
0xad: Push((int) -1)
0xae: Push((int) 14415)
0xaf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb0: Pop(3)
0xb1: GOTO 0xb4

0xb2: Return(); Pop(0)

0xb3: GOTO 0x4e

0xb4: PushEmpty(bool)
0xb5: Call2 0x3ce

0xb6: Pop(0)
0xb7: IF (Stack[-1] == 0) GOTO 0xc3; Pop(1)

0xb8: @ lshWaitForAnimEnd()
0xb9: Pop(0)
0xba: Push( Stack[3 + Tasks[-1].StackPointer] )
0xbb: IF (Stack[-1] == 0) GOTO 0xbd; Pop(1)

0xbc: GOTO 0xc2

0xbd: PushEmpty(string)
0xbe: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xbf: Call2 0x2cc

0xc0: Pop(1)
0xc1: GOTO 0xb8

0xc2: GOTO 0xd1

0xc3: Push("all")
0xc4: Push("idle")
0xc5: @ PlayAnimation(Stack[-2], Stack[-1])
0xc6: Pop(2)
0xc7: @ WaitForAnimEnd()
0xc8: Pop(0)
0xc9: Push( Stack[3 + Tasks[-1].StackPointer] )
0xca: IF (Stack[-1] == 0) GOTO 0xcc; Pop(1)

0xcb: GOTO 0xd1

0xcc: Push("all")
0xcd: Push("idle")
0xce: @ PlayAnimation(Stack[-2], Stack[-1])
0xcf: Pop(2)
0xd0: GOTO 0xc7

0xd1: Return(); Pop(0)

0xd2: PushEmpty()
0xd3: PushEmpty(bool)
0xd4: Call2 0x3ce

0xd5: Pop(0)
0xd6: Pop(1); Push((bool) Stack[-1] == 0)
0xd7: IF (Stack[-1] == 0) GOTO 0xd9; Pop(1)

0xd8: Return(); Pop(0)

0xd9: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xda: IF (Stack[-1] == 0) GOTO 0xdc; Pop(1)

0xdb: Return(); Pop(0)

0xdc: PushEmpty(string, bool)
0xdd: Stack[-2] = Stack[-3]
0xde: Push("")
0xdf: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xe0: IF (Stack[-1] == 0) GOTO 0xe3; Pop(1)

0xe1: Stack[-1] = (bool) 0
0xe2: GOTO 0xe4

0xe3: Stack[-1] = (bool) 1
0xe4: Call2 0x2dc

0xe5: Pop(2)
0xe6: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xe7: Return(); Pop(0)

0xe8: PushEmpty()
0xe9: Push((int) 1)
0xea: IF (Stack[-1] == 0) GOTO 0x26a; Pop(1)

0xeb: PushEmpty()
0xec: Call2 0x2eb

0xed: Pop(0)
0xee: Push((int) 14419)
0xef: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xf0: IF (Stack[-1] == 0) GOTO 0x100; Pop(1)

0xf1: PushEmpty(object, object)
0xf2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf4: Call2 0x33f

0xf5: Pop(2)
0xf6: PushEmpty(object, object)
0xf7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf9: Call2 0x345

0xfa: Pop(2)
0xfb: PushEmpty(object, object)
0xfc: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xfd: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xfe: Call2 0x339

0xff: Pop(2)
0x100: Push((int) 14487)
0x101: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x102: IF (Stack[-1] == 0) GOTO 0x108; Pop(1)

0x103: PushEmpty(object, object)
0x104: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x105: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x106: Call2 0x350

0x107: Pop(2)
0x108: Push((int) 14432)
0x109: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x10a: IF (Stack[-1] == 0) GOTO 0x110; Pop(1)

0x10b: PushEmpty(object, object)
0x10c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x10d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x10e: Call2 0x350

0x10f: Pop(2)
0x110: Push((int) 14414)
0x111: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x112: IF (Stack[-1] == 0) GOTO 0x118; Pop(1)

0x113: PushEmpty(object, object)
0x114: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x115: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x116: Call2 0x350

0x117: Pop(2)
0x118: Push((int) 13343)
0x119: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x11a: IF (Stack[-1] == 0) GOTO 0x17d; Pop(1)

0x11b: PushEmpty(bool)
0x11c: Stack[-1] = (bool) 0
0x11d: PushEmpty(bool, object)
0x11e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x11f: Call2 0x363

0x120: Pop(1)
0x121: IF (Stack[-1] == 0) GOTO 0x128; Pop(1)

0x122: PushEmpty(bool, object)
0x123: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x124: Call2 0x379

0x125: Pop(1)
0x126: IF (Stack[-1] == 0) GOTO 0x128; Pop(1)

0x127: Stack[-1] = (bool) 1
0x128: IF (Stack[-1] == 0) GOTO 0x138; Pop(1)

0x129: PushEmpty(string)
0x12a: Stack[-1] = "Neutral"
0x12b: Call2 0xd2

0x12c: Pop(1)
0x12d: Push((int) 512188)
0x12e: @@ SetMessage(Stack[-1])
0x12f: Pop(1)
0x130: @@ ClearReplies()
0x131: Pop(0)
0x132: Push((int) 512189)
0x133: Push((int) 14396)
0x134: Push((int) 13344)
0x135: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x136: Pop(3)
0x137: Return(); Pop(0)

0x138: PushEmpty(bool)
0x139: Stack[-1] = (bool) 0
0x13a: PushEmpty(bool, object)
0x13b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x13c: Call2 0x36f

0x13d: Pop(1)
0x13e: IF (Stack[-1] == 0) GOTO 0x145; Pop(1)

0x13f: PushEmpty(bool, object)
0x140: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x141: Call2 0x357

0x142: Pop(1)
0x143: IF (Stack[-1] == 0) GOTO 0x145; Pop(1)

0x144: Stack[-1] = (bool) 1
0x145: IF (Stack[-1] == 0) GOTO 0x15f; Pop(1)

0x146: PushEmpty(string)
0x147: Stack[-1] = "Neutral"
0x148: Call2 0xd2

0x149: Pop(1)
0x14a: Push((int) 513197)
0x14b: @@ SetMessage(Stack[-1])
0x14c: Pop(1)
0x14d: @@ ClearReplies()
0x14e: Pop(0)
0x14f: Push((int) 513198)
0x150: Push((int) 14433)
0x151: Push((int) 14421)
0x152: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x153: Pop(3)
0x154: Push((int) 513199)
0x155: Push((int) 14428)
0x156: Push((int) 14422)
0x157: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x158: Pop(3)
0x159: Push((int) 513200)
0x15a: Push((int) 14424)
0x15b: Push((int) 14423)
0x15c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x15d: Pop(3)
0x15e: Return(); Pop(0)

0x15f: PushEmpty(bool, object)
0x160: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x161: Call2 0x357

0x162: Pop(1)
0x163: IF (Stack[-1] == 0) GOTO 0x17d; Pop(1)

0x164: PushEmpty(string)
0x165: Stack[-1] = "Neutral"
0x166: Call2 0xd2

0x167: Pop(1)
0x168: Push((int) 513175)
0x169: @@ SetMessage(Stack[-1])
0x16a: Pop(1)
0x16b: @@ ClearReplies()
0x16c: Pop(0)
0x16d: Push((int) 513177)
0x16e: Push((int) 14398)
0x16f: Push((int) 14397)
0x170: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x171: Pop(3)
0x172: Push((int) 513195)
0x173: Push((int) 14411)
0x174: Push((int) 14417)
0x175: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x176: Pop(3)
0x177: Push((int) 513193)
0x178: Push((int) -1)
0x179: Push((int) 14415)
0x17a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x17b: Pop(3)
0x17c: Return(); Pop(0)

0x17d: Push((int) 14398)
0x17e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x17f: IF (Stack[-1] == 0) GOTO 0x199; Pop(1)

0x180: PushEmpty(string)
0x181: Stack[-1] = "Neutral"
0x182: Call2 0xd2

0x183: Pop(1)
0x184: Push((int) 513178)
0x185: @@ SetMessage(Stack[-1])
0x186: Pop(1)
0x187: @@ ClearReplies()
0x188: Pop(0)
0x189: Push((int) 513179)
0x18a: Push((int) 14402)
0x18b: Push((int) 14399)
0x18c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x18d: Pop(3)
0x18e: Push((int) 513180)
0x18f: Push((int) 14403)
0x190: Push((int) 14400)
0x191: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x192: Pop(3)
0x193: Push((int) 513181)
0x194: Push((int) 14404)
0x195: Push((int) 14401)
0x196: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x197: Pop(3)
0x198: Return(); Pop(0)

0x199: Push((int) 14404)
0x19a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x19b: IF (Stack[-1] == 0) GOTO 0x1b0; Pop(1)

0x19c: PushEmpty(string)
0x19d: Stack[-1] = "Neutral"
0x19e: Call2 0xd2

0x19f: Pop(1)
0x1a0: Push((int) 513184)
0x1a1: @@ SetMessage(Stack[-1])
0x1a2: Pop(1)
0x1a3: @@ ClearReplies()
0x1a4: Pop(0)
0x1a5: Push((int) 513189)
0x1a6: Push((int) -1)
0x1a7: Push((int) 14409)
0x1a8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1a9: Pop(3)
0x1aa: Push((int) 513190)
0x1ab: Push((int) 14411)
0x1ac: Push((int) 14410)
0x1ad: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ae: Pop(3)
0x1af: Return(); Pop(0)

0x1b0: Push((int) 14403)
0x1b1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1b2: IF (Stack[-1] == 0) GOTO 0x1c7; Pop(1)

0x1b3: PushEmpty(string)
0x1b4: Stack[-1] = "Neutral"
0x1b5: Call2 0xd2

0x1b6: Pop(1)
0x1b7: Push((int) 513183)
0x1b8: @@ SetMessage(Stack[-1])
0x1b9: Pop(1)
0x1ba: @@ ClearReplies()
0x1bb: Pop(0)
0x1bc: Push((int) 513187)
0x1bd: Push((int) -1)
0x1be: Push((int) 14407)
0x1bf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1c0: Pop(3)
0x1c1: Push((int) 513188)
0x1c2: Push((int) 14411)
0x1c3: Push((int) 14408)
0x1c4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1c5: Pop(3)
0x1c6: Return(); Pop(0)

0x1c7: Push((int) 14402)
0x1c8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1c9: IF (Stack[-1] == 0) GOTO 0x1de; Pop(1)

0x1ca: PushEmpty(string)
0x1cb: Stack[-1] = "Neutral"
0x1cc: Call2 0xd2

0x1cd: Pop(1)
0x1ce: Push((int) 513182)
0x1cf: @@ SetMessage(Stack[-1])
0x1d0: Pop(1)
0x1d1: @@ ClearReplies()
0x1d2: Pop(0)
0x1d3: Push((int) 513185)
0x1d4: Push((int) 14411)
0x1d5: Push((int) 14405)
0x1d6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1d7: Pop(3)
0x1d8: Push((int) 513186)
0x1d9: Push((int) -1)
0x1da: Push((int) 14406)
0x1db: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1dc: Pop(3)
0x1dd: Return(); Pop(0)

0x1de: Push((int) 14411)
0x1df: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1e0: IF (Stack[-1] == 0) GOTO 0x1f0; Pop(1)

0x1e1: PushEmpty(string)
0x1e2: Stack[-1] = "Neutral"
0x1e3: Call2 0xd2

0x1e4: Pop(1)
0x1e5: Push((int) 513191)
0x1e6: @@ SetMessage(Stack[-1])
0x1e7: Pop(1)
0x1e8: @@ ClearReplies()
0x1e9: Pop(0)
0x1ea: Push((int) 513192)
0x1eb: Push((int) -1)
0x1ec: Push((int) 14414)
0x1ed: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ee: Pop(3)
0x1ef: Return(); Pop(0)

0x1f0: Push((int) 14424)
0x1f1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1f2: IF (Stack[-1] == 0) GOTO 0x20c; Pop(1)

0x1f3: PushEmpty(string)
0x1f4: Stack[-1] = "Neutral"
0x1f5: Call2 0xd2

0x1f6: Pop(1)
0x1f7: Push((int) 513201)
0x1f8: @@ SetMessage(Stack[-1])
0x1f9: Pop(1)
0x1fa: @@ ClearReplies()
0x1fb: Pop(0)
0x1fc: Push((int) 513202)
0x1fd: Push((int) 14429)
0x1fe: Push((int) 14425)
0x1ff: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x200: Pop(3)
0x201: Push((int) 513203)
0x202: Push((int) 14433)
0x203: Push((int) 14426)
0x204: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x205: Pop(3)
0x206: Push((int) 513204)
0x207: Push((int) 14428)
0x208: Push((int) 14427)
0x209: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x20a: Pop(3)
0x20b: Return(); Pop(0)

0x20c: Push((int) 14429)
0x20d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x20e: IF (Stack[-1] == 0) GOTO 0x21e; Pop(1)

0x20f: PushEmpty(string)
0x210: Stack[-1] = "Neutral"
0x211: Call2 0xd2

0x212: Pop(1)
0x213: Push((int) 513206)
0x214: @@ SetMessage(Stack[-1])
0x215: Pop(1)
0x216: @@ ClearReplies()
0x217: Pop(0)
0x218: Push((int) 513207)
0x219: Push((int) -1)
0x21a: Push((int) 14430)
0x21b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x21c: Pop(3)
0x21d: Return(); Pop(0)

0x21e: Push((int) 14428)
0x21f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x220: IF (Stack[-1] == 0) GOTO 0x235; Pop(1)

0x221: PushEmpty(string)
0x222: Stack[-1] = "Neutral"
0x223: Call2 0xd2

0x224: Pop(1)
0x225: Push((int) 513205)
0x226: @@ SetMessage(Stack[-1])
0x227: Pop(1)
0x228: @@ ClearReplies()
0x229: Pop(0)
0x22a: Push((int) 513209)
0x22b: Push((int) -1)
0x22c: Push((int) 14432)
0x22d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x22e: Pop(3)
0x22f: Push((int) 541590)
0x230: Push((int) -1)
0x231: Push((int) 43759)
0x232: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x233: Pop(3)
0x234: Return(); Pop(0)

0x235: Push((int) 14433)
0x236: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x237: IF (Stack[-1] == 0) GOTO 0x24c; Pop(1)

0x238: PushEmpty(string)
0x239: Stack[-1] = "Neutral"
0x23a: Call2 0xd2

0x23b: Pop(1)
0x23c: Push((int) 513210)
0x23d: @@ SetMessage(Stack[-1])
0x23e: Pop(1)
0x23f: @@ ClearReplies()
0x240: Pop(0)
0x241: Push((int) 513211)
0x242: Push((int) -1)
0x243: Push((int) 14434)
0x244: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x245: Pop(3)
0x246: Push((int) 513260)
0x247: Push((int) -1)
0x248: Push((int) 14487)
0x249: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x24a: Pop(3)
0x24b: Return(); Pop(0)

0x24c: Push((int) 14396)
0x24d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x24e: IF (Stack[-1] == 0) GOTO 0x25e; Pop(1)

0x24f: PushEmpty(string)
0x250: Stack[-1] = "Neutral"
0x251: Call2 0xd2

0x252: Pop(1)
0x253: Push((int) 513176)
0x254: @@ SetMessage(Stack[-1])
0x255: Pop(1)
0x256: @@ ClearReplies()
0x257: Pop(0)
0x258: Push((int) 513196)
0x259: Push((int) -1)
0x25a: Push((int) 14419)
0x25b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x25c: Pop(3)
0x25d: Return(); Pop(0)

0x25e: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x25f: PushEmpty(bool)
0x260: Call2 0x3ce

0x261: Pop(0)
0x262: IF (Stack[-1] == 0) GOTO 0x266; Pop(1)

0x263: @ lshStopAnimation()
0x264: Pop(0)
0x265: GOTO 0x268

0x266: @ StopAnimation()
0x267: Pop(0)
0x268: Return(); Pop(0)

0x269: GOTO 0xe9

0x26a: Return(); Pop(0)

0x26b: @ Hold()
0x26c: Pop(0)
0x26d: GOTO 0x26b

0x26e: Return(); Pop(0)

0x26f: PushEmpty()
0x270: PushEmpty(int, object)
0x271: Stack[-1] = Stack[-3]
0x272: Push(-2, 1); TaskCall(0)
0x273: Call2 0x0

0x274: Pop(-2, 1); TaskReturn
0x275: Pop(2)
0x276: Return(); Pop(0)

0x277: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x278: @@ GetPosition(Stack[-8])
0x279: Pop(0)
0x27a: @@ GetEyesHeight(Stack[-9])
0x27b: Pop(0)
0x27c: Push(CvectorIndex(Stack[-8], 1))
0x27d: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x27e: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x27f: @ GetPosition(Stack[-7])
0x280: Pop(0)
0x281: @ GetEyesHeight(Stack[-9])
0x282: Pop(0)
0x283: Push(CvectorIndex(Stack[-7], 1))
0x284: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x285: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x286: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x287: Push(CvectorIndex(Stack[-6], 1))
0x288: Stack[-1] = (int) 0
0x289: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x28a: Pop(0); Push(Stack[-6] | Stack[-6]);
0x28b: Pop(1); Push(Sqrt(Stack[-1]))
0x28c: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x28d: Stack[-5] = -Stack[-6]; Pop(0);
0x28e: Pop(0); Push(Stack[-6] * Stack[-19]);
0x28f: PushEmpty(cvector, cvector)
0x290: Push(CVector(0.0, 1.0, 0.0))
0x291: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x292: Call2 0x2f2

0x293: Pop(1)
0x294: Push((int) 25)
0x295: Pop(2); Push(Stack[-2] * Stack[-1]);
0x296: Pop(2); Push(Stack[-2] + Stack[-1]);
0x297: Push(CVector(0.0, 10.0, 0.0))
0x298: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x299: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x29a: @ IsOverrideActive(Stack[-2])
0x29b: Pop(0)
0x29c: Push(Stack[-2])
0x29d: IF (Stack[-1] == 0) GOTO 0x2a0; Pop(1)

0x29e: Stack[-21] = (bool) 0
0x29f: Return(); Pop(18)

0x2a0: @ StopWorld()
0x2a1: Pop(0)
0x2a2: @ CameraTransit(Stack[-3], Stack[-5])
0x2a3: Pop(0)
0x2a4: Push(CvectorIndex(Stack[-4], 0))
0x2a5: Push(CvectorIndex(Stack[-5], 2))
0x2a6: @ Rotate(Stack[-2], Stack[-1])
0x2a7: Pop(2)
0x2a8: PushEmpty(bool)
0x2a9: Call2 0x3ce

0x2aa: Pop(0)
0x2ab: IF (Stack[-1] == 0) GOTO 0x2ad; Pop(1)

0x2ac: GOTO 0x2b5

0x2ad: Push("head")
0x2ae: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x2af: Pop(1)
0x2b0: Push(Stack[-1])
0x2b1: IF (Stack[-1] == 0) GOTO 0x2b5; Pop(1)

0x2b2: Push("head")
0x2b3: @ LookAsyncCamera(Stack[-1])
0x2b4: Pop(1)
0x2b5: @ CameraWaitForPlayFinish()
0x2b6: Pop(0)
0x2b7: @ ResumeWorld()
0x2b8: Pop(0)
0x2b9: Stack[-21] = (bool) 1
0x2ba: Return(); Pop(18)

0x2bb: PushEmpty(bool, bool)
0x2bc: @ CameraSwitchToNormal()
0x2bd: Pop(0)
0x2be: PushEmpty(bool)
0x2bf: Call2 0x3ce

0x2c0: Pop(0)
0x2c1: IF (Stack[-1] == 0) GOTO 0x2c3; Pop(1)

0x2c2: GOTO 0x2cb

0x2c3: Push("head")
0x2c4: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x2c5: Pop(1)
0x2c6: Push(Stack[-1])
0x2c7: IF (Stack[-1] == 0) GOTO 0x2cb; Pop(1)

0x2c8: Push("head")
0x2c9: @ UnlookAsync(Stack[-1])
0x2ca: Pop(1)
0x2cb: Return(); Pop(2)

0x2cc: PushEmpty(bool, float, float, bool, float, float)
0x2cd: @ lshHasAnimation(Stack[-3], Stack[-7])
0x2ce: Pop(0)
0x2cf: Push(Stack[-3])
0x2d0: IF (Stack[-1] == 0) GOTO 0x2d7; Pop(1)

0x2d1: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x2d2: Pop(0)
0x2d3: Push((bool) 0)
0x2d4: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x2d5: Pop(1)
0x2d6: GOTO 0x2db

0x2d7: Push("Can't find lsh animation : ")
0x2d8: Pop(1); Push(Stack[-1] + Stack[-8]);
0x2d9: @ Trace(Stack[-1])
0x2da: Pop(1)
0x2db: Return(); Pop(6)

0x2dc: PushEmpty(bool, float, float, bool, float, float)
0x2dd: @ lshHasAnimation(Stack[-3], Stack[-8])
0x2de: Pop(0)
0x2df: Push(Stack[-3])
0x2e0: IF (Stack[-1] == 0) GOTO 0x2e6; Pop(1)

0x2e1: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x2e2: Pop(0)
0x2e3: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x2e4: Pop(0)
0x2e5: GOTO 0x2ea

0x2e6: Push("Can't find lsh animation : ")
0x2e7: Pop(1); Push(Stack[-1] + Stack[-9]);
0x2e8: @ Trace(Stack[-1])
0x2e9: Pop(1)
0x2ea: Return(); Pop(6)

0x2eb: PushEmpty(bool)
0x2ec: Call2 0x3ce

0x2ed: Pop(0)
0x2ee: IF (Stack[-1] == 0) GOTO 0x2f1; Pop(1)

0x2ef: @ lshStopSpeech()
0x2f0: Pop(0)
0x2f1: Return(); Pop(0)

0x2f2: PushEmpty(float, float)
0x2f3: Pop(0); Push(Stack[-3] | Stack[-3]);
0x2f4: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x2f5: Push((float)0.0)
0x2f6: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x2f7: IF (Stack[-1] == 0) GOTO 0x2fa; Pop(1)

0x2f8: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x2f9: Return(); Pop(2)

0x2fa: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x2fb: Return(); Pop(2)

0x2fc: PushEmpty(int, int)
0x2fd: @ GetVariable(Stack[-3], Stack[-1])
0x2fe: Pop(0)
0x2ff: Stack[-4] = Stack[-1]
0x300: Return(); Pop(2)

0x301: PushEmpty(object, object)
0x302: @ CreateIntVector(Stack[-1])
0x303: Pop(0)
0x304: @@ add(Stack[-4])
0x305: Pop(0)
0x306: @@ add(Stack[-3])
0x307: Pop(0)
0x308: Push((int) 3)
0x309: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x30a: Pop(1)
0x30b: Return(); Pop(2)

0x30c: Stack[-1] = 0
0x30d: PushEmpty(int, int, bool, int, int, bool)
0x30e: @@ GetItemID(Stack[-3])
0x30f: Pop(0)
0x310: Push("Category")
0x311: @ GetInvItemProperty(Stack[-3], Stack[-4], Stack[-1])
0x312: Pop(1)
0x313: @@ AddItem(Stack[-1], Stack[-8], Stack[-2], Stack[-7])
0x314: Pop(0)
0x315: Pop(0); Push((bool) Stack[-1] == 0)
0x316: IF (Stack[-1] == 0) GOTO 0x31a; Pop(1)

0x317: @@ DropItems(Stack[-8], Stack[-7])
0x318: Pop(0)
0x319: GOTO 0x31f

0x31a: PushEmpty(int, int)
0x31b: Stack[-2] = Stack[-5]
0x31c: Stack[-1] = Stack[-9]
0x31d: Call2 0x301

0x31e: Pop(2)
0x31f: Return(); Pop(6)

0x320: PushEmpty(object, object)
0x321: @ CreateInvItem(Stack[-1])
0x322: Pop(0)
0x323: @@ SetItemName(Stack[-4])
0x324: Pop(0)
0x325: PushEmpty(object, object, int)
0x326: Stack[-3] = Stack[-8]
0x327: Stack[-2] = Stack[-4]
0x328: Stack[-1] = Stack[-6]
0x329: Call2 0x30d

0x32a: Pop(3)
0x32b: Return(); Pop(2)

0x32c: Stack[-1] = 0
0x32d: PushEmpty(object, object)
0x32e: @ FindActor(Stack[-1], Stack[-4])
0x32f: Pop(0)
0x330: Pop(0); Push((bool) Stack[-1] == 0)
0x331: IF (Stack[-1] == 0) GOTO 0x334; Pop(1)

0x332: Stack[-5] = (bool) 0
0x333: Return(); Pop(2)

0x334: @ Trigger(Stack[-1], Stack[-3])
0x335: Pop(0)
0x336: Stack[-5] = (bool) 1
0x337: Return(); Pop(2)

0x338: Stack[-1] = 0
0x339: PushEmpty()
0x33a: Push("playsound")
0x33b: Push("giveitem")
0x33c: @ TriggerWorld(Stack[-2], Stack[-1])
0x33d: Pop(2)
0x33e: Return(); Pop(0)

0x33f: PushEmpty()
0x340: Push("ood7UBirdmask1")
0x341: Push((int) 1)
0x342: @ SetVariable(Stack[-2], Stack[-1])
0x343: Pop(2)
0x344: Return(); Pop(0)

0x345: PushEmpty()
0x346: Push("ureport is given")
0x347: @ Trace(Stack[-1])
0x348: Pop(1)
0x349: PushEmpty(object, string, int)
0x34a: Stack[-3] = Stack[-5]
0x34b: Stack[-2] = "d7q01_ureport"
0x34c: Stack[-1] = (int) 1
0x34d: Call2 0x320

0x34e: Pop(3)
0x34f: Return(); Pop(0)

0x350: PushEmpty()
0x351: PushEmpty(bool, string, string)
0x352: Stack[-2] = "quest_d7_01"
0x353: Stack[-1] = "kill_player"
0x354: Call2 0x32d

0x355: Pop(3)
0x356: Return(); Pop(0)

0x357: PushEmpty()
0x358: PushEmpty(int, string)
0x359: Stack[-1] = "d7q01"
0x35a: Call2 0x2fc

0x35b: Pop(1)
0x35c: Push((int) 2)
0x35d: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x35e: IF (Stack[-1] == 0) GOTO 0x361; Pop(1)

0x35f: Stack[-2] = (bool) 1
0x360: Return(); Pop(0)

0x361: Stack[-2] = (bool) 0
0x362: Return(); Pop(0)

0x363: PushEmpty()
0x364: PushEmpty(int, string)
0x365: Stack[-1] = "d7q01"
0x366: Call2 0x2fc

0x367: Pop(1)
0x368: Push((int) 1)
0x369: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x36a: IF (Stack[-1] == 0) GOTO 0x36d; Pop(1)

0x36b: Stack[-2] = (bool) 1
0x36c: Return(); Pop(0)

0x36d: Stack[-2] = (bool) 0
0x36e: Return(); Pop(0)

0x36f: PushEmpty()
0x370: PushEmpty(bool, object)
0x371: Stack[-1] = Stack[-3]
0x372: Call2 0x385

0x373: Pop(1)
0x374: IF (Stack[-1] == 0) GOTO 0x377; Pop(1)

0x375: Stack[-2] = (bool) 1
0x376: Return(); Pop(0)

0x377: Stack[-2] = (bool) 0
0x378: Return(); Pop(0)

0x379: PushEmpty()
0x37a: PushEmpty(int, string)
0x37b: Stack[-1] = "ood7UBirdmask1"
0x37c: Call2 0x2fc

0x37d: Pop(1)
0x37e: Push((int) 0)
0x37f: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x380: IF (Stack[-1] == 0) GOTO 0x383; Pop(1)

0x381: Stack[-2] = (bool) 1
0x382: Return(); Pop(0)

0x383: Stack[-2] = (bool) 0
0x384: Return(); Pop(0)

0x385: PushEmpty(int, int, int, bool, bool, int, object, int, bool, bool, int, int, int, bool, bool, int, object, int, bool, bool)
0x386: Push((int) 1)
0x387: @@ GetItemCount(Stack[-11], Stack[-1])
0x388: Pop(1)
0x389: Push("bird_mask")
0x38a: @ GetInvItemByName(Stack[-10], Stack[-1])
0x38b: Pop(1)
0x38c: Push("bird_balahon")
0x38d: @ GetInvItemByName(Stack[-9], Stack[-1])
0x38e: Pop(1)
0x38f: Stack[-7] = (bool) 0
0x390: Stack[-6] = (bool) 0
0x391: Stack[-5] = (int) 0
0x392: Pop(0); Push((bool) Stack[-5] < Stack[-10])
0x393: IF (Stack[-1] == 0) GOTO 0x3ae; Pop(1)

0x394: Push((int) 1)
0x395: @@ GetItem(Stack[-5], Stack[-6], Stack[-1])
0x396: Pop(1)
0x397: @@ GetItemID(Stack[-3])
0x398: Pop(0)
0x399: Pop(0); Push((bool) Stack[-3] == Stack[-9])
0x39a: IF (Stack[-1] == 0) GOTO 0x3a2; Pop(1)

0x39b: Push((int) 1)
0x39c: @@ IsItemSelected(Stack[-3], Stack[-6], Stack[-1])
0x39d: Pop(1)
0x39e: Push(Stack[-2])
0x39f: IF (Stack[-1] == 0) GOTO 0x3a1; Pop(1)

0x3a0: Stack[-7] = (bool) 1
0x3a1: GOTO 0x3aa

0x3a2: Pop(0); Push((bool) Stack[-3] == Stack[-8])
0x3a3: IF (Stack[-1] == 0) GOTO 0x3aa; Pop(1)

0x3a4: Push((int) 1)
0x3a5: @@ IsItemSelected(Stack[-2], Stack[-6], Stack[-1])
0x3a6: Pop(1)
0x3a7: Push(Stack[-1])
0x3a8: IF (Stack[-1] == 0) GOTO 0x3aa; Pop(1)

0x3a9: Stack[-6] = (bool) 1
0x3aa: Stack[-4] = 0
0x3ab: Push((int) 1)
0x3ac: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x3ad: GOTO 0x392

0x3ae: Stack[-22] = (bool) 0
0x3af: Push(Stack[-7])
0x3b0: IF (Stack[-1] == 0) GOTO 0x3b4; Pop(1)

0x3b1: Push(Stack[-6])
0x3b2: IF (Stack[-1] == 0) GOTO 0x3b4; Pop(1)

0x3b3: Stack[-22] = (bool) 1
0x3b4: Return(); Pop(20)

0x3b5: PushEmpty(int, int)
0x3b6: Push("branch")
0x3b7: @ GetVariable(Stack[-1], Stack[-2])
0x3b8: Pop(1)
0x3b9: Push((int) 0)
0x3ba: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3bb: IF (Stack[-1] == 0) GOTO 0x3bf; Pop(1)

0x3bc: Stack[-3] = (int) 1
0x3bd: Return(); Pop(2)

0x3be: GOTO 0x3c4

0x3bf: Push((int) 1)
0x3c0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3c1: IF (Stack[-1] == 0) GOTO 0x3c4; Pop(1)

0x3c2: Stack[-3] = (int) 2
0x3c3: Return(); Pop(2)

0x3c4: Stack[-3] = (int) 3
0x3c5: Return(); Pop(2)

0x3c6: Stack[-1] = (int) 515571
0x3c7: Return(); Pop(0)

0x3c8: Stack[-1] = (int) 504029
0x3c9: Return(); Pop(0)

0x3ca: Stack[-1] = "ui/NPC_bmask.png"
0x3cb: Return(); Pop(0)

0x3cc: Stack[-1] = "ui/NPC_bmask_b.png"
0x3cd: Return(); Pop(0)

0x3ce: Stack[-1] = (bool) 0
0x3cf: Return(); Pop(0)

