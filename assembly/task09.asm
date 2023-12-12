.include "/sdcard/assignments/m328Pdef/m328Pdef.inc"

.equ x = 1
.equ y = 0

start:
     ldi r16, x
     ldi r17, y
     eor r16,r17
     ldi r18,0b00000001
     out DDRB, r18
     turn_on_led:
      ldi r20, 1
      cp r20,r16
      breq on_led
      ldi r20, 0
      cp r20, r16
      breq off_led
      on_led:
       out PORTB, r18
       rjmp end_loop
      off_led:
       ldi r22, 0b00000000	
       out PORTB, r22
       rjmp end_loop

end_loop:
 rjmp start
