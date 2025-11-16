/*
 * state_machine.h
 *
 *  Created on: Jun 10, 2024
 *      Author: felix
 */

#ifndef INC_STATE_MACHINE_H_
#define INC_STATE_MACHINE_H_


#define START 0x01
#define STOP  0x02


/**
 * @brief Enumeration of possible events that can trigger state transitions
 */
typedef enum {
	EVENT_BUTTON,
	EVENT_MIN_CURRENT_EXCEEDED,
	EVENT_MIN_CURRENT_UNDERCUT,
	EVENT_BALANCING,
	EVENT_HARD_FAULT,
	EVENT_OVERCURRENT,
	EVENT_UNDERVOLT,
	EVENT_OVERVOLT,
	EVENT_MAX_EVENTS
} Event;


/**
 * @brief Enumeration of possible states for the state machine
 */
typedef enum {
	STATE_OFF,
	STATE_IDLE,
	STATE_ON,
	STATE_BALANCING,
	STATE_SLEEP,
	STATE_OVERCURRENT,
	STATE_MAX_STATES
} State;

static State current_state = STATE_IDLE;

/**
 * @brief Handle an event and transition to a new state if applicable
 * @param event The event that occurred
 */
void handle_event(Event event);


void state_machine_init();


#endif /* INC_STATE_MACHINE_H_ */
