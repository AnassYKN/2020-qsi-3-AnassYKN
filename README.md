# HUB ME

## Introduction

The Document Object Model (DOM) is a programming interface for HTML, XML and SVG documents. The DOM provides a representation of the document as a structured group of nodes and objects that have properties and methods. Nodes can also be associated with event handlers, and once this event is raised, event handlers are executed. Essentially, it links web pages to scripts or programming languages.

The DOM has two main problems when using it to build applications:

1. Lack of encapsulation:

- Angular or webcomponents use ** Shadow DOM **
- Vue or React use their own component model
- Slender uses a css scoping technique

2. Poor performance in modifying the node tree

- View as React use a Virtual DOM: The Virtual DOM is an abstraction of HTML DOM. It is lightweight and detached from browser specific implementation details. Since the DOM itself was already an abstraction, the virtual DOM is, in fact, an abstraction of an abstraction.

Web application development brings out the need for development practices. Here too, two approaches stand out:

1. The _templating_ approach, ie a separation of the management of the rendering (template) and the behavior of a component. This approach is that of HTML, Vue, Angular, Webcomponent or Svelte.

2. The _composable_ approach, ie the ability to compose the HMIs as functions from a unit which is the component. This approach is that of React from 2013.

