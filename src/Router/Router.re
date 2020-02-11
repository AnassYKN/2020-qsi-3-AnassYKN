[@react.component]

let make = () => {
  let url = ReasonReactRouter.useUrl();

  switch (url.path) {
  | []                  => <HomePage/>;
| ["greetings"]         =>  <Greeting />;
  | ["blinking"]        =>  <BlinkingGreeting> {React.string("Hello!")} </BlinkingGreeting>;
| ["reducer"]           =>  <ReducerFromReactJSDocs />;
  | ["fetcheddog"]      => <FetchedDogPictures />; 
| ["fetchedrandomdog"]  => <FetchRandomDog />
  };
};
